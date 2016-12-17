---
title: "Errore del compilatore CS1528 | Microsoft Docs"
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
  - "CS1528"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1528"
ms.assetid: 38aabc5c-b32f-4bea-a585-c4212f42751d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1528
È previsto il segno ; oppure \= \(impossibile specificare gli argomenti del costruttore nella dichiarazione\)  
  
 Un riferimento a una classe è stato formato come se venisse creato un oggetto alla classe. Ad esempio, si è tentato di passare una variabile a un costruttore. Usare l'operatore [new](../Topic/new%20\(C%23%20Reference\).md) per creare un oggetto di una classe.  
  
 L'esempio seguente genera l'errore CS1528:  
  
```  
// CS1528.cs using System; public class B { public B(int i) { _i = i; } public void PrintB() { Console.WriteLine(_i); } private int _i; } public class mine { public static void Main() { B b(3);   // CS1528, reference is not an object // try one of the following // B b; // or // B bb = new B(3); // bb.PrintB(); } }  
```