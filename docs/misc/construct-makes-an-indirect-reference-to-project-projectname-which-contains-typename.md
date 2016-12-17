---
title: "Il costrutto include un riferimento indiretto al progetto &#39;&lt;nomeprogetto&gt;&#39; che contiene &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31533"
  - "bc31533"
helpviewer_keywords: 
  - "BC31533"
ms.assetid: e3f55f9f-92be-4ecb-bc8f-9e57049a0805
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il costrutto include un riferimento indiretto al progetto &#39;&lt;nomeprogetto&gt;&#39; che contiene &#39;&lt;nometipo&gt;&#39;
Il costrutto include un riferimento indiretto al progetto '\<nomeprogetto\>', che contiene '\<nometipo\>'. Aggiungere un riferimento di progetto a '\<nomeprogetto\>' al progetto.  
  
 Un'espressione o istruzione accede a un tipo definito in un altro progetto, ma il progetto non include un riferimento diretto al progetto di definizione.  
  
 Il tipo può essere una classe, una struttura, un'interfaccia, un modulo o un'enumerazione.  
  
 Il progetto che definisce il tipo citato produce un assembly contenente il tipo. Se il progetto non fa direttamente riferimento al progetto di definizione, il compilatore non garantisce che l'assembly contenente il tipo sia nella soluzione e disponibile per l'accesso.  
  
 **ID errore:** BC31533  
  
### Per correggere l'errore  
  
-   Determinare quale progetto definisce il tipo citato e aggiungere un riferimento al progetto.  
  
## Vedere anche  
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: Gestione dei riferimenti](http://msdn.microsoft.com/it-it/910912ce-0dc9-4569-9274-32c44a20cb2c)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)