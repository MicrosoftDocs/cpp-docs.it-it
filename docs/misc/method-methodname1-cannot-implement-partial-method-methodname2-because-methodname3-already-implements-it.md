---
title: "Il metodo &#39;&lt;nomemetodo1&gt;&#39; non pu&#242; implementare il metodo parziale &#39;&lt;nomemetodo2&gt;&#39; perch&#233; &#232; gi&#224; implementato da &#39;&lt;nomemetodo3&gt;&#39; | Microsoft Docs"
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
  - "vbc31434"
  - "bc31434"
helpviewer_keywords: 
  - "BC31434"
ms.assetid: 61cba19e-db11-4a06-89d6-4244d411588c
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;&lt;nomemetodo1&gt;&#39; non pu&#242; implementare il metodo parziale &#39;&lt;nomemetodo2&gt;&#39; perch&#233; &#232; gi&#224; implementato da &#39;&lt;nomemetodo3&gt;&#39;
Il metodo '\<nomemetodo1\>' non può implementare il metodo parziale '\<nomemetodo2\>' perché è già implementato da '\<nomemetodo3\>'. Un solo metodo può implementare un metodo parziale.  
  
 Non è possibile avere due metodi parziali che implementano la stessa dichiarazione di metodo parziale. Il codice seguente causa questo errore.  
  
```vb#  
Partial Class Product ' Declaration of the partial method. Partial Private Sub ValueChanged() End Sub End Class  
```  
  
```vb#  
Partial Class Product ' First implementation of the partial method. Private Sub ValueChanged() MsgBox(Value was changed to " & Me.Quantity) End Sub ' Second implementation of the partial method causes this error. 'Private Sub ValueChanged() '    Console.WriteLine("Quantity was changed to " & Me.Quantity) 'End Sub End Class  
```  
  
 **ID errore:** BC31434  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)