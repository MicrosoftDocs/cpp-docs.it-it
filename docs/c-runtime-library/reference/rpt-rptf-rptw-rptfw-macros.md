---
title: "_RPT, _RPTF, _RPTW, _RPTFW Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
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
  - "RPT3"
  - "RPTF4"
  - "_RPT4"
  - "RPT1"
  - "_RPTF0"
  - "RPTF3"
  - "_RPTF4"
  - "RPTF1"
  - "RPT4"
  - "_RPT1"
  - "_RPT0"
  - "RPT0"
  - "_RPTF2"
  - "RPTF0"
  - "_RPT3"
  - "_RPT2"
  - "_RPTF3"
  - "RPT2"
  - "_RPTF1"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "debug [CRT], uso delle macro"
  - "_RPTW3 (macro)"
  - "_RPT0 (macro)"
  - "RPTW4 (macro)"
  - "_RPTF3 (macro)"
  - "_RPTW4 (macro)"
  - "RPTF4 (macro)"
  - "RPTFW2 (macro)"
  - "RPTW (macro)"
  - "RPT1 (macro)"
  - "_RPTF (macro)"
  - "RPTFW3 (macro)"
  - "_RPTW0 (macro)"
  - "_RPTF0 (macro)"
  - "macro, debug con"
  - "_RPTW2 (macro)"
  - "RPTF3 (macro)"
  - "RPT3 (macro)"
  - "RPT0 (macro)"
  - "_RPT (macro)"
  - "RPTW3 (macro)"
  - "_RPTFW (macro)"
  - "macro per il report di debug"
  - "RPTF (macro)"
  - "RPT (macro)"
  - "_RPTW (macro)"
  - "RPTF2 (macro)"
  - "_RPTF1 (macro)"
  - "_RPT1 (macro)"
  - "_RPT4 (macro)"
  - "_RPTFW2 (macro)"
  - "_RPTFW1 (macro)"
  - "RPTF0 (macro)"
  - "_RPT2 (macro)"
  - "RPTFW (macro)"
  - "_RPTW1 (macro)"
  - "_RPTFW0 (macro)"
  - "RPT4 (macro)"
  - "_RPT3 (macro)"
  - "_RPTFW3 (macro)"
  - "_RPTF4 (macro)"
  - "_RPTFW4 (macro)"
  - "_RPTF2 (macro)"
  - "RPTW0 (macro)"
  - "RPTFW4 (macro)"
  - "RPTFW0 (macro)"
  - "RPTW2 (macro)"
  - "RPTF1 (macro)"
  - "RPT2 (macro)"
  - "RPTFW1 (macro)"
  - "RPTW1 (macro)"
ms.assetid: a5bf8b30-57f7-4971-8030-e773b7a1ae13
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# _RPT, _RPTF, _RPTW, _RPTFW Macros
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tiene traccia dello stato dell'applicazione generando un report di debug \(solo versione di debug\).  Si noti che *n* specifica il numero di argomenti in `args` e può essere 0, 1, 2, 3, 4, o 5.  
  
## Sintassi  
  
```  
  
      _RPT  
      n  
      (  
   reportType,  
   format,  
...[args]  
);  
_RPTFn(  
   reportType,  
   format,  
   [args]  
);  
_RPTWn(  
   reportType,  
   format   
   [args]  
);  
_RPTFWn(  
   reportType,  
   format   
   [args]  
);  
```  
  
#### Parametri  
 `reportType`  
 Tipo di rapporto: `_CRT_WARN`, `_CRT_ERROR`, o `_CRT_ASSERT`.  
  
 `format`  
 Controllo del formato della stringa utilizzata per creare il messaggio utente.  
  
 `args`  
 Argomenti di sostituzione utilizzati da `format`.  
  
