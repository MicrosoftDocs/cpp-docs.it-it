---
title: Macro _RPT, _RPTF, _RPTW, _RPTFW | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- RPT3
- RPTF4
- _RPT4
- RPT1
- _RPTF0
- RPTF3
- _RPTF4
- RPTF1
- RPT4
- _RPT1
- _RPT0
- RPT0
- _RPTF2
- RPTF0
- _RPT3
- _RPT2
- _RPTF3
- RPT2
- _RPTF1
dev_langs:
- C++
helpviewer_keywords:
- debugging [CRT], using macros
- _RPTW3 macro
- _RPT0 macro
- RPTW4 macro
- _RPTF3 macro
- _RPTW4 macro
- RPTF4 macro
- RPTFW2 macro
- RPTW macros
- RPT1 macro
- _RPTF macros
- RPTFW3 macro
- _RPTW0 macro
- _RPTF0 macro
- macros, debugging with
- _RPTW2 macro
- RPTF3 macro
- RPT3 macro
- RPT0 macro
- _RPT macros
- RPTW3 macro
- _RPTFW macros
- debug reporting macros
- RPTF macros
- RPT macros
- _RPTW macros
- RPTF2 macro
- _RPTF1 macro
- _RPT1 macro
- _RPT4 macro
- _RPTFW2 macro
- _RPTFW1 macro
- RPTF0 macro
- _RPT2 macro
- RPTFW macros
- _RPTW1 macro
- _RPTFW0 macro
- RPT4 macro
- _RPT3 macro
- _RPTFW3 macro
- _RPTF4 macro
- _RPTFW4 macro
- _RPTF2 macro
- RPTW0 macro
- RPTFW4 macro
- RPTFW0 macro
- RPTW2 macro
- RPTF1 macro
- RPT2 macro
- RPTFW1 macro
- RPTW1 macro
ms.assetid: a5bf8b30-57f7-4971-8030-e773b7a1ae13
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: d8611402652268e0a85170a36355619e5c7335ac
ms.lasthandoff: 02/24/2017

---
# <a name="rpt-rptf-rptw-rptfw-macros"></a>_RPT, _RPTF, _RPTW, _RPTFW Macros
Tiene traccia dello stato di un'applicazione mediante la generazione di un report di debug (solo versione di debug). Si noti che *n* specifica il numero di argomenti in `args` e può essere 0, 1, 2, 3, 4 o 5.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `reportType`  
 Tipo di report: `_CRT_WARN`, `_CRT_ERROR` o `_CRT_ASSERT`.  
  
 `format`  
 Stringa di controllo del formato usata per creare il messaggio utente.  
  
 `args`  
 Argomenti di sostituzione usati da `format`.  
  
## <a name="remarks"></a>Note  
 Tutte queste macro accettano i parametri `reportType` e `format`. Potrebbero anche accettare fino a quattro argomenti aggiuntivi, indicati dal numero aggiunto al nome della macro. Ad esempio, `_RPT0` e `_RPTF0` non accettano altri argomenti, `_RPT1` e `_RPTF1` accettano `arg1`, `_RPT2` e `_RPTF2` accettano `arg1` e `arg2` e così via.  
  
 Le macro `_RPT` e `_RPTF` sono simili alla funzione [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md), perché possono essere usate per tenere traccia dello stato di un'applicazione durante il processo di debug. Queste macro sono tuttavia più flessibili di `printf`, perché non devono essere racchiuse in istruzioni `#ifdef` per evitare che vengano chiamate in una compilazione della versione finale di un'applicazione. Questa flessibilità si ottiene usando la macro[_DEBUG](../../c-runtime-library/debug.md). Le macro `_RPT` e `_RPTF` sono disponibili solo quando è definito i flag `_DEBUG`. Quando `_DEBUG` non viene definito, le chiamate a queste macro vengono rimosse durante la pre-elaborazione.  
  
 Le macro `_RPTW` e `_RPTFW` sono versioni a caratteri wide di queste macro. Sono simili a `wprintf` e accettano stringhe di caratteri wide come argomenti.  
  
 Le macro `_RPT` chiamano la funzione [CrtDbgReport](../../c-runtime-library/reference/crtdbgreport-crtdbgreportw.md) per generare un report di debug con un messaggio utente. Le macro `_RPTW` chiamano la funzione `_CrtDbgReportW` per generare lo stesso report con caratteri wide. Le macro `_RPTF` e `_RPTFW` creano un report di debug con il file di origine e il numero di riga in cui è stata chiamata la macro di report, oltre al messaggio utente. Il messaggio utente viene creato tramite la sostituzione degli argomenti `arg`[*n*] nella stringa `format`, usando le stesse regole definite dalla funzione [printf](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
 `_CrtDbgReport` o `_CrtDbgReportW` genera il report di debug e ne determina la destinazione o destinazioni, in base alle modalità del report e al file definito per `reportType`. Le funzioni [_CrtSetReportFile](../../c-runtime-library/reference/crtsetreportmode.md) e [_CrtSetReportMode](../../c-runtime-library/reference/crtsetreportfile.md) vengono usate per definire le destinazioni per ogni tipo di report.  
  
 Se viene chiamata una macro `_RPT` senza chiamare `_CrtSetReportMode` o `_CrtSetReportFile`, i messaggi vengono visualizzati come indicato di seguito.  
  
|Tipo di report|Destinazione di output|  
|-----------------|------------------------|  
|`_CRT_WARN`|Il testo dell'avviso non viene visualizzato.|  
|`_CRT_ERROR`|Finestra popup. Come se fosse stato specificato `_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_WNDW);`.|  
|`_CRT_ASSERT`|Uguale a `_CRT_ERROR`.|  
  
 Quando la destinazione è una finestra di messaggio di debug e l'utente sceglie il pulsante **Riprova**, `_CrtDbgReport` o `_CrtDbgReportW` restituisce 1, inducendo le macro ad avviare il debugger, a condizione che sia abilitato il debug JIT (Just-In-Time). Per altre informazioni sull'uso di queste macro come meccanismo di gestione degli errori di debug, vedere [Using Macros for Verification and Reporting](/visualstudio/debugger/macros-for-reporting) (Uso delle macro per verifiche e report).  
  
 Sono disponibili altre due macro che generano un report di debug. La macro [_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) genera un report, ma solo quando il relativo argomento espressione restituisce FALSE. [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) è identica a `_ASSERT`, ma include l'espressione non riuscita nel report generato.  
  
## <a name="requirements"></a>Requisiti  
  
|Macro|Intestazione obbligatoria|  
|-----------|---------------------|  
|Macro `_RPT`|\<crtdbg.h>|  
|Macro `_RPTF`|\<crtdbg.h>|  
|Macro `_RPTW`|\<crtdbg.h>|  
|Macro `_RPTFW`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
 Anche se queste sono macro e diventano disponibili includendo Crtdbg.h, l'applicazione deve collegarsi a una delle librerie di debug perché queste macro chiamano altre funzioni di runtime.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio nell'argomento [_ASSERT](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md).  
  
## <a name="net-framework-equivalent"></a>Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di debug](../../c-runtime-library/debug-routines.md)
