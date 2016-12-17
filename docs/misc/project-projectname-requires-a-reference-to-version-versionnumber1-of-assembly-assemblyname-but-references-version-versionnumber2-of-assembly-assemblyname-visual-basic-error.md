---
title: "Il progetto &#39;&lt;nomeprogetto&gt;&#39; richiede un riferimento alla versione &#39;&lt;numeroversione1&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; ma fa riferimento alla versione &#39;&lt;numeroversione2&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; (errore di Visual Basic) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32209"
  - "bc32209"
helpviewer_keywords: 
  - "BC32209"
ms.assetid: fe50736b-444f-4e40-8f80-9760ff13a153
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il progetto &#39;&lt;nomeprogetto&gt;&#39; richiede un riferimento alla versione &#39;&lt;numeroversione1&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; ma fa riferimento alla versione &#39;&lt;numeroversione2&gt;&#39; dell&#39;assembly &#39;&lt;nomeassembly&gt;&#39; (errore di Visual Basic)
Un progetto contiene un riferimento indiretto a un assembly definito altrove, ma ha anche un riferimento diretto a una versione successiva di quell'assembly.  
  
 Se il compilatore ha consentito che il codice usi il riferimento indiretto, potrebbe non essere possibile accedere ai tipi e agli elementi di programmazione definiti nella versione successiva ma non in quella precedente.  
  
 **ID errore:** BC32209  
  
### Per correggere l'errore  
  
-   Rimuovere il riferimento indiretto alla versione precedente dell'assembly e usare quello diretto alla versione successiva.  
  
## Vedere anche  
 [Assembly in Common Language Runtime](../Topic/Assemblies%20in%20the%20Common%20Language%20Runtime.md)   
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB: gestione dei riferimenti](http://msdn.microsoft.com/it-it/910912ce-0dc9-4569-9274-32c44a20cb2c)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)