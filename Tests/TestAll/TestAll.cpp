#include <AllStat/AllStat.h>
#include <AllStat/errno2.h>
#include <AllStat/hresult.h>
#include <AllStat/http.h>
#include <AllStat/ipp_status.h>
#include <AllStat/lresult.h>
#include <AllStat/ntstatus.h>

#define VERIFY(what)  \
  if (!(what)) { \
    printf("Failed check: %s\n", #what); \
    exit(1); \
  }

#define asFACILITY_WIN32  7
#define asHRESULT_FROM_WIN32(x) ((uint32_t)(x) <= 0 ? ((uint32_t)(x)) : ((uint32_t) (((x) & 0x0000FFFF) | (asFACILITY_WIN32 << 16) | 0x80000000)))

using namespace AllStat;

int main()
{
  AS_ITEM item;
  std::string name, descr;

  auto os = GetTargetOS();
  SetTargetOS(AS_OS_ANY);
  
  // NTSTATUS
  name = NtStatus2Str(STATUS_END_OF_FILE);
  VERIFY(name == "STATUS_END_OF_FILE");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_END_OF_FILE);

  name = NtStatus2Name(STATUS_OBJECT_NAME_EXISTS);
  VERIFY(name == "STATUS_OBJECT_NAME_EXISTS");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_OBJECT_NAME_EXISTS);

  name = NtStatus2Str(STATUS_TIMEOUT);
  VERIFY(name == "STATUS_TIMEOUT");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_TIMEOUT);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Истёк заданный интервал ожидания.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Expiró el intervalo de espera especificado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "指定的超时间隔已到期。");
#else
  VERIFY(descr == "The given Timeout interval expired.");
#endif

  name = NtStatus2Name(STATUS_ACCESS_VIOLATION);
  VERIFY(name == "STATUS_ACCESS_VIOLATION");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_ACCESS_VIOLATION);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Инструкция по адресу 0x%p обратилась к памяти по адресу 0x%p. Память не может быть %s.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La instrucción en 0x%p hizo referencia a memoria en 0x%p. La memoria no pudo ser %s.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "地址 0x%p 处的指令访问了地址 0x%p 处的内存。该内存无法被 %s。");
#else
  VERIFY(descr == "The instruction at 0x%p referenced memory at 0x%p. The memory could not be %s.");
#endif

  name = NtStatus2Name(STATUS_NETWORK_ACCESS_DENIED);
  VERIFY(name == "STATUS_NETWORK_ACCESS_DENIED");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_NETWORK_ACCESS_DENIED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Доступ к сети запрещён.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se denegó el acceso a la red.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "网络访问被拒绝。");
#else
  VERIFY(descr == "Network access is denied.");
#endif

  name = NtStatus2Name(STATUS_DLL_NOT_FOUND);
  VERIFY(name == "STATUS_DLL_NOT_FOUND");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_DLL_NOT_FOUND);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Невозможно продолжить выполнение кода, поскольку файл %hs не найден. Переустановка программы может устранить проблему.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se puede continuar la ejecución del código porque no se encontró %hs. Reinstalar el programa puede solucionar el problema.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法继续执行代码，因为找不到 %hs。重新安装程序可能可以解决此问题。");
#else
  VERIFY(descr == "The code execution cannot proceed because %hs was not found. Reinstalling the program may fix this problem.");
#endif

  name = NtStatus2Name(STATUS_DS_BUSY);
  VERIFY(name == "STATUS_DS_BUSY");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_DS_BUSY);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Служба каталогов занята.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El servicio de directorio está ocupado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "目录服务正忙。");
#else
  VERIFY(descr == "The directory service is busy.");
#endif

  name = NtStatus2Name(STATUS_HEAP_CORRUPTION);
  VERIFY(name == "STATUS_HEAP_CORRUPTION");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_HEAP_CORRUPTION);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Обнаружено повреждение кучи.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se detectó corrupción del heap.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "检测到堆损坏。");
#else
  VERIFY(descr == "A heap has been corrupted.");
#endif

  name = NtStatus2Name(STATUS_INVALID_IMAGE_HASH);
  VERIFY(name == "STATUS_INVALID_IMAGE_HASH");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_INVALID_IMAGE_HASH);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Windows не удаётся проверить цифровую подпись этого файла. После недавнего изменения оборудования или программного обеспечения мог быть установлен неправильно подписанный, повреждённый либо вредоносный файл из неизвестного источника.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Windows no puede comprobar la firma digital de este archivo. Un cambio reciente de hardware o software puede haber instalado un archivo con una firma incorrecta, dañado o incluso software malicioso procedente de un origen desconocido.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "Windows 无法验证此文件的数字签名。最近的硬件或软件更改可能安装了签名错误、已损坏或来自未知来源的恶意文件。");
#else
  VERIFY(descr == "Windows cannot verify the digital signature for this file. A recent hardware or software change might have installed a file that is signed incorrectly or damaged, or that might be malicious software from an unknown source.");
#endif

  name = NtStatus2Name(STATUS_THREADPOOL_HANDLE_EXCEPTION);
  VERIFY(name == "STATUS_THREADPOOL_HANDLE_EXCEPTION");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_THREADPOOL_HANDLE_EXCEPTION);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "При ожидании дескриптора 0x%x для объекта ожидания 0x%p в ожидающем объекте 0x%p возвращено состояние 0x%08x.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se devolvió el estado 0x%08x mientras se esperaba en el identificador 0x%x para la espera 0x%p, en el objeto de espera 0x%p.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "返回状态 0x%08x；正在等待句柄 0x%x，对应等待对象 0x%p，等待器对象 0x%p。");
#else
  VERIFY(descr == "Status 0x%08x was returned, waiting on handle 0x%x for wait 0x%p, in waiter 0x%p.");
#endif

  name = NtStatus2Name(RPC_NT_INVALID_STRING_BINDING);
  VERIFY(name == "RPC_NT_INVALID_STRING_BINDING");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == RPC_NT_INVALID_STRING_BINDING);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Строковое представление привязки недопустимо.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La representación de cadena de la vinculación RPC no es válida.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "字符串绑定无效。");
#else
  VERIFY(descr == "The string binding is invalid.");
#endif

  name = NtStatus2Name(STATUS_FLT_NO_HANDLER_DEFINED);
  VERIFY(name == "STATUS_FLT_NO_HANDLER_DEFINED");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_FLT_NO_HANDLER_DEFINED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Фильтр не определил обработчик для этой операции.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El filtro no definió un controlador para esta operación.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "筛选器没有为此操作定义处理程序。");
#else
  VERIFY(descr == "A handler was not defined by the filter for this operation.");
#endif

  name = NtStatus2Name(STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY);
  VERIFY(name == "STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_GRAPHICS_INVALID_VIDPN_TOPOLOGY);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Указана недопустимая топология VidPN.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La topología VidPN especificada no es válida.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "指定的 VidPN 拓扑无效。");
#else
  VERIFY(descr == "Specified VidPN topology is invalid.");
#endif

  name = NtStatus2Name(STATUS_FVE_LOCKED_VOLUME);
  VERIFY(name == "STATUS_FVE_LOCKED_VOLUME");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_FVE_LOCKED_VOLUME);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Том заблокирован шифрованием диска BitLocker.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Este volumen está bloqueado por BitLocker Drive Encryption.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "该卷已被 BitLocker 驱动器加密锁定。");
#else
  VERIFY(descr == "This volume is locked by BitLocker Drive Encryption.");
#endif

  name = NtStatus2Name(STATUS_FWP_CALLOUT_NOT_FOUND);
  VERIFY(name == "STATUS_FWP_CALLOUT_NOT_FOUND");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_FWP_CALLOUT_NOT_FOUND);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Объект callout не существует.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El callout no existe.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "指定的 WFP 标注不存在。");
#else
  VERIFY(descr == "The callout does not exist.");
#endif

  name = NtStatus2Name(STATUS_TPM_AUTHFAIL);
  VERIFY(name == "STATUS_TPM_AUTHFAIL");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_TPM_AUTHFAIL);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Проверка подлинности завершилась сбоем.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Error de autenticación.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "TPM 身份验证失败。");
#else
  VERIFY(descr == "Authentication failed.");
#endif

  name = NtStatus2Name(STATUS_HV_ACCESS_DENIED);
  VERIFY(name == "STATUS_HV_ACCESS_DENIED");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_HV_ACCESS_DENIED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Доступ к указанному объекту запрещён.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se denegó el acceso al objeto especificado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "访问指定对象被拒绝。");
#else
  VERIFY(descr == "Access to the specified object was denied.");
#endif

  name = NtStatus2Name(STATUS_VHD_DRIVE_FOOTER_MISSING);
  VERIFY(name == "STATUS_VHD_DRIVE_FOOTER_MISSING");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_VHD_DRIVE_FOOTER_MISSING);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Виртуальный жёсткий диск повреждён: отсутствует его завершающая служебная структура.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El disco duro virtual está dañado: falta el pie del disco duro virtual.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "虚拟硬盘已损坏：缺少 VHD 文件尾结构。");
#else
  VERIFY(descr == "The virtual hard disk is corrupted. The virtual hard disk drive footer is missing.");
#endif

  name = NtStatus2Name(STATUS_BTH_ATT_INSUFFICIENT_ENCRYPTION);
  VERIFY(name == "STATUS_BTH_ATT_INSUFFICIENT_ENCRYPTION");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_BTH_ATT_INSUFFICIENT_ENCRYPTION);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Перед чтением или записью атрибута требуется шифрование.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El atributo requiere cifrado antes de poder leerse o escribirse.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "读取或写入该属性前必须先启用加密。");
