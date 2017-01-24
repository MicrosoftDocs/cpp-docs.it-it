---
title: "Gli identificatori non sono validi nei metodi &#39;AddHandler&#39;, &#39;RemoveHandler&#39; e &#39;RaiseEvent&#39; | Microsoft Docs"
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
  - "vbc31135"
  - "bc31135"
helpviewer_keywords: 
  - "BC31135"
ms.assetid: 2eaf5a6f-d201-4f9b-bcdf-12170cb44791
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli identificatori non sono validi nei metodi &#39;AddHandler&#39;, &#39;RemoveHandler&#39; e &#39;RaiseEvent&#39;
Non è possibile modificare le dichiarazioni dei metodi `AddHandler`, `RemoveHandler` e `RaiseEvent` con parole chiave come `Public` o `ReadOnly`. Solo le dichiarazioni modificabili possono contenere queste parole chiave.  
  
 **ID errore:** BC31135  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave dalla dichiarazione di metodo.  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent \- eliminazione](http://msdn.microsoft.com/it-it/7f765da0-5491-40b6-9ed5-24c98f9daad9)   
 [NIB Parole chiave \(Visual Basic\)](http://msdn.microsoft.com/it-it/3a6fda51-6ade-4862-a407-1c305c3906ec)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)