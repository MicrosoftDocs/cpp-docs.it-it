---
title: Macro assert, _assert, _wassert | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- assert
- _assert
- _wassert
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- assert
- _assert
- _wassert
- assert/_wassert
dev_langs:
- C++
helpviewer_keywords:
- aborting programs
- assert function
- assert macro
ms.assetid: a9ca031a-648b-47a6-bdf1-65fc7399dd40
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0318abde877e9b647c1781408d2e22cc9d70824e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="assert-macro-assert-wassert"></a>Macro assert, _assert, _wassert

Valuta un'espressione e, quando il risultato è **false**, stampa un messaggio di diagnostica e arresta il programma.

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

*espressione* un'espressione scalare (incluse le espressioni puntatore) che corrisponde a zero (**true**) oppure 0 (**false**).

*messaggio* il messaggio da visualizzare.

*nome del file* il nome dell'origine file l'asserzione non è riuscita.

*riga* il numero di riga nel file di origine dell'asserzione non riuscita.

## <a name="remarks"></a>Note

Il **assert** macro viene in genere utilizzata per identificare errori logici durante lo sviluppo di programmi. Che consente di arrestare l'esecuzione del programma quando si verificano condizioni impreviste implementando il *espressione* argomento restituisca **false** solo quando il programma funziona in modo non corretto. Controlli delle asserzioni possono essere disattivati in fase di compilazione definendo la macro **NDEBUG**. È possibile disattivare il **asserzione** macro senza modificare i file di origine utilizzando un **/DNDEBUG** opzione della riga di comando. È possibile disattivare il **asserzione** macro nel codice sorgente utilizzando un `#define NDEBUG` direttiva prima \<Assert > è incluso.

Il **asserzione** stampe macro un messaggio di diagnostica quando *espressione* restituisce **false** (0) e chiama [abort](abort.md) terminare programma esecuzione. Viene eseguita alcuna azione se *espressione* viene **true** (diverso da zero). Il messaggio di diagnostica include l'espressione non riuscita, il nome del file di origine e il numero di riga in cui l'asserzione non è riuscita.

Il messaggio di diagnostica viene visualizzato in caratteri wide. Pertanto, funzionerà come previsto anche se sono presenti caratteri Unicode nell'espressione.

La destinazione dei messaggi di diagnostica dipende dal tipo di applicazione che ha chiamato la routine. Le applicazioni console ricevono sempre il messaggio attraverso **stderr**. In un'applicazione basata su Windows, **asserzione** chiama le finestre [MessageBox](http://msdn.microsoft.com/library/windows/desktop/ms645505) funzione per creare una finestra di messaggio per visualizzare il messaggio con un **OK** pulsante. Quando l'utente fa clic su **OK**, il programma terminerà immediatamente.

Quando l'applicazione viene collegata a una versione di debug delle librerie di runtime **asserzione** crea una finestra di messaggio con tre pulsanti: **Abort**, **ripetere**e **Ignorare**. Se l'utente fa clic su **Interrompi**, il programma terminerà immediatamente. Se l'utente fa clic su **Riprova**, il debugger viene chiamato e l'utente può eseguire il debug del programma se il debug JIT (Just-In-Time) è abilitato. Se l'utente fa clic **Ignore**, **assert** continua con l'esecuzione normale: creando la finestra di messaggio con il **OK** pulsante. Si noti che facendo clic su **Ignora** quando esiste una condizione di errore può verificarsi un comportamento indefinito.

Per ulteriori informazioni sul debug CRT, vedere [Tecniche di debug CRT](/visualstudio/debugger/crt-debugging-techniques).

Il **macro Assert** e **wassert** funzioni sono funzioni CRT interne. Contribuiscono a ridurre al minimo il codice necessario nei file oggetto per supportare le asserzioni. Non è consigliabile chiamare direttamente queste funzioni.

Il **asserzione** macro è abilitata in entrambe le versioni release e debug delle librerie di runtime C quando **NDEBUG** non è definito. Quando si **NDEBUG** è definito, la macro è disponibile ma non valuta il relativo argomento e non ha alcun effetto. Quando è abilitato, il **asserzione** le chiamate della macro **wassert** per la sua implementazione. Sono disponibili anche altre macro di asserzione, [_ASSERT](assert-asserte-assert-expr-macros.md), [_ASSERTE](assert-asserte-assert-expr-macros.md) e [_ASSERT_EXPR](assert-asserte-assert-expr-macros.md), ma queste valutano solo le espressioni passate loro al momento della definizione della macro [_DEBUG](../../c-runtime-library/debug.md) e quando si trovano nel codice collegato alla versione di debug delle librerie di runtime C.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**l'asserzione**, **wassert**|\<assert.h>|

La firma del **macro Assert** funzione non è disponibile in un file di intestazione. La firma del **wassert** funzione è disponibile solo quando il **NDEBUG** macro non è definita.

## <a name="example"></a>Esempio

In questo programma, il **analyze_string** funzione Usa il **assert** macro per testare diverse condizioni correlate alla stringa e lunghezza. Se una qualsiasi delle condizioni non riesce, il programma stampa un messaggio indicando la causa dell'errore.

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

Dopo l'errore di asserzione, a seconda della versione del sistema operativo e della libreria di runtime, viene visualizzata una finestra di messaggio che contiene un messaggio analogo al seguente:

```Output
A problem caused the program to stop working correctly. Windows will close the program and notify you if a solution is available.
```

Se è installato un debugger, scegliere **Debug** per avviare il debugger oppure **Chiudi programma** per uscire.

## <a name="see-also"></a>Vedere anche

[Gestione degli errori](../../c-runtime-library/error-handling-crt.md)<br/>
[Controllo di processi e ambiente](../../c-runtime-library/process-and-environment-control.md)<br/>
[abort](abort.md)<br/>
[raise](raise.md)<br/>
[signal](signal.md)<br/>
[Macro _ASSERT, _ASSERTE, _ASSERT_EXPR](assert-asserte-assert-expr-macros.md)<br/>
[_DEBUG](../../c-runtime-library/debug.md)<br/>
