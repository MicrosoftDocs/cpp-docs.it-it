---
title: "&#39;&lt;nomeelemento&gt;&#39; si riferisce al tipo &#39;&lt;nometipo&gt;&#39; nel progetto &#39;&lt;nomeprogetto&gt;&#39;, ma il tipo &#39;&lt;nometipo&gt;&#39; non &#232; stato trovato nel progetto &#39;&lt;nomeprogetto&gt;&#39; | Microsoft Docs"
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
  - "vbc30960"
  - "bc30960"
helpviewer_keywords: 
  - "BC30960"
ms.assetid: 4ed4bff5-c670-46f6-8360-7287444d50e5
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeelemento&gt;&#39; si riferisce al tipo &#39;&lt;nometipo&gt;&#39; nel progetto &#39;&lt;nomeprogetto&gt;&#39;, ma il tipo &#39;&lt;nometipo&gt;&#39; non &#232; stato trovato nel progetto &#39;&lt;nomeprogetto&gt;&#39;
Un'espressione accede a un classe, a una struttura, a un modulo o a un'interfaccia a cui viene fatto riferimento in un altro progetto, ma quel progetto non contiene il tipo specificato.  
  
 Questo errore si verifica quando il progetto contiene un riferimento indiretto a un altro progetto nella stessa soluzione. In genere il progetto contiene un riferimento a un assembly che contiene un riferimento a un altro progetto. Se l'assembly accede al tipo specificato nell'altro progetto, viene definito il riferimento indiretto al tipo. Tuttavia, se il tipo non è presente nell'altro progetto, viene generato questo errore.  
  
 **ID errore:** BC30960  
  
### Per correggere l'errore  
  
-   Se il tipo citato non è più definito in nessun punto, rimuovere o sostituire l'istruzione che prova ad accedervi. Potrebbe anche essere necessario apportare la stessa modifica nell'assembly che fornisce il riferimento indiretto al tipo citato.  
  
-   Se il tipo citato è definito in un punto qualsiasi, creare un riferimento diretto al progetto o all'assembly che lo definisce.  
  
## Vedere anche  
 [NIB: riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: gestione dei riferimenti](http://msdn.microsoft.com/it-it/910912ce-0dc9-4569-9274-32c44a20cb2c)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)