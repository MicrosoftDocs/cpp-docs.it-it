---
title: "Il parametro &#39;&lt;nomeparametro&gt;&#39;in &#39;&lt;nomemetodo&gt;&#39; contiene gi&#224; un argomento omesso corrispondente | Microsoft Docs"
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
  - "vbc32021"
  - "bc32021"
helpviewer_keywords: 
  - "BC32021"
ms.assetid: f51d29ba-c5b3-4731-a426-4c5ba11b4e1f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro &#39;&lt;nomeparametro&gt;&#39;in &#39;&lt;nomemetodo&gt;&#39; contiene gi&#224; un argomento omesso corrispondente
Una chiamata di routine fornisce un argomento in base al nome dopo aver omesso lo stesso argomento in base alla posizione. Ad esempio:  
  
```  
Public Sub ABC(ByVal X As Byte, Optional ByVal Y As Byte = 0, _ Optional ByVal Z As Byte = 0) ' ... Call ABC(6, , Y:=3)   ' Argument Y omitted by position, supplied by name.  
```  
  
 **ID errore:** BC32021  
  
### Per correggere l'errore  
  
-   Specificare l'argomento in base alla posizione oppure rimuovere la virgola che lo omette.  
  
## Vedere anche  
 [Passing Arguments by Position and by Name](../Topic/Passing%20Arguments%20by%20Position%20and%20by%20Name%20\(Visual%20Basic\).md)