---
title: "Non &#232; possibile usare il parametro &#39;&lt;nomeparametro&gt; di &#39;ByRef&#39; in un&#39;espressione lambda | Microsoft Docs"
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
  - "bc36639"
  - "vbc36639"
helpviewer_keywords: 
  - "BC36639"
ms.assetid: 5913f9b6-2929-4c05-8dd1-00b10fcd5a83
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare il parametro &#39;&lt;nomeparametro&gt; di &#39;ByRef&#39; in un&#39;espressione lambda
Un'espressione lambda dichiarata all'interno di `Sub` o di una funzione non può usare alcun parametro `ByRef` di quella funzione `Sub`. Ad esempio, il codice seguente causerà questo errore perché l'espressione lambda usa il parametro `ByRef``n`.  
  
```  
'' Not valid.   
'Sub ExampleSub(ByRef n As Integer)  
  
'    Dim lambda = Function(p As Integer) p + n  
  
'End Sub  
```  
  
 **ID errore:** BC36639  
  
### Per correggere l'errore  
  
-   Assegnare il parametro `ByRef` a una variabile locale e usare la variabile locale al posto dell'espressione lambda, come mostrato nel codice seguente:  
  
    ```  
    Sub ExampleSub(ByRef n As Integer)  
  
        Dim temp = n  
        Dim lambda = Function(p As Integer) p + temp  
  
    End Sub  
    ```  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)