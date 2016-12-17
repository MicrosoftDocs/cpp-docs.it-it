---
title: "Errore del compilatore CS1930 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1930"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1930"
ms.assetid: d28d2334-825c-4ffc-b9e9-f5d61f44d672
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1930
La variabile di intervallo 'name' è già stata dichiarata  
  
 La variabile di intervallo in un'espressione di query fa parte dell'ambito finché non termina l'espressione di query. Deve quindi avere un identificatore univoco.  
  
### Per correggere l'errore  
  
1.  Assegnare un nome univoco a ogni variabile di intervallo che viene introdotta in un'espressione di query.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1930 perché viene usato l'identificatore `num` per la variabile di intervallo nella clausola `from` e per la variabile di intervallo introdotta dalla clausola `let`.  
  
```  
// cs1930.cs using System.Linq; class Program { static void Main() { int[] nums = { 0, 1, 2, 3, 4, 5 }; var query = from num in nums let num = 3 // CS1930 select num; } }  
```  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)