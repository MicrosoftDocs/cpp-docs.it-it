---
title: 'Intervallo di gestione delle eccezioni: Un riepilogo'
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
ms.openlocfilehash: 7b52252454e27d622e412f490360a025dfc97838
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221897"
---
# <a name="timing-of-exception-handling-a-summary"></a>Intervallo di gestione delle eccezioni: Un riepilogo

Un gestore terminazioni viene eseguito, indipendentemente dal modo in cui il **try** blocco di istruzioni viene terminato. Cause del passaggio fuori il **try** blocco, un `longjmp` istruzione che trasferisce il controllo di fuori del blocco e la rimozione dello stack dovuta alla gestione delle eccezioni.

> [!NOTE]
>  Microsoft C++ compilatore supporta due forme del `setjmp` e `longjmp` istruzioni. La versione veloce ignora la gestione delle terminazioni ma è più efficiente. Per usare questa versione, includere il file \<setjmp. h >. L'altra versione supporta la gestione delle terminazioni come descritto nel paragrafo precedente. Per usare questa versione, includere il file \<setjmpex >. L'aumento delle prestazioni della versione veloce dipende dalla configurazione hardware.

Il sistema operativo esegue tutti i gestori terminazioni nell'ordine corretto (incluso il corpo di un gestore eccezioni), prima che sia possibile eseguire qualsiasi altro codice.

Quando la causa dell'interruzione è un'eccezione, il sistema deve innanzitutto eseguire la parte del filtro di uno o più gestori eccezioni, quindi decidere gli elementi da terminare. L'ordine degli eventi è il seguente:

1. Viene generata un'eccezione.

1. Il sistema esamina la gerarchia dei gestori eccezioni attivi ed esegue il filtro del gestore con precedenza più elevata; questo è il gestore eccezioni installato più recentemente e quello con un livello di annidamento più profondo, in termini di blocchi e chiamate di funzione.

1. Se questo filtro supera il controllo (restituisce 0), il processo continua fino a quando non viene trovato un filtro che non invece non lo supera.

1. Se questo filtro restituisce -1, l'esecuzione continua in cui è stata generata l'eccezione e terminazione non avviene.

1. Se il filtro restituisce 1, si verificano i seguenti eventi:

   - Il sistema rimuove lo stack, deselezionando tutti gli stack frame tra il codice attualmente in esecuzione (dove è stata generata l'eccezione) e lo stack frame contenente il gestore eccezioni che ottiene il controllo.

   - Man mano che lo stack viene rimosso, viene eseguito ogni gestore terminazioni presente nello stack.

   - Viene eseguito il gestore eccezioni stesso.

   - Il controllo passa alla riga di codice dopo la fine del gestore eccezioni.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)