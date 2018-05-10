---
title: Tipi standard | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- __time64_t
- _diskfree_t
- _CRT_DUMP_CLIENT
- _fsize_t
- __timeb64
- File
- __utimeb64
- jmp_buf
- __finddata64_t
- _wfinddata_t
- _finddata_t
- utimbuf64
- wint_t
- wctrans_t
- wctype_t
- _HFILE
- _secerr_handler_func
- clock_t
- fpos_t
- _dev_t
- time64_t
- wfinddata64_t
- stat64
- ldiv_t
- _EXCEPTION_POINTERS
- terminate_function
- size_t
- timeb64
- tm
- _HEAPINFO
- unexpected_function
- _CrtMemState
- _se_translator_function
- sig_atomic_t
- _CRT_REPORT_HOOK
- _complex
- _w_finddatai64_t
- _timeb
- _onexit_t
- _RTC_ErrorNumber
- lconv
- _PNH
- _off_t
- ptrdiff_t
- time_t
- _FPIEEE_RECORD
- _exception
- __w_finddata64_t
- __stat64
- _utimbuf
- __utimbuf64
- div_t
- _CRT_ALLOC_HOOK
- int8_t
- uint8_t
- int16_t
- uint16_t
- int32_t
- uint32_t
- int64_t
- int_least8_t
- uint_least8_t
- int_least16_t
- uint_least16_t
- int_least32_t
- uint_least32_t
- int_least64_t
- uint_least64_t
- int_fast8_t
- uint_fast8_t
- int_fast16_t
- uint_fast16_t
- int_fast32_t
- uint_fast32_t
- int_fast64_t
- uint_fast64_t
- intmax_t
- uintmax_t
dev_langs:
- C++
helpviewer_keywords:
- __timeb64 type
- tm type
- clock_t type
- intptr_t type
- diskfree_t type
- wctype_t type
- CRT_DUMP_CLIENT type
- sig_atomic_t type
- _PNH type
- time_t type
- wfinddata_t type
- timeb64
- CRT, standard types
- wint_t type
- _RTC_ErrorNumber type
- _diskfree_t type
- _dev_t type
- _wfinddata_t type
- HFILE type
- __utimbuf64 type
- div_t type
- _onexit_t type
- _secerr_handler_func type
- FPIEEE_RECORD type
- HEAPINFO type
- PNH type
- _CRT_ALLOC_HOOK type
- _se_translater_function type
- va_list type
- wctrans_t type
- secerr_handler_func type
- _locale_t type
- timeb type
- lconv type
- utimbuf type
- dev_t type
- unexpected_function typedef
- _complex type
- _off_t type
- off_t type
- RTC_ErrorNumber type
- _FPIEEE_RECORD type
- exception type
- _CRT_REPORT_HOOK type
- _HEAPINFO type
- ldiv_t type
- terminate_function type
- uintptr_t type
- _CRT_DUMP_CLIENT type
- _utimbuf type
- wfinddatai64_t type
- fpos_t type
- wchar_t type
- CRT_ALLOC_HOOK type
- _HFILE type
- __time64_t type
- _timeb type
- CrtMemState type
- __finddata64_t type
- _exception type
- stat type
- onexit_t type
- FILE constant
- _stat type
- finddata_t type
- __wfinddata64_t type
- ptrdiff_t type
- complex types
- _wfinddatai64_t type
- _EXCEPTION_POINTERS type
- jmp_buf type
- se_translater_function type
- size_t type
- EXCEPTION_POINTERS type
- __stat64 type
- _fsize_t type
- CRT_REPORT_HOOK type
- _finddata_t type
ms.assetid: 23312dd2-4a6a-4d70-9b48-2a5d0d8c9f28
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a66b351ba03ad6d8afb9d7423a2d1833eec8e2b7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="standard-types"></a>Tipi standard
La libreria di runtime Microsoft definisce i tipi standard e typedef seguenti.  
  
### <a name="fixed-width-integral-types-stdinth"></a>Tipi integrali a larghezza fissa (stdint.h)  
  
