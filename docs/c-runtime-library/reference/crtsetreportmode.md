---
title: "_CrtSetReportMode | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CrtSetReportMode"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_CrtSetReportMode"
  - "CrtSetReportMode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CrtSetReportMode (funzione)"
  - "CrtSetReportMode (funzione)"
ms.assetid: 3ecc6a12-afdd-4242-b046-8187ff6d4b36
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _CrtSetReportMode
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica la destinazione o destinazioni per un tipo di report specifico generato da `_CrtDbgReport` e tutte le macro che chiamano [\_CrtDbgReport, \_CrtDbgReportW](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md), come [Macro \_ASSERT, \_ASSERTE, \_ASSERT\_EXPR](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), [Macro \_ASSERT, \_ASSERTE, \_ASSERT\_EXPR](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md), [\_RPT, \_RPTF, \_RPTW, \_RPTFW Macros](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) e [\_RPT, \_RPTF, \_RPTW, \_RPTFW Macros](../../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md) \(solamente per la versione di debug\).  
  
## Sintassi  
  
```  
int _CrtSetReportMode(   
   int reportType,  
   int reportMode   
);  
```  
  
#### Parametri  
 `reportType`  
 Tipo di rapporto: `_CRT_WARN`, `_CRT_ERROR` e `_CRT_ASSERT`.  
  
 `reportMode`  
 Nuova modalità Report o modalità per `reportType`.  
  
## Valore restituito  
 Al termine, `_CrtSetReportMode` restituisce le precedenti modalità Report o le modalità per il tipo di rapporto specificati in `reportType`.  Se un valore non valido verrà passato come `reportType` o una modalità non valida viene specificata per `reportMode`, `_CrtSetReportMode` richiama il gestore non valido di parametro come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` a `EINVAL` e restituisce \-1.  Per ulteriori informazioni, vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Note  
 `_CrtSetReportMode` specifica la destinazione di output per `_CrtDbgReport`.  Poiché le macro `_ASSERT`, `_ASSERTE`, `_RPT` e la chiamata `_CrtDbgReport`, `_CrtSetReportMode` `_RPTF` specificano la destinazione di output di testo specificata con tali macro.  
  
 Quando [\_DEBUG](../../c-runtime-library/debug.md) non è definito, le chiamate a `_CrtSetReportMode` vengono rimosse durante la pre\-elaborazione.  
  
 Se non si chiama `_CrtSetReportMode` per definire la destinazione di output dei messaggi, allora verranno attivate le seguenti impostazioni predefinite:  
  
-   Gli errori di asserzione e gli errori vengono indirizzati a una finestra di messaggio di debug.  
  
-   Gli avvisi dalle applicazioni Windows vengono inviati alla finestra di output del debugger.  
  
-   Gli avvisi dalle applicazioni console non vengono visualizzati.  
  
 Nella tabella seguente sono elencati i tipi di rapporti definiti in Crtdbg.h.  
  
|Tipo di Rapporto|Descrizione|  
|----------------------|-----------------|  
|`_CRT_WARN`|Avvisi, messaggi e informazioni che non necessitano di attenzione immediata.|  
|`_CRT_ERROR`|Errori irreversibili, problemi e problemi dei quali è necessario prestare attenzione immediata.|  
|`_CRT_ASSERT`|Errori di asserzione \(espressioni asserite che restituiscono `FALSE`\).|  
  
 La funzione `_CrtSetReportMode` assegna la nuova modalità Report specificata in `reportMode` al tipo di report specificato in `reportType` e restituisce la modalità Report precedentemente definita per `reportType`.  Nella tabella seguente sono elencate le opzioni disponibili per `reportMode` e il comportamento risultante di `_CrtDbgReport`.  Queste opzioni sono definite come flag di bit in Crtdbg.h.  
  
|Modalità Report|comportamento di \_CrtDbgReport|  
|---------------------|-------------------------------------|  
|`_CRTDBG_MODE_DEBUG`|Scrive il messaggio nella finestra di output del debugger.|  
|`_CRTDBG_MODE_FILE`|Scrive il messaggio ad un punto di controllo del file fornito dall'utente.  [\_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md) deve essere chiamato per definire il file o un flusso specifico da utilizzare come destinazione.|  
|`_CRTDBG_MODE_WNDW`|Crea una finestra di messaggio per visualizzare il messaggio con `Abort`, `Retry` e i pulsanti `Ignore`.|  
|`_CRTDBG_REPORT_MODE`|Restituisce `reportMode` per il `reportType` specificato:<br /><br /> 1   `_CRTDBG_MODE_FILE`<br /><br /> 2   `_CRTDBG_MODE_DEBUG`<br /><br /> 4   `_CRTDBG_MODE_WNDW`|  
  
 Ogni tipo di rapporto può essere generato utilizzando nessuna, una, due o tre modalità.  Pertanto, è possibile avere più destinazioni definite per un singolo tipo di rapporto.  Ad esempio, il frammento di codice seguente provoca errori di asserzione da essere inviati sia ad una finestra di messaggio di debug che in `stderr`:  
  
```  
_CrtSetReportMode( _CRT_ASSERT, _CRTDBG_MODE_FILE | _CRTDBG_MODE_WNDW );  
_CrtSetReportFile( _CRT_ASSERT, _CRTDBG_FILE_STDERR );  
```  
  
 Inoltre, la modalità di creazione di rapporti o le modalità per ogni tipo di rapporto possono essere controllate separatamente.  Ad esempio, è possibile specificare che un `reportType` `_CRT_WARN` possa essere inviato a una stringa di output di debug, mentre `_CRT_ASSERT` possa essere visualizzato in una finestra di messaggio di debug e inviare a `stderr`, come illustrato in precedenza.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|-------------------------------|------------------------------|  
|`_CrtSetReportMode`|\<crtdbg.h\>|\<errno.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
 **Librerie:** Versioni di debug solo di [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)