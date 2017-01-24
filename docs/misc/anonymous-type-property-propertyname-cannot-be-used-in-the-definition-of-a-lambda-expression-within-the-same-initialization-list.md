---
title: "Impossibile utilizzare la propriet&#224; di tipo anonimo &#39;&lt;nomepropriet&#224;&gt;&#39; nella definizione di un&#39;espressione lambda nello stesso elenco di inizializzazione | Microsoft Docs"
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
  - "vbc36549"
  - "bc36549"
helpviewer_keywords: 
  - "BC36549"
ms.assetid: 6d04692a-957a-41ce-a19c-fcb06a186d1a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile utilizzare la propriet&#224; di tipo anonimo &#39;&lt;nomepropriet&#224;&gt;&#39; nella definizione di un&#39;espressione lambda nello stesso elenco di inizializzazione
Le proprietà definite nell'elenco di inizializzazione di tipo anonimo non possono far parte di una definizione di un'espressione lambda nello stesso elenco. Ad esempio, nel codice seguente, la proprietà `Num` non può essere inclusa nella definizione dell'oggetto `LambdaFun`.  
  
```vb#  
' Not valid.  
'Dim anon = New With {.Num = 4, .LambdaFun = Function() .Num > 0}  
```  
  
 **ID errore:** BC36549  
  
### Per correggere l'errore  
  
1.  È consigliabile suddividere il tipo anonimo in due parti:  
  
    ```vb#  
    Dim anon1 = New With {.Num = 4}  
    Dim anon2 = New With {.LambdaFun = Function() anon1.Num > 0}  
    ' - or -  
    Dim anon3 = New With {.lambdaFun = Function(n As Integer) n > 0}  
    Console.WriteLine((anon2.LambdaFun)())  
    Console.WriteLine(anon3.lambdaFun(anon1.Num))  
    anon1.Num = -5  
    Console.WriteLine((anon2.LambdaFun)())  
    Console.WriteLine(anon3.lambdaFun(anon1.Num))  
    ```  
  
     Notare che se si dichiara l'oggetto `anon1.Num` come una proprietà `Key`, non è possibile modificarne il valore.  
  
2.  In alternativa è possibile usare un'istruzione Function normale per accedere alla proprietà di tipo anonimo:  
  
    ```vb#  
    Function testNum(ByVal n As Integer) As Boolean  
        Return n > 0  
    End Function  
    Console.WriteLine(testNum(anon1.Num))  
    ```  
  
3.  Allo stesso modo, è possibile usare una funzione lambda definita al di fuori del tipo anonimo:  
  
    ```vb#  
    Dim lambdaFun1 = Function() anon1.Num > 0  
    Dim lambdaFun2 = Function(n As Integer) n > 0  
    ```  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)   
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)