#else
  VERIFY(descr == "The attribute requires encryption before it can be read or written.");
#endif

  name = NtStatus2Name(STATUS_SMB_GUEST_LOGON_BLOCKED);
  VERIFY(name == "STATUS_SMB_GUEST_LOGON_BLOCKED");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_SMB_GUEST_LOGON_BLOCKED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Доступ к общей папке запрещён, поскольку политика безопасности организации блокирует гостевой доступ без проверки подлинности. Это защищает компьютер от небезопасных или вредоносных устройств в сети.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No puede acceder a esta carpeta compartida porque las directivas de seguridad de su organización bloquean el acceso de invitados sin autenticación. Estas directivas ayudan a proteger el equipo frente a dispositivos inseguros o malintencionados de la red.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "访问共享文件夹被拒绝，因为组织的安全策略阻止未经身份验证的来宾访问；此策略用于保护计算机免受网络中不安全或恶意设备的影响。");
#else
  VERIFY(descr == "You can't access this shared folder because your organization's security policies block unauthenticated guest access. These policies help protect your PC from unsafe or malicious devices on the network.");
#endif

  name = NtStatus2Name(STATUS_SPACES_NOT_ENOUGH_DRIVES);
  VERIFY(name == "STATUS_SPACES_NOT_ENOUGH_DRIVES");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_SPACES_NOT_ENOUGH_DRIVES);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для выполнения запрошенной операции недостаточно физических дисков.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No hay suficientes discos físicos para completar la operación solicitada.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "物理磁盘数量不足，无法完成请求的操作。");
#else
  VERIFY(descr == "There were not enough physical disks to complete the requested operation.");
#endif

  name = NtStatus2Name(STATUS_CLIP_LICENSE_EXPIRED);
  VERIFY(name == "STATUS_CLIP_LICENSE_EXPIRED");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_CLIP_LICENSE_EXPIRED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Срок действия лицензии CLiP истёк.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La licencia CLiP ha expirado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "CLiP 许可证已过期。");
#else
  VERIFY(descr == "CLiP license has expired.");
#endif

  name = NtStatus2Name(STATUS_APPEXEC_HOST_ID_MISMATCH);
  VERIFY(name == "STATUS_APPEXEC_HOST_ID_MISMATCH");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STATUS_APPEXEC_HOST_ID_MISMATCH);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Операцию не удалось завершить из-за неожиданного идентификатора узла.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La operación no se completó porque se encontró un identificador de host inesperado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "遇到了非预期的主机 ID，因此操作未完成。");
#else
  VERIFY(descr == "The operation was not completed because an unexpected host ID was encountered.");
#endif

  // HRESULT
  name = Hresult2Str(D2DERR_DISPLAY_FORMAT_NOT_SUPPORTED);
  VERIFY(name == "D2DERR_DISPLAY_FORMAT_NOT_SUPPORTED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == D2DERR_DISPLAY_FORMAT_NOT_SUPPORTED);

  name = Hresult2Str(asHRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER));
  VERIFY(name == "HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)");

  name = Hresult2Name(VFW_S_VIDEO_NOT_RENDERED);
  VERIFY(name == "VFW_S_VIDEO_NOT_RENDERED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == VFW_S_VIDEO_NOT_RENDERED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удаётся воспроизвести видеопоток: подходящий декомпрессор не найден.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se puede reproducir el flujo de vídeo: no se encontró un descompresor adecuado.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法播放视频流：找不到合适的解压缩器。%0");
#else
  VERIFY(descr == "Cannot play back the video stream: no suitable decompressor could be found.%0");
#endif

  name = Hresult2Name(WU_S_REBOOT_REQUIRED);
  VERIFY(name == "WU_S_REBOOT_REQUIRED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WU_S_REBOOT_REQUIRED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для завершения установки обновления необходимо перезагрузить систему.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Es necesario reiniciar el sistema para completar la instalación de la actualización.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "必须重新启动系统才能完成更新安装。");
#else
  VERIFY(descr == "The system must be restarted to complete installation of the update.");
#endif

  name = Hresult2Name(E_NOTIMPL);
  VERIFY(name == "E_NOTIMPL");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == E_NOTIMPL);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Функция не реализована.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No implementado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "该功能尚未实现。");
#else
  VERIFY(descr == "Not implemented");
#endif

  name = Hresult2Name(MSG_CI_MASTER_MERGE_ABORTED);
  VERIFY(name == "MSG_CI_MASTER_MERGE_ABORTED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == MSG_CI_MASTER_MERGE_ABORTED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "%1Основное слияние каталога %2 приостановлено из-за ошибки %3. Оно будет запланировано повторно.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "%1La combinación maestra del catálogo %2 se pausó debido al error %3. Se volverá a programar más adelante.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "%1目录 %2 的主合并因错误 %3 暂停，稍后将重新安排。");
#else
  VERIFY(descr == "%1A master merge has been paused for catalog %2 due to error %3. It will be rescheduled later.");
#endif

  name = Hresult2Name(RPC_E_WRONG_THREAD);
  VERIFY(name == "RPC_E_WRONG_THREAD");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == RPC_E_WRONG_THREAD);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Приложение вызвало интерфейс, маршалированный для другого потока.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La aplicación llamó a una interfaz serializada para otro subproceso.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "应用程序调用了为另一个线程封送的接口。");
#else
  VERIFY(descr == "The application called an interface that was marshalled for a different thread.");
#endif

  name = Hresult2Name(STG_E_PATHNOTFOUND);
  VERIFY(name == "STG_E_PATHNOTFOUND");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == STG_E_PATHNOTFOUND);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось найти путь %1.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se encontró la ruta %1.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "找不到路径 %1。");
#else
  VERIFY(descr == "The path %1 could not be found.");
#endif

  name = Hresult2Name(TAPI_E_DESTBUSY);
  VERIFY(name == "TAPI_E_DESTBUSY");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == TAPI_E_DESTBUSY);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Вызываемый номер занят.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El número llamado está ocupado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "被叫号码正忙。");
#else
  VERIFY(descr == "The called number is busy.");
#endif

  name = Hresult2Name(VFW_E_CANNOT_RENDER);
  VERIFY(name == "VFW_E_CANNOT_RENDER");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == VFW_E_CANNOT_RENDER);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не найдена комбинация фильтров, позволяющая воспроизвести поток.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se encontró ninguna combinación de filtros que permita reproducir el flujo.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "找不到能够呈现该流的过滤器组合。%0");
#else
  VERIFY(descr == "No combination of filters could be found to render the stream.%0");
#endif

  name = Hresult2Name(VFW_E_DVD_TITLE_UNKNOWN);
  VERIFY(name == "VFW_E_DVD_TITLE_UNKNOWN");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == VFW_E_DVD_TITLE_UNKNOWN);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Операция зависит от номера текущего заголовка, но навигатор ещё не вошёл в домен VTSM или заголовка, поэтому индекс текущего заголовка неизвестен.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La operación depende del número de título actual, pero el navegador todavía no ha entrado en los dominios VTSM ni de título; por ello se desconoce el índice del título actual.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "该操作依赖当前标题编号，但导航器尚未进入 VTSM 或标题域，因此当前标题索引未知。%0");
#else
  VERIFY(descr == "The operation depends on the current title number, however the navigator has not yet entered the VTSM or the title domains, so the 'current' title index is unknown.%0");
#endif

  name = Hresult2Name(DB_E_ERRORSOCCURRED);
  VERIFY(name == "DB_E_ERRORSOCCURRED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == DB_E_ERRORSOCCURRED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Многошаговая операция OLE DB завершилась с ошибками. Проверьте все доступные значения состояния OLE DB. Никакие изменения не выполнены.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Una operación OLE DB de varios pasos generó errores. Compruebe cada valor de estado OLE DB disponible. No se realizó ninguna operación.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "多步骤 OLE DB 操作产生错误。请检查每个可用的 OLE DB 状态值；未执行任何工作。");
#else
  VERIFY(descr == "Multiple-step OLE DB operation generated errors. Check each OLE DB status value, if available. No work was done.");
#endif

  name = Hresult2Name(SCHED_E_SERVICE_TOO_BUSY);
  VERIFY(name == "SCHED_E_SERVICE_TOO_BUSY");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == SCHED_E_SERVICE_TOO_BUSY);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Служба планировщика заданий перегружена и не может обработать запрос. Повторите попытку позже.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El servicio Programador de tareas está demasiado ocupado para atender la solicitud. Inténtelo de nuevo más tarde.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "任务计划程序服务当前过于繁忙，无法处理请求，请稍后重试。");
#else
  VERIFY(descr == "The Task Scheduler service is too busy to handle your request. Please try again later.");
#endif

  name = "VSS_E_ASRERROR_DISK_ASSIGNMENT_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == VSS_E_ASRERROR_DISK_ASSIGNMENT_FAILED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "На компьютере недостаточно дисков либо один или несколько дисков слишком малы. Добавьте или замените диски, чтобы они соответствовали дискам из резервной копии, и повторите восстановление.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Hay muy pocos discos en este equipo o uno o varios son demasiado pequeños. Agregue o sustituya discos para que correspondan a los de la copia de seguridad e intente de nuevo la restauración.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "此计算机上的磁盘数量不足，或一个或多个磁盘太小。请添加或更换磁盘，使其与备份中的磁盘匹配后重新还原。");
#else
  VERIFY(descr == "There are too few disks on this computer or one or more of the disks is too small. Add or change disks so they match the disks in the backup, and try the restore again.");
#endif

  name = Hresult2Name(VDS_E_IO_ERROR);
  VERIFY(name == "VDS_E_IO_ERROR");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == VDS_E_IO_ERROR);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Во время форматирования произошла ошибка ввода-вывода.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se produjo un error de E/S durante el formato.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "格式化期间发生 I/O 错误。");
