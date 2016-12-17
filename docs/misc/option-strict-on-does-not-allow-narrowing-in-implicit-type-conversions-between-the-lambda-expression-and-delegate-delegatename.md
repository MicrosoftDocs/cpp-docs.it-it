---
title: "Option Strict On non consente la riduzione in conversioni implicite di tipi tra l&#39;espressione lambda e il delegato &#39;&lt;nomedelegato&gt;&#39; | Microsoft Docs"
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
  - "bc36662"
  - "vbc36662"
helpviewer_keywords: 
  - "BC36662"
ms.assetid: 4504497b-56ba-4631-ad7b-59975f7fee04
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non consente la riduzione in conversioni implicite di tipi tra l&#39;espressione lambda e il delegato &#39;&lt;nomedelegato&gt;&#39;
Con `Option Strict` non è possibile avere una conversione verso un tipo di dati più piccolo tra il tipo di dati di un parametro in un delegato e il corrispondente parametro di un'espressione lambda assegnata a una variabile di quel tipo di delegato. Nel codice seguente, ad esempio, il delegato `Del` ha un parametro di tipo `Integer`.  
  
```vb#  
Delegate Function Del(ByVal p As Integer) As String  
```  
  
 Di conseguenza, il parametro corrispondente di un'espressione lambda assegnata a una variabile di tipo `Del` può essere un `Integer` o qualsiasi tipo di dati per cui è disponibile una conversione verso un tipo di dati più grande da `Integer`.  
  
```vb#  
' Valid. Dim example1 As Del = Function(n As Integer) "Valid" Dim example2 As Del = Function(n As Long) "Valid" ' Not valid. Dim example3 As Del = Function(n As Short) "Not Valid"  
```  
  
 **ID errore:** BC36662  
  
### Per correggere l'errore  
  
-   Modificare il tipo di dati del parametro nel delegato o l'espressione lambda in modo che sia presente la relazione obbligatoria di conversione verso un tipo di dati più grande.  
  
-   Non specificare tipi di dati di parametro nell'espressione lambda. I tipi saranno dedotti dai parametri corrispondenti nel delegato.  
  
    ```vb#  
    Dim example4 As Del = Function(n) "Valid"  
    ```  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)   
 [Delegates](../Topic/Delegates%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)