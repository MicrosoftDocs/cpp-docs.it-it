---
title: "Non &#232; possibile usare il parametro &#39;&lt;nomeparametro&gt; di &#39;ByRef&#39; in un&#39;espressione di query | Microsoft Docs"
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
  - "vbc36533"
  - "bc36533"
helpviewer_keywords: 
  - "BC36533"
ms.assetid: 8067ac87-dd6b-4869-87d0-8a4ce272de41
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare il parametro &#39;&lt;nomeparametro&gt; di &#39;ByRef&#39; in un&#39;espressione di query
Un parametro incluso in una query LINQ è un tipo puntatore. I parametri usati nelle espressioni di query non possono essere passati mediante riferimento.  
  
 **ID errore:** BC36533  
  
### Per correggere l'errore  
  
1.  Dichiarare una nuova variabile e assegnare il valore della nuova variabile a una copia del valore che viene passato mediante riferimento. Usare la variabile copiata nella query LINQ. Di seguito è riportato un esempio:  
  
    ```vb#  
    Sub RunQuery(ByVal collection As List(Of Integer), _  
                 ByRef filterValue As Integer)  
        Dim fv = filterValue  
        Dim queryResult = From num In collection _  
                          Where num < fv  
    End Sub  
    ```  
  
### Per correggere l'errore  
  
1.  Sostituire la parola chiave `ByRef` con la parola chiave `ByVal` per il parametro usato nella query.  
  
## Vedere anche  
 [Differences Between Passing an Argument By Value and By Reference](../Topic/Differences%20Between%20Passing%20an%20Argument%20By%20Value%20and%20By%20Reference%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)