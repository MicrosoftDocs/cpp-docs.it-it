---
title: Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)
description: Guida di riferimento alle funzioni CRT non supportate nelle app della piattaforma Windows universale.
ms.date: 04/16/2020
ms.assetid: cbfc957d-6c60-48f4-97e3-1ed8526743b4
ms.openlocfilehash: a93da415d36e5eccd8cad745fd72e1914ad23ed1
ms.sourcegitcommit: 9266fc76ac2e872e35a208b4249660dfdfc87cba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/16/2020
ms.locfileid: "81480801"
---
# <a name="crt-functions-not-supported-in-universal-windows-platform-apps"></a>Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)

Molte funzioni di runtime C (CRT) non sono disponibili quando si compilano app UWP (Universal Windows Platform). A volte sono disponibili soluzioni alternative: ad esempio, puoi usare le API di Windows Runtime o Win32. In altri casi, le funzioni CRT sono state vietate perché le funzionalità corrispondenti o le API di supporto non sono applicabili alle app UWP. Per cercare un metodo alternativo supportato per Windows Runtime, vedi Alternative alle API di [Windows nelle app UWP.](/uwp/win32-and-com/alternatives-to-windows-apis-uwp)

Nella tabella seguente sono elencate le funzioni CRT che non sono disponibili quando si creano app UWP. Indica eventuali soluzioni alternative applicabili.

## <a name="unsupported-crt-functions"></a>Funzioni CRT non supportate

