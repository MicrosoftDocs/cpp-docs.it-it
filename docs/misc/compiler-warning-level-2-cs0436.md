---
title: "Avviso del compilatore (livello 2) CS0436 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0436"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0436"
ms.assetid: c4135d9d-3511-4bbc-9540-48c2091f869c
caps.latest.revision: 13
caps.handback.revision: 13
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0436
Il tipo 'type' in 'assembly' è in conflitto con il tipo importato 'type2' in 'assembly'. Verrà usato il tipo definito in 'assembly'.  
  
 Questo avviso viene generato quando un tipo in un file di origine \(file\_2\) è in conflitto con un tipo importato in file \_1. Il compilatore usa il tipo del file di origine.  
  
## Esempio  
  
```  
// CS0436_a.cs // compile with: /target:library public class A { public void Test() { System.Console.WriteLine("CS0436_a"); } }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS0436.  
  
```  
// CS0436_b.cs // compile with: /reference:CS0436_a.dll // CS0436 expected public class A { public void Test() { System.Console.WriteLine("CS0436_b"); } } public class Test { public static void Main() { A x = new A(); x.Test(); } }  
```