#else
  VERIFY(descr == "IO error occured during format.");
#endif

  name = "VDS_E_CLUSTER_SIZE_TOO_BIG";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8004242F);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Размер кластера слишком велик.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El tamaño del clúster es demasiado grande.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "簇大小太大。");
#else
  VERIFY(descr == "The cluster size is too big.");
#endif

  name = "FSRM_E_EXPIRATION_VOLUME_NOT_NTFS";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80045399);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Каталог истечения срока хранения должен находиться на томе NTFS.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El directorio de expiración debe estar en un volumen con formato NTFS.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "过期目录必须位于 NTFS 格式的卷上。");
#else
  VERIFY(descr == "The expiration directory must be on a volume formatted with the NTFS file system.");
#endif

  name = "XACT_E_PUSH_COMM_FAILURE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8004D02A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "MSDTC не удалось передать транзакцию целевому диспетчеру из-за проблем связи. Возможные причины: брандмауэр не разрешает процесс MSDTC, компьютеры не находят друг друга по именам NetBIOS либо на одном из диспетчеров отключены сетевые транзакции.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El administrador de transacciones MSDTC no pudo enviar la transacción al administrador de transacciones de destino debido a problemas de comunicación. Entre las posibles causas están un firewall sin excepción para el proceso MSDTC, que los dos equipos no puedan encontrarse por sus nombres NetBIOS o que la compatibilidad con transacciones de red no esté habilitada en uno de los administradores de transacciones.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "MSDTC 因通信问题无法将事务推送到目标事务管理器。可能原因包括防火墙未放行 MSDTC、两台计算机无法通过 NetBIOS 名称互相解析，或其中一端未启用网络事务。");
#else
  VERIFY(descr == "The MSDTC transaction manager was unable to push the transaction to the destination transaction manager due to communication problems. Possible causes are: a firewall is present and it doesn't have an exception for the MSDTC process, the two machines cannot find each other by their NetBIOS names, or the support for network transactions is not enabled for one of the two transaction managers.");
#endif

  name = "CO_E_ACTIVATIONFAILED_TIMEOUT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8004E024);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось активировать COM+ за отведённое время.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Error de activación de COM+ porque no pudo completarse en el tiempo especificado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "COM+ 激活未能在规定时间内完成。");
#else
  VERIFY(descr == "COM+ activation failed because the activation could not be completed in the specified amount of time.");
#endif

  name = Hresult2Name(WININET_E_TIMEOUT);
  VERIFY(name == "WININET_E_TIMEOUT");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WININET_E_TIMEOUT);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Истекло время ожидания операции");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se agotó el tiempo de espera de la operación.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "操作超时。");
#else
  VERIFY(descr == "The operation timed out");
#endif

  name = Hresult2Name(APPX_E_INVALID_MANIFEST);
  VERIFY(name == "APPX_E_INVALID_MANIFEST");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == APPX_E_INVALID_MANIFEST);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Манифест пакета AppX недопустим.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El manifiesto del paquete AppX no es válido.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "AppX 包清单无效。");
#else
  VERIFY(descr == "The Appx package's manifest is invalid.");
#endif

  name = Hresult2Name(SEC_E_TIME_SKEW);
  VERIFY(name == "SEC_E_TIME_SKEW");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == SEC_E_TIME_SKEW);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Время на клиенте и сервере различается слишком сильно.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Los relojes del cliente y del servidor no están sincronizados.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "客户端与服务器时钟偏差过大。");
#else
  VERIFY(descr == "The clocks on the client and server machines are skewed.");
#endif

  name = Hresult2Name(CERTSRV_E_KEY_ATTESTATION_NOT_SUPPORTED);
  VERIFY(name == "CERTSRV_E_KEY_ATTESTATION_NOT_SUPPORTED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == CERTSRV_E_KEY_ATTESTATION_NOT_SUPPORTED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось создать аттестованный ключ. Этот компьютер или поставщик криптографических услуг может не соответствовать аппаратным требованиям для аттестации ключей.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo crear una clave con atestación. Es posible que este equipo o el proveedor criptográfico no cumplan los requisitos de hardware necesarios para admitir la atestación de claves.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "创建经过证明的密钥失败；计算机或加密提供程序可能不满足密钥证明所需的硬件条件。");
#else
  VERIFY(descr == "Failed to create an attested key.  This computer or the cryptographic provider may not meet the hardware requirements to support key attestation.");
#endif

  name = Hresult2Name(WINBIO_E_NO_MATCH);
  VERIFY(name == "WINBIO_E_NO_MATCH");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WINBIO_E_NO_MATCH);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Биометрический образец не соответствует указанной личности или дополнительному фактору.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La muestra biométrica no coincide con la identidad o el subfactor especificados.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "生物识别样本与指定身份或子因素不匹配。");
#else
  VERIFY(descr == "The biometric sample doesn't match the specified identity or sub-factor.");
#endif

  name = Hresult2Name(WINBIO_E_DATABASE_CORRUPTED);
  VERIFY(name == "WINBIO_E_DATABASE_CORRUPTED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WINBIO_E_DATABASE_CORRUPTED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "База данных повреждена, поэтому её содержимое недоступно.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El contenido de la base de datos está dañado y no se puede acceder a él.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "数据库内容已损坏，无法访问。");
#else
  VERIFY(descr == "The contents of the database have become corrupted and are inaccessible.");
#endif

  name = Hresult2Name(SPAPI_E_DEVICE_INSTALL_BLOCKED);
  VERIFY(name == "SPAPI_E_DEVICE_INSTALL_BLOCKED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == SPAPI_E_DEVICE_INSTALL_BLOCKED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Установка устройства запрещена системной политикой. Обратитесь к системному администратору.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La directiva del sistema prohíbe la instalación de este dispositivo. Póngase en contacto con el administrador del sistema.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "系统策略禁止安装此设备。请联系系统管理员。");
#else
  VERIFY(descr == "The installation of this device is forbidden by system policy. Contact your system administrator.");
#endif

  name = Hresult2Name(SCARD_E_NO_SMARTCARD);
  VERIFY(name == "SCARD_E_NO_SMARTCARD");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == SCARD_E_NO_SMARTCARD);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для операции требуется смарт-карта, но в устройстве её нет.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La operación requiere una tarjeta inteligente, pero actualmente no hay ninguna en el dispositivo.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "此操作需要智能卡，但设备中当前没有智能卡。");
#else
  VERIFY(descr == "The operation requires a smart card, but no smart card is currently in the device.");
#endif

  name = Hresult2Name(COMADMIN_E_REGDB_SYSTEMERR);
  VERIFY(name == "COMADMIN_E_REGDB_SYSTEMERR");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == COMADMIN_E_REGDB_SYSTEMERR);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "База данных реестра COM+ обнаружила системную ошибку.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La base de datos del Registro de COM+ detectó un error del sistema.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "COM+ 注册数据库检测到系统错误。");
#else
  VERIFY(descr == "The COM+ registry database detected a system error");
#endif

  name = Hresult2Name(HTTP_E_STATUS_NOT_FOUND);
  VERIFY(name == "HTTP_E_STATUS_NOT_FOUND");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == HTTP_E_STATUS_NOT_FOUND);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не найдено (404).");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No encontrado (404).");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "未找到（404）。");
#else
  VERIFY(descr == "Not found (404).");
#endif

  name = Hresult2Name(WCM_E_MANIFESTCOMPILATIONFAILED);
  VERIFY(name == "WCM_E_MANIFESTCOMPILATIONFAILED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WCM_E_MANIFESTCOMPILATIONFAILED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось скомпилировать манифест XSD/XML.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo compilar el manifiesto XSD/XML.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "XSD/XML 清单编译失败。");
#else
  VERIFY(descr == "XSD/XML Manifest compilation failed.");
#endif

  name = Hresult2Name(WU_E_NOT_APPLICABLE);
  VERIFY(name == "WU_E_NOT_APPLICABLE");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WU_E_NOT_APPLICABLE);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Операция не выполнена, поскольку применимые обновления отсутствуют.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La operación no se realizó porque no hay actualizaciones aplicables.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "没有适用的更新，因此未执行该操作。");
#else
  VERIFY(descr == "Operation was not performed because there are no applicable updates.");
#endif

  name = Hresult2Name(WU_E_PT_HTTP_STATUS_BAD_GATEWAY);
  VERIFY(name == "WU_E_PT_HTTP_STATUS_BAD_GATEWAY");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WU_E_PT_HTTP_STATUS_BAD_GATEWAY);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Аналог HTTP 502: сервер, работающий как шлюз или прокси, получил недопустимый ответ от вышестоящего сервера.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Equivale al estado HTTP 502: el servidor, actuando como puerta de enlace o proxy, recibió una respuesta no válida del servidor ascendente al que accedió para atender la solicitud.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "等同于 HTTP 502：作为网关或代理的服务器在尝试完成请求时，从其访问的上游服务器收到无效响应。");
#else
  VERIFY(descr == "Same as HTTP status 502 - the server, while acting as a gateway or proxy, received an invalid response from the upstream server it accessed in attempting to fulfill the request.");
#endif

  name = Hresult2Name(WU_E_METADATA_BAD_SIGNATURE);
  VERIFY(name == "WU_E_METADATA_BAD_SIGNATURE");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == WU_E_METADATA_BAD_SIGNATURE);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Метаданные обновления содержат неверную или недопустимую цифровую подпись.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Los metadatos de la actualización contienen una firma digital incorrecta o no válida.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "发现更新元数据具有错误或无效的数字签名。");
