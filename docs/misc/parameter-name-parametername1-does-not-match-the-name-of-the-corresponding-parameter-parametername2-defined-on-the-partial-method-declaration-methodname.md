---
title: "Il nome di parametro &#39;&lt;nomeparametro1&gt;&#39; non corrisponde al nome del parametro corrispondente &#39;&lt;nomeparametro2&gt;&#39;, definito nella dichiarazione del metodo parziale &#39;&lt;nomemetodo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31442"
  - "bc31442"
helpviewer_keywords: 
  - "BC31442"
ms.assetid: 7f097bb2-071a-42ec-b7af-40da04f602f2
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il nome di parametro &#39;&lt;nomeparametro1&gt;&#39; non corrisponde al nome del parametro corrispondente &#39;&lt;nomeparametro2&gt;&#39;, definito nella dichiarazione del metodo parziale &#39;&lt;nomemetodo&gt;&#39;
Quando vengono specificati parametri per la dichiarazione e l'implementazione di un metodo parziale, i nomi dei parametri corrispondenti devono essere uguali. Il codice seguente, ad esempio, causa questo errore.  
  
```vb#  
Partial Class Product  
  
    ' Declaration of the partial method.  
    Partial Private Sub valueChanged(ByVal newVal As Integer)  
    End Sub  
End Class  
```  
  
```vb#  
Partial Class Product  
  
    ' Implementation of the partial method. This error is  
    ' reported for parameter val.  
    ' Private Sub valueChanged(ByVal val As Integer)  
    '     MsgBox(Value was changed to " & Me.Quantity)  
    ' End Sub  
  
End Class  
```  
  
 **ID errore:** BC31442  
  
### Per correggere l'errore  
  
1.  Modificare il nome del parametro o i nomi nella dichiarazione o nell'implementazione in modo che i parametri corrispondenti abbiano lo stesso nome.  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)