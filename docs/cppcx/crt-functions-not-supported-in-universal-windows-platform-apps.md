---
title: "Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: cbfc957d-6c60-48f4-97e3-1ed8526743b4
caps.latest.revision: 15
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 15
---
# Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)
Molte funzioni di runtime C \(CRT\) non sono disponibili per lo sviluppo di app della piattaforma UWP \(Universal Windows Platform\). In alcuni casi, sono disponibili soluzioni alternative, ad esempio, è possibile usare [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] o le API Win32. Tuttavia, in altri casi, le funzioni CRT sono state escluse perché le funzionalità corrispondenti o le API di supporto non sono applicabili alle app UWP.  
  
 La tabella seguente elenca le funzioni CRT non disponibili quando si sviluppano app UWP, con l'indicazione delle eventuali soluzioni alternative applicabili.  
  
## Funzioni CRT non supportate  
  
||||  
|-|-|-|  
|\_beep \_sleep \_seterrormode|Queste funzioni sono obsolete nelle precedenti versioni di CRT. Inoltre, le API Win32 corrispondenti non sono disponibili per le app UWP.|Nessuna soluzione alternativa.|  
|chdir \_chdrive getcwd|Queste funzioni sono obsolete o non sono thread\-safe.|Usare \_chdir, \_getcwd e le funzioni correlate.|  
|\_cgets \_cgets\_s \_cgetws \_cgetws\_s \_cprintf \_cprintf\_l \_cprintf\_p \_cprintf\_p\_l \_cprintf\_s \_cprintf\_s\_l \_cputs \_cputws \_cscanf \_cscanf\_l \_cscanf\_s \_cscanf\_s\_l \_cwait \_cwprintf \_cwprintf\_l \_cwprintf\_p \_cwprintf\_p\_l \_cwprintf\_s \_cwprintf\_s\_l \_cwscanf \_cwscanf\_l \_cwscanf\_s \_cwscanf\_s\_l \_vcprintf \_vcprintf\_l \_vcprintf\_p \_vcprintf\_p\_l \_vcprintf\_s \_vcprintf\_s\_l \_vcwprintf \_vcwprintf\_l \_vcwprintf\_p \_vcwprintf\_p\_l \_vcwprintf\_s \_vcwprintf\_s\_l \_getch \_getch\_nolock \_getche \_getche\_nolock \_getwch \_getwch\_nolock \_getwche \_getwche\_nolock \_putch \_putch\_nolock \_putwch \_putwch\_nolock \_ungetch \_ungetch\_nolock \_ungetwch \_ungetwch\_nolock \_kbhit kbhit putch cgets cprintf cputs cscanf cwait getch getche ungetch|Queste funzioni vengono usate per leggere e scrivere direttamente dalla e nella console. Le app UWP sono solo di tipo GUI e non supportano la console.|Nessuna soluzione alternativa.|  
|getpid|Questa funzione è obsoleta.|Usare \_getpid o l'API Win32 `GetCurrentProcessId()`.|  
|\_getdiskfree|Non disponibile.|Usare l'API Win32 `GetDiskFreeSpaceExW()`.|  
|\_getdrive \_getdrives|L'API corrispondente non è disponibile per le app UWP.|Nessuna soluzione alternativa.|  
|\_inp \_inpd \_inpw \_outp \_outpd \_outpw inp inpd inpw outp outpd outpw|La porta I\/O non è supportata nelle app UWP.|Nessuna soluzione alternativa.|  
|\_ismbcalnum \_ismbcalnum\_l \_ismbcalpha \_ismbcalpha\_l \_ismbcdigit \_ismbcdigit\_l \_ismbcgraph \_ismbcgraph\_l \_ismbchira \_ismbchira\_l \_ismbckata \_ismbckata\_l \_ismbcl0 \_ismbcl0\_l \_ismbcl1 \_ismbcl1\_l \_ismbcl2 \_ismbcl2\_l \_ismbclegal \_ismbclegal\_l \_ismbclower \_ismbclower\_l \_ismbcprint \_ismbcprint\_l \_ismbcpunct \_ismbcpunct\_l \_ismbcspace \_ismbcspace\_l \_ismbcsymbol \_ismbcsymbol\_l \_ismbcupper \_ismbcupper\_l \_mbbtombc \_mbbtombc\_l \_mbbtype \_mbbtype\_l \_mbccpy \_mbccpy\_l \_mbccpy\_s \_mbccpy\_s\_l \_mbcjistojms \_mbcjistojms\_l \_mbcjmstojis \_mbcjmstojis\_l \_mbclen \_mbclen\_l \_mbctohira \_mbctohira\_l \_mbctokata \_mbctokata\_l \_mbctolower \_mbctolower\_l \_mbctombb \_mbctombb\_l \_mbctoupper \_mbctoupper\_l \_mbsbtype \_mbsbtype\_l \_mbscat \_mbscat\_l \_mbscat\_s \_mbscat\_s\_l \_mbschr \_mbschr\_l \_mbscmp \_mbscmp\_l \_mbscoll \_mbscoll\_l \_mbscpy \_mbscpy\_l \_mbscpy\_s \_mbscpy\_s\_l \_mbscspn \_mbscspn\_l \_mbsdec \_mbsdec\_l \_mbsicmp \_mbsicmp\_l \_mbsicoll \_mbsicoll\_l \_mbsinc \_mbsinc\_l \_mbslen \_mbslen\_l \_mbslwr \_mbslwr\_l \_mbslwr\_s \_mbslwr\_s\_l \_mbsnbcat \_mbsnbcat\_l \_mbsnbcat\_s \_mbsnbcat\_s\_l \_mbsnbcmp \_mbsnbcmp\_l \_mbsnbcnt \_mbsnbcnt\_l \_mbsnbcoll \_mbsnbcoll\_l \_mbsnbcpy \_mbsnbcpy\_l \_mbsnbcpy\_s \_mbsnbcpy\_s\_l \_mbsnbicmp \_mbsnbicmp\_l \_mbsnbicoll \_mbsnbicoll\_l \_mbsnbset \_mbsnbset\_l \_mbsnbset\_s \_mbsnbset\_s\_l \_mbsncat \_mbsncat\_l \_mbsncat\_s \_mbsncat\_s\_l \_mbsnccnt \_mbsnccnt\_l \_mbsncmp \_mbsncmp\_l \_mbsncoll \_mbsncoll\_l \_mbsncpy \_mbsncpy\_l \_mbsncpy\_s \_mbsncpy\_s\_l \_mbsnextc \_mbsnextc\_l \_mbsnicmp \_mbsnicmp\_l \_mbsnicoll \_mbsnicoll\_l \_mbsninc \_mbsninc\_l \_mbsnlen \_mbsnlen\_l \_mbsnset \_mbsnset\_l \_mbsnset\_s \_mbsnset\_s\_l \_mbspbrk \_mbspbrk\_l \_mbsrchr \_mbsrchr\_l \_mbsrev \_mbsrev\_l \_mbsset \_mbsset\_l \_mbsset\_s \_mbsset\_s\_l \_mbsspn \_mbsspn\_l \_mbsspnp \_mbsspnp\_l \_mbsstr \_mbsstr\_l \_mbstok \_mbstok\_l \_mbstok\_s \_mbstok\_s\_l \_mbsupr \_mbsupr\_l \_mbsupr\_s \_mbsupr\_s\_l is\_wctype|Le stringhe multibyte non sono supportate nelle app UWP.|Usare invece stringhe Unicode.|  
|\_pclose \_pipe \_popen \_wpopen|La funzionalità della pipe non è disponibile per le app UWP.|Nessuna soluzione alternativa.|  
|\_resetstkoflw|Le API Win32 di supporto non sono disponibili per le app UWP.|Nessuna soluzione alternativa.|  
|\_getsystime \_setsystime|Queste API sono obsolete nelle precedenti versioni di CRT. Inoltre, l'utente non può impostare l'ora di sistema in un'app UWP a causa della mancanza di autorizzazioni.|Per ottenere solo l'ora di sistema, usa l'API Win32 `GetSystemTime`. L'ora di sistema non può essere impostata.|  
|\_environ \_putenv \_putenv\_s \_searchenv \_searchenv\_s \_dupenv\_s \_wputenv \_wputenv\_s \_wsearchenv getenv getenv\_s putenv \_wdupenv\_s \_wenviron \_wgetenv \_wgetenv\_s \_wsearchenv\_s tzset|Le variabili di ambiente non sono disponibili per le app UWP.|Nessuna soluzione alternativa. Per impostare il fuso orario, usare \_tzset.|  
|\_loaddll \_getdllprocaddr \_unloaddll|Queste funzioni sono obsolete nelle precedenti versioni di CRT. Inoltre, l'utente non può caricare DLL, a eccezione di quelle disponibili nello stesso pacchetto dell'applicazione.|Usare le API Win32 `LoadPackagedLibrary`, `GetProcAddress` e `FreeLibrary` per caricare e usare le DLL disponibili nel pacchetto.|  
|\_wexecl \_wexecle \_wexeclp \_wexeclpe \_wexecv \_wexecve \_wexecvp \_wexecvpe \_execl \_execle \_execlp \_execlpe \_execv \_execve \_execvp \_execvpe \_spawnl \_spawnle \_spawnlp \_spawnlpe \_spawnv \_spawnve \_spawnvp \_spawnvpe \_wspawnl \_wspawnle \_wspawnlp \_wspawnlpe \_wspawnv \_wspawnve \_wspawnvp \_wspawnvpe \_wsystem execl execle execlp execlpe execv execve execvp execvpe spawnl spawnle spawnlp spawnlpe spawnv spawnve spawnvp spawnvpe system|La funzionalità non è disponibile nelle app UWP. Un'app UWP non può richiamare un'altra app UWP o un'app desktop.|Nessuna soluzione alternativa.|  
|\_heapwalk \_heapadd \_heapchk \_heapset \_heapused|Queste funzioni vengono in genere usate per l'interazione con l'heap. Tuttavia, le API Win32 corrispondenti non sono supportate nelle app UWP. Inoltre le app non possono più creare o usare heap privati.|Nessuna soluzione alternativa. Tuttavia, la funzione `_heapwalk` è disponibile in CRT DEBUG solo a scopo di debug. Non può essere usata nelle app caricate in Windows Store.|  
  
 Le funzioni seguenti sono disponibili in CRT per le app UWP, ma devono essere usate solo quando le API Win32 o [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] corrispondenti non sono applicabili, ad esempio nel caso di trasferimento di codebase di grandi dimensioni  
  
