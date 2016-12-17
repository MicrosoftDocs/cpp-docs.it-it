---
title: "Non &#232; possibile specificare modificatori di matrici nel nome di parametro dell&#39;espressione lambda. Specificarli nel tipo | Microsoft Docs"
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
  - "vbc36643"
  - "bc36643"
helpviewer_keywords: 
  - "BC36643"
ms.assetid: 34b6141b-6eab-4641-a3f4-53ef28c1792b
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare modificatori di matrici nel nome di parametro dell&#39;espressione lambda. Specificarli nel tipo
Gli argomenti di matrice possono essere inviati alle espressioni lambda, ma la dichiarazione di parametro deve includere il tipo di elemento.  
  
```vb#  
' Not valid.  
' Dim arrayExample1 = Function(arrayPara()) 2  
  
' Valid.  
Dim arrayExample2 = Function(arrayPara() As Integer) arrayPara.Length > 0  
Dim arrayexample3 = Function(arrayPara As Integer()) arrayPara.Length > 0  
```  
  
 **ID errore:** BC36643  
  
### Per correggere l'errore  
  
-   Specificare il tipo di elementi contenuti nel segmento di matrice.  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)