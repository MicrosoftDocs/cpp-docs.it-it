---
title: Routine di debug | Microsoft Docs
ms.custom: ''
ms.date: 04/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- c.debug
dev_langs:
- C++
helpviewer_keywords:
- debugging [CRT], using macros
- macros, debugging with
- debug routines
- debug macros
- debugging [CRT], runtime routines
ms.assetid: cb4d2664-10f3-42f7-a516-595558075471
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4efef4c7dfb907120778390874a5e56222889350
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32392302"
---
# <a name="debug-routines"></a>Routine di debug

La versione di debug della libreria di runtime C offre numerosi servizi di diagnostica che semplificano il debug dei programmi e consentono agli sviluppatori di:

- Accedere direttamente alle funzioni di runtime durante il debug

- Risolvere asserzioni, errori ed eccezioni

- Tenere traccia delle allocazioni di heap e impedire perdite di memoria

- Segnalare i messaggi di debug all'utente

## <a name="debug-versions-of-the-c-runtime-library-routines"></a>Versioni di debug delle routine della libreria di runtime C

Per usare queste routine, il flag [_DEBUG](../c-runtime-library/debug.md) deve essere definito. Tutte queste routine non eseguono alcuna operazione nella versione finale di un'applicazione. Per altre informazioni sull'uso delle nuove routine di debug, vedere [Tecniche di debug CRT](/visualstudio/debugger/crt-debugging-techniques).