|||  
|-|-|  
|Funzioni stringa a byte singolo, ad esempio `strcat`, `strcpy`, `strlwr` e così via.|Creare le proprie app UWP strettamente in formato Unicode perché tutte le API Win32 e [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] esposte usano esclusivamente set di caratteri Unicode. Le funzioni a byte singolo sono state mantenute per il trasferimento di codebase di grandi dimensioni, ma in altri casi devono essere evitate, usando quando possibile le corrispondenti funzioni con caratteri wide.|  
|Funzioni I\/O di flusso e file di basso livello, ad esempio `fopen`, `open` e così via.|Queste funzioni sono sincrone, quindi sconsigliate per le app UWP. Nelle app UWP usare API asincrone per aprire, leggere e scrivere nei file, in modo da evitare il blocco del thread UI. Esempi di tali API sono quelle incluse nella classe `Windows::Storage::FileIO`.|  
  
## App di Windows 8.x Store e app di Windows Phone 8.x  
 Oltre alle API menzionate in precedenza, le API seguenti non sono disponibili nelle app di Windows 8. x Store e Windows Phone 8. x.  
  
||||  
|-|-|-|  
|\_beginthread \_beginthreadex \_endthread \_endthreadex|Le API Win32 di threading non sono disponibili nelle app di Windows 8.x Store.|In sostituzione usare `Windows Runtime Windows::System::Threading::ThreadPool` o `concurrency::task`.|  
|\_chdir \_wchdir \_getcwd \_getdcwd \_wgetcwd \_wgetdcwd|Il concetto di una directory di lavoro non è applicabile alle app di Windows 8. x Store.|Usare invece percorsi completi.|  
|\_getpid|Questa funzione è obsoleta nelle precedenti versioni di CRT.|Usare l'API Win32 `GetCurrentProcessId()`|  
|\_isleadbyte\_l \_ismbbalnum, \_ismbbalnum\_l, \_ismbbalpha, \_ismbbalpha \_ismbbalpha\_l \_ismbbgraph \_ismbbgraph\_l \_ismbbkalnum \_ismbbkalnum\_l \_ismbbkana \_ismbbkana\_l \_ismbbkprint \_ismbbkprint\_l \_ismbbkpunct \_ismbbkpunct\_l \_ismbblead \_ismbblead\_l \_ismbbprint \_ismbbprint\_l \_ismbbpunct \_ismbbpunct\_l \_ismbbtrail \_ismbbtrail\_l \_ismbslead \_ismbslead\_l \_ismbstrail \_ismbstrail\_l \_mbsdup isleadbyte|Le stringhe multibyte non sono supportate nelle app di Windows 8.x Store.|Usare invece stringhe Unicode.|  
|\_tzset|Le variabili di ambiente non sono disponibili per le app di Windows 8.x Store.|Nessuna soluzione alternativa.|  
|\_get\_heap\_handle, \_heapmin|Le API Win 32 corrispondenti non sono supportate nelle app di Windows 8.x Store. Inoltre le app non possono più creare heap privati.|Nessuna soluzione alternativa. Tuttavia, la funzione `_get_heap_handle` è disponibile in CRT DEBUG solo a scopo di debug.|