---
title: "Non &#232; possibile usare membri di istanza e &#39;Me&#39; in un&#39;espressione lambda delle strutture | Microsoft Docs"
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
  - "vbc36638"
  - "bc36638"
helpviewer_keywords: 
  - "BC36638"
ms.assetid: 5c24a7c7-50f6-4ffb-9ed2-07e2abc4eaf3
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare membri di istanza e &#39;Me&#39; in un&#39;espressione lambda delle strutture
All'interno di una struttura è stata definita un'espressione lambda che fa riferimento a un membro di istanza della struttura o usa `Me`. L'esempio seguente mostra due riferimenti non validi.  
  
```vb#  
Structure Structure1 Public InstanceMember As Integer Public Function ExampleFun() As Integer '' The error is caused by use of InstanceMember. 'Dim fun1 = Function() InstanceMember '' The error is caused by use of Me. 'Dim fun2 = Function() Me.InstanceMember 'Return fun1() End Function End Structure  
```  
  
 **ID errore:** BC36638  
  
### Per correggere l'errore  
  
-   Assegnare il membro di istanza a una variabile locale e usare la variabile locale nell'istruzione.  
  
    ```vb#  
    Public Function ExampleFunFix() As Integer Dim temp = InstanceMember Dim fun1 = Function() temp Return fun1() End Function  
    ```  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)   
 [Me](http://msdn.microsoft.com/it-it/a65973c7-cf06-4547-9b25-9fba885525c2)   
 [Structure Statement](../Topic/Structure%20Statement.md)