|Routine|Uso|
|-------------|---------|
|[_ASSERT](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)|Valutare un'espressione e generare un report di debug quando il risultato è FALSE|
|[_ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)|Simile ad **_ASSERT**, ma include l'espressione non riuscita nel report generato|
|[_CrtCheckMemory](../c-runtime-library/reference/crtcheckmemory.md)|Confermare l'integrità dei blocchi di memoria allocati nell'heap di debug|
|[_CrtDbgBreak](../c-runtime-library/reference/crtdbgbreak.md)|Imposta un punto di interruzione.|
|[_CrtDbgReport, _CrtDbgReportW](../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md)|Generano un report di debug con un messaggio per l'utente e lo inviano a tre possibili destinazioni|
|[_CrtDoForAllClientObjects](../c-runtime-library/reference/crtdoforallclientobjects.md)|Chiamare una funzione specificata dall'applicazione per tutti i tipi di **_CLIENT_BLOCK** nell'heap|
|[_CrtDumpMemoryLeaks](../c-runtime-library/reference/crtdumpmemoryleaks.md)|Dump di tutti i blocchi di memoria nell'heap di debug quando si verifica una consistente perdita di memoria|
|[_CrtIsMemoryBlock](../c-runtime-library/reference/crtismemoryblock.md)|Verificare che un blocco di memoria specificato si trovi nell'heap locale e che abbia un identificatore di tipo blocco dell'heap di debug valido|
|[_CrtIsValidHeapPointer](../c-runtime-library/reference/crtisvalidheappointer.md)|Verifica se un puntatore specificato è nell'heap locale|
|[_CrtIsValidPointer](../c-runtime-library/reference/crtisvalidpointer.md)|Verificare che l'intervallo di memoria specificato sia valido per lettura e scrittura|
|[_CrtMemCheckpoint](../c-runtime-library/reference/crtmemcheckpoint.md)|Ottenere lo stato corrente dell'heap di debug e memorizzarlo in una struttura **CrtMemState** specificata dall'applicazione|
|[_CrtMemDifference](../c-runtime-library/reference/crtmemdifference.md)|Confrontare due stati della memoria per verificare la presenza di differenze significative e restituire i risultati|
|[_CrtMemDumpAllObjectsSince](../c-runtime-library/reference/crtmemdumpallobjectssince.md)|Dump delle informazioni sugli oggetti nell'heap dal momento in cui è stato acquisito un checkpoint specificato o è stata avviata l'esecuzione del programma|
|[_CrtMemDumpStatistics](../c-runtime-library/reference/crtmemdumpstatistics.md)|Dump delle informazioni di intestazione di debug per uno stato della memoria specificato in un form leggibile dall'utente|
|[_CrtReportBlockType](../c-runtime-library/reference/crtreportblocktype.md)|Restituisce il tipo/sottotipo di blocco associato a un puntatore di blocco dell'heap di debug specificato.|
|[_CrtSetAllocHook](../c-runtime-library/reference/crtsetallochook.md)|Installare una funzione di allocazione definita dal client associandola al processo di allocazione della memoria di debug del runtime C|
|[_CrtSetBreakAlloc](../c-runtime-library/reference/crtsetbreakalloc.md)|Impostare un punto di interruzione su un determinato numero di ordine di allocazione dell'oggetto|
|[_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md)|Recuperare o modificare lo stato del flag **_crtDbgFlag** per controllare il comportamento di allocazione del gestore dell'heap di debug|
|[_CrtSetDumpClient](../c-runtime-library/reference/crtsetdumpclient.md)|Installare una funzione definita dall'applicazione che viene chiamata ogni volta che una funzione di dump di debug viene chiamata per il dump dei blocchi di memoria di tipo **_CLIENT_BLOCK**|
|[_CrtSetReportFile](../c-runtime-library/reference/crtsetreportfile.md)|Identificare il file o flusso che verrà usato da **_CrtDbgReport** come destinazione per un tipo di report specifico|
|[_CrtSetReportHook](../c-runtime-library/reference/crtsetreporthook.md)|Installare una funzione per la creazione di report definita dal client associandola al processo di creazione di report sul debug del runtime C|
|[_CrtSetReportHook2, _CrtSetReportHookW2](../c-runtime-library/reference/crtsetreporthook2-crtsetreporthookw2.md)|Installare o disinstallare una funzione per la creazione di report definita dal client associandola al processo di creazione di report sul debug del runtime C.|
|[_CrtSetReportMode](../c-runtime-library/reference/crtsetreportmode.md)|Specificare le destinazioni generali per un tipo specifico di report generato da **_CrtDbgReport**|
|[_RPT&#91;0,1,2,3,4&#93;](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md)|Tenere traccia dell'avanzamento dell'applicazione con un report di debug generato chiamando **_CrtDbgReport** con una stringa di formato e un numero variabile di argomenti. Non specifica informazioni sul file di origine e il numero di riga.|
|[_RPTF&#91;0,1,2,3,4&#93;](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md)|Simile alle macro **_RPTn** ma specifica il nome del file di origine e il numero di riga in cui ha origine la richiesta di report|
|[_calloc_dbg](../c-runtime-library/reference/calloc-dbg.md)|Allocare un numero specificato di blocchi di memoria nell'heap con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura|
|[_expand_dbg](../c-runtime-library/reference/expand-dbg.md)|Ridimensiona un blocco di memoria specificato nell'heap espandendo o contraendo il blocco|
|[_free_dbg](../c-runtime-library/reference/free-dbg.md)|Liberare un blocco di memoria nell'heap|
|[_fullpath_dbg, _wfullpath_dbg](../c-runtime-library/reference/fullpath-dbg-wfullpath-dbg.md)|Creare un nome di percorso assoluto o completo per il nome di percorso relativo specificato usando [_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|[System::IO::File::Create](https://msdn.microsoft.com/en-us/library/system.io.file.create.aspx)|
|[_getcwd_dbg, _wgetcwd_dbg](../c-runtime-library/reference/getcwd-dbg-wgetcwd-dbg.md)|Ottenere la directory di lavoro corrente usando [_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|
|[_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md)|Allocare un blocco di memoria nell'heap con spazio aggiuntivo per un'intestazione di debug e buffer di sovrascrittura|
|[_msize_dbg](../c-runtime-library/reference/msize-dbg.md)|Calcolare le dimensioni di un blocco di memoria nell'heap|
|[_realloc_dbg](../c-runtime-library/reference/realloc-dbg.md)|Riallocare un blocco specificato di memoria nell'heap spostando e/o ridimensionando il blocco|
|[_strdup_dbg, _wcsdup_dbg](../c-runtime-library/reference/strdup-dbg-wcsdup-dbg.md)|Duplica una stringa usando [_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|
|[_tempnam_dbg, _wtempnam_dbg](../c-runtime-library/reference/tempnam-dbg-wtempnam-dbg.md)|Generano i nomi che possono essere usati per creare i file temporanei, usando [_malloc_dbg](../c-runtime-library/reference/malloc-dbg.md) per allocare memoria.|

## <a name="c-runtime-routines-that-are-not-available-in-source-code-form"></a>Routine di runtime C non disponibili come codice sorgente

Il debugger può essere usato per eseguire il codice sorgente un'istruzione alla volta per la maggior parte delle routine di runtime C durante il processo di debug. Per Microsoft tuttavia si tratta di una tecnologia proprietaria, quindi il codice sorgente per un subset di queste routine non è disponibile. Nella maggior parte dei casi queste routine appartengono ai gruppi di gestione delle eccezioni o ai gruppi di elaborazione a virgola mobile, ma anche ad alcuni altri gruppi. Le routine sono riportate nella tabella seguente.

||||
|-|-|-|
|[acos](../c-runtime-library/reference/acos-acosf-acosl.md)|[acosh](../c-runtime-library/reference/acosh-acoshf-acoshl.md)|[asin](../c-runtime-library/reference/asin-asinf-asinl.md)|
|[asinh](../c-runtime-library/reference/asinh-asinhf-asinhl.md)|[atan, atan2](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)|[atanh](../c-runtime-library/reference/atanh-atanhf-atanhl.md)|
|[Funzioni di Bessel](../c-runtime-library/reference/bessel-functions-j0-j1-jn-y0-y1-yn.md)|[_cabs](../c-runtime-library/reference/cabs.md)|[ceil](../c-runtime-library/reference/ceil-ceilf-ceill.md)|
|[_chgsign](../c-runtime-library/reference/chgsign-chgsignf-chgsignl.md)|[_clear87, _clearfp](../c-runtime-library/reference/clear87-clearfp.md)|[_control87, _controlfp](../c-runtime-library/reference/control87-controlfp-control87-2.md)|
|[copysign](../c-runtime-library/reference/copysign-copysignf-copysignl-copysign-copysignf-copysignl.md)|[cos](../c-runtime-library/reference/cos-cosf-cosl.md)|[cosh](../c-runtime-library/reference/cosh-coshf-coshl.md)|
|[Exp](../c-runtime-library/reference/exp-expf.md)|[fabs](../c-runtime-library/reference/fabs-fabsf-fabsl.md)|[_finite](../c-runtime-library/reference/finite-finitef.md)|
|[floor](../c-runtime-library/reference/floor-floorf-floorl.md)|[fmod](../c-runtime-library/reference/fmod-fmodf.md)|[_fpclass](../c-runtime-library/reference/fpclass-fpclassf.md)|
|[_fpieee_flt](../c-runtime-library/reference/fpieee-flt.md)|[_fpreset](../c-runtime-library/reference/fpreset.md)|[frexp](../c-runtime-library/reference/frexp.md)|
|[_hypot](../c-runtime-library/reference/hypot-hypotf-hypotl-hypot-hypotf-hypotl.md)|[_isnan](../c-runtime-library/reference/isnan-isnan-isnanf.md)|[ldexp](../c-runtime-library/reference/ldexp.md)|
|[log](../c-runtime-library/reference/log-logf-log10-log10f.md)|[_logb](../c-runtime-library/reference/logb-logbf-logbl-logb-logbf.md)|[log10](../c-runtime-library/reference/log-logf-log10-log10f.md)|
|[longjmp](../c-runtime-library/reference/longjmp.md)|[_matherr](../c-runtime-library/reference/matherr.md)|[modf](../c-runtime-library/reference/modf-modff-modfl.md)|
|[_nextafter](../c-runtime-library/reference/nextafter-functions.md)|[pow](../c-runtime-library/reference/pow-powf-powl.md)|[printf_s](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)|
|[printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|[_scalb](../c-runtime-library/reference/scalb.md)|[scanf_s](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)|
|[scanf](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)|[setjmp](../c-runtime-library/reference/setjmp.md)|[sin](../c-runtime-library/reference/sin-sinf-sinl.md)|
|[sinh](../c-runtime-library/reference/sinh-sinhf-sinhl.md)|[sqrt](../c-runtime-library/reference/sqrt-sqrtf-sqrtl.md)|[_status87, _statusfp](../c-runtime-library/reference/status87-statusfp-statusfp2.md)|
|[tan](../c-runtime-library/reference/tan-tanf-tanl.md)|[tanh](../c-runtime-library/reference/tanh-tanhf-tanhl.md)||

Sebbene il codice sorgente sia disponibile per la maggior parte delle routine **printf** and **scanf**, le routine effettuano una chiamata interna a un'altra routine per cui non è disponibile il codice sorgente.

## <a name="routines-that-behave-differently-in-a-debug-build-of-an-application"></a>Routine che si comportano in modo diverso nella build di debug di un'applicazione

Alcuni operatori C++ e funzioni di runtime C si comportano in modo diverso quando vengono chiamati da una build di debug di un'applicazione. Si noti che una build di debug di un'applicazione può essere eseguita definendo il flag `_DEBUG` o con il collegamento a una versione di debug della libreria di runtime C. Le differenze di comportamento in genere sono rappresentate da funzionalità o informazioni aggiuntive specificate dalla routine per supportare il processo di debug. Le routine sono riportate nella tabella seguente.

|||
|-|-|
|Routine C [abort](../c-runtime-library/reference/abort.md)|Operatore C++ [delete](../cpp/delete-operator-cpp.md)|
|Routine C [assert](../c-runtime-library/reference/assert-macro-assert-wassert.md)|Operatore C++ [new](../cpp/new-operator-cpp.md)|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Controllo degli errori di runtime](../c-runtime-library/run-time-error-checking.md)<br/>