|nome|Tipo incorporato equivalente|  
|----------|-------------------------------|  
|int8\_t, uint8\_t|signed char, unsigned char|  
|int16\_t, uint16\_t|short, unsigned short|  
|int32\_t, uint32\_t|int, unsigned int|  
|int64\_t, uint64\_t|long long, long long senza segno|  
|int_least8_t, uint_least8_t|signed char, unsigned char|  
|int_least16_t, uint_least16_t|short, unsigned short|  
|int_least32_t, uint_least32_t|int, unsigned int|  
|int_least64_t, uint_least64_t|long long, long long senza segno|  
|int_fast8_t, uint_fast8_t|signed char, unsigned char|  
|int_fast16_t, uint_fast16_t|int, unsigned int|  
|int_fast32_t, uint_fast32_t|int, unsigned int|  
|int_fast64_t, uint_fast64_t|long long, long long senza segno|  
|intmax_t, uintmax_t|long long, long long senza segno|  
  
|Tipo|Descrizione|Dichiarato in|  
|----------|-----------------|-----------------|  
|`clock_t` (long)|Archivia valori temporali. Usato da [clock](../c-runtime-library/reference/clock.md).|TIME.H|  
|Struttura `_complex`|Archivia parti reali e immaginarie di numeri complessi. Usato da [_cabs](../c-runtime-library/reference/cabs.md).|MATH.H|  
|`_CRT_ALLOC_HOOK`|Tipo definito per la funzione hook definita dall'utente. Usato in [_CrtSetAllocHook](../c-runtime-library/reference/crtsetallochook.md).|CRTDBG.H|  
|`_CRT_DUMP_CLIENT`,<br /><br /> `_CRT_DUMP_CLIENT_M`|Tipo definito per una funzione di callback che verrà chiamata in [_CrtMemDumpAllObjectsSince](../c-runtime-library/reference/crtmemdumpallobjectssince.md).|CRTDBG.H|  
|Struttura `_CrtMemState`|Fornisce informazioni sullo stato corrente dell'heap di debug del runtime C.|CRTDBG.H|  
|`_CRT_REPORT_HOOK`,<br /><br /> `_CRT_REPORT_HOOKW`,<br /><br /> `_CRT_REPORT_HOOKW_M`|Tipo definito per una funzione di callback che verrà chiamata in [_CrtDbgReport](../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md).<br /><br /> I parametri di questa funzione sono: tipo di report, messaggio di output e valore restituito dalla funzione di callback.|CRTDBG.H|  
|`dev_t`, `_dev_t` short o unsigned integer|Rappresenta i gestori di dispositivo.|SYS\TYPES.H|  
|Struttura `_diskfree_t`|Contiene informazioni su un'unità disco. Usato da [_getdiskfree](../c-runtime-library/reference/getdiskfree.md)**.**|DOS.H e DIRECT.H|  
|Strutture `div_t`, `ldiv_t` e `lldiv_t`|Archiviano i valori restituiti rispettivamente da [div](../c-runtime-library/reference/div.md), [ldiv](../c-runtime-library/reference/ldiv-lldiv.md) e [lldiv](../c-runtime-library/reference/ldiv-lldiv.md).|STDLIB.H|  
|Tipo integer `errno_t`|Usato per un parametro o un tipo restituito della funzione che riguarda i codici di errore di `errno`.|STDDEF.H,<br /><br /> CRTDEFS.H|  
|Struttura `_exception`|Archivia informazioni sugli errori per [_matherr](../c-runtime-library/reference/matherr.md).|MATH.H|  
|`_EXCEPTION_POINTERS`|Contiene un record di eccezione. Per altre informazioni, vedere [EXCEPTION_POINTERS](http://msdn.microsoft.com/library/windows/desktop/ms679331).|FPIEEE.H|  
|Struttura `FILE`|Archivia informazioni sullo stato corrente del flusso. Usato in tutte le operazioni di I/O del flusso.|STDIO.H|  
|Strutture `_finddata_t`, `_wfinddata_t`, `_finddata32_t`, `_wfinddata32_t`, `_finddatai64_t`, `_wfinddatai64_t`, `__finddata64_t`, `__wfinddata64_t`, `__finddata32i64_t`, `__wfinddata32i64_t`, `__finddata64i32_t`, `__wfinddata64i32_t`|Archivia le informazioni sugli attributi di file restituite da [_findfirst, _wfindfirst e funzioni correlate](../c-runtime-library/reference/findfirst-functions.md) e da [_findnext, _wfindnext e funzioni correlate](../c-runtime-library/reference/findnext-functions.md). Per informazioni sui membri di struttura, vedere [Funzioni di ricerca dei nomi file](../c-runtime-library/filename-search-functions.md).|IO.H, WCHAR.H|  
|Struttura `_FPIEEE_RECORD`|Contiene informazioni relative a eccezioni a virgola mobile IEEE. Passata al gestore di trap definito dall'utente da [_fpieee_flt](../c-runtime-library/reference/fpieee-flt.md).|FPIEEE.H|  
|`fpos_t` (long integer, `__int64`, o struttura, a seconda della piattaforma di destinazione)|Usato da [fgetpos](../c-runtime-library/reference/fgetpos.md) e [fsetpos](../c-runtime-library/reference/fsetpos.md) per registrare informazioni per specificare in modo univoco ogni posizione all'interno di un file.|STDIO.H|  
|`_fsize_t` (unsigned long integer)|Usato per rappresentare le dimensioni di un file.|IO.H,<br /><br /> WCHAR.H|  
|Struttura `_HEAPINFO`|Contiene informazioni sulla voce dell'heap successiva per [_heapwalk](../c-runtime-library/reference/heapwalk.md).|MALLOC.H|  
|`_HFILE` (void *)|Gestore di file del sistema operativo.|CRTDBG.H|  
|`imaxdiv_t`|Il tipo del valore restituito dalla funzione [imaxdiv](../c-runtime-library/reference/imaxdiv.md), contenente sia il quoziente che il resto.|inttypes.h|  
|`ino_t`, `_ino_t` (unsigned short)|Per restituire informazioni sullo stato.|WCHAR.H|  
|`intmax_t`|Tipo signed integer in grado di rappresentare qualsiasi valore di qualsiasi tipo signed integer.|stdint.h|  
|`intptr_t` (long integer o `__int64`, a seconda della piattaforma di destinazione)|Salva un puntatore (o HANDLE) su entrambe le piattaforme Win32 e Win64.|STDDEF.H e altri file di inclusione|  
|Matrice `jmp_buf`|Usata da [setjmp](../c-runtime-library/reference/setjmp.md) e [longjmp](../c-runtime-library/reference/longjmp.md) per salvare e ripristinare l'ambiente del programma.|SETJMP.H|  
|Struttura `lconv`|Contiene regole di formattazione per valori numerici in paesi diversi. Usata da [localeconv](../c-runtime-library/reference/localeconv.md).|LOCALE.H|  
|`_LDOUBLE`,<br /><br /> `_LONGDOUBLE`,<br /><br /> `_LDBL12` (long double o una matrice di unsigned char)|Usare per rappresentare un valore long double.|STDLIB.H|  
|Struttura `_locale_t`|Archivia i valori delle impostazioni locali correnti. Usato in tutte le librerie di runtime C specifiche delle impostazioni locali.|CRTDEF.H|  
|`mbstate_t`|Tiene traccia dello stato di una conversione di caratteri multibyte.|WCHAR.H|  
|`off_t`, `_off_t` long integer|Rappresenta il valore di offset di file.|WCHAR.H, SYS\TYPES.H|  
|`_onexit_t`,<br /><br /> Puntatore `_onexit_m_t`|Restituito da [_onexit, _onexit_m](../c-runtime-library/reference/onexit-onexit-m.md).|STDLIB.H|  
|Puntatore a funzione `_PNH`|Tipo di argomento per [_set_new_handler](../c-runtime-library/reference/set-new-handler.md).|NEW.H|  
|`ptrdiff_t` (long integer o `__int64`, a seconda della piattaforma di destinazione)|Risultato della sottrazione di due puntatori.|CRTDEFS.H|  
|`_purecall_handler`,<br /><br /> `_purecall_handler_m`|Tipo definito per una funzione di callback che viene chiamata insieme a una funzione virtuale pura. Usato da [_get_purecall_handler, _set_purecall_handler](../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md). Una funzione `_purecall_handler` deve avere un tipo restituito void.|STDLIB.H|  
|Tipo `_RTC_error_fn` definito|Tipo definito per una funzione che gestirà i controlli degli errori di runtime. Usato in [_RTC_SetErrorFunc](../c-runtime-library/reference/rtc-seterrorfunc.md).|RTCAPI.H|  
|Tipo `_RTC_error_fnW` definito|Tipo definito per una funzione che gestirà i controlli degli errori di runtime. Usato in [_RTC_SetErrorFuncW](../c-runtime-library/reference/rtc-seterrorfuncw.md).|RTCAPI.H|  
|Enumerazione `_RTC_ErrorNumber`|Definisce le condizioni di errore per [_RTC_GetErrDesc](../c-runtime-library/reference/rtc-geterrdesc.md) e [_RTC_SetErrorType](../c-runtime-library/reference/rtc-seterrortype.md).|RTCAPI.H|  
|`_se_translator_function`|Tipo definito per una funzione di callback che converte un'eccezione. Il primo parametro è il codice di eccezione, il secondo è il record di eccezione. Usato da [_set_se_translator](../c-runtime-library/reference/set-se-translator.md).|EH.H|  
|Tipo integer `sig_atomic_t`|Tipo di oggetto che può essere modificato come entità atomica, anche in presenza di interruzioni asincrone. Usato con [signal](../c-runtime-library/reference/signal.md).|SIGNAL.H|  
|`size_t` (unsigned __int64 o unsigned integer, a seconda della piattaforma di destinazione)|Risultato dell'operatore `sizeof`.|CRTDEFS.H e altri file di inclusione|  
|Struttura `_stat`|Contiene informazioni sullo stato dei file restituite da [_stat](../c-runtime-library/reference/stat-functions.md) e [_fstat](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md).|SYS\STAT.H|  
|Struttura `__stat64`|Contiene informazioni sullo stato dei file restituite da [_fstat64](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md), [_stat64](../c-runtime-library/reference/stat-functions.md) e[ _wstat64](../c-runtime-library/reference/stat-functions.md).|SYS\STAT.H|  
|Struttura `_stati64`|Contiene informazioni sullo stato dei file restituite da [_fstati64](../c-runtime-library/reference/fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md), [_stati64](../c-runtime-library/reference/stat-functions.md) e [_wstati64](../c-runtime-library/reference/stat-functions.md).|SYS\STAT.H|  
|Tipo `terminate_function` definito|Tipo definito per una funzione di callback che viene chiamato insieme a [terminate](../c-runtime-library/reference/terminate-crt.md). Usato da [set_terminate](../c-runtime-library/reference/set-terminate-crt.md).|EH.H|  
|`time_t` (__int64 o long integer)|Rappresenta i valori dell'ora in [mktime](../c-runtime-library/reference/mktime-mktime32-mktime64.md), [time](../c-runtime-library/reference/time-time32-time64.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md) and [gmtime, _gmtime32, _gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md). Numero di secondi a partire dal 1° gennaio 1970, 0:00 UTC. Se _USE_32BIT_TIME_T è definito, `time_t` è un tipo long integer. Se non è definito, è un integer a 64 bit.|TIME.H,<br /><br /> SYS\STAT.H,<br /><br /> SYS\TIMEB.H|  
|`__time32_t` (long integer)|Rappresenta i valori dell'ora in [mktime, _mktime32, _mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md), [ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md), [gmtime, _gmtime32, _gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md) e [localtime, _localtime32, _localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md).|CRTDEFS.H, SYS\STAT.H,<br /><br /> SYS\TIMEB.H|  
|`__time64_t` (`__int64`)|Rappresenta i valori dell'ora in [mktime, _mktime32, _mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md), [_ctime64, _wctime64](../c-runtime-library/reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md), [ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../c-runtime-library/reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md), [_gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md), [_localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md) e [_time64](../c-runtime-library/reference/time-time32-time64.md).|TIME.H,<br /><br /> SYS\STAT.H,<br /><br /> SYS\TIMEB.H|  
|Struttura `_timeb`|Usato da [_ftime](../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [_ftime_s, _ftime32_s, _ftime64_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md) per archiviare l'ora di sistema corrente.|SYS\TIMEB.H|  
|Struttura `__timeb32`|Usato da [_ftime, _ftime32, _ftime64](../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [_ftime_s, _ftime32_s, _ftime64_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md) per archiviare l'ora di sistema corrente.|SYS\TIMEB.H|  
|Struttura `__timeb64`|Usato da [_ftime64](../c-runtime-library/reference/ftime-ftime32-ftime64.md) e [_ftime_s, _ftime32_s, _ftime64_s](../c-runtime-library/reference/ftime-s-ftime32-s-ftime64-s.md) per archiviare l'ora di sistema corrente.|SYS\TIMEB.H|  
|Struttura `tm`|Usato da [asctime, _wasctime](../c-runtime-library/reference/asctime-wasctime.md), [asctime_s, _wasctime_s](../c-runtime-library/reference/asctime-s-wasctime-s.md), [gmtime, _gmtime32, _gmtime64](../c-runtime-library/reference/gmtime-gmtime32-gmtime64.md), [gmtime_s, _gmtime32_s, _gmtime64_s](../c-runtime-library/reference/gmtime-s-gmtime32-s-gmtime64-s.md), [localtime, _localtime32, _localtime64](../c-runtime-library/reference/localtime-localtime32-localtime64.md), [localtime_s, _localtime32_s, _localtime64_s](../c-runtime-library/reference/localtime-s-localtime32-s-localtime64-s.md), [mktime, _mktime32, _mktime64](../c-runtime-library/reference/mktime-mktime32-mktime64.md) e [strftime, wcsftime, _strftime_l, _wcsftime_l](../c-runtime-library/reference/strftime-wcsftime-strftime-l-wcsftime-l.md) per archiviare e recuperare le informazioni sull'ora.|TIME.H|  
|`uintmax_t`|Tipo unsigned integer in grado di rappresentare qualsiasi valore di qualsiasi tipo unsigned integer.|stdint.h|  
|`uintptr_t` (long integer o `__int64`, a seconda della piattaforma di destinazione)|Versione unsigned integer o unsigned __int64 di `intptr_t`.|STDDEF.H e altri file di inclusione|  
|`unexpected_function`|Tipo definito per una funzione di callback che viene chiamata insieme a [unexpected](../c-runtime-library/reference/unexpected-crt.md). Usato da [set_unexpected](../c-runtime-library/reference/set-unexpected-crt.md).|EH.H|  
|Struttura `_utimbuf`|Archivia le ore di accesso e modifica dei file usate da [_utime, _wutime](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) e [_futime, _futime32, _futime64](../c-runtime-library/reference/futime-futime32-futime64.md) per cambiare le date di modifica dei file.|SYS\UTIME.H|  
|Struttura `_utimbuf32`|Archivia le ore di accesso e modifica dei file usate da [_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) and [_futime, _futime32, _futime64](../c-runtime-library/reference/futime-futime32-futime64.md) per cambiare le date di modifica dei file.|SYS\UTIME.H|  
|Struttura `__utimbuf64`|Usato da [_utime64, _wutime64](../c-runtime-library/reference/utime-utime32-utime64-wutime-wutime32-wutime64.md) e [_futime64](../c-runtime-library/reference/futime-futime32-futime64.md) per archiviare l'ora corrente.|SYS\UTIME.H|  
|Struttura `va_list`|Usato per contenere le informazioni richieste dalle macro [va_arg](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md) e [va_end](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md). La funzione chiamata dichiara variabili di tipo `va_list` che possono essere passate come argomenti a un'altra funzione.|STDARG.H,<br /><br /> CRTDEFS.H|  
|Carattere wide `wchar_t`|Utile per la scrittura di programmi portabili per i mercati internazionali.|STDDEF.H, STDLIB.H,<br /><br /> CRTDEFS.H,<br /><br /> SYS\STAT.H|  
|Tipo integer `wctrans_t`|Rappresenta i mapping dei caratteri specifici delle impostazioni locali.|WCTYPE.H|  
|Tipo integer `wctype_t`|Può rappresentare tutti i caratteri di qualsiasi set di caratteri di lingua.|WCHAR.H,<br /><br /> CRTDEFS.H|  
|Tipo integer `wint_t`|Tipo di oggetto dati che può contenere qualsiasi carattere wide o valore di fine file wide.|WCHAR.H,<br /><br /> CRTDEFS.H|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti della libreria di runtime di C](../c-runtime-library/c-run-time-library-reference.md)
