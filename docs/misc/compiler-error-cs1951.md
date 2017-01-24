---
title: "Errore del compilatore CS1951 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1951"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1951"
ms.assetid: 799ba212-a000-44d9-b7da-a8c00eae63fa
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1951
Un'espressione lambda dell'albero delle espressioni non può contenere un parametro out o ref.  
  
 Un albero delle espressioni rappresenta le espressioni solo come strutture di dati. Non c'è alcun modo per rappresentare specifiche posizioni di memoria come richiesto quando si passa un parametro mediante riferimento.  
  
### Per correggere l'errore  
  
1.  L'unica opzione consiste nel rimuovere il modificatore `ref` nella definizione del delegato e passare il parametro in base al valore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1951:  
  
```  
// cs1951.cs using System.Linq; public delegate int TestDelegate(ref int i); class Test { static void Main() { System.Linq.Expressions.Expression<TestDelegate> tree1 = (ref int x) => x; // CS1951 } }  
```  
  
## Vedere anche  
 [Strutture ad albero dell'espressione](../Topic/Expression%20Trees%20\(C%23%20and%20Visual%20Basic\).md)