||||
|-|-|-|
|_beep _sleep _seterrormode|Queste funzioni sono obsolete nelle precedenti versioni di CRT. Inoltre, le API Win32 corrispondenti non sono disponibili per le app UWP.|Nessuna soluzione alternativa.|
|chdir _chdrive getcwd|Queste funzioni sono obsolete o non sono thread-safe.|Usare _chdir, _getcwd e le funzioni correlate.|
|_cgets _cgets_s _cgetws _cgetws_s _cprintf _cprintf_l _cprintf_p _cprintf_p_l _cprintf_s _cprintf_s_l _cputs _cputws _cscanf _cscanf_l _cscanf_s _cscanf_s_l _cwait _cwprintf _cwprintf_l _cwprintf_p _cwprintf_p_l _cwprintf_s _cwprintf_s_l _cwscanf _cwscanf_l _cwscanf_s _cwscanf_s_l _vcprintf _vcprintf_l _vcprintf_p _vcprintf_p_l _vcprintf_s _vcprintf_s_l _vcwprintf _vcwprintf_l _vcwprintf_p _vcwprintf_p_l _vcwprintf_s _vcwprintf_s_l _getch _getch_nolock _getche _getche_nolock _getwch _getwch_nolock _getwche _getwche_nolock _putch _putch_nolock _putwch _putwch_nolock _ungetch _ungetch_nolock _ungetwch _ungetwch_nolock _kbhit kbhit putch cgets cprintf cputs cscanf cwait getch getche ungetch|Queste funzioni vengono usate per leggere e scrivere direttamente dalla e nella console. Le app UWP sono solo di tipo GUI e non supportano la console.|Nessuna soluzione alternativa.|
|getpid _getpid | Queste funzioni sono obsolete.|Usare l'API Win32 `GetCurrentProcessId`.|
|_getdiskfree|Non disponibile.|Usare l'API Win32 `GetDiskFreeSpaceExW`.|
|_getdrive _getdrives|L'API corrispondente non è disponibile per le app UWP.|Nessuna soluzione alternativa.|
|_inp _inpd _inpw _outp _outpd _outpw inp inpd inpw outp outpd outpw|La porta I/O non è supportata nelle app UWP.|Nessuna soluzione alternativa.|
|_ismbcalnum _ismbcalnum_l _ismbcalpha _ismbcalpha_l _ismbcdigit _ismbcdigit_l _ismbcgraph _ismbcgraph_l _ismbchira _ismbchira_l _ismbckata _ismbckata_l _ismbcl0 _ismbcl0_l _ismbcl1 _ismbcl1_l _ismbcl2 _ismbcl2_l _ismbclegal _ismbclegal_l _ismbclower _ismbclower_l _ismbcprint _ismbcprint_l _ismbcpunct _ismbcpunct_l _ismbcspace _ismbcspace_l _ismbcsymbol _ismbcsymbol_l _ismbcupper _ismbcupper_l _mbbtombc _mbbtombc_l _mbbtype _mbbtype_l _mbccpy _mbccpy_l _mbccpy_s _mbccpy_s_l _mbcjistojms _mbcjistojms_l _mbcjmstojis _mbcjmstojis_l _mbclen _mbclen_l _mbctohira _mbctohira_l _mbctokata _mbctokata_l _mbctolower _mbctolower_l _mbctombb _mbctombb_l _mbctoupper _mbctoupper_l _mbsbtype _mbsbtype_l _mbscat _mbscat_l _mbscat_s _mbscat_s_l _mbschr _mbschr_l _mbscmp _mbscmp_l _mbscoll _mbscoll_l _mbscpy _mbscpy_l _mbscpy_s _mbscpy_s_l _mbscspn _mbscspn_l _mbsdec _mbsdec_l _mbsicmp _mbsicmp_l _mbsicoll _mbsicoll_l _mbsinc _mbsinc_l _mbslen _mbslen_l _mbslwr _mbslwr_l _mbslwr_s _mbslwr_s_l _mbsnbcat _mbsnbcat_l _mbsnbcat_s _mbsnbcat_s_l _mbsnbcmp _mbsnbcmp_l _mbsnbcnt _mbsnbcnt_l _mbsnbcoll _mbsnbcoll_l _mbsnbcpy _mbsnbcpy_l _mbsnbcpy_s _mbsnbcpy_s_l _mbsnbicmp _mbsnbicmp_l _mbsnbicoll _mbsnbicoll_l _mbsnbset _mbsnbset_l _mbsnbset_s _mbsnbset_s_l _mbsncat _mbsncat_l _mbsncat_s _mbsncat_s_l _mbsnccnt _mbsnccnt_l _mbsncmp _mbsncmp_l _mbsncoll _mbsncoll_l _mbsncpy _mbsncpy_l _mbsncpy_s _mbsncpy_s_l _mbsnextc _mbsnextc_l _mbsnicmp _mbsnicmp_l _mbsnicoll _mbsnicoll_l _mbsninc _mbsninc_l _mbsnlen _mbsnlen_l _mbsnset _mbsnset_l _mbsnset_s _mbsnset_s_l _mbspbrk _mbspbrk_l _mbsrchr _mbsrchr_l _mbsrev _mbsrev_l _mbsset _mbsset_l _mbsset_s _mbsset_s_l _mbsspn _mbsspn_l _mbsspnp _mbsspnp_l _mbsstr _mbsstr_l _mbstok _mbstok_l _mbstok_s _mbstok_s_l _mbsupr _mbsupr_l _mbsupr_s _mbsupr_s_l is_wctype|Le stringhe multibyte non sono supportate nelle app UWP.|Usare invece stringhe Unicode.|
|_pclose _pipe _popen _wpopen|La funzionalità della pipe non è disponibile per le app UWP.|Nessuna soluzione alternativa.|
|_resetstkoflw|Le API Win32 di supporto non sono disponibili per le app UWP.|Nessuna soluzione alternativa.|
|_getsystime _setsystime|Queste API sono obsolete nelle precedenti versioni di CRT. Inoltre, l'utente non può impostare l'ora di sistema in un'app UWP a causa della mancanza di autorizzazioni.|Per ottenere solo l'ora di sistema, usa l'API Win32 `GetSystemTime`. L'ora di sistema non può essere impostata.|
|_environ _putenv _putenv_s _searchenv _searchenv_s _dupenv_s _wputenv _wputenv_s _wsearchenv getenv getenv_s putenv _wdupenv_s _wenviron _wgetenv _wgetenv_s _wsearchenv_s tzset|Le variabili di ambiente non sono disponibili per le app UWP.|Nessuna soluzione alternativa. Per impostare il fuso orario, usare _tzset.|
|_loaddll _getdllprocaddr _unloaddll|Queste funzioni sono obsolete nelle precedenti versioni di CRT. Inoltre, un utente non può caricare le DLL ad eccezione di quelle nello stesso pacchetto dell'applicazione.|Usare le API Win32 `LoadPackagedLibrary`, `GetProcAddress`e `FreeLibrary` per caricare e usare le DLL disponibili nel pacchetto.|
|_wexecl _wexecle _wexeclp _wexeclpe _wexecv _wexecve _wexecvp _wexecvpe _execl _execle _execlp _execlpe _execv _execve _execvp _execvpe _spawnl _spawnle _spawnlp _spawnlpe _spawnv _spawnve _spawnvp _spawnvpe _wspawnl _wspawnle _wspawnlp _wspawnlpe _wspawnv _wspawnve _wspawnvp _wspawnvpe _wsystem execl execle execlp execlpe execv execve execvp execvpe spawnl spawnle spawnlp spawnlpe spawnv spawnve spawnvp spawnvpe system|La funzionalità non è disponibile nelle app UWP. Un'app UWP non può richiamare un'altra app UWP o un'app desktop.|Nessuna soluzione alternativa.|
|_heapwalk _heapadd _heapchk _heapset _heapused|Queste funzioni vengono in genere usate per l'interazione con l'heap. Tuttavia, le API Win32 corrispondenti non sono supportate nelle app UWP. Inoltre le app non possono più creare o usare heap privati.|Nessuna soluzione alternativa. Tuttavia, la funzione `_heapwalk` è disponibile in CRT DEBUG solo a scopo di debug. Queste funzioni non possono essere usate nelle app caricate in Microsoft Store.|

