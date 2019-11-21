---
title: 'Timing of exception handling: A summary'
ms.date: 05/07/2019
helpviewer_keywords:
- sequence [C++]
- sequence, of handlers
- exception handling [C++], timing
- setjmpex.h
- termination handlers [C++], timing
- setjmp.h
- handlers [C++], order of exception
- structured exception handling [C++], timing
ms.assetid: 5d1da546-73fd-4673-aa1a-7ac0f776c420
ms.openlocfilehash: 870606c3661df3654581760214e48ef2bdfb1987
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246340"
---
# <a name="timing-of-exception-handling-a-summary"></a>Timing of exception handling: A summary

A termination handler is executed no matter how the **__try** statement block is terminated. Causes include jumping out of the **__try** block, a `longjmp` statement that transfers control out of the block, and unwinding the stack due to exception handling.

> [!NOTE]
>  The Microsoft C++ compiler supports two forms of the `setjmp` and `longjmp` statements. La versione veloce ignora la gestione delle terminazioni ma è più efficiente. To use this version, include the file \<setjmp.h>. L'altra versione supporta la gestione delle terminazioni come descritto nel paragrafo precedente. To use this version, include the file \<setjmpex.h>. L'aumento delle prestazioni della versione veloce dipende dalla configurazione hardware.

Il sistema operativo esegue tutti i gestori terminazioni nell'ordine corretto (incluso il corpo di un gestore eccezioni), prima che sia possibile eseguire qualsiasi altro codice.

Quando la causa dell'interruzione è un'eccezione, il sistema deve innanzitutto eseguire la parte del filtro di uno o più gestori eccezioni, quindi decidere gli elementi da terminare. L'ordine degli eventi è il seguente:

1. Viene generata un'eccezione.

1. Il sistema esamina la gerarchia dei gestori eccezioni attivi ed esegue il filtro del gestore con precedenza più elevata; questo è il gestore eccezioni installato più recentemente e quello con un livello di annidamento più profondo, in termini di blocchi e chiamate di funzione.

1. Se questo filtro supera il controllo (restituisce 0), il processo continua fino a quando non viene trovato un filtro che non invece non lo supera.

1. If this filter returns -1, execution continues where the exception was raised, and no termination takes place.

1. Se il filtro restituisce 1, si verificano i seguenti eventi:

   - Il sistema rimuove lo stack, deselezionando tutti gli stack frame tra il codice attualmente in esecuzione (dove è stata generata l'eccezione) e lo stack frame contenente il gestore eccezioni che ottiene il controllo.

   - Man mano che lo stack viene rimosso, viene eseguito ogni gestore terminazioni presente nello stack.

   - Viene eseguito il gestore eccezioni stesso.

   - Il controllo passa alla riga di codice dopo la fine del gestore eccezioni.

## <a name="see-also"></a>Vedere anche

[Writing a termination handler](../cpp/writing-a-termination-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)