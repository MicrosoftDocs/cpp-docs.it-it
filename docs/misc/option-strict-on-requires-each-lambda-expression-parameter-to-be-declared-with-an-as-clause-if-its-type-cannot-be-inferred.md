---
title: "Option Strict On richiede che ciascun parametro di espressione lambda venga dichiarato con una clausola &#39;As&#39; se non &#232; possibile dedurne il relativo tipo | Microsoft Docs"
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
  - "bc36642"
  - "vbc36642"
helpviewer_keywords: 
  - "BC36642"
ms.assetid: 2aaa62b8-49c9-4ae8-b0f5-08e3f0b5ad10
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On richiede che ciascun parametro di espressione lambda venga dichiarato con una clausola &#39;As&#39; se non &#232; possibile dedurne il relativo tipo
È stato dichiarato un parametro in un'espressione lambda senza usare una clausola `As` con `Option Strict` On.  
  
```  
' Not valid when Option Strict is on. ' Dim increment1 = Function (n) n + 1  
```  
  
 La dichiarazione precedente è valida se il tipo di `n` può essere dedotto. Se ad esempio si assegna l'espressione lambda precedente a un delegato della funzione, `Del`:  
  
```  
Delegate Function Del(ByVal p As Integer) As Integer  
```  
  
 A questo punto il tipo di `n` può essere dedotto dal parametro `p`:  
  
```  
Dim increment2 as Del = Function(n) n + 1  
```  
  
 **ID errore:** BC36642  
  
### Per correggere l'errore  
  
-   Aggiungere una clausola `As` alla dichiarazione del parametro:  
  
    ```  
    Dim increment3 = Function (n As Integer) n + 1  
    ```  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)