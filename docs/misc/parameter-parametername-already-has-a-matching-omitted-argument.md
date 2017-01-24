---
title: "Il parametro &#39;&lt;nomeparametro&gt;&#39; contiene gi&#224; un argomento omesso corrispondente | Microsoft Docs"
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
  - "vbc36566"
  - "bc36566"
helpviewer_keywords: 
  - "BC36566"
ms.assetid: b37af6bc-abd0-4436-bf8a-a467e3603342
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro &#39;&lt;nomeparametro&gt;&#39; contiene gi&#224; un argomento omesso corrispondente
Una chiamata di routine fornisce un argomento in base al nome dopo aver omesso lo stesso argomento in base alla posizione. Di seguito è riportato un esempio:  
  
```vb#  
Public Sub ABC(ByVal X As Byte, Optional ByVal Y As Byte = 0, _ Optional ByVal Z As Byte = 0) ' ... ' Argument Y is omitted by position, but supplied by name. Call ABC(6, , Y:=3)     
```  
  
 **ID errore:** BC36566  
  
### Per correggere l'errore  
  
-   Specificare l'argomento in base alla posizione oppure rimuovere la virgola che lo omette.  
  
## Vedere anche  
 [Passing Arguments by Position and by Name](../Topic/Passing%20Arguments%20by%20Position%20and%20by%20Name%20\(Visual%20Basic\).md)