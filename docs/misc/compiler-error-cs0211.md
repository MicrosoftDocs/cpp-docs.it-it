---
title: "Errore del compilatore CS0211 | Microsoft Docs"
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
  - "CS0211"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0211"
ms.assetid: 720be9a9-b0c1-4391-94e5-4c4027e83036
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0211
Non è possibile accettare l'indirizzo dell'espressione data  
  
 È possibile accettare l'indirizzo dei campi, delle variabili locali e il riferimento indiretto dei puntatori, ma non è possibile accettare, ad esempio, l'indirizzo della somma di due variabili locali. Per altre informazioni, vedere [Codice unsafe e puntatori](../Topic/Unsafe%20Code%20and%20Pointers%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0211:  
  
```  
// CS0211.cs // compile with: /unsafe public class MyClass { unsafe public void M() { int a = 0, b = 0; int *i = &(a + b);   // CS0211, the addition of two local variables // try the following line instead // int *i = &a; } public static void Main() { } }  
```