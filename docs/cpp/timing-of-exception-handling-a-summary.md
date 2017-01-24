---
title: "Intervallo di gestione delle eccezioni: riepilogo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione eccezioni, temporizzazione"
  - "gestori, ordine di eccezione"
  - "sequenza"
  - "sequenza, gestori"
  - "SETJMP.H"
  - "SETJMPEX.H"
  - "gestione eccezioni strutturata, temporizzazione"
  - "gestori di terminazione, temporizzazione"
ms.assetid: 5d1da546-73fd-4673-aa1a-7ac0f776c420
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Intervallo di gestione delle eccezioni: riepilogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un gestore terminazioni viene eseguito indipendentemente dalla modalità in cui il blocco di istruzioni `__try` viene terminato.  Le cause possono includere l'uscita dal blocco `__try`, un'istruzione `longjmp` che trasferisce il controllo fuori dal blocco e la rimozione dello stack dovuta alla gestione delle eccezioni.  
  
> [!NOTE]
>  Visual C\+\+ supporta due formati delle istruzioni `longjmp` e `setjmp`.  La versione veloce ignora la gestione delle terminazioni ma è più efficiente.  Per utilizzare questa versione, è necessario includere il file. SETJMP.H.  L'altra versione supporta la gestione delle terminazioni come descritto nel paragrafo precedente.  Per utilizzare questa versione, è necessario includere il file SETJMPEX.H.  L'aumento delle prestazioni della versione veloce dipende dalla configurazione hardware.  
  
 Il sistema operativo esegue tutti i gestori terminazioni nell'ordine corretto \(incluso il corpo di un gestore eccezioni\), prima che sia possibile eseguire qualsiasi altro codice.  
  
 Quando la causa dell'interruzione è un'eccezione, il sistema deve innanzitutto eseguire la parte del filtro di uno o più gestori eccezioni, quindi decidere gli elementi da terminare.  L'ordine degli eventi è il seguente:  
  
1.  Viene generata un'eccezione.  
  
2.  Il sistema esamina la gerarchia dei gestori eccezioni attivi ed esegue il filtro del gestore con precedenza più elevata; questo è il gestore eccezioni installato più recentemente e quello con un livello di annidamento più profondo, in termini di blocchi e chiamate di funzione.  
  
3.  Se questo filtro supera il controllo \(restituisce 0\), il processo continua fino a quando non viene trovato un filtro che non invece non lo supera.  
  
4.  Se questo filtro restituisce \-1, l'esecuzione continua dal punto in cui è stata generata l'eccezione e la terminazione non avviene.  
  
5.  Se il filtro restituisce 1, si verificano i seguenti eventi:  
  
    -   Il sistema rimuove lo stack, deselezionando tutti gli stack frame tra il codice attualmente in esecuzione \(dove è stata generata l'eccezione\) e lo stack frame contenente il gestore eccezioni che ottiene il controllo.  
  
    -   Man mano che lo stack viene rimosso, viene eseguito ogni gestore terminazioni presente nello stack.  
  
    -   Viene eseguito il gestore eccezioni stesso.  
  
    -   Il controllo passa alla riga di codice dopo la fine del gestore eccezioni.  
  
## Vedere anche  
 [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)   
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)