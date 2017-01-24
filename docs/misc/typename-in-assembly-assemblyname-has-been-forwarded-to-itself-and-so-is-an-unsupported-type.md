---
title: "&#39;&lt;nometipo&gt;&#39; nell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; &#232; stato inoltrato a se stesso, quindi non &#232; un tipo supportato | Microsoft Docs"
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
  - "bc31425"
  - "vbc31425"
helpviewer_keywords: 
  - "BC31425"
  - "inoltro del tipo"
ms.assetid: e3275d55-3f4c-4bbc-9c8f-f55c4e973063
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; nell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; &#232; stato inoltrato a se stesso, quindi non &#232; un tipo supportato
Un assembly usa <xref:System.Runtime.CompilerServices.TypeForwardedToAttribute> per inoltrare uno dei suoi tipi a un altro assembly ma specifica lo stesso tipo all'interno dello stesso assembly.  
  
 *Inoltro del tipo* indica la riassegnazione della definizione di una classe, struttura, interfaccia, delegato o enumerazione a un assembly diverso da quello in cui è stato definito. Viene spesso usato in combinazione con il *refactoring del codice*, che consente di dividere un assembly in due o più assembly oppure di spostare il codice da un assembly a un altro.  
  
 L'inoltro di un tipo a se stesso genera un inoltro circolare. Se un altro assembly provasse ad accedere al tipo inoltrato, entrerebbe in un inoltro infinito senza mai raggiungere un tipo che non è stato inoltrato.  
  
 **ID errore:** BC31425  
  
### Per correggere l'errore  
  
-   Inoltrare il tipo a un tipo di un altro assembly, oppure non inoltrarlo affatto.  
  
## Vedere anche  
 <xref:System.Runtime.CompilerServices.TypeForwardedToAttribute>   
 [Type Forwarding \(C\+\+\/CLI\)](../windows/type-forwarding-cpp-cli.md)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)