## Note  
 Tutte queste macro accettano parametri di `reportType`e di `format` Possono inoltre accettare quattro argomenti ulteriori, significati dal numero aggiunto al nome delle macro.  Ad esempio, `_RPT0` e `_RPTF0` non accettano argomenti aggiuntivi, `_RPT1` e `_RPTF1` accetta `arg1`, `_RPT2` e `_RPTF2` accetta `arg1` e `arg2`, e così via.  
  
 Le macro di `_RPTF` e di `_RPT` sono simili alla funzione di [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md), in quanto possono essere utilizzate per tenere traccia dello stato dell'applicazione durante il processo di debug.  Tuttavia, queste macro sono più flessibili di `printf` perché non devono essere racchiuse in istruzioni di `#ifdef` per evitarne dalle chiamate in una build finale di un'applicazione.  Questa flessibilità viene ottenuta utilizzando la macro di [\_DEBUG](../../c-runtime-library/debug.md) ; le macro di `_RPTF` e di `_RPT` sono disponibili solo quando il flag di `_DEBUG` è definito.  Quando `_DEBUG` non viene definito, le chiamate a queste macro vengono rimosse durante la pre\-elaborazione.  
  
 Le macro di `_RPTFW` e di `_RPTW` sono versioni a caratteri estesi delle macro.  Sono le `wprintf` e accettano stringhe di caratteri estesi come argomenti.  
  
 Le macro di `_RPT` chiamano la funzione [\_CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) per generare un report di debug con un messaggio utente.  Le macro di `_RPTW` chiamano la funzione `_CrtDbgReportW` per generare lo stesso rapporto con i caratteri estesi.  Le macro di `_RPTFW` e di `_RPTF` creano un report di debug al file di origine e il numero di riga in cui la macro del rapporto è stata chiamata, oltre al messaggio utente.  Il messaggio utente viene creato sostituendo gli argomenti di `arg`\[*n*\] nella stringa di `format`, utilizzando le stesse regole definite dalla funzione [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
 `_CrtDbgReport` o `_CrtDbgReportW` genera il report di debug e delle relative destinazioni in base alle modalità Report e sul file correnti specificati per `reportType`.  Le funzioni di [\_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportfile.md) e di [\_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportmode.md) vengono utilizzate per definire le destinazioni per ogni tipo di rapporto.  
  
 Se una macro di `_RPT` è denominata né `_CrtSetReportMode` né `_CrtSetReportFile` è stato chiamato, i messaggi vengono visualizzati come segue.  
  
|Tipo di Rapporto|Destinazione di output|  
|----------------------|----------------------------|  
|`_CRT_WARN`|Il testo dell'avviso non verrà visualizzata.|  
|`_CRT_ERROR`|Viene visualizzata una finestra  Come se `_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_WNDW);` sia stato specificato.|  
|`_CRT_ASSERT`|Uguale a `_CRT_ERROR`.|  
  
 Quando la destinazione è una finestra di messaggio di debug e l'utente sceglie il pulsante **Riprova**, `_CrtDbgReport` o `_CrtDbgReportW` restituisce 1, inducendo queste macro di avviare il debugger, a condizione che il debug just\-in\-time \(JIT\) sia abilitato.  Per ulteriori informazioni sull'utilizzo di queste macro come meccanismo di gestione degli errori del debug, consultare [Utilizzando le macro per la verifica e la creazione di rapporti](../Topic/Macros%20for%20Reporting.md).  
  
 Altre due macro esistenti che generano un report di debug.  La macro di [\_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) generano un rapporto, ma solo quando il relativo argomento di espressione restituisce FALSE.  [\_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) è esattamente come `_ASSERT`, ma include l'espressione non riuscita nel rapporto generato.  
  
## Requisiti  
  
|Macro|Intestazione obbligatoria|  
|-----------|-------------------------------|  
|`_RPT` macro|\<crtdbg.h\>|  
|`_RPTF` macro|\<crtdbg.h\>|  
|`_RPTW` macro|\<crtdbg.h\>|  
|`_RPTFW` macro|\<crtdbg.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Librerie  
 Solo versioni di debug di [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
 Sebbene queste siano macro e vengano ottenute includendo Crtdbg.h, l'applicazione deve collegarsi a una delle librerie di debug perché queste macro chiamano altre funzioni di runtime.  
  
## Esempio  
 Vedere l'esempio nell'argomento [\_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)