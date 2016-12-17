---
title: "Il progetto &#39;&lt;nomeprogetto1&gt;&#39; include un riferimento indiretto al progetto &#39;&lt;nomeprogetto2&gt;&#39; che contiene &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
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
  - "vbc31532"
  - "bc31532"
helpviewer_keywords: 
  - "BC31532"
ms.assetid: 9ef6574e-b049-4a2e-9b12-fea2dfe06cd1
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il progetto &#39;&lt;nomeprogetto1&gt;&#39; include un riferimento indiretto al progetto &#39;&lt;nomeprogetto2&gt;&#39; che contiene &#39;&lt;nometipo&gt;&#39;
Il progetto '\<nomeprogetto1\>' include un riferimento indiretto al progetto '\<nomeprogetto2\>' che contiene '\<nometipo\>'. Aggiungere un riferimento di progetto a '\<nomeprogetto2\>' al progetto.  
  
 Il codice presente nel progetto accede a un tipo definito in un altro progetto, ma il progetto non include un riferimento diretto al progetto di definizione.  
  
 Il tipo può essere una classe, una struttura, un'interfaccia, un modulo o un'enumerazione.  
  
 Il progetto che definisce il tipo citato produce un assembly contenente il tipo. Se il progetto non fa direttamente riferimento al progetto di definizione, il compilatore non garantisce che l'assembly contenente il tipo sia nella soluzione e disponibile per l'accesso.  
  
 **ID errore:** BC31532  
  
### Per correggere l'errore  
  
-   Determinare quale progetto definisce il tipo citato e aggiungere un riferimento al progetto.  
  
## Vedere anche  
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: gestione dei riferimenti](http://msdn.microsoft.com/it-it/910912ce-0dc9-4569-9274-32c44a20cb2c)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)