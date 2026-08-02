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
#else
  VERIFY(descr == "The Task Scheduler service is too busy to handle your request. Please try again later.");
#endif

  name = "VSS_E_ASRERROR_DISK_ASSIGNMENT_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == VSS_E_ASRERROR_DISK_ASSIGNMENT_FAILED);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "На компьютере недостаточно дисков либо один или несколько дисков слишком малы. Добавьте или замените диски, чтобы они соответствовали дискам из резервной копии, и повторите восстановление.");
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
#else
  VERIFY(descr == "IO error occured during format.");
#endif

  name = "VDS_E_CLUSTER_SIZE_TOO_BIG";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8004242F);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Размер кластера слишком велик.");
#else
  VERIFY(descr == "The cluster size is too big.");
#endif

  name = "FSRM_E_EXPIRATION_VOLUME_NOT_NTFS";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80045399);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Каталог истечения срока хранения должен находиться на томе NTFS.");
#else
  VERIFY(descr == "The expiration directory must be on a volume formatted with the NTFS file system.");
#endif

  name = "XACT_E_PUSH_COMM_FAILURE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8004D02A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "MSDTC не удалось передать транзакцию целевому диспетчеру из-за проблем связи. Возможные причины: брандмауэр не разрешает процесс MSDTC, компьютеры не находят друг друга по именам NetBIOS либо на одном из диспетчеров отключены сетевые транзакции.");
#else
  VERIFY(descr == "The MSDTC transaction manager was unable to push the transaction to the destination transaction manager due to communication problems. Possible causes are: a firewall is present and it doesn't have an exception for the MSDTC process, the two machines cannot find each other by their NetBIOS names, or the support for network transactions is not enabled for one of the two transaction managers.");
#endif

  name = "CO_E_ACTIVATIONFAILED_TIMEOUT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8004E024);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось активировать COM+ за отведённое время.");
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
#else
  VERIFY(descr == "BitLocker Drive Encryption cannot be applied to this drive because the Group Policy setting for Enhanced Boot Configuration Data contains invalid data. Please have your system administrator resolve this invalid configuration before attempting to enable BitLocker.");
#endif

  name = "FVE_E_EDRIVE_INCOMPATIBLE_FIRMWARE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x803100BF);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Микропрограмма этого компьютера не поддерживает аппаратное шифрование.");
#else
  VERIFY(descr == "This PC's firmware is not capable of supporting hardware encryption.");
#endif

  name = "WS_E_PROXY_REQUIRES_NTLM_AUTH";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x803D001A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "HTTP-прокси требует проверку подлинности по схеме NTLM.");
#else
  VERIFY(descr == "The HTTP proxy server requires HTTP authentication scheme 'NTLM'.");
#endif

  name = "WPN_E_CLOUD_SERVICE_UNAVAILABLE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x803E011B);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Платформа уведомлений не может подключиться к облачной службе уведомлений.");
#else
  VERIFY(descr == "The notification platform is unable to connect to the cloud notification service.");
#endif

  name = "PEER_E_INVALID_GRAPH";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80630010);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Дескриптор графа недействителен.");
#else
  VERIFY(descr == "The graph handle is invalid.");
#endif

  name = "STATEREPOSITORY_E_CONCURRENCY_LOCKING_FAILURE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80670001);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Сбой оптимистической блокировки: данные нельзя обновить, если они изменились после чтения.");
#else
  VERIFY(descr == "Optimistic locking failure. Data cannot be updated if it has changed since it was read.");
#endif

  name = "E_IMAPI_ERASE_TOOK_LONGER_THAN_ONE_HOUR";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80AA0906);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Устройство не завершило стирание в течение часа. Для восстановления работы может потребоваться перезапуск питания, извлечение носителя или другое ручное действие.");
#else
  VERIFY(descr == "The drive did not complete the erase in one hour.  The drive may require a power cycle, media removal, or other manual intervention to resume proper operation.");
#endif

  name = "RTC_E_SIP_PARSE_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x80EE0004);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось разобрать SIP-сообщение.");
#else
  VERIFY(descr == "Parsing SIP failed");
#endif

  name = "EVT_WDSMCS_W_CP_DLL_LOAD_FAILED_NOT_CRITICAL";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8121025A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Поставщик содержимого %1 не смог инициализироваться, но помечен как некритический. Сервер многоадресной передачи WDS продолжит запуск.%n %n Сведения об ошибке: %2 %n");
#else
  VERIFY(descr == "The Content Provider %1 failed to initialize. The provider is marked as non-critical. WDS Multicast server will continue to start.%n %n Error Information: %2 %n");
#endif

  name = "SQLITE_E_CONSTRAINT_FOREIGNKEY";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x87AF0313);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Нарушено ограничение внешнего ключа.");
#else
  VERIFY(descr == "SQLITE_CONSTRAINT_FOREIGNKEY");
#endif

  name = "UTC_E_TRACE_BUFFER_LIMIT_EXCEEDED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x87C51027);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Профилю трассировки требуется больше памяти, чем доступно для сбора трассы.");
