---
title: "L&#39;istruzione &#39;Return&#39; in un metodo &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39; non pu&#242; restituire un valore | Microsoft Docs"
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
  - "bc30940"
  - "vbc30940"
helpviewer_keywords: 
  - "BC30940"
ms.assetid: 0e4d037a-2d20-40e4-8ead-6d709d1c9c7a
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione &#39;Return&#39; in un metodo &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39; non pu&#242; restituire un valore
I metodi `AddHandler`, `RemoveHandler` e `RaiseEvent` in una dichiarazione `Custom Event` possono contenere istruzioni `Return` per uscire dai metodi. Tuttavia, l'istruzione `Return` non può specificare un valore restituito perché i metodi non possono restituire valori.  
  
 **ID errore:** BC30940  
  
### Per correggere l'errore  
  
-   Rimuovere l'espressione che segue l'istruzione `Return`.  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent \- eliminazione](http://msdn.microsoft.com/it-it/7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [Return Statement](../Topic/Return%20Statement%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)