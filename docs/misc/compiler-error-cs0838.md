---
title: "Errore del compilatore CS0838 | Microsoft Docs"
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
  - "CS0838"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0838"
ms.assetid: 22495e47-3331-42ef-921c-f76ff03ef1f7
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0838
L'albero delle espressioni non può contenere un inizializzatore di matrici multidimensionali.  
  
 Non è possibile inizializzare le matrici multidimensionali negli alberi delle espressioni usando un inizializzatore di matrice.  
  
### Per correggere l'errore  
  
1.  Creare e inizializzare la matrice prima di creare l'albero delle espressioni.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0838:  
  
```  
// cs0838.cs using System; using System.Linq; using System.Linq.Expressions; namespace TestNamespace { class Test { static int Main() { Expression<Func<int[,]>> expr = () => new int[2, 2] { { 1, 2 }, { 3, 4 } }; // CS0838 // try the following 2 lines instead int[,] nums = new int[2, 2] { { 1, 2 }, { 3, 4 } }; Expression<Func<int[,]>> expr2 = () => nums; return 1; } } }  
  
```  
  
## Vedere anche  
 [Strutture ad albero dell'espressione](../Topic/Expression%20Trees%20\(C%23%20and%20Visual%20Basic\).md)