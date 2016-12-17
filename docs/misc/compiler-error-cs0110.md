---
title: "Errore del compilatore CS0110 | Microsoft Docs"
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
  - "CS0110"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0110"
ms.assetid: 0bfe7071-1194-4142-a1a1-6190ee92b1d4
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0110
Il calcolo del valore della costante per 'dichiarazione const' implica una definizione circolare  
  
 La dichiarazione di una variabile [const](../Topic/const%20\(C%23%20Reference\).md) \(`a`\) non può fare riferimento a un'altra variabile const \(`b`\) che a sua volta fa riferimento ad \(`a`\).  
  
 L'esempio seguente genera l'errore CS0110:  
  
```  
// CS0110.cs namespace MyNamespace { public class A { public static void Main() { } } public class B : A { public const int i = c + 1;   // CS0110, c already references i public const int c = i + 1; // the following line would be OK // public const int c = 10; } }  
```  
  
## Vedere anche  
 [Costanti](../Topic/Constants%20\(C%23%20Programming%20Guide\).md)