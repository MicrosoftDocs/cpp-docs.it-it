---
title: "Non &#232; possibile convertire l&#39;espressione lambda in &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;&lt;nometipo&gt;&#39; non &#232; un tipo delegato | Microsoft Docs"
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
  - "bc36625"
  - "vbc36625"
helpviewer_keywords: 
  - "BC36625"
ms.assetid: c03634d4-d831-4f8c-b6ab-566465968e4d
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile convertire l&#39;espressione lambda in &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;&lt;nometipo&gt;&#39; non &#232; un tipo delegato
Le espressioni lambda possono essere usate laddove i delegati sono validi. Possono essere convertite in tipi delegati compatibili, ma non in altri tipi. Ad esempio, si può definire un tipo delegato e assegnargli un'espressione lambda oppure inviare un'espressione lambda come argomento a un parametro <xref:System.Func%601>. Queste esempi sono mostrati nel codice che segue.  
  
```vb#  
Module Module1 Delegate Function FunDel(ByVal m As Integer) As Boolean Sub Main() ' Assign a lambda expression to a function delegate. Dim negative As FunDel = Function(n As Integer) n < 0 Console.WriteLine(negative(-3)) ' Send a lambda as the argument to a delegate parameter. Dim numbers() As Integer = {3, 4, 2, 8, 1, 0, 9, 13, 42} Dim evens = numbers.Where(Function(n) n Mod 2 = 0) For Each even In evens Console.WriteLine(even) Next End Sub End Module  
```  
  
 **ID errore:** BC36625  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)