#else
  VERIFY(descr == "The metadata for an update was found to have a bad or invalid digital signature.");
#endif

  name = Hresult2Name(DWM_E_TEXTURE_TOO_LARGE);
  VERIFY(name == "DWM_E_TEXTURE_TOO_LARGE");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == DWM_E_TEXTURE_TOO_LARGE);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Невозможно создать поверхность перенаправления: её размер превышает возможности этого компьютера.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "{No se puede crear la superficie de redirección} El tamaño de la superficie supera el máximo admitido por este equipo.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "{无法创建重定向表面；表面尺寸超过此计算机支持的范围} 无法创建重定向表面，因为其尺寸超过此计算机支持的范围。");
#else
  VERIFY(descr == "{Redirection surface can not be created.  The size of the surface is larger than what is supported on this machine} Redirection surface can not be created.  The size of the surface is larger than what is supported on this machine.");
#endif

  name = Hresult2Name(TPM_E_FAILEDSELFTEST);
  VERIFY(name == "TPM_E_FAILEDSELFTEST");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == TPM_E_FAILEDSELFTEST);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Устройство TPM сообщило об ошибке внутреннего самотестирования. Перезагрузите компьютер. Если ошибка повторится, установите последнюю версию BIOS или микропрограммы TPM, следуя документации производителя компьютера.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El dispositivo TPM notificó un fallo durante su autoprueba interna. Intente reiniciar el equipo. Si el problema persiste, compruebe si existe una actualización de BIOS o firmware para el TPM y consulte la documentación del fabricante del equipo.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "TPM 硬件设备在内部自检期间报告故障。请尝试重新启动计算机。若问题仍然存在，请检查是否有适用于 TPM 硬件的最新 BIOS 或固件更新，并按照计算机制造商文档操作。");
#else
  VERIFY(descr == "The TPM hardware device reported a failure during its internal self test. Try restarting the computer to resolve the problem. If the problem continues, check for the latest BIOS or firmware update for your TPM hardware. Consult the computer manufacturer's documentation for instructions.");
#endif

  name = Hresult2Name(TPM_20_E_POLICY_CC);
  VERIFY(name == "TPM_20_E_POLICY_CC");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == TPM_20_E_POLICY_CC);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "TPM 2.0: код команды в политике не соответствует выполняемой команде либо ссылается на нереализованную команду.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "TPM 2.0: el código de comando de la política no coincide con el comando ejecutado o hace referencia a un comando no implementado.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "TPM 2.0：策略中的命令代码与当前命令不一致，或者策略命令引用了未实现的命令。");
#else
  VERIFY(descr == "TPM2.0 The command code in the policy is not the command code of the command or the command code in a policy command references a command that is not implemented.");
#endif

  name = Hresult2Name(TBS_E_PROVISIONING_NOT_ALLOWED);
  VERIFY(name == "TBS_E_PROVISIONING_NOT_ALLOWED");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == TBS_E_PROVISIONING_NOT_ALLOWED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Указанные флаги запрещают подготовку TPM. Может потребоваться подготовить TPM через tpm.msc, импортировать значение OwnerAuth, вызвать метод Win32_Tpm.Provision с разрешением принудительной очистки или запросов физического присутствия либо включить TPM в BIOS.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Las marcas especificadas no permiten la operación de aprovisionamiento del TPM. Para completarla puede ser necesario preparar el TPM mediante tpm.msc, importar OwnerAuth, llamar a Win32_Tpm.Provision permitiendo ForceClear o solicitudes de presencia física, o habilitar el TPM en el BIOS.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "指定的标志不允许执行 TPM 预配。要成功完成准备，可能需要执行以下某项操作：使用 TPM 管理控制台 (tpm.msc) 将 TPM 设置为“就绪”；将 TPM 所有者授权值导入系统；调用 Win32_Tpm WMI 的 Provision 方法并按附加信息指示为 ForceClear_Allowed 或 PhysicalPresencePrompts_Allowed 指定 TRUE；或者在系统 BIOS 中启用 TPM。有关详细信息，请参阅 Win32_Tpm.Provision 文档。");
#else
  VERIFY(descr == "The TPM provisioning action is not allowed by the specified flags.  For provisioning to be successful, one of several actions may be required.  The TPM management console (tpm.msc) action to make the TPM Ready may help.  For further information, see the documentation for the Win32_Tpm WMI method 'Provision'.  (The actions that may be required include importing the TPM Owner Authorization value into the system, calling the Win32_Tpm WMI method for provisioning the TPM and specifying TRUE for either 'ForceClear_Allowed' or 'PhysicalPresencePrompts_Allowed' (as indicated by the value returned in the Additional Information), or enabling the TPM in the system BIOS.)");
#endif

  name = Hresult2Name(UI_E_WRONG_THREAD);
  VERIFY(name == "UI_E_WRONG_THREAD");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == UI_E_WRONG_THREAD);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Этот метод можно вызывать только из потока, создавшего объект.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Este método solo se puede llamar desde el subproceso que creó el objeto.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "只能从创建该对象的线程调用此方法。");
#else
  VERIFY(descr == "This method can only be called from the thread that created the object.");
#endif

  name = Hresult2Name(FVE_E_POLICY_INVALID_ENHANCED_BCD_SETTINGS);
  VERIFY(name == "FVE_E_POLICY_INVALID_ENHANCED_BCD_SETTINGS");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == FVE_E_POLICY_INVALID_ENHANCED_BCD_SETTINGS);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "BitLocker нельзя включить: групповая политика расширенных параметров BCD содержит недопустимые данные. Администратор должен исправить конфигурацию.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "BitLocker no puede aplicarse porque la directiva de grupo de datos de configuración de arranque mejorados contiene datos no válidos. El administrador del sistema debe corregir la configuración antes de habilitar BitLocker.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "增强型启动配置数据的组策略设置包含无效数据，因此无法对此驱动器应用 BitLocker。请让系统管理员修正该配置后再尝试启用 BitLocker。");
#else
  VERIFY(descr == "BitLocker Drive Encryption cannot be applied to this drive because the Group Policy setting for Enhanced Boot Configuration Data contains invalid data. Please have your system administrator resolve this invalid configuration before attempting to enable BitLocker.");
#endif

  name = "FVE_E_EDRIVE_INCOMPATIBLE_FIRMWARE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x803100BF);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Микропрограмма этого компьютера не поддерживает аппаратное шифрование.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El firmware de este equipo no admite el cifrado por hardware.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "此计算机的固件无法支持硬件加密。");
#else
  VERIFY(descr == "This PC's firmware is not capable of supporting hardware encryption.");
#endif

  name = "WS_E_PROXY_REQUIRES_NTLM_AUTH";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x803D001A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "HTTP-прокси требует проверку подлинности по схеме NTLM.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El servidor proxy HTTP requiere el esquema de autenticación HTTP NTLM.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "HTTP 代理服务器要求使用 NTLM 身份验证方案。");
#else
  VERIFY(descr == "The HTTP proxy server requires HTTP authentication scheme 'NTLM'.");
#endif

  name = "WPN_E_CLOUD_SERVICE_UNAVAILABLE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x803E011B);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Платформа уведомлений не может подключиться к облачной службе уведомлений.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La plataforma de notificaciones no puede conectarse al servicio de notificaciones en la nube.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "通知平台无法连接到云通知服务。");
#else
  VERIFY(descr == "The notification platform is unable to connect to the cloud notification service.");
#endif

  name = "PEER_E_INVALID_GRAPH";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80630010);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Дескриптор графа недействителен.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El identificador del grafo no es válido.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "对等图句柄无效。");
#else
  VERIFY(descr == "The graph handle is invalid.");
#endif

  name = "STATEREPOSITORY_E_CONCURRENCY_LOCKING_FAILURE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80670001);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Сбой оптимистической блокировки: данные нельзя обновить, если они изменились после чтения.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Falló el bloqueo optimista. Los datos no se pueden actualizar si han cambiado desde que se leyeron.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "发生乐观锁冲突：如果 StateRepository 数据自读取后已被其他操作修改，就不能进行更新。");
#else
  VERIFY(descr == "Optimistic locking failure. Data cannot be updated if it has changed since it was read.");
#endif

  name = "E_IMAPI_ERASE_TOOK_LONGER_THAN_ONE_HOUR";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80AA0906);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Устройство не завершило стирание в течение часа. Для восстановления работы может потребоваться перезапуск питания, извлечение носителя или другое ручное действие.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La unidad no completó el borrado en una hora. Puede ser necesario reiniciar la alimentación, extraer el medio o realizar otra intervención manual para restablecer el funcionamiento normal.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "驱动器在一小时内未完成擦除。可能需要重新上电、取出介质或进行其他人工干预才能恢复正常工作。");
#else
  VERIFY(descr == "The drive did not complete the erase in one hour.  The drive may require a power cycle, media removal, or other manual intervention to resume proper operation.");
#endif

  name = "RTC_E_SIP_PARSE_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80EE0004);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось разобрать SIP-сообщение.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo analizar el mensaje SIP.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "解析 SIP 消息失败。");
#else
  VERIFY(descr == "Parsing SIP failed");
#endif

  name = "EVT_WDSMCS_W_CP_DLL_LOAD_FAILED_NOT_CRITICAL";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8121025A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Поставщик содержимого %1 не смог инициализироваться, но помечен как некритический. Сервер многоадресной передачи WDS продолжит запуск.%n %n Сведения об ошибке: %2 %n");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El proveedor de contenido %1 no pudo inicializarse. El proveedor está marcado como no crítico. El servidor de multidifusión de WDS continuará iniciándose.%n %n Información del error: %2 %n");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "内容提供程序 %1 初始化失败。该提供程序被标记为非关键，WDS 多播服务器将继续启动。%n %n 错误信息：%2 %n");
