---
title: Macro _ASSERT, _ASSERTE, _ASSERT_EXPR | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
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
- _ASSERTE
- ASSERTE
- _ASSERT
- _ASSERT_EXPR
dev_langs:
- C++
helpviewer_keywords:
- debugging [CRT], using macros
- _ASSERTE macro
- macros, debugging with
- debug reporting macros
- _ASSERT macro
- _ASSERT_EXPR macro
ms.assetid: e98fd2a6-7f5e-4aa8-8fe8-e93490deba36
caps.latest.revision: 27
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2a089017b38d27130883bb091190e92d2b1e3469
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="assert-asserte-assertexpr-macros"></a>Macro _ASSERT, _ASSERTE, _ASSERT_EXPR

Valutare un'espressione e generare un report di debug quando il risultato è **False** (solo versione debug).

## <a name="syntax"></a>Sintassi

```C
// Typical usage:
_ASSERT_EXPR( booleanExpression, message );
_ASSERT( booleanExpression );
_ASSERTE( booleanExpression );
```

### <a name="parameters"></a>Parametri

*booleanExpression* un'espressione scalare (incluse le espressioni puntatore) che restituisce zero (true) oppure 0 (false).

*messaggio* una stringa a caratteri wide da visualizzare come parte del report.

## <a name="remarks"></a>Note

Il **assert_expr**, **Assert** e **ASSERTE** macro offrono un'applicazione con un meccanismo semplice per controllare i presupposti durante il processo di debug. Sono molto flessibili perché non devono essere racchiuse in istruzioni `#ifdef` per evitare che vengano chiamate in una build finale di un'applicazione. Questa flessibilità viene raggiunta usando la macro [_DEBUG](../../c-runtime-library/debug.md) . **Assert_expr**, **macro Assert** e **ASSERTE** sono disponibili solo quando **debug** è definito in fase di compilazione. Quando si **debug** non è definito, le chiamate a queste macro vengono rimosse durante la pre-elaborazione.

**Assert_expr**, **macro Assert** e **ASSERTE** valutare loro *booleanExpression* argomento e quando il risultato è **false**(0), stampano un messaggio di diagnostica e chiamano [CrtDbgReportW](crtdbgreport-crtdbgreportw.md) per generare un report di debug. Il **macro Assert** macro viene stampato un messaggio di diagnostica semplice, **ASSERTE** include una rappresentazione di stringa dell'espressione non riuscito nel messaggio, e **assert_expr** include il *messaggio* stringa nel messaggio di diagnostica. Queste macro non eseguono alcuna operazione quando *booleanExpression* restituisce diverso da zero.

**Assert_expr**, **macro Assert** e **ASSERTE** richiamare **CrtDbgReportW**, che fa sì che tutto l'output in caratteri "wide". **ASSERTE** stampa correttamente i caratteri Unicode in *booleanExpression* e **assert_expr** stampa i caratteri Unicode in *messaggio*.

Poiché il **ASSERTE** macro specifica l'espressione non riuscito, e **assert_expr** consente si specifica un messaggio nel report generato, consentono agli utenti di identificare il problema senza fare riferimento al codice sorgente dell'applicazione. Tuttavia, uno svantaggio è che ogni *messaggio* stampato da **assert_expr** e tutte le espressioni valutate dal **ASSERTE** è incluso nell'output (versione di debug) file dell'applicazione come costante stringa. Pertanto, se un numero elevato di chiamate a **assert_expr** oppure **ASSERTE**, queste espressioni possono aumentare notevolmente le dimensioni del file di output.

Se non diversamente specificato con le funzioni [_CrtSetReportMode](crtsetreportmode.md) e [_CrtSetReportFile](crtsetreportfile.md), i messaggi vengono visualizzati in una finestra di dialogo popup equivalente all'impostazione:

```C
_CrtSetReportMode(CRT_ASSERT, _CRTDBG_MODE_WNDW);
````

**CrtDbgReportW** genera il rapporto di debug e determina la destinazione o destinazioni, in base alle modalità report o le modalità file definito per il **CRT_ASSERT** tipo report. Per impostazione predefinita, le asserzioni non riuscite e gli errori di asserzione vengono indirizzati a una finestra di messaggio di debug. Le funzioni [_CrtSetReportMode](crtsetreportmode.md) e [_CrtSetReportFile](crtsetreportfile.md) vengono usate per definire le destinazioni per ogni tipo di report.

Quando la destinazione è una finestra di messaggio di debug e l'utente fa clic sul **ripetere** pulsante **CrtDbgReportW** restituisce 1, che provoca il **assert_expr**, **_ ASSERT** e **ASSERTE** macro per avviare il debugger, purché il debug just-in-time (JIT) è abilitato.

Per altre informazioni sul processo di creazione dei report, vedere la funzione [_CrtDbgReport, _CrtDbgReportW](crtdbgreport-crtdbgreportw.md). Per altre informazioni sulla risoluzione delle asserzioni non riuscite e sull'uso di queste macro come meccanismo di gestione degli errori di debug, vedere l'argomento relativo all' [uso delle macro per la verifica e la creazione di report](/visualstudio/debugger/macros-for-reporting).

Oltre ai **macro Assert** macro, la [assert](assert-macro-assert-wassert.md) macro può essere utilizzato per verificare la logica del programma. Questa macro è disponibile nelle versioni di debug e rilascio delle librerie. Anche le macro di debug [_RPT, _RPTF](rpt-rptf-rptw-rptfw-macros.md) sono disponibili per generare un report di debug, ma non restituiscono un'espressione. Il **rpt** macro di generano un report semplice. Il **rptf** le macro includono il numero di riga e file di origine in cui è stata chiamata la macro di report nel report generato. Versioni a caratteri Wide di queste macro sono disponibili (**rptw**, **rptfw**). Le versioni a caratteri wide sono identiche alle versioni a caratteri narrow ad eccezione del fatto che le stringhe a caratteri wide vengono usate per tutti i parametri di stringa e l'output.

Sebbene **assert_expr**, **Assert** e **ASSERTE** sono macro e sono disponibili includendo \<CRTDBG. h >, l'applicazione deve collegarsi a un debug versione della libreria di runtime C quando **debug** è definita perché queste macro chiamano altre funzioni di runtime.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-----------|---------------------|
|**ASSERT_EXPR**, **MACRO ASSERT**, **ASSERTE**|\<crtdbg.h>|

## <a name="example"></a>Esempio

In questo programma, vengono effettuate chiamate al **macro Assert** e **ASSERTE** macro per testare la condizione `string1 == string2`. Se la condizione non riesce, queste macro stampano un messaggio di diagnostica. Il **rpt** e **rptf** gruppo di macro viene anche usato in questo programma, come alternativa per il **printf** (funzione).

```C
// crt_ASSERT_macro.c
// compile with: /D_DEBUG /MTd /Od /Zi /link /verbose:lib /debug
//
// This program uses the _ASSERT and _ASSERTE debugging macros.
//

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <crtdbg.h>

int main()
{
   char *p1, *p2;

   // The Reporting Mode and File must be specified
   // before generating a debug report via an assert
   // or report macro.
   // This program sends all report types to STDOUT.
   _CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
   _CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
   _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
   _CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDOUT);
   _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
   _CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDOUT);

   // Allocate and assign the pointer variables.
   p1 = (char *)malloc(10);
   strcpy_s(p1, 10, "I am p1");
   p2 = (char *)malloc(10);
   strcpy_s(p2, 10, "I am p2");

   // Use the report macros as a debugging
   // warning mechanism, similar to printf.
   // Use the assert macros to check if the
   // p1 and p2 variables are equivalent.
   // If the expression fails, _ASSERTE will
   // include a string representation of the
   // failed expression in the report.
   // _ASSERT does not include the
   // expression in the generated report.
   _RPT0(_CRT_WARN,
       "Use the assert macros to evaluate the expression p1 == p2.\n");
   _RPTF2(_CRT_WARN, "\n Will _ASSERT find '%s' == '%s' ?\n", p1, p2);
   _ASSERT(p1 == p2);

   _RPTF2(_CRT_WARN, "\n\n Will _ASSERTE find '%s' == '%s' ?\n",
          p1, p2);
   _ASSERTE(p1 == p2);

   _RPT2(_CRT_ERROR, "'%s' != '%s'\n", p1, p2);

   free(p2);
   free(p1);

   return 0;
}
```

```Output
Use the assert macros to evaluate the expression p1 == p2.
crt_ASSERT_macro.c(54) :
Will _ASSERT find 'I am p1' == 'I am p2' ?
crt_ASSERT_macro.c(55) : Assertion failed!
crt_ASSERT_macro.c(58) :

Will _ASSERTE find 'I am p1' == 'I am p2' ?
crt_ASSERT_macro.c(59) : Assertion failed: p1 == p2
'I am p1' != 'I am p2'
```

## <a name="see-also"></a>Vedere anche

[Routine di debug](../../c-runtime-library/debug-routines.md)<br/>
[assert Macro, _assert, _wassert](assert-macro-assert-wassert.md)<br/>
[Macro _RPT, _RPTF, _RPTW, _RPTFW](rpt-rptf-rptw-rptfw-macros.md)<br/>