#else
  VERIFY(descr == "The trace profile needs more memory than is available for tracing");
#endif

  name = "E_SYNCENGINE_FILE_SIZE_OVER_LIMIT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8802B001);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Размер файла превышает предел, поддерживаемый механизмом синхронизации.");
#else
  VERIFY(descr == "The file size is larger than supported by the sync engine.");
#endif

  name = "DXGI_ERROR_DEVICE_HUNG";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x887A0006);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "GPU больше не отвечает на команды, вероятнее всего из-за недопустимой команды вызывающего приложения.");
#else
  VERIFY(descr == "The GPU will not respond to more commands, most likely because of an invalid command passed by the calling application.");
#endif

  name = "MILERR_NO_HARDWARE_DEVICE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8898008D);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для этой операции недоступно аппаратное устройство визуализации.");
#else
  VERIFY(descr == "No HW rendering device is available for this operation.");
#endif


  name = "MILERR_NEED_RECREATE_AND_PRESENT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8898008E);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Произошла потенциально устранимая ошибка показа. Вызывающая сторона должна заново создать целевой объект, повторно отрисовать весь кадр и снова выполнить показ. Известные причины: внутренняя ошибка драйвера D3D, возврат D3D E_FAIL, неизвестная ошибка либо слишком быстрое изменение размера, из-за которого DWM и D3D рассинхронизировались.");
#else
  VERIFY(descr == "There has been a presentation error that may be recoverable. The caller needs to recreate, rerender the entire frame, and reattempt present. There are two known case for this: 1) D3D Driver Internal error 2) D3D E_FAIL 2a) Unknown root cause b) When resizing too quickly for DWM and D3D stay in sync");
#endif

  name = "WINCODEC_ERR_BADIMAGE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x88982F60);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Изображение не распознано.");
#else
  VERIFY(descr == "The image is unrecognized.");
#endif

  name = "DWRITE_E_FLOWDIRECTIONCONFLICTS";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0x8898500B);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Направление потока конфликтует с направлением чтения: они должны быть взаимно перпендикулярны.");
#else
  VERIFY(descr == "The flow direction conflicts with the reading direction. They must be perpendicular to each other.");
#endif

  name = "MSG_CI_MASTER_MERGE_CANT_RESTART";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC000100A);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "%1Не удалось повторно запустить основное слияние каталога %2 из-за ошибки %3.");
#else
  VERIFY(descr == "%1A master merge cannot be re-started for catalog %2 due to error %3.");
#endif

  name = "SL_E_VL_NOT_ENOUGH_COUNT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC004F038);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Продукт невозможно активировать: служба управления ключами (KMS) сообщила недостаточное число компьютеров. Обратитесь к системному администратору.");
#else
  VERIFY(descr == "The Software Licensing Service reported that the product could not be activated. The count reported by your Key Management Service (KMS) is insufficient. Please contact your system administrator.");
#endif

  name = "SL_E_VL_INVALID_TIMESTAMP";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC004F06C);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Служба лицензирования программного обеспечения не смогла активировать продукт: служба управления ключами KMS признала метку времени запроса недействительной.");
#else
  VERIFY(descr == "The Software Licensing Service reported that the product could not be activated. The Key Management Service (KMS) determined that the request timestamp is invalid.");
#endif

  name = "NS_E_INVALID_INDEX";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D0011);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Индекс %1 недействителен.%0");
#else
  VERIFY(descr == "Index %1 is invalid.%0");
#endif

  name = "NS_E_WMG_INVALID_COPP_CERTIFICATE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1051);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Windows Media Player не может воспроизвести защищённый файл: не удалось подтвердить безопасность соединения с видеокартой. Обновите драйвер видеокарты.%0");
#else
  VERIFY(descr == "Windows Media Player cannot play the protected file. The Player cannot verify that the connection to your video card is secure. Try installing an updated device driver for your video card.%0");
#endif

  name = "NS_E_WMPCORE_CODEC_NOT_FOUND";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D109B);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Windows Media Player не может воспроизвести файл: один или несколько необходимых кодеков не найдены.%0");
#else
  VERIFY(descr == "Windows Media Player cannot play the file. One or more codecs required to play the file could not be found.%0");
#endif

  name = "NS_E_DVD_COPY_PROTECT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1163);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Windows Media Player не может воспроизвести DVD из-за ошибки цифровой защиты копирования между дисководом, декодером и видеокартой. Обновите драйвер видеокарты.%0");
#else
  VERIFY(descr == "Windows Media Player cannot play this DVD because there is a problem with digital copy protection between your DVD drive, decoder, and video card. Try installing an updated driver for your video card.%0");
#endif

  name = "NS_E_WMP_DRM_NO_SECURE_CLOCK";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D11DB);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Синхронизация невозможна, поскольку внутренние часы устройства настроены неправильно. Подключитесь к Интернету, включите настройку часов устройства на вкладке «Конфиденциальность» и повторите синхронизацию.%0");
