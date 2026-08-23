#!/usr/bin/env python3

import re
import sys
from collections import defaultdict
from pathlib import Path

from audit_localized_tables import ParseTable

HAN = r'[\u3400-\u4dbf\u4e00-\u9fff]'
HAN_SPACE_HAN = re.compile(HAN + r' +' + HAN)
ASCII_HAN_HYBRID = re.compile(r'[A-Za-z][A-Za-z0-9]*-' + HAN)
HAN_ASCII_HYBRID = re.compile(HAN + r'-[A-Za-z][A-Za-z0-9]*')
DUPLICATE_HAN_PAREN = re.compile(r'([\u3400-\u9fff]{2,8})\s*[（(]\1[）)]')

# These fragments are ordinary prose for which the ZH corpus now has a
# Chinese rendering. If one reappears, it normally means a generator or
# translation cleanup regression. Identifiers/API names are intentionally
# excluded from this list.
FORBIDDEN_FRAGMENTS = (
    'Present 操作',
    '排队的 Present',
    'display adapter',
    'virtual disk',
    'virtual hard disk',
    'parent virtual hard disk',
    'publishing point',
    'byte stream',
    'source stream node',
    'guest OS memory address',
    'full backup',
    'incremental backup',
    'log file',
    'database file',
    'write lock',
    'column data type',
    'table cursor',
    'Token Store',
    'Precondition Failed',
    'Protected Environment',
    'CPU Set',
    'Windows Sockets',
    'data toggle',
    'split transaction',
    'Endpoint Companion Descriptor',
    'shadow chain',
    'scatter list',
    'bit stuffing',
    'pipeline context',
    'property bag',
    'reparse point',
    'retaining commit',
    'retaining abort',
    'token descriptor',
    'WFP callout',
    'Media Source',
    'Media Sink',
    'Media Session',
    'DynamicError',
    'governs class',
    'Leak Rate',
    'TC Rate',
    'Mailslot 文件系统',
    'pipe/FIFO',
    'Kernel 不对称',
    'Sqrt 函数',
    'Div 函数',
    'RegExp：',
    'ResourceManager 对象',
    'Storage Spaces',
    'Server Core',
    'Microsoft Internet 扩展',
    'Tablet PC 墨迹',
    'resource 元素',
    'rollover Ref',
    'version 标记',
    'COM+ Event System',
    'user 标记',
    'matches 字符串',
)

# Terms that are characteristic of zh-TW/HK technical localization even
# after character-set simplification.  The ZH corpus targets Mainland
# Simplified Chinese (zh-CN), so these spellings should be reviewed rather
# than silently accepted.  Some superficially similar terms are deliberately
# NOT banned: for example, Microsoft zh-CN itself uses "预设引用限制" for
# ERROR_DS_REFERRAL_LIMIT_EXCEEDED and "数据协定" for Data Contract.
FORBIDDEN_ZH_TW_TERMS = (
    '使用者',
    '相容',
    '影片',
    '程式',
    '伺服器',
    '硬碟',
    '光碟',
    '介面',
    '作业系统',
    '位元',
    '字元',
    '滑鼠',
    '列印',
    '物件',
    '元件',
    '函式',
    '字串',
    '布林',
    '快取',
    '登入',
    '登出',
    '效能',
    '解析度',
    '封包',
    '位址',
    '主控台',
    '工作列',
    '字型',
    '介面卡',
    '巨集',
    '存取',
    '记忆体',
    '档案',
    '讯息',
    '视窗',
    '萤幕',
    '印表机',
    '设定',
    '支援',
    '资料夹',
    '资料库',
    '程式码',
    '函式库',
    '阵列',
    '变数',
    '堆叠',
    '伫列',
    '执行绪',
    '执行个体',
    '列举',
    '画素',
    '视讯',
    '音讯',
    '资料流',
    '通讯协定',
    '栏位',
    '页首',
    '页尾',
    '储存',
    '剪贴簿',
    '贴上',
    '搜寻',
    '组态',
    '装置',
    '韧体',
    '连接埠',
    '软体',
    '硬体',
)

