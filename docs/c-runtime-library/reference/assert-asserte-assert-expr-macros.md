---
title: Macro _ASSERT, _ASSERTE, _ASSERT_EXPR
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
- _ASSERTE
- ASSERTE
- _ASSERT_EXPR
helpviewer_keywords:
- debugging [CRT], using macros
- _ASSERTE macro
- macros, debugging with
- debug reporting macros
- _ASSERT macro
- _ASSERT_EXPR macro
ms.assetid: e98fd2a6-7f5e-4aa8-8fe8-e93490deba36
ms.openlocfilehash: 26a1439e4de8824edd11af1afd455d2b2c31c088
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79443080"
---
# <a name="_assert-_asserte-_assert_expr-macros"></a>Macro _ASSERT, _ASSERTE, _ASSERT_EXPR

Valutare un'espressione e generare un report di debug quando il risultato è **false** (solo versione di debug).

## <a name="syntax"></a>Sintassi

```C
// Typical usage:
_ASSERT_EXPR( booleanExpression, message );
_ASSERT( booleanExpression );
_ASSERTE( booleanExpression );
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Espressione scalare (incluse le espressioni puntatore) che restituisce un valore diverso da zero (true) oppure 0 (false).

*message*<br/>
Stringa di caratteri wide come parte del report.

## <a name="remarks"></a>Osservazioni

Le macro **_ASSERT_EXPR**, **_ASSERT** e **_ASSERTE** forniscono un'applicazione con un meccanismo semplice e pulito per verificare i presupposti durante il processo di debug. Sono molto flessibili perché non devono essere racchiuse in istruzioni `#ifdef` per evitare che vengano chiamate in una build finale di un'applicazione. Questa flessibilità viene raggiunta usando la macro [_DEBUG](../../c-runtime-library/debug.md) . **_ASSERT_EXPR**, **_ASSERT** e **_ASSERTE** sono disponibili solo quando **_DEBUG** viene definito in fase di compilazione. Quando **_DEBUG** non è definito, le chiamate a queste macro vengono rimosse durante la pre-elaborazione.

**_ASSERT_EXPR**, **_ASSERT** e **_ASSERTE** valutano l'argomento *BooleanExpression* e quando il risultato è **false** (0), stampano un messaggio di diagnostica e chiamano [_CrtDbgReportW](crtdbgreport-crtdbgreportw.md) per generare un report di debug. La macro **_ASSERT** stampa un semplice messaggio di diagnostica, **_ASSERTE** include una rappresentazione di stringa dell'espressione non riuscita nel messaggio e **_ASSERT_EXPR** include la *stringa del messaggio nel* messaggio di diagnostica. Queste macro non eseguono alcuna operazione quando *BooleanExpression* restituisce un valore diverso da zero.

**_ASSERT_EXPR**, **_ASSERT** e **_ASSERTE** Invoke **_CrtDbgReportW**, che fa sì che tutto l'output sia in caratteri wide. **_ASSERTE** stampa correttamente i caratteri Unicode in *BooleanExpression* e **_ASSERT_EXPR** stampa i caratteri Unicode nel *messaggio*.

Poiché la macro **_ASSERTE** specifica l'espressione non riuscita e **_ASSERT_EXPR** consente di specificare un messaggio nel report generato, consentono agli utenti di identificare il problema senza fare riferimento al codice sorgente dell'applicazione. Tuttavia, uno svantaggio è che ogni *messaggio* stampato da **_ASSERT_EXPR** e ogni espressione valutata da **_ASSERTE** è incluso nel file di output (versione di debug) dell'applicazione come costante di stringa. Di conseguenza, se viene effettuato un numero elevato di chiamate a **_ASSERT_EXPR** o **_ASSERTE**, queste espressioni possono aumentare significativamente le dimensioni del file di output.

Se non diversamente specificato con le funzioni [_CrtSetReportMode](crtsetreportmode.md) e [_CrtsetReportFile](crtsetreportfile.md) , i messaggi vengono visualizzati in una finestra di dialogo popup equivalente all'impostazione:

```C
_CrtSetReportMode(CRT_ASSERT, _CRTDBG_MODE_WNDW);
````

**_CrtDbgReportW** genera il report di debug e ne determina la destinazione o le destinazioni in base alla modalità report corrente o alle modalità e al file definiti per il tipo di report **_CRT_ASSERT** . Per impostazione predefinita, le asserzioni non riuscite e gli errori di asserzione vengono indirizzati a una finestra di messaggio di debug. Le funzioni [_CrtSetReportFile](crtsetreportmode.md) e [_CrtSetReportMode](crtsetreportfile.md) vengono usate per definire le destinazioni per ogni tipo di report.

Quando la destinazione è una finestra di messaggio di debug e l'utente fa clic sul pulsante **Riprova** , **_CrtDbgReportW** restituisce 1, facendo in modo che le macro **_ASSERT_EXPR**, **_ASSERT** e **_ASSERTE** avviino il debugger purché sia abilitato il debug JIT (just-in-Time).

Per altre informazioni sul processo di creazione di rapporti, vedere la funzione [_CrtDbgReport, _CrtDbgReportW](crtdbgreport-crtdbgreportw.md) . Per altre informazioni sulla risoluzione delle asserzioni non riuscite e sull'uso di queste macro come meccanismo di gestione degli errori di debug, vedere l'argomento relativo all' [uso delle macro per la verifica e la creazione di report](/visualstudio/debugger/macros-for-reporting).

Oltre alle macro di **_ASSERT** , è possibile usare la macro [Assert](assert-macro-assert-wassert.md) per verificare la logica del programma. Questa macro è disponibile nelle versioni di debug e rilascio delle librerie. Anche le macro di debug [_RPT, _RPTF](rpt-rptf-rptw-rptfw-macros.md) sono disponibili per generare un report di debug, ma non restituiscono un'espressione. Le macro **_RPT** generano un report semplice. Le macro **_RPTF** includono il file di origine e il numero di riga in cui è stata chiamata la macro di report nel report generato. Sono disponibili versioni a caratteri wide di queste macro **_RPTW**(_RPTW **_RPTFW**). Le versioni a caratteri wide sono identiche alle versioni a caratteri narrow ad eccezione del fatto che le stringhe a caratteri wide vengono usate per tutti i parametri di stringa e l'output.

Sebbene **_ASSERT_EXPR**, **_ASSERT** e **_ASSERTE** siano macro e siano disponibili includendo \<Crtdbg. h >, l'applicazione deve collegarsi a una versione di debug della libreria di runtime del linguaggio C quando viene definito **_DEBUG** perché queste macro chiamano altre funzioni di Runtime.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-----------|---------------------|
|**_ASSERT_EXPR**, **_ASSERT**, **_ASSERTE**|\<crtdbg.h>|

## <a name="example"></a>Esempio

In questo programma, vengono effettuate chiamate alle macro **_ASSERT** e **_ASSERTE** per testare la condizione `string1 == string2`. Se la condizione non riesce, queste macro stampano un messaggio di diagnostica. Nel programma viene inoltre usato il gruppo di macro **_RPT** e **_RPTF** , in alternativa alla funzione **printf** .

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
