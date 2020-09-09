---
title: Macro assert, _assert, _wassert
description: Effetti delle macro e delle funzioni Assert nel runtime C.
ms.date: 11/04/2016
api_name:
- assert
- _assert
- _wassert
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
- api-ms-win-crt-runtime-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- assert
- _assert
- _wassert
- assert/_wassert
helpviewer_keywords:
- aborting programs
- assert function
- assert macro
ms.assetid: a9ca031a-648b-47a6-bdf1-65fc7399dd40
ms.openlocfilehash: 071424f2201ceda43438fe1056801811fe444a01
ms.sourcegitcommit: 0df2b7ab4e81284c5248e4584767591dcc1950c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/09/2020
ms.locfileid: "89609073"
---
# <a name="assert-macro-_assert-_wassert"></a>Macro assert, _assert, _wassert

Valuta un'espressione e, quando il risultato è **`false`** , stampa un messaggio di diagnostica e interrompe il programma.

## <a name="syntax"></a>Sintassi

```C
assert(
   expression
);
void _assert(
   char const* message,
   char const* filename,
   unsigned line
);
void _wassert(
   wchar_t const* message,
   wchar_t const* filename,
   unsigned line
);
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Espressione scalare (incluse le espressioni puntatore) che restituisce un valore diverso da zero ( **`true`** ) o 0 ( **`false`** ).

*message*<br/>
Messaggio da visualizzare.

*filename*<br/>
Nome del file di origine in cui l'asserzione non è riuscita.

*line*<br/>
Numero di riga nel file di origine dell'asserzione non riuscita.

## <a name="remarks"></a>Commenti

La `assert` viene in genere usata per identificare gli errori di logica durante lo sviluppo di programmi. Utilizzarla per arrestare l'esecuzione del programma quando si verificano condizioni impreviste implementando l'argomento *Expression* per restituire **`false`** solo quando il programma funziona in modo errato. I controlli di asserzione possono essere disattivati in fase di compilazione definendo la macro **NDEBUG**. È possibile disattivare la macro `assert` senza modificare i file di origine usando un'opzione della riga di comando **/DNDEBUG** . È possibile disattivare la `assert` macro nel codice sorgente usando una `#define NDEBUG` direttiva prima che \<assert.h> sia incluso.

La `assert` macro stampa un messaggio di diagnostica quando l' *espressione* restituisce **`false`** (0) e chiama [`abort`](abort.md) per arrestare l'esecuzione del programma. Se *Expression* è **`true`** (diverso da zero), non viene eseguita alcuna azione. Il messaggio di diagnostica include l'espressione non riuscita, il nome del file di origine e il numero di riga in cui l'asserzione non è riuscita.

Il messaggio di diagnostica viene stampato in caratteri wide ( `wchar_t` ). Pertanto, funzionerà come previsto anche se sono presenti caratteri Unicode nell'espressione.

La destinazione dei messaggi di diagnostica dipende dal tipo di applicazione che ha chiamato la routine. Le applicazioni console ricevono il messaggio tramite **stderr**. In un'applicazione basata su Windows `assert` chiama la funzione [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) di Windows per creare una finestra di messaggio per visualizzare il messaggio con tre pulsanti: **Interrompi**, **Riprova**e **Ignora**. Se l'utente fa clic su **Interrompi**, il programma terminerà immediatamente. Se l'utente fa clic su **Riprova**, il debugger viene chiamato e l'utente può eseguire il debug del programma se il debug JIT (Just-In-Time) è abilitato. Se l'utente fa clic su **Ignora**, il programma continuerà con l'esecuzione normale. Facendo clic su **Ignora** quando esiste una condizione di errore può verificarsi un comportamento indefinito poiché le precondizioni del codice chiamante non sono state soddisfatte.

Per eseguire l'override del comportamento di output predefinito indipendentemente dal tipo di app, chiamare [`_set_error_mode`](set-error-mode.md) per selezionare tra il comportamento di output a stderr e di visualizzazione della finestra di dialogo.

Dopo `assert` che Visualizza il messaggio, viene [`abort`](abort.md) chiamato, che visualizza una finestra di dialogo con i pulsanti  **Interrompi**, **Riprova**e **Ignora** . [`abort`](abort.md) esce dal programma, quindi il pulsante **Riprova** e **Ignora** non riprende l'esecuzione del programma dopo la `assert` chiamata. Se viene visualizzata una finestra di dialogo `assert` , la finestra di [`abort`](abort.md) dialogo non viene visualizzata. L'unico momento [`abort`](abort.md) in cui viene visualizzata la finestra di dialogo è quando `assert` Invia l'output a stderr.