REQUIRED_CODE_FRAGMENTS = {
    'STATUS_SECRET_TOO_LONG': ('出口限制',),
    'STATUS_TOO_MANY_SECRETS': ('出口限制',),
    'STATUS_THREADPOOL_SET_EVENT_ON_COMPLETION_FAILED': ('SetEvent', '失败'),
    'STATUS_THREADPOOL_RELEASE_SEMAPHORE_ON_COMPLETION_FAILED': ('ReleaseSemaphore', '失败'),
    'STATUS_THREADPOOL_RELEASE_MUTEX_ON_COMPLETION_FAILED': ('ReleaseMutex', '失败'),
    'STATUS_THREADPOOL_FREE_LIBRARY_ON_COMPLETION_FAILED': ('FreeLibrary', '失败'),
    'VDS_E_VOLUME_SHRINK_FVE_RECOVERY': ('BitLocker', '恢复', '重试'),
    'VDS_E_VOLUME_EXTEND_FVE_RECOVERY': ('BitLocker', '恢复', '重试'),
    'FSRM_E_SECURE_PROPERTIES_NOT_SUPPORTED': ('Windows Server 2008 R2', 'Windows 7'),
    'STATUS_CANNOT_SWITCH_RUNLEVEL': ('服务', '拒绝', '停止', '重新启动'),
    'STATUS_LICENSE_QUOTA_EXCEEDED': ('连接', '上限', '无法再建立连接'),
    'STATUS_PWD_TOO_RECENT': ('密码', '频繁', '泄露', '管理员'),
    'SEC_E_CROSSREALM_DELEGATION_FAILURE': ('Kerberos', '受约束委派', '联系管理员'),
    'STATUS_CROSSREALM_DELEGATION_FAILURE': ('Kerberos', '受约束委派', '联系管理员'),
    'STATUS_DISK_REPAIR_REDIRECTED': ('联机', '脱机', '修复'),
    'ERROR_DISK_REPAIR_REDIRECTED': ('联机', '脱机', '修复'),
    'STATUS_DISK_REPAIR_DISABLED': ('NTFS', '自愈'),
    'ERROR_DISK_REPAIR_DISABLED': ('NTFS', '自愈'),
    'ERROR_DS_INCORRECT_ROLE_OWNER': ('操作主机角色', '所有者'),
    'STATUS_NDIS_ADAPTER_NOT_FOUND': ('网络接口',),
    'STATUS_NDIS_OPEN_FAILED': ('网络接口',),
    'STATUS_NDIS_ADAPTER_NOT_READY': ('网络接口',),
    'SEC_E_MAX_REFERRALS_EXCEEDED': ('引荐',),
    'STATUS_MAX_REFERRALS_EXCEEDED': ('引荐',),
    'SEC_E_KDC_UNABLE_TO_REFER': ('引荐',),
    'STATUS_KDC_UNABLE_TO_REFER': ('引荐',),
    'ERROR_VHD_DRIVE_FOOTER_MISSING': ('VHD 文件尾结构',),
    'ERROR_VHD_DRIVE_FOOTER_CHECKSUM_MISMATCH': ('VHD 文件尾结构',),
    'ERROR_VHD_DRIVE_FOOTER_CORRUPT': ('VHD 文件尾结构', '已损坏'),
    'STATUS_VHD_DRIVE_FOOTER_MISSING': ('VHD 文件尾结构',),
    'STATUS_VHD_DRIVE_FOOTER_CHECKSUM_MISMATCH': ('VHD 文件尾结构',),
    'STATUS_VHD_DRIVE_FOOTER_CORRUPT': ('VHD 文件尾结构', '已损坏'),
    'ERROR_VOLMGR_ALL_DISKS_FAILED': ('磁盘包', '故障'),
    'STATUS_VOLMGR_ALL_DISKS_FAILED': ('磁盘包', '故障'),
    'ERROR_VOLMGR_NO_VALID_LOG_COPIES': ('磁盘包', '日志副本'),
    'STATUS_VOLMGR_NO_VALID_LOG_COPIES': ('磁盘包', '日志副本'),
    'ERROR_SVHDX_UNIT_ATTENTION_AVAILABLE': ('SCSI', '单元注意状态'),
    'ERROR_SVHDX_UNIT_ATTENTION_CAPACITY_DATA_CHANGED': ('SCSI', '单元注意状态'),
    'ERROR_SVHDX_UNIT_ATTENTION_RESERVATIONS_PREEMPTED': ('SCSI', '单元注意状态'),
    'ERROR_SVHDX_UNIT_ATTENTION_RESERVATIONS_RELEASED': ('SCSI', '单元注意状态'),
    'ERROR_SVHDX_UNIT_ATTENTION_REGISTRATIONS_PREEMPTED': ('SCSI', '单元注意状态'),
    'ERROR_SVHDX_UNIT_ATTENTION_OPERATING_DEFINITION_CHANGED': ('SCSI', '单元注意状态'),
    'ERROR_HV_INVALID_CONNECTION_ID': ('虚拟机监控程序', '连接标识符'),
    'STATUS_HV_INVALID_CONNECTION_ID': ('虚拟机监控程序', '连接标识符'),
    'STATUS_VID_MB_STILL_REFERENCED': ('虚拟化基础结构驱动程序', '内存块', '无法销毁'),
    'WINBIO_E_DATABASE_FULL': ('存储适配器', '数据库已满'),
    'STATUS_ALLOTTED_SPACE_EXCEEDED': ('预留', '配额', '请求', '失败'),
    'ERROR_ENCLAVE_FAILURE': ('飞地', '架构', '失败代码'),
    'ERROR_DS_RIDMGR_DISABLED': ('RID', '228610', '重新启用帐户创建'),
    'ERROR_DOMAIN_SID_SAME_AS_LOCAL_WORKSTATION': ('sysprep', '168895'),
    'STATUS_BAD_MASTER_BOOT_RECORD': ('主引导记录', 'MBR', '格式无效'),
    'STATUS_TPM_INSUFFICIENT_BUFFER': ('缓冲区', '不足'),
    'STATUS_ILL_FORMED_PASSWORD': ('更新密码', '新密码', '不允许'),
    'STATUS_COMMITMENT_LIMIT': ('虚拟内存', '页面文件', '参阅帮助'),
    'STATUS_COMMITMENT_MINIMUM': ('页面文件', '内存分配请求', '参阅帮助'),
    'STATUS_GRAPHICS_OPM_SIGNALING_NOT_SUPPORTED': ('DxgkDdiOPMGetCOPPCompatibleInformation', 'DxgkDdiOPMConfigureProtectedOutput', '显示驱动程序'),
    'STATUS_VID_PARTITION_ALREADY_EXISTS': ('虚拟化基础结构驱动程序', '同名分区'),
    'STATUS_VID_MESSAGE_QUEUE_ALREADY_EXISTS': ('虚拟化基础结构驱动程序', '同名消息队列'),
    'STATUS_UNEXPECTED_MM_CREATE_ERR': ('FsRtl', '创建错误', '丢失', '筛选器', '异常'),
    'STATUS_UNEXPECTED_MM_MAP_ERROR': ('FsRtl', '映射错误', '丢失', '筛选器', '异常'),
    'STATUS_UNEXPECTED_MM_EXTEND_ERR': ('FsRtl', '扩展错误', '丢失', '筛选器', '异常'),
    'STATUS_SVHDX_WRONG_FILE_TYPE': ('VHDX', '多台虚拟机', '共享'),
    'STATUS_SVHDX_ERROR_STORED': ('SCSI', '感测数据'),
    'STATUS_LOG_METADATA_INVALID': ('日志服务', '不可能由日志文件系统创建'),
    'STATUS_VHD_SPARSE_HEADER_UNSUPPORTED_VERSION': ('虚拟硬盘', '稀疏头版本', '不受支持'),
    'STATUS_INVALID_PACKAGE_SID_LENGTH': ('应用容器', 'SID', '有效长度'),
    'STATUS_NOT_SUPPORTED_IN_APPCONTAINER': ('应用容器', '不支持'),
    'STATUS_NOT_APPCONTAINER': ('应用容器', '有效'),
    'STATUS_PAGEFILE_CREATE_FAILED': ('页面文件', '%hs', '%lx', '%ld'),
}

