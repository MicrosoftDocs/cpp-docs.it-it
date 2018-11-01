---
title: _RPT, _RPTF, _RPTW, _RPTFW Macros
ms.date: 11/04/2016
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
ms.openlocfilehash: 61748cca2cdfcc2d72b6943bfeedd9597009e20b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50440094"
---
# <a name="rpt-rptf-rptw-rptfw-macros"></a>_RPT, _RPTF, _RPTW, _RPTFW Macros

Tiene traccia dello stato di un'applicazione mediante la generazione di un report di debug (solo versione di debug). Si noti che *n* specifica il numero di argomenti nella *args* e può essere 0, 1, 2, 3, 4 o 5.

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
Tipo di report: **CRT_WARN**, **CRT_ERROR**, o **CRT_ASSERT**.

*format*<br/>
Stringa di controllo del formato usata per creare il messaggio utente.

*args*<br/>
Argomenti di sostituzione usati da *formato*.

## <a name="remarks"></a>Note

Tutte queste macro accettano i *reportType* e *formato* parametri. Potrebbero anche accettare fino a quattro argomenti aggiuntivi, indicati dal numero aggiunto al nome della macro. Ad esempio, **_RPT0** e **_RPTF0** non accettano altri argomenti, **_RPT1** e **_RPTF1** richiedere *arg1*, **_RPT2** e **_RPTF2** accettano *arg1* e **arg2**e così via.

Il **macro rpt** e **rptf** macro sono simili per il [printf](printf-printf-l-wprintf-wprintf-l.md) funzionare, perché possono essere usati per tenere traccia dello stato di un'applicazione durante il processo di debug. Tuttavia, queste macro sono più flessibili **printf** perché non devono essere racchiusi tra **#ifdef** le istruzioni per evitare che vengano definite in una build finale di un'applicazione. Questa flessibilità viene raggiunta tramite il [debug](../../c-runtime-library/debug.md) macro; gli **macro rpt** e **rptf** macro sono disponibili solo quando il **debug** flag è definito. Quando **debug** non è definito, le chiamate a queste macro vengono rimosse durante la pre-elaborazione.

Il **rptw** e **rptfw** macro sono versioni a caratteri wide di queste macro. Ruoli sono analoghi ai **wprintf** e accettano stringhe di caratteri wide come argomenti.

Il **macro rpt** chiamata di macro le [CrtDbgReport](crtdbgreport-crtdbgreportw.md) funzione per generare un report di debug con un messaggio utente. Il **rptw** chiamata di macro le **CrtDbgReportW** funzione per generare lo stesso report con caratteri "wide". Il **rptf** e **rptfw** macro di creano un report di debug con il numero di riga e file di origine in cui è stata chiamata la macro di report, anche per il messaggio utente. Il messaggio utente viene creato tramite la sostituzione il **arg**[*n*] gli argomenti in di *formato* stringa, usando le stesse regole definite dal [printf](printf-printf-l-wprintf-wprintf-l.md)(funzione).

**CrtDbgReport** oppure **CrtDbgReportW** genera il report di debug e ne determina le destinazioni in base a modalità rapporto correnti e file definito per *reportType*. Le funzioni [_CrtSetReportFile](crtsetreportmode.md) e [_CrtSetReportMode](crtsetreportfile.md) vengono usate per definire le destinazioni per ogni tipo di report.

Se un' **macro rpt** macro viene chiamata e né **CrtSetReportMode** né **crtsetreportfile** è stato chiamato, i messaggi vengono visualizzati come indicato di seguito.

|Tipo di report|Destinazione di output|
|-----------------|------------------------|
|**CRT_WARN**|Il testo dell'avviso non viene visualizzato.|
|**CRT_ERROR**|Finestra popup. Come se fosse stato specificato `_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_WNDW);`.|
|**CRT_ASSERT**|Uguale allo **CRT_ERROR**.|

Quando la destinazione è una finestra di messaggio di debug e l'utente sceglie il **ripetere** sul pulsante **CrtDbgReport** o **CrtDbgReportW** restituisce 1, inducendo le macro ad avviare il il debugger fornito il cui debug just-in-time (JIT) è abilitato. Per altre informazioni sull'uso di queste macro come meccanismo di gestione degli errori di debug, vedere [Using Macros for Verification and Reporting](/visualstudio/debugger/macros-for-reporting) (Uso delle macro per verifiche e report).

Sono disponibili altre due macro che generano un report di debug. La macro [_ASSERT](assert-asserte-assert-expr-macros.md) genera un report, ma solo quando il relativo argomento espressione restituisce FALSE. [ASSERTE](assert-asserte-assert-expr-macros.md) è identica a **macro Assert**, ma include l'espressione non riuscita nel report generato.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-----------|---------------------|
|**Macro rpt** macro|\<crtdbg.h>|
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
