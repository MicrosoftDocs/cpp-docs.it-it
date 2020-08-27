---
title: 'Intervallo di gestione delle eccezioni: Riepilogo'
description: La tempistica e l'ordine di esecuzione della gestione delle eccezioni in Microsoft C++.
ms.date: 08/24/2020
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
ms.openlocfilehash: 2ce501d8d74b6f0f7ca92e193c39f8ce58a66053
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898363"
---
# <a name="timing-of-exception-handling-a-summary"></a>Intervallo di gestione delle eccezioni: Riepilogo

Un gestore terminazioni viene eseguito indipendentemente dal modo in cui il **`__try`** blocco di istruzioni viene terminato. Le cause includono il salto all'esterno del **`__try`** blocco, un' `longjmp` istruzione che trasferisce il controllo dal blocco e la rimozione dello stack a causa della gestione delle eccezioni.

> [!NOTE]
> Il compilatore Microsoft C++ supporta due forme delle `setjmp` istruzioni e `longjmp` . La versione veloce ignora la gestione delle terminazioni ma è più efficiente. Per usare questa versione, includere il file \<setjmp.h> . L'altra versione supporta la gestione delle terminazioni come descritto nel paragrafo precedente. Per usare questa versione, includere il file \<setjmpex.h> . L'aumento delle prestazioni della versione veloce dipende dalla configurazione hardware.

Il sistema operativo esegue tutti i gestori terminazioni nell'ordine corretto (incluso il corpo di un gestore eccezioni), prima che sia possibile eseguire qualsiasi altro codice.

Quando la causa dell'interruzione è un'eccezione, il sistema deve innanzitutto eseguire la parte del filtro di uno o più gestori eccezioni, quindi decidere gli elementi da terminare. L'ordine degli eventi è il seguente:

1. Viene generata un'eccezione.

1. Il sistema esamina la gerarchia dei gestori di eccezioni attivi ed esegue il filtro del gestore con la precedenza più alta. Si tratta del gestore di eccezioni installato più di recente e più profondamente annidato, in base ai blocchi e alle chiamate di funzione.

1. Se il filtro passa il controllo (restituisce 0), il processo continua fino a quando non viene trovato un filtro che non supera il controllo.

1. Se questo filtro restituisce-1, l'esecuzione continua dove è stata generata l'eccezione e non viene completata alcuna terminazione.

1. Se il filtro restituisce 1, si verificano i seguenti eventi:

   - Il sistema rimuove lo stack: Cancella tutti gli stack frame tra la posizione in cui è stata generata l'eccezione e la stack frame che contiene il gestore di eccezioni.

   - Man mano che lo stack viene rimosso, viene eseguito ogni gestore terminazioni presente nello stack.

   - Viene eseguito il gestore eccezioni stesso.

   - Il controllo passa alla riga di codice dopo la fine del gestore eccezioni.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