#else
  VERIFY(descr == "The Content Provider %1 failed to initialize. The provider is marked as non-critical. WDS Multicast server will continue to start.%n %n Error Information: %2 %n");
#endif

  name = "SQLITE_E_CONSTRAINT_FOREIGNKEY";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x87AF0313);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Нарушено ограничение внешнего ключа.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se infringió una restricción de clave externa.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "外键约束验证失败。");
#else
  VERIFY(descr == "SQLITE_CONSTRAINT_FOREIGNKEY");
#endif

  name = "UTC_E_TRACE_BUFFER_LIMIT_EXCEEDED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x87C51027);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Профилю трассировки требуется больше памяти, чем доступно для сбора трассы.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El perfil de traza necesita más memoria de la disponible para realizar la traza.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "跟踪配置文件需要的内存超过当前可用于跟踪的内存。");
#else
  VERIFY(descr == "The trace profile needs more memory than is available for tracing");
#endif

  name = "E_SYNCENGINE_FILE_SIZE_OVER_LIMIT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8802B001);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Размер файла превышает предел, поддерживаемый механизмом синхронизации.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El tamaño del archivo supera el límite admitido por el motor de sincronización.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "文件大小超过同步引擎支持的上限。");
#else
  VERIFY(descr == "The file size is larger than supported by the sync engine.");
#endif

  name = "DXGI_ERROR_DEVICE_HUNG";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x887A0006);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "GPU больше не отвечает на команды, вероятнее всего из-за недопустимой команды вызывающего приложения.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La GPU ya no responderá a más comandos, probablemente debido a un comando no válido enviado por la aplicación que realizó la llamada.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "GPU 不再响应命令，最常见原因是调用应用程序提交了无效命令。");
#else
  VERIFY(descr == "The GPU will not respond to more commands, most likely because of an invalid command passed by the calling application.");
#endif

  name = "MILERR_NO_HARDWARE_DEVICE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8898008D);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для этой операции недоступно аппаратное устройство визуализации.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No hay ningún dispositivo de representación por hardware disponible para esta operación.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "当前没有可用于此操作的硬件呈现设备。");
#else
  VERIFY(descr == "No HW rendering device is available for this operation.");
#endif


  name = "MILERR_NEED_RECREATE_AND_PRESENT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8898008E);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Произошла потенциально устранимая ошибка показа. Вызывающая сторона должна заново создать целевой объект, повторно отрисовать весь кадр и снова выполнить показ. Известные причины: внутренняя ошибка драйвера D3D, возврат D3D E_FAIL, неизвестная ошибка либо слишком быстрое изменение размера, из-за которого DWM и D3D рассинхронизировались.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se produjo un error de presentación potencialmente recuperable. El llamador debe volver a crear el destino, volver a renderizar todo el fotograma e intentar de nuevo la presentación. Entre las causas conocidas están un error interno del controlador D3D, un D3D E_FAIL, una causa raíz desconocida o un cambio de tamaño demasiado rápido que desincroniza DWM y D3D.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "发生了可能可恢复的呈现错误。调用方需要重新创建设备/资源、重新呈现整个帧并再次呈现；已知原因包括 D3D 驱动内部错误、D3D E_FAIL，或窗口快速缩放导致 DWM 与 D3D 状态不同步。");
#else
  VERIFY(descr == "There has been a presentation error that may be recoverable. The caller needs to recreate, rerender the entire frame, and reattempt present. There are two known case for this: 1) D3D Driver Internal error 2) D3D E_FAIL 2a) Unknown root cause b) When resizing too quickly for DWM and D3D stay in sync");
#endif


  name = "UCEERR_INVALIDPACKETHEADER";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x88980400);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Заголовок пакета UCE недействителен.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El encabezado del paquete UCE no es válido.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "UCE 命令包头无效。");
#else
  VERIFY(descr == "UCEERR_INVALIDPACKETHEADER");
#endif

  name = "WINCODEC_ERR_BADIMAGE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x88982F60);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Изображение не распознано.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La imagen no se reconoce.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法识别图像数据，图像可能无效或已损坏。");
#else
  VERIFY(descr == "The image is unrecognized.");
#endif

  name = "DWRITE_E_FLOWDIRECTIONCONFLICTS";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8898500B);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Направление потока конфликтует с направлением чтения: они должны быть взаимно перпендикулярны.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La dirección de flujo entra en conflicto con la dirección de lectura; ambas deben ser perpendiculares entre sí.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "流方向与阅读方向冲突；两者必须互相垂直。");
#else
  VERIFY(descr == "The flow direction conflicts with the reading direction. They must be perpendicular to each other.");
#endif


  name = "D2DERR_CYCLIC_GRAPH";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x88990020);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "В графе обнаружен цикл.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se detectó un ciclo en el gráfico.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "效果图中存在循环依赖。");
#else
  VERIFY(descr == "There was a cycle in the graph.");
#endif

  name = "MSG_CI_MASTER_MERGE_CANT_RESTART";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC000100A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "%1Не удалось повторно запустить основное слияние каталога %2 из-за ошибки %3.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "%1No se pudo reiniciar la combinación principal del catálogo %2 debido al error %3.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "%1无法为目录 %2 重新启动主合并，错误 %3。");
#else
  VERIFY(descr == "%1A master merge cannot be re-started for catalog %2 due to error %3.");
#endif


  name = "SL_E_CHPA_PRODUCT_KEY_BLOCKED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC004C003);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Сервер активации сообщил, что указанный ключ продукта заблокирован.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El servidor de activación informó de que la clave de producto especificada está bloqueada.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "激活服务器判定指定产品密钥已被阻止。");
#else
  VERIFY(descr == "The activation server determined the specified product key has been blocked.");
#endif

  name = "SL_E_VL_NOT_ENOUGH_COUNT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC004F038);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Продукт невозможно активировать: служба управления ключами (KMS) сообщила недостаточное число компьютеров. Обратитесь к системному администратору.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo activar el producto: el Servicio de administración de claves (KMS) informó de un recuento insuficiente. Póngase en contacto con el administrador del sistema.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "产品无法激活：密钥管理服务 (KMS) 报告的激活计数不足。请联系系统管理员。");
#else
  VERIFY(descr == "The Software Licensing Service reported that the product could not be activated. The count reported by your Key Management Service (KMS) is insufficient. Please contact your system administrator.");
#endif

  name = "SL_E_VL_INVALID_TIMESTAMP";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC004F06C);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Служба лицензирования программного обеспечения не смогла активировать продукт: служба управления ключами KMS признала метку времени запроса недействительной.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El Servicio de licencias de software informó de que no se pudo activar el producto. El Servicio de administración de claves (KMS) determinó que la marca de tiempo de la solicitud no es válida.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "产品无法激活：密钥管理服务 (KMS) 判定请求时间戳无效。");
#else
  VERIFY(descr == "The Software Licensing Service reported that the product could not be activated. The Key Management Service (KMS) determined that the request timestamp is invalid.");
#endif

  name = "NS_E_INVALID_INDEX";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D0011);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Индекс %1 недействителен.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El índice %1 no es válido.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "索引 %1 无效。%0");
#else
  VERIFY(descr == "Index %1 is invalid.%0");
#endif

  name = "NS_E_WMG_INVALID_COPP_CERTIFICATE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1051);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Windows Media Player не может воспроизвести защищённый файл: не удалось подтвердить безопасность соединения с видеокартой. Обновите драйвер видеокарты.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Windows Media Player no puede reproducir el archivo protegido porque no puede comprobar que la conexión con la tarjeta de vídeo sea segura. Pruebe a instalar un controlador actualizado para la tarjeta de vídeo.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "Windows Media Player 无法播放受保护文件，因为无法验证到显卡的连接是否安全。请尝试安装更新的显卡驱动程序。%0");
#else
  VERIFY(descr == "Windows Media Player cannot play the protected file. The Player cannot verify that the connection to your video card is secure. Try installing an updated device driver for your video card.%0");
#endif

  name = "NS_E_WMPCORE_CODEC_NOT_FOUND";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D109B);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Windows Media Player не может воспроизвести файл: один или несколько необходимых кодеков не найдены.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Windows Media Player no puede reproducir el archivo porque no se encontraron uno o varios de los códecs necesarios.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "Windows Media Player 无法播放该文件，因为找不到播放所需的一个或多个编解码器。%0");
#else
  VERIFY(descr == "Windows Media Player cannot play the file. One or more codecs required to play the file could not be found.%0");
#endif

  name = "NS_E_DVD_COPY_PROTECT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1163);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Windows Media Player не может воспроизвести DVD из-за ошибки цифровой защиты копирования между дисководом, декодером и видеокартой. Обновите драйвер видеокарты.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Windows Media Player no puede reproducir este DVD porque existe un problema con la protección digital contra copia entre la unidad de DVD, el descodificador y la tarjeta de vídeo. Pruebe a instalar un controlador actualizado para la tarjeta de vídeo.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "Windows Media Player 无法播放此 DVD，因为 DVD 驱动器、解码器和显卡之间的数字复制保护存在问题。请尝试安装更新的显卡驱动程序。%0");
#else
  VERIFY(descr == "Windows Media Player cannot play this DVD because there is a problem with digital copy protection between your DVD drive, decoder, and video card. Try installing an updated driver for your video card.%0");
