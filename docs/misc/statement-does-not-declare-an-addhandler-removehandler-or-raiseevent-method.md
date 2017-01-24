---
title: "L&#39;istruzione non dichiara un metodo &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39; | Microsoft Docs"
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
  - "vbc31113"
  - "bc31113"
helpviewer_keywords: 
  - "BC31113"
ms.assetid: f8299c9d-6030-43e5-878e-8d2b042191b5
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione non dichiara un metodo &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39;
L'istruzione non fornisce un'istruzione di dichiarazione `AddHandler`, `RemoveHandler` o `RaiseEvent` su una routine `Custom Event`. Una dichiarazione di evento personalizzato è un blocco di codice incluso all'interno delle istruzioni `Custom Event` e `End Event`. All'interno del blocco, ogni routine `Custom Event` viene visualizzata come un blocco interno racchiuso tra un'istruzione di dichiarazione e un'istruzione `End`.  
  
 **ID errore:** BC31113  
  
### Per correggere l'errore  
  
-   Fornire un'istruzione di dichiarazione `AddHandler`, `RemoveHandler` o `RaiseEvent`.  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent \- eliminazione](http://msdn.microsoft.com/it-it/7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)