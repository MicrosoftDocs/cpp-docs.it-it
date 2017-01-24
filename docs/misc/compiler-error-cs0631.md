---
title: "Errore del compilatore CS0631 | Microsoft Docs"
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
  - "CS0631"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0631"
ms.assetid: 5ae06b13-7874-4d0d-b256-7d8b33396156
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0631
ref e out non sono validi in questo contesto  
  
 La dichiarazione per [indexer](../Topic/Indexers%20\(C%23%20Programming%20Guide\).md) non può includere l'uso del parametro [ref](../Topic/ref%20\(C%23%20Reference\).md) o [out](../Topic/out%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0631:  
  
```  
// CS0631.cs public class MyClass { public int this[ref int i]   // CS0631 // try the following line instead // public int this[int i] { get { return 0; } } } public class MyClass2 { public static void Main() { } }  
```