#endif

  name = "NS_E_WMP_DRM_NO_SECURE_CLOCK";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D11DB);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Синхронизация невозможна, поскольку внутренние часы устройства настроены неправильно. Подключитесь к Интернету, включите настройку часов устройства на вкладке «Конфиденциальность» и повторите синхронизацию.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se puede sincronizar porque el reloj interno del dispositivo no está configurado correctamente. Para ajustarlo, seleccione la opción para configurar el reloj del dispositivo en la pestaña Privacidad del cuadro de diálogo Opciones, conéctese a Internet y vuelva a sincronizar el dispositivo. Para obtener ayuda adicional, haga clic en Ayuda en la Web.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法同步，因为设备内部时钟设置不正确。请在“选项”的“隐私”选项卡中选择设置设备时钟，连接到 Internet，然后重新同步设备；需要更多帮助时请单击“Web 帮助”。%0");
#else
  VERIFY(descr == "It is not possible to sync because this device's internal clock is not set correctly. To set the clock, select the option to set the device clock on the Privacy tab of the Options dialog box, connect to the Internet, and then sync the device again. For additional assistance, click Web Help.%0");
#endif

  name = "NS_E_NAMESPACE_WRONG_SECURITY";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1397);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Нельзя сохранить значение в узле пространства имён с другим типом безопасности.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se puede almacenar un valor en un nodo de espacio de nombres que tenga un tipo de seguridad diferente.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "不能在具有不同安全类型的命名空间节点中存储该值。%0");
#else
  VERIFY(descr == "It is not possible to store a value in a namespace node that has a different security type.%0");
#endif

  name = "NS_E_INVALID_VIDEO_WIDTH_FOR_INTERLACED_ENCODING";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1BE8);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "При сохранении чересстрочной развёртки ширина выходного видео должна быть кратна четырём.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Si elige conservar el entrelazado del vídeo, la anchura del vídeo de salida debe ser múltiplo de 4.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "选择保留视频隔行扫描时，输出视频尺寸必须是 4 的倍数。%0");
#else
  VERIFY(descr == "When you choose to maintain the interlacing in your video, the output video size must be a multiple of 4.%0");
#endif

  name = "NS_E_DRM_POLICY_DISABLE_ONLINE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D2762);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "DRM Windows Media не может выполнить действие, поскольку администратор компьютера или сети включил групповую политику, запрещающую доступ DRM к Интернету. Обратитесь к администратору.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El sistema de Administración de derechos digitales (DRM) de Windows Media no puede realizar la acción solicitada porque el administrador del equipo o de la red habilitó la directiva de grupo Prevent Windows Media DRM Internet Access. Póngase en contacto con el administrador para obtener ayuda.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "Windows Media 数字版权管理无法执行请求的操作，因为计算机或网络管理员启用了“阻止 Windows Media DRM Internet 访问”组策略。请联系管理员获取帮助。%0");
#else
  VERIFY(descr == "The Windows Media Digital Rights Management system cannot perform the requested action because your computer or network administrator has enabled the group policy Prevent Windows Media DRM Internet Access. For assistance, contact your administrator.%0");
#endif

  name = "NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D2773);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось получить значение защищённых часов устройства. Обратитесь в службу поддержки Microsoft.%0.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo obtener el reloj seguro del dispositivo. Póngase en contacto con el soporte técnico de Microsoft.%0.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "获取设备安全时钟时发生问题。请联系 Microsoft 产品支持。%0");
#else
  VERIFY(descr == "A problem has occurred in obtaining the device's secure clock. Contact Microsoft product support.%0.");
#endif

  name = "MF_E_PLATFORM_NOT_INITIALIZED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D36B0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Платформа не инициализирована. Вызовите MFStartup().%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La plataforma no está inicializada. Llame a MFStartup().%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "Media Foundation 平台尚未初始化。请先调用 MFStartup()。%0");
#else
  VERIFY(descr == "Platform not initialized. Please call MFStartup().%0");
#endif

  name = "MF_E_NET_UDP_BLOCKED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D4292);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Одно из сетевых устройств блокирует UDP-трафик.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Un dispositivo de la red está bloqueando el tráfico UDP.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "网络中的某个设备正在阻止 UDP 流量。%0");
#else
  VERIFY(descr == "A device in the network is blocking UDP traffic.%0");
#endif

  name = "MF_E_TRANSFORM_NEED_MORE_INPUT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D6D72);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Преобразование не может сформировать выходные данные, пока не получит дополнительные входные образцы.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La transformación no puede generar salida hasta recibir más muestras de entrada.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "转换需要更多输入样本才能产生输出。%0");
#else
  VERIFY(descr == "The transform cannot produce output until it gets more input samples.%0");
#endif

  name = "MF_E_HDCP_AUTHENTICATION_FAILURE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D7188);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось проверить подлинность соединения HDCP.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La autenticación del enlace HDCP produjo un error.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "HDCP 链路身份验证失败。%0");
#else
  VERIFY(descr == "Authentication of the HDCP link failed.%0");
#endif

  name = "MF_E_MEDIA_EXTENSION_APPSERVICE_CONNECTION_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00DB3B0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось подключиться к службе приложения, предоставляющей расширение мультимедиа.%0");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo conectar con el servicio de aplicación que proporciona una extensión multimedia.%0");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法连接到提供媒体扩展的应用服务。%0");
#else
  VERIFY(descr == "Connection to app service providing a media extension failed.%0");
#endif

  name = "MQ_ERROR_QUEUE_NOT_FOUND";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00E0003);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Очередь не существует либо недостаточно прав для выполнения операции.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La cola no existe o no dispone de permisos suficientes para realizar la operación.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "队列不存在，或者当前权限不足以执行该操作。");
#else
  VERIFY(descr == "The queue does not exist or you do not have sufficient permissions to perform the operation.");
#endif

  name = "ERROR_VMCOMPUTE_INVALID_JSON";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC037010D);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Документ JSON недопустим.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El documento JSON no es válido.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "JSON 文档无效。");
#else
  VERIFY(descr == "The JSON document is invalid.");
#endif

  name = "ERROR_VOLMGR_PLEX_INDEX_INVALID";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC038003A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Индекс плекса не меньше числа плексов в томе.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El índice de plex especificado es mayor o igual que el número de plexes del volumen.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "指定的丛索引大于或等于卷中的丛数量。");
#else
  VERIFY(descr == "The specified plex index is greater or equal than the number of plexes in the volume.");
#endif

  name = "IMAPI_E_INVALID_PARAM";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC0AAB101);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для параметра «%1!ls!» указано недопустимое значение.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El valor especificado para el parámetro '%1!ls!' no es válido.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "参数 '%1!ls!' 的指定值无效。");
#else
  VERIFY(descr == "The value specified for parameter '%1!ls!' is not valid.");
#endif

  name = "EVT_WDSMCS_E_PARAMETERS_READ_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC1210201);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "При чтении конфигурации произошла ошибка. Сервер многоадресной передачи Windows Deployment Services не будет обрабатывать входящие запросы клиентов.%n %n Сведения об ошибке: %1 %n");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se produjo un error al leer la información de configuración. El servidor de multidifusión de Windows Deployment Services no procesará solicitudes entrantes de clientes. %n %n Información del error: %1 %n");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "读取配置信息时发生错误。Windows 部署服务多播服务器将不处理传入的客户端请求。%n %n 错误信息：%1 %n");
#else
  VERIFY(descr == "An error occurred while trying to read the configuration information. The  Windows Deployment Services multicast server will not process incoming  client requests. %n %n Error Information: %1 %n");
#endif

  name = "hrCouldNotConnect";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC7FF0007);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось выполнить резервное копирование: отсутствует соединение с указанным сервером резервного копирования либо не запущена копируемая служба.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se puede realizar la copia de seguridad. No hay conexión con el servidor de copia de seguridad especificado o el servicio que se intenta copiar no está en ejecución.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法执行备份。可能未连接到指定的备份服务器，或者要备份的服务未运行。");
#else
  VERIFY(descr == "Unable to perform the backup. Either you are not connected to the specified backup server or the service you are trying to backup is not running.");
#endif

  name = "hrLogCorrupted";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC800073C);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Файлы журнала базы данных повреждены.");
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Los archivos de registro de la base de datos están dañados.");
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "数据库日志文件已损坏。");
#else
  VERIFY(descr == "The database log files are damaged.");
#endif

  // LRESULT
  name = Winerr2Name(ERROR_INVALID_ADDRESS);
  VERIFY(name == "ERROR_INVALID_ADDRESS");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_INVALID_ADDRESS);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Предпринята попытка обратиться по недопустимому адресу.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se intentó acceder a una dirección no válida.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "尝试访问无效地址。");
#else
  VERIFY(descr == "Attempt to access invalid address.")
#endif

  name = Winerr2Name(ERROR_ELEVATION_REQUIRED);
  VERIFY(name == "ERROR_ELEVATION_REQUIRED");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_ELEVATION_REQUIRED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для выполнения запрошенной операции требуется повышение привилегий.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La operación solicitada requiere elevación de privilegios.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "请求的操作需要提升权限。");
#else
  VERIFY(descr == "The requested operation requires elevation.")
#endif

  name = Winerr2Name(ERROR_STACK_OVERFLOW);
  VERIFY(name == "ERROR_STACK_OVERFLOW");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_STACK_OVERFLOW);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Слишком глубокая рекурсия привела к переполнению стека.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La recursión fue demasiado profunda y provocó un desbordamiento de pila.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "递归层次过深，导致栈溢出。");
#else
  VERIFY(descr == "Recursion too deep; the stack overflowed.")