Come conseguenza del comportamento precedente, una finestra di dialogo viene sempre visualizzata dopo una `assert` chiamata in modalità di debug. Il comportamento di ogni pulsante viene acquisito nella tabella seguente.

|Modalità di errore|Output in stderr (console/_OUT_TO_STDERR)|Finestra di dialogo Visualizza (Windows/_OUT_TO_MSGBOX)|
|----------|----------------|------------------|
|Interruzione|Uscire immediatamente con il codice di uscita 3|Uscire immediatamente con il codice di uscita 3|
|Riprova|Interrompi nel debugger durante `abort`|Interrompi nel debugger durante `assert`|
|Ignora|Termina l'uscita tramite `abort`|Continuare il programma come se l'asserzione non venisse attivata (potrebbe causare un comportamento non definito perché le precondizioni del codice chiamante non sono state soddisfatte)|

Per altre informazioni sul debug CRT, vedere [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques) (Tecniche di debug CRT).

Le funzioni `_assert` e `_wassert` sono funzioni CRT interne. Contribuiscono a ridurre al minimo il codice necessario nei file oggetto per supportare le asserzioni. Non è consigliabile chiamare direttamente queste funzioni.

La `assert` macro è abilitata sia nelle versioni di rilascio sia nelle versioni di debug delle librerie di runtime C quando non è definito **NDEBUG** . Quando **NDEBUG** è definito, la macro è disponibile ma non valuta il relativo argomento e non ha alcun effetto. Quando è abilitata, la `assert` macro chiama `_wassert` per la relativa implementazione. Sono disponibili anche altre macro di asserzione, [_ASSERT](assert-asserte-assert-expr-macros.md), [_ASSERTE](assert-asserte-assert-expr-macros.md) e [_ASSERT_EXPR](assert-asserte-assert-expr-macros.md), ma queste valutano solo le espressioni passate loro al momento della definizione della macro [_DEBUG](../../c-runtime-library/debug.md) e quando si trovano nel codice collegato alla versione di debug delle librerie di runtime C.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`assert`, `_wassert`|\<assert.h>|

La firma della `_assert` funzione non è disponibile in un file di intestazione. La firma della `_wassert` funzione è disponibile solo quando la macro **NDEBUG** non è definita.

## <a name="example"></a>Esempio

In questo programma la funzione **analyze_string** usa la `assert` macro per testare diverse condizioni correlate alla stringa e alla lunghezza. Se una qualsiasi delle condizioni non riesce, il programma stampa un messaggio indicando la causa dell'errore.

```C
// crt_assert.c
// compile by using: cl /W4 crt_assert.c
#include <stdio.h>
#include <assert.h>
#include <string.h>

void analyze_string( char *string );   // Prototype

int main( void )
{
   char  test1[] = "abc", *test2 = NULL, test3[] = "";

   printf ( "Analyzing string '%s'\n", test1 ); fflush( stdout );
   analyze_string( test1 );
   printf ( "Analyzing string '%s'\n", test2 ); fflush( stdout );
   analyze_string( test2 );
   printf ( "Analyzing string '%s'\n", test3 ); fflush( stdout );
   analyze_string( test3 );
}

// Tests a string to see if it is NULL,
// empty, or longer than 0 characters.
void analyze_string( char * string )
{
   assert( string != NULL );        // Cannot be NULL
   assert( *string != '\0' );       // Cannot be empty
   assert( strlen( string ) > 2 );  // Length must exceed 2
}
```

Il programma genera l'output seguente:

```Output
Analyzing string 'abc'
Analyzing string '(null)'
Assertion failed: string != NULL, file crt_assert.c, line 25
```

Dopo l'errore di asserzione, a seconda della versione del sistema operativo e della libreria di runtime, potrebbe essere visualizzata una finestra di messaggio contenente un messaggio simile al seguente:

```Output
A problem caused the program to stop working correctly. Windows will close the program and notify you if a solution is available.
```

Se è installato un debugger, scegliere **Debug** per avviare il debugger oppure **Chiudi programma** per uscire.

## <a name="see-also"></a>Vedi anche

[Gestione degli errori](../../c-runtime-library/error-handling-crt.md)<br/>
[Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[interruzione](abort.md)<br/>
[sollevare](raise.md)<br/>
[signal](signal.md)<br/>
[_ASSERT, _ASSERTE _ASSERT_EXPR macro](assert-asserte-assert-expr-macros.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
