---
title: _RPT, _RPTF, _RPTW, _RPTFW Macros
ms.date: 11/04/2016
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 567fe0a68f5adad6f5d90ef3da9d673a75bb83a6
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70949077"
---
# <a name="_rpt-_rptf-_rptw-_rptfw-macros"></a>_RPT, _RPTF, _RPTW, _RPTFW Macros

Tiene traccia dello stato di un'applicazione mediante la generazione di un report di debug (solo versione di debug). Si noti che *n* specifica il *numero di argomenti negli argomenti* e può essere 0, 1, 2, 3, 4 o 5.

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

*reportType*<br/>
Tipo di report: **_CRT_WARN**, **_CRT_ERROR**o **_CRT_ASSERT**.

*format*<br/>
Stringa di controllo del formato usata per creare il messaggio utente.

*args*<br/>
Argomenti di sostituzione utilizzati dal *formato*.

## <a name="remarks"></a>Note

Tutte queste macro accettano i parametri *reportType* e *Format* . Potrebbero anche accettare fino a quattro argomenti aggiuntivi, indicati dal numero aggiunto al nome della macro. Ad esempio, **_RPT0** e **_RPTF0** non accettano argomenti aggiuntivi, **_RPT1** e **_RPTF1** prendono *arg1*, **_RPT2** e **_RPTF2** accettano *arg1* e **arg2**e così via.

Le macro **RPT** e **_RPTF** sono simili alla funzione [printf](printf-printf-l-wprintf-wprintf-l.md) , perché possono essere utilizzate per tenere traccia dello stato di avanzamento di un'applicazione durante il processo di debug. Tuttavia, queste macro sono più flessibili di **printf** perché non è necessario che siano racchiuse in istruzioni **#ifdef** per impedire che vengano chiamate in una build finale di un'applicazione. Questa flessibilità viene eseguita usando la macro _ [debug](../../c-runtime-library/debug.md) ; le macro **RPT** e **_RPTF** sono disponibili solo quando è definito il flag _ **debug** . Quando _ **debug** non è definito, le chiamate a queste macro vengono rimosse durante la pre-elaborazione.

Le macro **_RPTW** e **_RPTFW** sono versioni a caratteri wide di queste macro. Sono simili a **wprintf** e accettano stringhe di caratteri wide come argomenti.

Le macro **RPT** chiamano la funzione [_CrtDbgReport](crtdbgreport-crtdbgreportw.md) per generare un report di debug con un messaggio utente. Le macro **_RPTW** chiamano la funzione **_CrtDbgReportW** per generare lo stesso report con caratteri wide. Le macro **_RPTF** e **_RPTFW** creano un report di debug con il file di origine e il numero di riga in cui è stata chiamata la macro di report, oltre al messaggio utente. Il messaggio utente viene creato sostituendo gli argomenti **arg**[*n*] nella stringa di *formato* , usando le stesse regole definite dalla funzione [printf](printf-printf-l-wprintf-wprintf-l.md) .

**_CrtDbgReport** o **_CrtDbgReportW** genera il report di debug e ne determina le destinazioni in base alle modalità di report correnti e al file definito per *reportType*. Le funzioni [_CrtSetReportFile](crtsetreportmode.md) e [_CrtSetReportMode](crtsetreportfile.md) vengono usate per definire le destinazioni per ogni tipo di report.

Se viene chiamata una macro **RPT** e non è stato chiamato né **_CrtSetReportMode** né **_CrtSetReportFile** , i messaggi vengono visualizzati come indicato di seguito.

|Tipo di report|Destinazione di output|
|-----------------|------------------------|
|**_CRT_WARN**|Il testo dell'avviso non viene visualizzato.|
|**_CRT_ERROR**|Finestra popup. Come se fosse stato specificato `_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_WNDW);`.|
|**_CRT_ASSERT**|Uguale a **_CRT_ERROR**.|

Quando la destinazione è una finestra di messaggio di debug e l'utente sceglie il pulsante **Riprova** , **_CrtDbgReport** o **_CrtDbgReportW** restituisce 1, causando l'avvio del debugger da parte di queste macro, purché sia abilitato il debug JIT (just-in-Time). Per altre informazioni sull'uso di queste macro come meccanismo di gestione degli errori di debug, vedere [Using Macros for Verification and Reporting](/visualstudio/debugger/macros-for-reporting) (Uso delle macro per verifiche e report).

Sono disponibili altre due macro che generano un report di debug. La macro [_ASSERT](assert-asserte-assert-expr-macros.md) genera un report, ma solo quando il relativo argomento espressione restituisce FALSE. [_ASSERTE](assert-asserte-assert-expr-macros.md) è esattamente come **_ASSERT**, ma include l'espressione non riuscita nel report generato.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-----------|---------------------|
|Macro **RPT**|\<crtdbg.h>|
|Macro **_RPTF**|\<crtdbg.h>|
|Macro **_RPTW**|\<crtdbg.h>|
|Macro **_RPTFW**|\<crtdbg.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Solo versioni di debug delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

Anche se queste sono macro e diventano disponibili includendo Crtdbg.h, l'applicazione deve collegarsi a una delle librerie di debug perché queste macro chiamano altre funzioni di runtime.

## <a name="example"></a>Esempio

Vedere l'esempio nell'argomento [_ASSERT](assert-asserte-assert-expr-macros.md).

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
