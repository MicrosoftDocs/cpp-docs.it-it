---
title: "Blocchi di descrizione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocchi, descrizione"
  - "blocchi di descrizione"
  - "NMAKE (programma), blocchi di descrizione"
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Blocchi di descrizione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un blocco di descrizione è una riga di dipendenze eventualmente seguita da un blocco di comandi:  
  
```  
targets... : dependents...  
    commands...  
```  
  
 In una riga di dipendenze vengono specificate una o più destinazioni e zero o più dipendenti.  Una destinazione deve trovarsi all'inizio della riga.  Separare le destinazioni dai dipendenti con due punti \(:\). Sono consentiti spazi e tabulazioni.  Per dividere la riga, utilizzare una barra rovesciata \(\\\) dopo una destinazione o un dipendente.  Se una destinazione non è disponibile oppure presenta un timestamp precedente a quello di un dipendente o è una [pseudo\-destinazione](../build/pseudotargets.md), vengono eseguiti i comandi NMAKE.  Se un dipendente rappresenta una destinazione altrove e non è presente oppure i relativi dipendenti non sono aggiornati, viene eseguito l'aggiornamento del dipendente prima di quello della dipendenza corrente.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Destinazioni](../build/targets.md)  
  
 [Dipendenti](../build/dependents.md)  
  
## Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)