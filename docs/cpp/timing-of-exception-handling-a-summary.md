---
title: 'Intervallo di gestione delle eccezioni: riepilogo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c9e14f89bba02a53af5956ec2a2dcb52bfb1a38c
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="timing-of-exception-handling-a-summary"></a>Intervallo di gestione delle eccezioni: riepilogo
Un gestore terminazioni viene eseguito indipendentemente dalla modalità in cui il blocco di istruzioni `__try` viene terminato. Le cause possono includere l'uscita dal blocco `__try`, un'istruzione `longjmp` che trasferisce il controllo fuori dal blocco e la rimozione dello stack dovuta alla gestione delle eccezioni.  
  
> [!NOTE]
>  Visual C++ supporta due formati delle istruzioni `setjmp` e `longjmp`. La versione veloce ignora la gestione delle terminazioni ma è più efficiente. Per utilizzare questa versione, includere il file \<setjmp >. L'altra versione supporta la gestione delle terminazioni come descritto nel paragrafo precedente. Per utilizzare questa versione, includere il file \<setjmpex >. L'aumento delle prestazioni della versione veloce dipende dalla configurazione hardware.  
  
 Il sistema operativo esegue tutti i gestori terminazioni nell'ordine corretto (incluso il corpo di un gestore eccezioni), prima che sia possibile eseguire qualsiasi altro codice.  
  
 Quando la causa dell'interruzione è un'eccezione, il sistema deve innanzitutto eseguire la parte del filtro di uno o più gestori eccezioni, quindi decidere gli elementi da terminare. L'ordine degli eventi è il seguente:  
  
1.  Viene generata un'eccezione.  
  
2.  Il sistema esamina la gerarchia dei gestori eccezioni attivi ed esegue il filtro del gestore con precedenza più elevata; questo è il gestore eccezioni installato più recentemente e quello con un livello di annidamento più profondo, in termini di blocchi e chiamate di funzione.  
  
3.  Se questo filtro supera il controllo (restituisce 0), il processo continua fino a quando non viene trovato un filtro che non invece non lo supera.  
  
4.  Se questo filtro restituisce -1, l'esecuzione continua in cui è stata generata l'eccezione e terminazione non avviene.  
  
5.  Se il filtro restituisce 1, si verificano i seguenti eventi:  
  
    -   Il sistema rimuove lo stack, deselezionando tutti gli stack frame tra il codice attualmente in esecuzione (dove è stata generata l'eccezione) e lo stack frame contenente il gestore eccezioni che ottiene il controllo.  
  
    -   Man mano che lo stack viene rimosso, viene eseguito ogni gestore terminazioni presente nello stack.  
  
    -   Viene eseguito il gestore eccezioni stesso.  
  
    -   Il controllo passa alla riga di codice dopo la fine del gestore eccezioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)   
 [Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)