#endif

  name = Winerr2Name(ERROR_INSTALL_FAILURE);
  VERIFY(name == "ERROR_INSTALL_FAILURE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_INSTALL_FAILURE);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Во время установки произошла неустранимая ошибка.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se produjo un error irrecuperable durante la instalación.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "安装过程中发生严重错误。");
#else
  VERIFY(descr == "Fatal error during installation.")
#endif

  name = Winerr2Name(RPC_S_SERVER_UNAVAILABLE);
  VERIFY(name == "RPC_S_SERVER_UNAVAILABLE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == RPC_S_SERVER_UNAVAILABLE);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Сервер RPC недоступен.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El servidor RPC no está disponible.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "RPC 服务器不可用。");
#else
  VERIFY(descr == "The RPC server is unavailable.")
#endif

  name = Winerr2Name(ERROR_INVALID_PIXEL_FORMAT);
  VERIFY(name == "ERROR_INVALID_PIXEL_FORMAT");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_INVALID_PIXEL_FORMAT);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Недопустимый формат пикселей.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El formato de píxel no es válido.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "像素格式无效。");
#else
  VERIFY(descr == "The pixel format is invalid.")
#endif

  name = Winerr2Name(ERROR_CONNECTED_OTHER_PASSWORD);
  VERIFY(name == "ERROR_CONNECTED_OTHER_PASSWORD");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_CONNECTED_OTHER_PASSWORD);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Сетевое подключение установлено, однако пользователю пришлось ввести пароль, отличный от первоначально указанного.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La conexión de red se estableció correctamente, pero fue necesario solicitar al usuario una contraseña distinta de la especificada inicialmente.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "网络连接已成功建立，但系统必须提示用户输入不同于最初指定的密码。");
#else
  VERIFY(descr == "The network connection was made successfully, but the user had to be prompted for a password other than the one originally specified.")
#endif

  name = Winerr2Name(ERROR_PRINTER_DRIVER_BLOCKED);
  VERIFY(name == "ERROR_PRINTER_DRIVER_BLOCKED");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_PRINTER_DRIVER_BLOCKED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Этот драйвер принтера заблокирован, поскольку может нарушить работу системы.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se sabe que el controlador de impresora puede dañar el sistema.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "已知此打印机驱动程序可能损害系统，因此已被阻止。");
#else
  VERIFY(descr == "The printer driver is known to harm the system.")
#endif

  name = Winerr2Name(ERROR_APPEXEC_INVALID_HOST_STATE);
  VERIFY(name == "ERROR_APPEXEC_INVALID_HOST_STATE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_APPEXEC_INVALID_HOST_STATE);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Состояние узла не позволяет выполнить запрошенную операцию запуска.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El host no se encuentra en un estado válido para admitir la solicitud de ejecución.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "主机当前状态不支持该执行请求。");
#else
  VERIFY(descr == "The host is not in a valid state to support the execution request.")
#endif

  name = Winerr2Name(ERROR_DHCP_ADDRESS_CONFLICT);
  VERIFY(name == "ERROR_DHCP_ADDRESS_CONFLICT");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_DHCP_ADDRESS_CONFLICT);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "DHCP-клиент получил IP-адрес, который уже используется в сети. Локальный интерфейс будет отключён, пока DHCP-клиент не получит другой адрес.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El cliente DHCP obtuvo una dirección IP que ya está en uso en la red. La interfaz local se deshabilitará hasta que el cliente DHCP pueda obtener una nueva dirección.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "DHCP 客户端获得的 IP 地址已被网络中的其他设备使用。在 DHCP 客户端取得新地址之前，本地接口将被禁用。");
#else
  VERIFY(descr == "The DHCP client has obtained an IP address that is already in use on the network. The local interface will be disabled until the DHCP client can obtain a new address.")
#endif

  name = Winerr2Name(ERROR_SECUREBOOT_POLICY_VIOLATION);
  VERIFY(name == "ERROR_SECUREBOOT_POLICY_VIOLATION");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_SECUREBOOT_POLICY_VIOLATION);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Значение защищено политикой безопасной загрузки и не может быть изменено или удалено.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El valor está protegido por la directiva de Secure Boot y no puede modificarse ni eliminarse.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "该值受安全启动策略保护，无法修改或删除。");
#else
  VERIFY(descr == "The value is protected by Secure Boot policy and cannot be modified or deleted.")
#endif

  name = Winerr2Name(ERROR_SYSTEM_INTEGRITY_POLICY_VIOLATION);
  VERIFY(name == "ERROR_SYSTEM_INTEGRITY_POLICY_VIOLATION");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_SYSTEM_INTEGRITY_POLICY_VIOLATION);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Приложение заблокировано политикой Device Guard вашей организации. Обратитесь в службу поддержки.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La organización usó Device Guard para bloquear esta aplicación. Póngase en contacto con el personal de soporte para obtener más información.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "组织通过设备防护阻止了此应用。有关详细信息，请联系技术支持人员。");
#else
  VERIFY(descr == "Your organization used Device Guard to block this app. Contact your support person for more info.")
#endif

  name = Winerr2Name(ERROR_NODE_CANT_HOST_RESOURCE);
  VERIFY(name == "ERROR_NODE_CANT_HOST_RESOURCE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == ERROR_NODE_CANT_HOST_RESOURCE);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Кластерный ресурс не удалось перевести в рабочее состояние: узел-владелец не может запустить этот ресурс.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El recurso del clúster no se puede poner en línea. El nodo propietario no puede ejecutar este recurso.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法使群集资源联机；所有者节点无法运行此资源。");
#else
  VERIFY(descr == "The cluster resource cannot be brought online. The owner node cannot run this resource.")
#endif

  name = Winerr2Name(5890);
  VERIFY(name == "ERROR_CLUSTER_MEMBERSHIP_INVALID_STATE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 5890);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Запрошенная операция несовместима с текущим состоянием членства узла в кластере.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se intentó una operación incompatible con el estado actual de pertenencia del nodo al clúster.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "尝试执行的操作与节点当前的成员资格状态不兼容。");
#else
  VERIFY(descr == "An operation was attempted that is incompatible with the current membership state of the node.")
#endif

  name = Winerr2Name(6017);
  VERIFY(name == "ERROR_CS_ENCRYPTION_INVALID_SERVER_RESPONSE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 6017);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Удалённый сервер вернул недопустимый ответ при открытии файла с клиентским шифрованием.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El servidor remoto envió una respuesta no válida al abrir un archivo con cifrado del lado cliente.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "远程服务器针对以客户端加密方式打开的文件返回了无效响应。");
#else
  VERIFY(descr == "The remote server sent an invalid response for a file being opened with Client Side Encryption.")
#endif

  name = Winerr2Name(6648);
  VERIFY(name == "ERROR_LOG_PINNED_RESERVATION");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 6648);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Журнал закреплён, поскольку зарезервированные записи занимают большую часть его пространства. Освободите часть резервирования.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El registro está fijado porque las reservas consumen la mayor parte de su espacio. Libere algunos registros reservados para dejar espacio disponible.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "预留空间占用了大部分日志空间，导致日志被固定。请释放部分预留记录以腾出空间。");
#else
  VERIFY(descr == "The log is pinned due to reservation consuming most of the log space. Free some reserved records to make space available.")
#endif

  name = Winerr2Name(6705);
  VERIFY(name == "ERROR_TRANSACTION_ALREADY_COMMITTED");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 6705);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Операцию выполнить уже нельзя: транзакция была зафиксирована.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Ya es demasiado tarde para realizar la operación solicitada porque la transacción ya se confirmó.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "事务已经提交，现在执行所请求的操作为时已晚。");
#else
  VERIFY(descr == "It is too late to perform the requested operation, since the Transaction has already been committed.")
#endif

  name = Winerr2Name(7065);
  VERIFY(name == "ERROR_RDP_PROTOCOL_ERROR");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 7065);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Компонент протокола RDP %2 обнаружил ошибку в потоке протокола и отключил клиента.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El componente %2 del protocolo RDP detectó un error en el flujo del protocolo y desconectó al cliente.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "RDP 协议组件 %2 在协议流中检测到错误，因此已断开客户端连接。");
#else
  VERIFY(descr == "The RDP protocol component %2 detected an error in the protocol stream and has disconnected the client.")
#endif

  name = Winerr2Name(8418);
  VERIFY(name == "ERROR_DS_DRA_SCHEMA_MISMATCH");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 8418);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Репликация не выполнена из-за несовпадения схем на участвующих серверах.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La operación de replicación no se pudo completar debido a una incompatibilidad de esquemas entre los servidores implicados.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "复制操作失败，因为参与复制的服务器之间架构不匹配。");
#else
  VERIFY(descr == "The replication operation failed because of a schema mismatch between the servers involved.")
#endif

  name = Winerr2Name(8504);
  VERIFY(name == "ERROR_DS_SAM_INIT_FAILURE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 8504);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось инициализировать диспетчер учётных записей безопасности (SAM). Ошибка: %1. Состояние ошибки: 0x%2. Завершите работу системы, перезагрузитесь в режиме восстановления служб каталогов и изучите журнал событий.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo inicializar el Administrador de cuentas de seguridad (SAM) debido al siguiente error: %1. Estado de error: 0x%2. Apague el sistema, reinícielo en el modo de restauración de servicios de directorio y consulte el registro de eventos para obtener información más detallada.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "安全帐户管理器初始化失败，错误为 %1，错误状态为 0x%2。请关闭系统并进入目录服务还原模式重新启动，然后查看事件日志了解详细信息。");
#else
  VERIFY(descr == "Security Accounts Manager initialization failed because of the following error: %1. Error Status: 0x%2. Please shutdown this system and reboot into Directory Services Restore Mode, check the event log for more detailed information.")
#endif

  name = Winerr2Name(9122);
  VERIFY(name == "DNS_ERROR_BAD_KEYMASTER");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 9122);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Операцию невозможно завершить: DNS-сервер, назначенный хозяином ключей зоны, недоступен или настроен неправильно. Устраните проблему на текущем хозяине ключей либо передайте эту роль другому DNS-серверу.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "No se pudo completar la operación porque el servidor DNS que figura como maestro de claves actual de esta zona está inactivo o mal configurado. Corrija el problema en el maestro de claves actual o asigne el rol a otro servidor DNS.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "无法完成操作，因为列为当前区域密钥主服务器的 DNS 服务器已关闭或配置错误。请修复该服务器，或由其他 DNS 服务器接管密钥主角色。");
