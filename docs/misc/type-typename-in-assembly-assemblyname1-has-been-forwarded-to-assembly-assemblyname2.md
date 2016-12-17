---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; nell&#39;assembly &#39;&lt;nomeassembly1&gt;&#39; &#232; stato inoltrato all&#39;assembly &#39;&lt;nomeassembly2&gt;&#39; | Microsoft Docs"
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
  - "vbc31424"
  - "bc31424"
helpviewer_keywords: 
  - "BC31424"
  - "inoltro del tipo"
ms.assetid: 0f53e613-c1cb-4722-acb5-afa3091e277b
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; nell&#39;assembly &#39;&lt;nomeassembly1&gt;&#39; &#232; stato inoltrato all&#39;assembly &#39;&lt;nomeassembly2&gt;&#39;
Il tipo '\<nometipo\>' nell'assembly '\<nomeassembly1\>' è stato inoltrato all'assembly '\<nomeassembly2\>'. Un riferimento a '\<nomeassembly2\>' non è presente nel progetto o il tipo '\<nometipo\>' non è presente nell'assembly '\<nomeassembly2\>'.  
  
 Un'espressione nel codice sorgente per un assembly fa riferimento a un tipo che è stato inoltrato a un altro assembly, ma non è possibile trovare il tipo nell'assembly di destinazione.  
  
 *Inoltro del tipo* indica la riassegnazione della definizione di una classe, struttura, interfaccia, delegato o enumerazione a un assembly diverso da quello in cui è stato definito. Viene spesso usato in combinazione con il *refactoring del codice*, che consente di dividere un assembly in due o più assembly oppure di spostare il codice da un assembly a un altro.  
  
 Anche se il tipo è temporaneamente ancora disponibile nell'assembly originale, è probabile che diventi indefinito quando il refactoring del codice lo rimuove dall'assembly originale.  
  
 **ID errore:** BC31424  
  
### Per correggere l'errore  
  
-   Verificare che il tipo sia presente nell'assembly di destinazione.  
  
-   Verificare che il progetto includa un riferimento all'assembly di destinazione.  
  
## Vedere anche  
 <xref:System.Runtime.CompilerServices.TypeForwardedToAttribute>   
 [Type Forwarding \(C\+\+\/CLI\)](../windows/type-forwarding-cpp-cli.md)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)