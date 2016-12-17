---
title: "I parametri dei metodi &#39;AddHandler&#39;, &#39;RemoveHandler&#39; e &#39;RaiseEvent&#39; non possono essere dichiarati come &#39;&lt;modificatore&gt;&#39; | Microsoft Docs"
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
  - "vbc31138"
  - "bc31138"
helpviewer_keywords: 
  - "BC31138"
ms.assetid: 6d8df92a-95fc-4a7d-ab1e-06d312155c55
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I parametri dei metodi &#39;AddHandler&#39;, &#39;RemoveHandler&#39; e &#39;RaiseEvent&#39; non possono essere dichiarati come &#39;&lt;modificatore&gt;&#39;
I parametri dei metodi `AddHandler`, `RemoveHandler` e `RaiseEvent` non possono essere dichiarati con i modificatori `Optional` o `ParamArray`.  
  
 I modificatori `Optional` o `ParamArray` sono consentiti solo nei parametri nelle dichiarazioni `Declare`, `Function`, `Property` e `Sub`.  
  
 **ID errore:** BC31138  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Optional` o `ParamArray` dall'elenco di parametri.  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent \- eliminazione](http://msdn.microsoft.com/it-it/7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [Optional](../Topic/Optional%20\(Visual%20Basic\).md)   
 [ParamArray](../Topic/ParamArray%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)