#else
  VERIFY(descr == "It is not possible to sync because this device's internal clock is not set correctly. To set the clock, select the option to set the device clock on the Privacy tab of the Options dialog box, connect to the Internet, and then sync the device again. For additional assistance, click Web Help.%0");
#endif

  name = "NS_E_NAMESPACE_WRONG_SECURITY";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1397);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Нельзя сохранить значение в узле пространства имён с другим типом безопасности.%0");
#else
  VERIFY(descr == "It is not possible to store a value in a namespace node that has a different security type.%0");
#endif

  name = "NS_E_INVALID_VIDEO_WIDTH_FOR_INTERLACED_ENCODING";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D1BE8);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "При сохранении чересстрочной развёртки ширина выходного видео должна быть кратна четырём.%0");
#else
  VERIFY(descr == "When you choose to maintain the interlacing in your video, the output video size must be a multiple of 4.%0");
#endif

  name = "NS_E_DRM_POLICY_DISABLE_ONLINE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D2762);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "DRM Windows Media не может выполнить действие, поскольку администратор компьютера или сети включил групповую политику, запрещающую доступ DRM к Интернету. Обратитесь к администратору.%0");
#else
  VERIFY(descr == "The Windows Media Digital Rights Management system cannot perform the requested action because your computer or network administrator has enabled the group policy Prevent Windows Media DRM Internet Access. For assistance, contact your administrator.%0");
#endif

  name = "NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D2773);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось получить значение защищённых часов устройства. Обратитесь в службу поддержки Microsoft.%0.");
#else
  VERIFY(descr == "A problem has occurred in obtaining the device's secure clock. Contact Microsoft product support.%0.");
#endif

  name = "MF_E_PLATFORM_NOT_INITIALIZED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D36B0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Платформа не инициализирована. Вызовите MFStartup().%0");
#else
  VERIFY(descr == "Platform not initialized. Please call MFStartup().%0");
#endif

  name = "MF_E_NET_UDP_BLOCKED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D4292);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Одно из сетевых устройств блокирует UDP-трафик.%0");
#else
  VERIFY(descr == "A device in the network is blocking UDP traffic.%0");
#endif

  name = "MF_E_TRANSFORM_NEED_MORE_INPUT";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D6D72);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Преобразование не может сформировать выходные данные, пока не получит дополнительные входные образцы.%0");
#else
  VERIFY(descr == "The transform cannot produce output until it gets more input samples.%0");
#endif

  name = "MF_E_HDCP_AUTHENTICATION_FAILURE";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00D7188);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось проверить подлинность соединения HDCP.%0");
#else
  VERIFY(descr == "Authentication of the HDCP link failed.%0");
#endif

  name = "MF_E_MEDIA_EXTENSION_APPSERVICE_CONNECTION_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00DB3B0);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось подключиться к службе приложения, предоставляющей расширение мультимедиа.%0");
#else
  VERIFY(descr == "Connection to app service providing a media extension failed.%0");
#endif

  name = "MQ_ERROR_QUEUE_NOT_FOUND";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC00E0003);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Очередь не существует либо недостаточно прав для выполнения операции.");
#else
  VERIFY(descr == "The queue does not exist or you do not have sufficient permissions to perform the operation.");
#endif

  name = "ERROR_VMCOMPUTE_INVALID_JSON";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC037010D);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Документ JSON недопустим.");
#else
  VERIFY(descr == "The JSON document is invalid.");
#endif

  name = "IMAPI_E_INVALID_PARAM";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC0AAB101);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Для параметра «%1!ls!» указано недопустимое значение.");
#else
  VERIFY(descr == "The value specified for parameter '%1!ls!' is not valid.");
#endif

  name = "EVT_WDSMCS_E_PARAMETERS_READ_FAILED";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC1210201);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "При чтении конфигурации произошла ошибка. Сервер многоадресной передачи Windows Deployment Services не будет обрабатывать входящие запросы клиентов.%n %n Сведения об ошибке: %1 %n");
#else
  VERIFY(descr == "An error occurred while trying to read the configuration information. The  Windows Deployment Services multicast server will not process incoming  client requests. %n %n Error Information: %1 %n");
#endif

  name = "hrCouldNotConnect";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC7FF0007);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Не удалось выполнить резервное копирование: отсутствует соединение с указанным сервером резервного копирования либо не запущена копируемая служба.");
#else
  VERIFY(descr == "Unable to perform the backup. Either you are not connected to the specified backup server or the service you are trying to backup is not running.");
#endif

  name = "hrLogCorrupted";
  VERIFY(Name2HresultItem(name.c_str(), &item) == 0);
  VERIFY(item.Code == 0xC800073C);
  descr = GetDescriptionStr(item.Description);
#if defined(ALLSTAT_LANGUAGE_RU)
  VERIFY(descr == "Файлы журнала базы данных повреждены.");
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
#else
  VERIFY(descr == "The license has been revoked for this user.")
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
#else
  VERIFY(descr == "CRITICAL_PROCESS_DIED")
#endif
  SetTargetOS(os);

  printf("Test passed\n");
  return 0;
}
