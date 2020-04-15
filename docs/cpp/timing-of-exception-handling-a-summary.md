---
title: 'Tempi di gestione delle eccezioni: un riepilogo'
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
ms.openlocfilehash: 17d1c250a98afc2b86c198735602df7d80118bd4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81316602"
---
# <a name="timing-of-exception-handling-a-summary"></a>Tempi di gestione delle eccezioni: un riepilogo

Viene eseguito un gestore di terminazione indipendentemente dal modo in cui il blocco di istruzioni **__try** viene terminato. Le cause includono l'uscita `longjmp` dal blocco **__try,** un'istruzione che trasferisce il controllo all'esterno del blocco e la rimozione dello stack a causa della gestione delle eccezioni.

> [!NOTE]
> Il compilatore Microsoft Cè supporta `setjmp` due `longjmp` forme di istruzione e . La versione veloce ignora la gestione delle terminazioni ma è più efficiente. Per utilizzare questa versione, \<includere il file setjmp.h>. L'altra versione supporta la gestione delle terminazioni come descritto nel paragrafo precedente. Per utilizzare questa versione, \<includere il file setjmpex.h>. L'aumento delle prestazioni della versione veloce dipende dalla configurazione hardware.

Il sistema operativo esegue tutti i gestori terminazioni nell'ordine corretto (incluso il corpo di un gestore eccezioni), prima che sia possibile eseguire qualsiasi altro codice.

Quando la causa dell'interruzione è un'eccezione, il sistema deve innanzitutto eseguire la parte del filtro di uno o più gestori eccezioni, quindi decidere gli elementi da terminare. L'ordine degli eventi è il seguente:

1. Viene generata un'eccezione.

1. Il sistema esamina la gerarchia dei gestori eccezioni attivi ed esegue il filtro del gestore con precedenza più elevata; questo è il gestore eccezioni installato più recentemente e quello con un livello di annidamento più profondo, in termini di blocchi e chiamate di funzione.

1. Se questo filtro supera il controllo (restituisce 0), il processo continua fino a quando non viene trovato un filtro che non invece non lo supera.

1. Se questo filtro restituisce -1, l'esecuzione continua nel punto in cui è stata generata l'eccezione e non viene eseguita alcuna terminazione.

1. Se il filtro restituisce 1, si verificano i seguenti eventi:

   - Il sistema rimuove lo stack, deselezionando tutti gli stack frame tra il codice attualmente in esecuzione (dove è stata generata l'eccezione) e lo stack frame contenente il gestore eccezioni che ottiene il controllo.

   - Man mano che lo stack viene rimosso, viene eseguito ogni gestore terminazioni presente nello stack.

   - Viene eseguito il gestore eccezioni stesso.

   - Il controllo passa alla riga di codice dopo la fine del gestore eccezioni.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)<br/>
[Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)