#else
  VERIFY(descr == "This operation could not be completed because the DNS server listed as the current key master for this zone is down or misconfigured. Resolve the problem on the current key master for this zone or use another DNS server to seize the key master role.")
#endif

  name = Winerr2Name(10054);
  VERIFY(name == "WSAECONNRESET");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 10054);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Существующее соединение принудительно закрыто удалённым узлом.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Una conexión existente fue cerrada por la fuerza por el host remoto.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "现有连接被远程主机强制关闭。");
#else
  VERIFY(descr == "An existing connection was forcibly closed by the remote host.")
#endif

  name = Winerr2Name(11021);
  VERIFY(name == "WSA_QOS_EFILTERCOUNT");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 11021);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "В FLOWDESCRIPTOR указано неверное число структур FILTERSPEC QoS.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "En FLOWDESCRIPTOR se especificó un número incorrecto de estructuras FILTERSPEC de QoS.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "FLOWDESCRIPTOR 中指定的 QoS FILTERSPEC 数量不正确。");
#else
  VERIFY(descr == "An incorrect number of QOS FILTERSPECs were specified in the FLOWDESCRIPTOR.")
#endif


  name = Winerr2Name(13820);
  VERIFY(name == "ERROR_IPSEC_IKE_NO_PRIVATE_KEY");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 13820);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Согласование IKE завершилось ошибкой: у сертификата компьютера нет закрытого ключа. Для сертификатов IPsec закрытый ключ обязателен. Обратитесь к администратору сетевой безопасности для замены сертификата.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La negociación IKE falló porque el certificado del equipo utilizado no tiene clave privada. Los certificados IPsec requieren una clave privada. Póngase en contacto con el administrador de seguridad de red para sustituirlo por un certificado que disponga de clave privada.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "IKE 协商失败，因为所使用的计算机证书没有私钥。IPsec 证书必须包含私钥；请联系网络安全管理员更换证书。");
#else
  VERIFY(descr == "IKE negotiation failed because the machine certificate used does not have a private key. IPsec certificates require a private key. Contact your Network Security administrator about replacing with a certificate that has a private key.")
#endif

  name = Winerr2Name(14001);
  VERIFY(name == "ERROR_SXS_CANT_GEN_ACTCTX");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 14001);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось запустить приложение из-за неверной параллельной конфигурации (side-by-side). Подробности см. в журнале событий приложения или получите их с помощью sxstrace.exe.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La aplicación no pudo iniciarse porque su configuración side-by-side es incorrecta. Consulte el registro de eventos de la aplicación o utilice sxstrace.exe para obtener más información.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "应用程序无法启动，因为并行配置（Side-by-Side）不正确。请查看应用程序事件日志或使用 sxstrace.exe 获取详细信息。");
#else
  VERIFY(descr == "The application has failed to start because its side-by-side configuration is incorrect. Please see the application event log or use the command-line sxstrace.exe tool for more detail.")
#endif

  name = Winerr2Name(15023);
  VERIFY(name == "ERROR_EVT_INVALID_CHANNEL_PROPERTY_VALUE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 15023);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Свойство канала %1!s! имеет недопустимое значение: неверный тип, выход за допустимый диапазон, запрет изменения или отсутствие поддержки для этого типа канала.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La propiedad de canal %1!s! contiene un valor no válido. El valor tiene un tipo no válido, está fuera del intervalo permitido, no puede modificarse o no es compatible con este tipo de canal.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "通道属性 %1!s! 包含无效值：类型可能错误、超出有效范围、不可修改或不受此类通道支持。");
#else
  VERIFY(descr == "Channel property %1!s! contains an invalid value. The value has an invalid type, is outside of its valid range, cannot be changed, or is not supported by this type of channel.")
#endif

  name = Winerr2Name(15620);
  VERIFY(name == "ERROR_INVALID_STAGED_SIGNATURE");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 15620);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Недопустимая подпись подготовленного пакета. Для регистрации в режиме разработчика файлы AppxSignature.p7x и AppxBlockMap.xml должны быть действительными либо отсутствовать.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La firma no es válida. Para registrar el paquete en modo de desarrollador, AppxSignature.p7x y AppxBlockMap.xml deben ser válidos o no estar presentes.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "暂存包签名无效。在开发人员模式下注册时，AppxSignature.p7x 和 AppxBlockMap.xml 必须有效，或者不应存在。");
#else
  VERIFY(descr == "The signature is invalid. To register in developer mode, AppxSignature.p7x and AppxBlockMap.xml must be valid or should not be present.")
#endif

  name = Winerr2Name(15864);
  VERIFY(name == "STORE_ERROR_LICENSE_REVOKED");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 15864);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Лицензия этого пользователя отозвана.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La licencia de este usuario ha sido revocada.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "此用户的许可证已被吊销。");
#else
  VERIFY(descr == "The license has been revoked for this user.")
#endif

  // Localization regression checks
  name = NtStatus2Name(STATUS_PAGE_FAULT_COPY_ON_WRITE);
  VERIFY(name == "STATUS_PAGE_FAULT_COPY_ON_WRITE");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Ошибка страницы требует создания копии при записи.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El fallo de página se produjo durante una operación de copia en escritura.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "此次页错误需要执行写时复制。");
#else
  VERIFY(descr == "Page fault was a demand zero fault.")
#endif

  name = NtStatus2Name(STATUS_GDI_HANDLE_LEAK);
  VERIFY(name == "STATUS_GDI_HANDLE_LEAK");
  VERIFY(Name2NtStatusItem(name.c_str(), &item) == 0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Приложение, возможно, допустило утечку дескрипторов GDI.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Es posible que la aplicación haya provocado una fuga de identificadores GDI.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "应用程序可能存在 GDI 句柄泄漏。");
#else
  VERIFY(descr == "GDI handles were potentially leaked by the application.")
#endif

  name = Hresult2Name(0x80E70003);
  VERIFY(name == "ERROR_SPACES_RESILIENCY_TYPE_INVALID");
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Указан недопустимый тип устойчивости хранилища.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El tipo de resiliencia especificado no es válido.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "指定的复原类型无效。");
#else
  VERIFY(descr == "The specified resiliency type is not valid.")
#endif

  name = Winerr2Name(773);
  VERIFY(name == "ERROR_BAD_ACCESSOR_FLAGS");
  VERIFY(Name2WinerrItem(name.c_str(), &item) == 0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Поставщик данных не смог интерпретировать флаги привязки столбца, заданные в аксессоре.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "El proveedor de datos no pudo interpretar los indicadores establecidos para el enlace de una columna en un descriptor de acceso.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "数据提供程序无法解释访问器中某个列绑定所设置的标志。");
#else
  VERIFY(descr == "The data provider was not able to interpret the flags set for a column binding in an accessor.")
#endif

  SetTargetOS(os);
  
  // HTTP
  name = HttpCode2Name(200);
  VERIFY(name == "HTTP_STATUS_OK");
  VERIFY(Name2HttpCodeItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 200);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "200 Успешно")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "200 Correcto")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "200 成功");
#else
  VERIFY(descr == "200 OK")
#endif

  // ERRNO
  name = Errno2Name(EBUSY);
  VERIFY(name == "EBUSY");
  VERIFY(Name2ErrnoItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == EBUSY);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Устройство или ресурс занят")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Dispositivo o recurso ocupado")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "设备或资源正忙");
#else
  VERIFY(descr == "Device or resource busy")
#endif

  // IPP STATUS
  name = IppStatus2Name(ippStsInplaceModeNotSupportedErr);
  VERIFY(name == "ippStsInplaceModeNotSupportedErr");
  VERIFY(Name2IppStatusItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == (uint32_t)ippStsInplaceModeNotSupportedErr);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Операция с обработкой данных на месте пока не поддерживается.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "La operación in situ no se admite actualmente.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "当前不支持原地操作。");
#else
  VERIFY(descr == "The inplace operation is currently not supported.")
#endif

  // KRETURN
  SetTargetOS(AS_OS_ANY);
  name = Kreturn2Name(0xE00002C5);
  VERIFY(name == "kIOReturnExclusiveAccess");
  VERIFY(Name2KreturnItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xE00002C5);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Устройство уже открыто с монопольным доступом.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Se requiere acceso exclusivo, pero el dispositivo ya está abierto.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "存在独占访问冲突。");
#else
  VERIFY(descr == "exclusive access and")
#endif
  SetTargetOS(os);

  // BUGCHECK
  SetTargetOS(AS_OS_ANY);
  name = BugCheck2Name(0x000000EF);
  VERIFY(name == "CRITICAL_PROCESS_DIED");
  VERIFY(Name2BugCheckItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x000000EF);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Критически важный системный процесс неожиданно завершился.")
#elif defined(ALLSTAT_LANGUAGE_ES)
  VERIFY(descr == "Un proceso crítico del sistema terminó inesperadamente.")
#elif defined(ALLSTAT_LANGUAGE_ZH)
  VERIFY(descr == "关键系统进程意外终止。");
#else
  VERIFY(descr == "CRITICAL_PROCESS_DIED")
#endif
  SetTargetOS(os);

  printf("Test passed\n");
  return 0;
}
