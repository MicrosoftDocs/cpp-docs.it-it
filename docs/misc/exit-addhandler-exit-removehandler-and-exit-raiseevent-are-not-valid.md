---
title: "&#39;Exit AddHandler&#39;, &#39;Exit RemoveHandler&#39; e &#39;Exit RaiseEvent&#39; non sono validi | Microsoft Docs"
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
  - "vbc31111"
  - "bc31111"
helpviewer_keywords: 
  - "BC31111"
ms.assetid: e02264f3-0645-4de5-b622-8a2a74496b64
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit AddHandler&#39;, &#39;Exit RemoveHandler&#39; e &#39;Exit RaiseEvent&#39; non sono validi
'Exit AddHandler', 'Exit RemoveHandler' e 'Exit RaiseEvent' non sono validi. Usare 'Return' per uscire dai membri dell'evento.  
  
 L'istruzione `Exit` non può essere usata per uscire dai metodi `AddHandler`, `RemoveHandler` o `RaiseEvent` in una dichiarazione `Custom Event`. Per uscire dal metodo, usare l'istruzione `Return`, senza specificare un'espressione restituita.  
  
 **ID errore:** BC31111  
  
### Per correggere l'errore  
  
-   Sostituire l'istruzione `Exit` con un'istruzione `Return`.  
  
     Verificare che l'istruzione `Return` non specifichi un'espressione restituita.  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent \- eliminazione](http://msdn.microsoft.com/it-it/7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [Return Statement](../Topic/Return%20Statement%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)