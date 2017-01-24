---
title: "L&#39;ereditariet&#224; da &#39;System.&lt;nomeclasse&gt;&#39; non &#232; valida | Microsoft Docs"
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
  - "vbc30015"
  - "bc30015"
helpviewer_keywords: 
  - "BC30015"
ms.assetid: b4c005df-a510-47c7-b5cc-27f4514d32b6
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;ereditariet&#224; da &#39;System.&lt;nomeclasse&gt;&#39; non &#232; valida
Una classe non può derivare da `System.Array`, `System.Delegate`, `System.Enum` o `System.ValueType`.  
  
 **ID errore:** BC30015  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `Inherits` o modificarla in modo che derivi da una classe base valida.  
  
## Vedere anche  
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)   
 [Object Variable Declaration](../Topic/Object%20Variable%20Declaration%20\(Visual%20Basic\).md)