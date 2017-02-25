---
title: "Routine di debug | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.debug"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "debug [CRT], uso delle macro"
  - "macro, debug con"
  - "routine di debug"
  - "macro di debug"
  - "debug [CRT], routine di runtime"
ms.assetid: cb4d2664-10f3-42f7-a516-595558075471
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Routine di debug
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La versione di debug della libreria di runtime del linguaggio C fornisce numerosi servizi diagnostici che permettono di eseguire facilmente il debug di programmi e consentono agli sviluppatori di:  
  
-   Passare direttamente le funzioni di runtime durante il debug  
  
-   Risolvere asserzioni, errori ed eccezioni  
  
-   Analizzare le allocazioni degli heap e impedire perdite di memoria  
  
-   Riportare i messaggi di debug all'utente  
  
 Per utilizzare le routine, deve essere definito il flag [\_DEBUG](../c-runtime-library/debug.md).  Tutte le routine non hanno alcun effetto in una build finale di un'applicazione.  Per ulteriori informazioni su come utilizzare le nuove routine di debug, consultare [Tecniche di debug CRT](../Topic/CRT%20Debugging%20Techniques.md).  
  
### Versioni di debug delle routine di libreria di runtime C  
  
|Routine|Utilizzo|Equivalente .NET Framework|  
|-------------|--------------|--------------------------------|  
|[\_ASSERT](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)|Valuta un'espressione e genera un report di debug quando il risultato è FALSE|[\<caps:sentence id\="tgt15" sentenceid\="14fd9bf776829d73028df00162f7533f" class\="tgtSentence"\>System::Diagnostics::Debug::Assert\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[\_ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)|Simile a `_ASSERT`, ma include l'espressione non riuscita nel rapporto generato|[\<caps:sentence id\="tgt18" sentenceid\="14fd9bf776829d73028df00162f7533f" class\="tgtSentence"\>System::Diagnostics::Debug::Assert\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[\_CrtCheckMemory](../c-runtime-library/reference/crtcheckmemory.md)|Verifica l'integrità dei blocchi di memoria allocati nell'heap di debug|[\<caps:sentence id\="tgt20" sentenceid\="e42975224af21ff11a761e6a6bdbd602" class\="tgtSentence"\>System::Diagnostics::PerformanceCounter\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.performancecounter.aspx)|  
|[\_CrtDbgBreak](../c-runtime-library/reference/crtdbgbreak.md)|Imposta un punto di interruzione.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtDbgReport, \_CrtDbgReportW](../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)|Genera un report di debug con un messaggio utente e invia il rapporto a tre possibili destinazioni|[System::Diagnostics::Debug::Write](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.write.aspx), [System::Diagnostics::Debug::Writeline](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writeline.aspx), [System::Diagnostics::Debug::WriteIf](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writeif.aspx), [System::Diagnostics::Debug::WriteLineIf](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.writelineif.aspx)|  
|[\_CrtDoForAllClientObjects](../c-runtime-library/reference/crtdoforallclientobjects.md)|Chiama una funzione fornita esplicitamente per tutti i tipi `_CLIENT_BLOCK` nell'heap|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtDumpMemoryLeaks](../c-runtime-library/reference/crtdumpmemoryleaks.md)|Esegue il dump di tutti i blocchi di memoria nell'heap di debug quando si è verificata una perdita di memoria significativa|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtIsMemoryBlock](../c-runtime-library/reference/crtismemoryblock.md)|Verifica che un blocco di memoria specificato sia presente nell'heap locale con un identificatore valido del tipo di blocco dell'heap di debug|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtIsValidHeapPointer](../c-runtime-library/reference/crtisvalidheappointer.md)|Verifica che un puntatore specificato sia nell'heap locale|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtIsValidPointer](../c-runtime-library/reference/crtisvalidpointer.md)|Verifica che un determinato intervallo di memoria sia valido per la lettura e scrittura|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtMemCheckpoint](../c-runtime-library/reference/crtmemcheckpoint.md)|Ottiene lo stato corrente dell'heap di debug e lo archivia in una struttura fornita esplicitamente dall'applicazione `_CrtMemState`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtMemDifference](../c-runtime-library/reference/crtmemdifference.md)|Confronta due stati di memoria per le differenze significative e restituisce i risultati|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtMemDumpAllObjectsSince](../c-runtime-library/reference/crtmemdumpallobjectssince.md)|Esegue il dump delle informazioni sugli oggetti nell'heap poiché è stato creato un checkpoint specificato o dall'avvio dell'esecuzione del programma|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtMemDumpStatistics](../c-runtime-library/reference/crtmemdumpstatistics.md)|Esegue il dump delle informazioni di intestazione di debug per una determinata condizione di memoria in formato leggibile dall'utente|[\<caps:sentence id\="tgt64" sentenceid\="e42975224af21ff11a761e6a6bdbd602" class\="tgtSentence"\>System::Diagnostics::PerformanceCounter\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.performancecounter.aspx)|  
|[\_CrtReportBlockType](../c-runtime-library/reference/crtreportblocktype.md)|Restituisce il tipo di blocco\/sottotipo associato a un dato puntatore di blocco dell'heap di debug.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetAllocHook](../c-runtime-library/reference/crtsetallochook.md)|Installa una funzione di allocazione definita dal client agganciandola nel processo di allocazione della memoria di debug CRT|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetBreakAlloc](../c-runtime-library/reference/crtsetbreakalloc.md)|Imposta un punto di interruzione su un numero di un ordine di allocazione di un oggetto specificato|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md)|Recupera o modifica lo stato del flag `_crtDbgFlag` per controllare il comportamento dell'amministratore dell'heap di debug|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetDumpClient](../c-runtime-library/reference/crtsetdumpclient.md)|Installa una funzione definita dall'applicazione che viene chiamata ogni volta che una funzione di dump di debug viene chiamata per eseguire il dump dei blocchi di memoria del tipo `_CLIENT_BLOCK`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetReportFile](../c-runtime-library/reference/crtsetreportfile.md)|Individua il file o un flusso da essere utilizzato come destinazione per un tipo di report specifico da `_CrtDbgReport`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetReportHook](../c-runtime-library/reference/crtsetreporthook.md)|Installa una funzione definita dal client di segnalazione agganciandola nel processo di creazione di report di debug CRT|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetReportHook2, \_CrtSetReportHookW2](../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md)|Installa o disinstalla una funzione di segnalazione definita dal client agganciandola al processo di creazione di report di debug della fase di runtime del linguaggio C.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_CrtSetReportMode](../c-runtime-library/reference/crtsetreportmode.md)|Specifica le destinazioni generali per un tipo di report specifico generato da `_CrtDbgReport`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_RPT&#91;0,1,2,3,4&#93;](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md)|Tiene traccia dello stato di avanzamento dell'applicazione generando un report di debug chiamando `_CrtDbgReport` con una stringa di formato e un numero variabile di argomenti.  Non fornisce informazioni sul numero di riga e del file di origine.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_RPTF&#91;0,1,2,3,4&#93;](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md)|Simile alle macro `_RPTn`, ma fornisce il nome file di origine e il numero di riga in cui è stata originata la richiesta di report|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_calloc\_dbg](../c-runtime-library/reference/calloc-dbg.md)|Alloca un numero specificato di blocchi di memoria nell'heap con ulteriore spazio per un'intestazione di debug e sovrascrive i buffer|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_expand\_dbg](../c-runtime-library/reference/expand-dbg.md)|Ridimensiona un blocco di memoria specificato nell'heap espandendo o contraendo il blocco|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_free\_dbg](../c-runtime-library/reference/free-dbg.md)|Libera un blocco di memoria nell'heap|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_fullpath\_dbg, \_wfullpath\_dbg](../c-runtime-library/reference/fullpath-dbg-wfullpath-dbg.md)|Crea un nome di percorso assoluto o completo per il percorso relativo specificato, utilizzando [\_malloc\_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|[\<caps:sentence id\="tgt129" sentenceid\="57f5d14fd2f1847b8e44146f72e48f72" class\="tgtSentence"\>System::IO::File::Create\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)|  
|[\_getcwd\_dbg, \_wgetcwd\_dbg](../c-runtime-library/reference/getcwd-dbg-wgetcwd-dbg.md)|Ottiene la cartella di lavoro corrente, utilizzando [\_malloc\_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_malloc\_dbg](../c-runtime-library/reference/malloc-dbg.md)|Alloca un blocco di memoria nell'heap con ulteriore spazio per un'intestazione di debug e sovrascrive i buffer|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_msize\_dbg](../c-runtime-library/reference/msize-dbg.md)|Calcola la dimensione di un blocco di memoria nell'heap|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_realloc\_dbg](../c-runtime-library/reference/realloc-dbg.md)|Ridistribuisce un blocco di memoria specificato nell'heap spostando e\/o ridimensionando il blocco|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_strdup\_dbg, \_wcsdup\_dbg](../c-runtime-library/reference/strdup-dbg-wcsdup-dbg.md)|Duplica una stringa, con [\_malloc\_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|[\<caps:sentence id\="tgt151" sentenceid\="74a4ca1462af4bfed5950888b5c554e1" class\="tgtSentence"\>System::String::Clone\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.string.clone.aspx)|  
|[\_tempnam\_dbg, \_wtempnam\_dbg](../c-runtime-library/reference/tempnam-dbg-wtempnam-dbg.md)|Genera i nomi utilizzabili per creare i file temporanei, utilizzando [\_malloc\_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
  
 Le routine di debug possono essere utilizzate per eseguire il codice sorgente per la maggior parte delle altre routine di runtime del linguaggio C durante il processo di debug.  Tuttavia, Microsoft considera la tecnologia come privata e, pertanto, non fornisce il codice sorgente per queste routine.  La maggior parte di queste routine appartengono alla gestione delle eccezioni o a gruppi di elaborazione a virgola mobile, ma alcune sono incluse.  Nella tabella seguente sono elencate queste routine.  
  
### Routine di runtime del linguaggio C non disponibili nel codice sorgente  
  
||||  
|-|-|-|  
|[acos, acosf, acosl](../c-runtime-library/reference/acos-acosf-acosl.md)|[\_fpclass](../c-runtime-library/reference/fpclass-fpclassf.md)|[\_nextafter](../c-runtime-library/reference/nextafter-functions.md)|  
|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|[\_fpieee\_flt](../c-runtime-library/reference/fpieee-flt.md)|[pow](../c-runtime-library/reference/pow-powf-powl.md)|  
|[atan, atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[\_fpreset](../c-runtime-library/reference/fpreset.md)|[printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md), [printf\_s, \_printf\_s\_l, wprintf\_s, \_wprintf\_s\_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)\*|  
|[\_cabs](../c-runtime-library/reference/cabs.md)|[frexp](../c-runtime-library/reference/frexp.md)|[\_scalb](../c-runtime-library/reference/scalb.md)|  
|[ceil](../c-runtime-library/reference/ceil-ceilf-ceill.md)|[\_hypot](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)|[scanf, \_scanf\_l, wscanf, \_wscanf\_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md), [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)\*|  
|[\_chgsign, \_chgsignf, \_chgsignl](../c-runtime-library/reference/chgsign-chgsignf-chgsignl.md)|[\_isnan](../c-runtime-library/reference/isnan-isnan-isnanf.md)|[setjmp](../c-runtime-library/reference/setjmp.md)|  
|[\_clear87, \_clearfp](../c-runtime-library/reference/clear87-clearfp.md)|[\_j0](../misc/bessel-functions-j0-j1-jn.md)|[sin](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|  
|[\_control87, \_controlfp, \_\_control87\_2](../c-runtime-library/reference/control87-controlfp-control87-2.md)|[\_j1](../misc/bessel-functions-j0-j1-jn.md)|[sinh](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)|  
|[copysign, copysignf, copysignl, \_copysign, \_copysignf, \_copysignl](../c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)|[\_jn](../misc/bessel-functions-j0-j1-jn.md)|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|  
|[cos](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|[ldexp](../c-runtime-library/reference/ldexp.md)|[\_status87, \_statusfp](../c-runtime-library/reference/status87-statusfp-statusfp2.md)|  
|[cosh](../c-runtime-library/reference/cos-cosf-cosl-cosh-coshf-coshl.md)|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|[tan](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|  
|[Exp](../c-runtime-library/reference/exp-expf.md)|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|[tanh](../c-runtime-library/reference/tan-tanf-tanl-tanh-tanhf-tanhl.md)|  
|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|[\_logb](../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)|[\_y0](../Topic/Bessel%20Functions:%20_y0,%20_y1,%20_yn.md)|  
|[\_finite](../c-runtime-library/reference/finite-finitef.md)|[longjmp](../c-runtime-library/reference/longjmp.md)|[\_y1](../Topic/Bessel%20Functions:%20_y0,%20_y1,%20_yn.md)|  
|[floor](../c-runtime-library/reference/floor-floorf-floorl.md)|[\_matherr](../c-runtime-library/reference/matherr.md)|[\_yn](../Topic/Bessel%20Functions:%20_y0,%20_y1,%20_yn.md)|  
|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|[modf](../c-runtime-library/reference/modf-modff-modfl.md)||  
  
 \* Sebbene il codice sorgente sia disponibile per la maggior parte di queste routine, effettua una chiamata interna in un altro codice sorgente di routine, il quale non viene reso disponibile.  
  
 Alcune funzioni di runtime del linguaggio C e operatori C\+\+ si comportano in modo diverso quando vengono chiamati da una build di debug di un'applicazione. \(Notare che una build di debug di un'applicazione può essere eseguita definendo il flag `_DEBUG` o il collegamento a una versione di debug della libreria di runtime C.\) Le differenze di comportamento sono costituiti da funzionalità aggiuntive o delle informazioni fornite dalla routine per supportare il processo di debug.  Nella tabella seguente sono elencate queste routine.  
  
### Routine che si comportano in modo diverso in una build di debug di un'applicazione  
  
|||  
|-|-|  
|Routine [abort](../c-runtime-library/reference/abort.md) \(C\)|Operatore [delete](../cpp/delete-operator-cpp.md) \(C\+\+\)|  
|Routine [assert](../c-runtime-library/reference/assert-macro-assert-wassert.md) \(C\)|Operatore [new](../cpp/new-operator-cpp.md) \(C\+\+\)|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)   
 [Controllo degli errori di runtime](../c-runtime-library/run-time-error-checking.md)