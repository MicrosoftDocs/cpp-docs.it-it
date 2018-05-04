---
title: Macro _RPT, _RPTF, _RPTW, _RPTFW | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a53a069138b4e54988be008917e5ca2b24fa0a6c
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="rpt-rptf-rptw-rptfw-macros"></a>_RPT, _RPTF, _RPTW, _RPTFW Macros

Tiene traccia dello stato di un'applicazione mediante la generazione di un report di debug (solo versione di debug). Si noti che *n* specifica il numero di argomenti *args* e può essere 0, 1, 2, 3, 4 o 5.

## <a name="syntax"></a>Sintassi

```C
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

### <a name="parameters"></a>Parametri

*reportType* tipo di Report: **CRT_WARN**, **CRT_ERROR**, o **CRT_ASSERT**.

*formato* stringa di controllo del formato utilizzato per creare il messaggio utente.

*args* argomenti di sostituzione usati dal *formato*.

## <a name="remarks"></a>Note

Tutte queste macro richiedono la *reportType* e *formato* parametri. Potrebbero anche accettare fino a quattro argomenti aggiuntivi, indicati dal numero aggiunto al nome della macro. Ad esempio **_RPT0** e **_RPTF0** non accettano alcun argomento aggiuntivo **_RPT1** e **_RPTF1** richiedere *arg1*, **_RPT2** e **_RPTF2** accettano *arg1* e **arg2**e così via.

Il **rpt** e **rptf** sono simili alle macro il [printf](printf-printf-l-wprintf-wprintf-l.md) funziona, poiché possono essere utilizzati per rilevare lo stato di avanzamento di un'applicazione durante il processo di debug. Tuttavia, queste macro sono più flessibili **printf** perché non dovranno essere racchiusi tra parentesi **#ifdef** le istruzioni per evitare che vengano definite in una build finale di un'applicazione. Questa flessibilità viene raggiunta tramite il [debug](../../c-runtime-library/debug.md) macro; il **rpt** e **rptf** macro sono disponibili solo quando il **debug** flag è definito. Quando si **debug** non è definito, le chiamate a queste macro vengono rimosse durante la pre-elaborazione.

Il **rptw** e **rptfw** macro sono versioni a caratteri wide di queste macro. Sono ad esempio **wprintf** e intraprendere le stringhe di caratteri wide come argomenti.

Il **rpt** chiamata di macro il [CrtDbgReport](crtdbgreport-crtdbgreportw.md) funzione per generare un report di debug con un messaggio utente. Il **rptw** chiamata di macro il **CrtDbgReportW** funzione per generare il report stesso con caratteri "wide". Il **rptf** e **rptfw** macro di creano un report di debug con il numero di riga e file di origine in cui è stata chiamata la macro di report, inoltre per il messaggio utente. Il messaggio utente viene creato tramite la sostituzione il **arg**[*n*] argomenti al *formato* stringa, usando le stesse regole definite per il [printf](printf-printf-l-wprintf-wprintf-l.md)(funzione).

**CrtDbgReport** oppure **CrtDbgReportW** genera il rapporto di debug e determina il destinazioni in base alle modalità rapporto correnti e definiti per il file *reportType*. Le funzioni [_CrtSetReportMode](crtsetreportmode.md) e [_CrtSetReportFile](crtsetreportfile.md) vengono usate per definire le destinazioni per ogni tipo di report.

Se un **rpt** macro viene chiamata e né **CrtSetReportMode** né **crtsetreportfile** è stato chiamato, i messaggi vengono visualizzati come indicato di seguito.

|Tipo di report|Destinazione di output|
|-----------------|------------------------|
|**CRT_WARN**|Il testo dell'avviso non viene visualizzato.|
|**CRT_ERROR**|Finestra popup. Come se fosse stato specificato `_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_WNDW);`.|
|**CRT_ASSERT**|Uguale a **CRT_ERROR**.|

Quando la destinazione è una finestra di messaggio di debug e l'utente sceglie il **ripetere** pulsante **CrtDbgReport** oppure **CrtDbgReportW** restituisce 1, causando queste macro avviare il debugger, purché debug just-in-time (JIT) è abilitato. Per altre informazioni sull'uso di queste macro come meccanismo di gestione degli errori di debug, vedere [Using Macros for Verification and Reporting](/visualstudio/debugger/macros-for-reporting) (Uso delle macro per verifiche e report).

Sono disponibili altre due macro che generano un report di debug. La macro [_ASSERT](assert-asserte-assert-expr-macros.md) genera un report, ma solo quando il relativo argomento espressione restituisce FALSE. [ASSERTE](assert-asserte-assert-expr-macros.md) è esattamente like **macro Assert**, ma include l'espressione non riuscita nel report generato.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-----------|---------------------|
|**Rpt** macro|\<crtdbg.h>|
|**Rptf** macro|\<crtdbg.h>|
|**Rptw** macro|\<crtdbg.h>|
|**Rptfw** macro|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

Anche se queste sono macro e diventano disponibili includendo Crtdbg.h, l'applicazione deve collegarsi a una delle librerie di debug perché queste macro chiamano altre funzioni di runtime.

## <a name="example"></a>Esempio

Vedere l'esempio nell'argomento [_ASSERT](assert-asserte-assert-expr-macros.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