KNOWN_BAD_HAN_FRAGMENTS = (
    '安全启动安全启动',
    '安全安全遮盖',
    '逻辑磁盘管理管理服务',
    '磁盘磁盘包',
    '字符字符串',
    '至少至少',
    '痕迹记录记录',
    '播放播放列表',
    '包含包含列表',
    '正在正在重新生成',
    'Windows 部署服务服务器',
)

FORBIDDEN_REGEXES = (
    (re.compile(r'(?<![A-Za-z0-9_])null(?![A-Za-z0-9_])'), 'lowercase null in prose'),
    (re.compile(r'\bcoalesce\b'), 'lowercase COALESCE keyword'),
    (re.compile(r'\b(?:P层|work站点|memory-块|kernel-模式|start-待处理)\b'), 'known mixed-language artifact'),
)

ASCII_RUN = re.compile(
    r"[A-Za-z][A-Za-z0-9_+./'()-]*(?:[ \t]+[A-Za-z][A-Za-z0-9_+./'()-]*)+")


def LoadAllowedPreserved(path):
  allowed = set()
  with path.open('r', encoding='utf-8') as source:
    for line in source:
      line = line.strip()
      if not line or line.startswith('#'):
        continue
      allowed.add(line)
  return allowed


def PreservedEnglishRuns(english, localized):
  result = set()
  for match in ASCII_RUN.finditer(english):
    words = ' '.join(match.group(0).split()).split()
    # Keep only the longest preserved sub-runs from this source run. This
    # catches untranslated prose without reporting every sub-phrase of a
    # legitimate product/API name.
    found = []
    for length in range(len(words), 1, -1):
      for index in range(len(words) - length + 1):
        candidate = ' '.join(words[index:index + length])
        if candidate in localized:
          found.append(candidate)
      if found:
        break
    result.update(found)
  return result


