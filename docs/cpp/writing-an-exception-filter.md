---
description: 'Altre informazioni su: scrittura di un filtro eccezioni'
title: Scrittura di un filtro eccezioni
ms.date: 11/04/2016
helpviewer_keywords:
- exception handling [C++], filters
ms.assetid: 47fc832b-a707-4422-b60a-aaefe14189e5
ms.openlocfilehash: 580c0f0b339b25137bb2aea0621463a89e99fc33
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302816"
---
# <a name="writing-an-exception-filter"></a>Scrittura di un filtro eccezioni

È possibile gestire un'eccezione passando al livello del gestore eccezioni o continuando l'esecuzione. Invece di usare il codice del gestore di eccezioni per gestire l'eccezione e il passaggio, è possibile usare *Filter* per eliminare il problema e quindi, restituendo-1, riprendere il flusso normale senza cancellare lo stack.

> [!NOTE]
> Non è possibile continuare l'esecuzione di alcune eccezioni. Se il *filtro* restituisce-1 per tale eccezione, il sistema genera una nuova eccezione. Quando si chiama [RaiseException](/windows/win32/api/errhandlingapi/nf-errhandlingapi-raiseexception), si determina se l'eccezione continuerà.

Il codice seguente, ad esempio, usa una chiamata di funzione nell'espressione di *filtro* : questa funzione gestisce il problema e quindi restituisce-1 per riprendere il normale flusso di controllo:

```cpp
// exceptions_Writing_an_Exception_Filter.cpp
#include <windows.h>
int main() {
   int Eval_Exception( int );

   __try {}

   __except ( Eval_Exception( GetExceptionCode( ))) {
      ;
   }

}
void ResetVars( int ) {}
int Eval_Exception ( int n_except ) {
   if ( n_except != STATUS_INTEGER_OVERFLOW &&
      n_except != STATUS_FLOAT_OVERFLOW )   // Pass on most exceptions
   return EXCEPTION_CONTINUE_SEARCH;

   // Execute some code to clean up problem
   ResetVars( 0 );   // initializes data to 0
   return EXCEPTION_CONTINUE_EXECUTION;
}
```

È consigliabile usare una chiamata di funzione nell'espressione di *filtro* ogni volta che il *filtro* deve eseguire operazioni complesse. La valutazione dell'espressione comporta l'esecuzione della funzione, in questo caso, `Eval_Exception`.

Si noti l'uso di [GetExceptionCode](/windows/win32/Debug/getexceptioncode) per determinare l'eccezione. È necessario chiamare questa funzione all'interno del filtro stesso. `Eval_Exception` non è possibile chiamare `GetExceptionCode` , ma deve essere passato al codice di eccezione.

Questo gestore passa il controllo a un altro gestore a meno che l'eccezione non sia un Integer o un overflow a virgola mobile. In tal caso, il gestore chiama una funzione (`ResetVars` è solo un esempio, non una funzione API) per reimpostare alcune variabili globali. *Statement-block-2*, che in questo esempio è vuoto, non può mai essere eseguito perché `Eval_Exception` non restituisce mai EXCEPTION_EXECUTE_HANDLER (1).

L'utilizzo di una chiamata di funzione è una tecnica generale efficace per gestire le espressioni di filtro complesse. Altre due funzionalità del linguaggio C utili sono:

- Operatore condizionale

- Operatore virgola

L'operatore condizionale è spesso utile poiché può essere utilizzato per verificare un codice restituito specifico e quindi per restituire uno di due valori diversi. Il filtro nel codice seguente, ad esempio, riconosce l'eccezione solo se l'eccezione è STATUS_INTEGER_OVERFLOW:

```cpp
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ? 1 : 0 ) {
```

Lo scopo dell'operatore condizionale in questo caso è principalmente di fornire chiarezza, poiché il codice seguente produce gli stessi risultati:

```cpp
__except( GetExceptionCode() == STATUS_INTEGER_OVERFLOW ) {
```

L'operatore condizionale è più utile nelle situazioni in cui si desidera che il filtro restituisca-1, EXCEPTION_CONTINUE_EXECUTION.

L'operatore virgola consente di eseguire operazioni multiple e indipendenti in un'unica espressione. L'effetto è simile a quello dell'esecuzione di più istruzioni e quindi della restituzione del valore dell'ultima espressione. Ad esempio, il codice seguente archivia il codice dell'eccezione in una variabile e quindi verifica l'evento:

```cpp
__except( nCode = GetExceptionCode(), nCode == STATUS_INTEGER_OVERFLOW )
```

## <a name="see-also"></a>Vedi anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
