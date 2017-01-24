---
title: "Strutture UNWIND_INFO concatenate | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 176835bf-f118-45d9-9128-9db4b7571864
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Strutture UNWIND_INFO concatenate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se il flag UNW\_FLAG\_CHAININFO è impostato, una struttura UNWIND\_INFO è una struttura secondaria e il campo indirizzo condiviso del gestore eccezioni o della struttura UNWIND\_INFO concatenata contiene le informazioni di rimozione primarie.  Il codice seguente recupera le informazioni UNWIND principali, presupponendo che `unwindInfo` sia la struttura con il flag UNW\_FLAG\_CHAININFO impostato.  
  
```  
PRUNTIME_FUNCTION primaryUwindInfo = (PRUNTIME_FUNCTION)&(unwindInfo->UnwindCode[( unwindInfo->CountOfCodes + 1 ) & ~1]);  
```  
  
 La struttura UNWIND\_INFO concatenata risulta utile in due situazioni.  Innanzitutto può essere utilizzata per i segmenti di codice non contigui.  L'utilizzo di questa struttura consente di ridurre la dimensione delle voci UNWIND\_INFO richieste, poiché non è necessario duplicare la matrice dei codici di rimozione dalla struttura UNWIND\_INFO principale.  
  
 È possibile utilizzare anche informazioni concatenate per raggruppare i salvataggi dei registri volatili.  Il compilatore può ritardare il salvataggio di alcuni registri volatili finché non esce dal prologo della voce di funzione.  È possibile registrare la voce UNWIND\_INFO principale relativa alla parte della funzione prima del codice raggruppato e quindi impostare la struttura UNWIND\_INFO concatenata con una dimensione del prologo diversa da zero, dove i codici di rimozione in tale struttura riflettono le operazioni di salvataggio dei registri non volatili.  In tal caso, tutti i codici di rimozione sono istanze di UWOP\_SAVE\_NONVOL.  Un raggruppamento che salva i registri non volatili utilizzando una SPINTA o modificare il registro di RSP utilizzo di allocazione dello stack imposta aggiuntive non è supportato.  
  
 Un elemento UNWIND\_INFO che dispone di un set UNW\_FLAG\_CHAININFO può contenere una voce RUNTIME\_FUNCTION il cui elemento UNW\_FLAG\_CHAININFO dispone anche di un set UNWIND\_INFO \(shrink\-wrapping multiplo\).  I puntatori UNWIND\_INFO concatenati arriveranno infine a un elemento UNWIND\_INFO in cui il flag UNW\_FLAG\_CHAININFO non è impostato. Si tratta dell'elemento UNWIND\_INFO principale che punta al punto di ingresso effettivo della routine.  
  
## Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)