def Main():
  root = Path(__file__).resolve().parent.parent
  generated = root / 'AllStat' / 'source' / 'generated'
  allow_path = Path(__file__).resolve().parent / 'zh_allowed_preserved_english.txt'
  allowed = LoadAllowedPreserved(allow_path)

  errors = []
  new_preserved = defaultdict(list)
  total = 0

  for english_path in sorted((generated / 'en').glob('*.cpp')):
    zh_path = generated / 'zh' / english_path.name
    english_items = ParseTable(english_path)['items']
    zh_items = ParseTable(zh_path)['items']

    if len(english_items) != len(zh_items):
      errors.append('{}: item count differs from English'.format(zh_path.name))
      continue

    for english_item, zh_item in zip(english_items, zh_items):
      total += 1
      description = zh_item['description']
      location = '{}:{} {}'.format(
          zh_path.name, zh_item['index'], zh_item['name'])

      if HAN_SPACE_HAN.search(description):
        errors.append('{}: space between Han characters: {!r}'.format(location, description))
      if ASCII_HAN_HYBRID.search(description) or HAN_ASCII_HYBRID.search(description):
        errors.append('{}: mixed English-Chinese hyphen token: {!r}'.format(location, description))
      if DUPLICATE_HAN_PAREN.search(description):
        errors.append('{}: duplicated Chinese translation in parentheses: {!r}'.format(location, description))

      for term in FORBIDDEN_ZH_TW_TERMS:
        if term in description:
          errors.append('{}: non-zh-CN terminology {!r}: {!r}'.format(
              location, term, description))

      for fragment in FORBIDDEN_FRAGMENTS:
        if fragment in description:
          errors.append('{}: translatable English fragment {!r}: {!r}'.format(
              location, fragment, description))

      for pattern, reason in FORBIDDEN_REGEXES:
        if pattern.search(description):
          errors.append('{}: {}: {!r}'.format(location, reason, description))

      for fragment in KNOWN_BAD_HAN_FRAGMENTS:
        if fragment in description:
          errors.append('{}: known duplicated/awkward Chinese fragment {!r}: {!r}'.format(
              location, fragment, description))

      required = REQUIRED_CODE_FRAGMENTS.get(zh_item['name'], ())
      for fragment in required:
        if fragment not in description:
          errors.append('{}: required semantic fragment {!r} is missing: {!r}'.format(
              location, fragment, description))

      for phrase in PreservedEnglishRuns(
          english_item['description'], description):
        if phrase not in allowed:
          new_preserved[phrase].append((location, description))

  for phrase in sorted(new_preserved, key=lambda value: (-len(new_preserved[value]), value.casefold())):
    examples = new_preserved[phrase]
    location, description = examples[0]
    errors.append(
        'unreviewed preserved English phrase {!r} ({} occurrence{}); first at {}: {!r}'.format(
            phrase, len(examples), '' if len(examples) == 1 else 's', location, description))

  if errors:
    print('ZH language-quality audit failed: {} issue(s)'.format(len(errors)))
    for error in errors:
      print('ERROR: ' + error)
    return 1

  print('ZH language-quality audit passed: {} descriptions checked.'.format(total))
  print('Reviewed preserved English phrases: {}.'.format(len(allowed)))
  return 0


if __name__ == '__main__':
  sys.exit(Main())
