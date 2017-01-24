---
title: "&#39;System.Runtime.InteropServices.DllImportAttribute&#39; non pu&#242; essere applicato ai metodi &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39; | Microsoft Docs"
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
  - "bc31531"
  - "vbc31531"
helpviewer_keywords: 
  - "BC31531"
ms.assetid: 0ea3a16c-cfe0-4cb5-b740-358679272f8d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;System.Runtime.InteropServices.DllImportAttribute&#39; non pu&#242; essere applicato ai metodi &#39;AddHandler&#39;, &#39;RemoveHandler&#39; o &#39;RaiseEvent&#39;
L'attributo `DllImportAttribute` è stato applicato a una dichiarazione di metodo `AddHandler`, `RemoveHandler` o `RaiseEvent`. Questo attributo può essere usato solo con un oggetto `Function` o `Sub` vuoto.  
  
 **ID errore:** BC31531  
  
### Per correggere l'errore  
  
-   Rimuovere l'attributo `DllImportAttribute` dalla dichiarazione di metodo.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DllImportAttribute>   
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [RaiseEvent \- eliminazione](http://msdn.microsoft.com/it-it/7f765da0-5491-40b6-9ed5-24c98f9daad9)