Le seguenti funzioni sono disponibili in CRT per le app UWP. Tuttavia, usarli solo quando non puoi usare le API Win32 o Windows Runtime corrispondenti, ad esempio quando si esegue il porting di basi di codice di grandi dimensioni:However, use them only when you can't use the corresponding Win32 or Windows Runtime APIs, such as when you're porting large code bases:

|||
|-|-|
|Funzioni stringa a byte singolo, ad esempio `strcat`, `strcpy`, `strlwr`e così via.|Rendi le tue app UWP strettamente Unicode perché tutte le API Win32 e le API di Windows Runtime esposte usano solo set di caratteri Unicode.  Le funzioni a byte singolo sono state lasciate per il porting di basi di codice di grandi dimensioni, ma in caso contrario devono essere evitate. Quando possibile, devono essere utilizzate le funzioni wide char corrispondenti.|
|Funzioni I/O di flusso e file di basso livello, ad esempio `fopen`, `open`e così via.|Queste funzioni sono sincrone, che non è consigliato per le app UWP. Nelle app UWP usare API asincrone per aprire, leggere e scrivere nei file, in modo da evitare il blocco del thread UI. Esempi di tali API sono quelle incluse nella classe `Windows::Storage::FileIO` .|

## <a name="windows-8x-store-apps-and-windows-phone-8x-apps"></a>App di Windows 8.x Store e app di Windows Phone 8.x

Sia le API menzionate in precedenza che le API seguenti non sono disponibili nelle app di Windows 8.x Store e Windows Phone 8.x.

||||
|-|-|-|
|_beginthread _beginthreadex _endthread _endthreadex|Le API Win32 di threading non sono disponibili nelle app di Windows 8.x Store.|In sostituzione usare `Windows Runtime Windows::System::Threading::ThreadPool` o `concurrency::task` .|
|_chdir _wchdir _getcwd _getdcwd _wgetcwd _wgetdcwd|Il concetto di una directory di lavoro non è applicabile alle app di Windows 8. x Store.|Usare invece percorsi completi.|
|_isleadbyte_l _ismbbalnum, _ismbbalnum_l, _ismbbalpha, _ismbbalpha _ismbbalpha_l _ismbbgraph _ismbbgraph_l _ismbbkalnum _ismbbkalnum_l _ismbbkana _ismbbkana_l _ismbbkprint _ismbbkprint_l _ismbbkpunct _ismbbkpunct_l _ismbblead _ismbblead_l _ismbbprint _ismbbprint_l _ismbbpunct _ismbbpunct_l _ismbbtrail _ismbbtrail_l _ismbslead _ismbslead_l _ismbstrail _ismbstrail_l _mbsdup isleadbyte|Le stringhe multibyte non sono supportate nelle app di Windows 8.x Store.|Usare invece stringhe Unicode.|
|_tzset|Le variabili di ambiente non sono disponibili per le app di Windows 8.x Store.|Nessuna soluzione alternativa.|
|_get_heap_handle, _heapmin|Le API Win 32 corrispondenti non sono supportate nelle app di Windows 8.x Store. Inoltre le app non possono più creare heap privati.|Nessuna soluzione alternativa. Tuttavia, la funzione `_get_heap_handle` è disponibile in CRT DEBUG solo a scopo di debug.|
