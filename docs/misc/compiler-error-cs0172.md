---
title: "Errore del compilatore CS0172 | Microsoft Docs"
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
  - "CS0172"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0172"
ms.assetid: 1272c575-3580-4897-95fb-83f45d7435ae
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0172
Non è possibile determinare il tipo di espressione condizionale perché 'type1' e 'type2' sono reciprocamente convertibili in modo implicito  
  
 In un'istruzione condizionale, è necessario poter convertire i tipi su entrambi i lati dell'operatore `:`. Inoltre, non possono esistere routine di conversione reciproca; è sufficiente una conversione. Per altre informazioni, vedere [Operatori di conversione](../Topic/Conversion%20Operators%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0172:  
  
```  
// CS0172.cs public class Square { public class Circle { public static implicit operator Circle(Square aa) { return null; } public static implicit operator Square(Circle aa) // using explicit resolves this error // public static explicit operator Square(Circle aa) { return null; } } public static void Main() { Circle aa = new Circle(); Square ii = new Square(); object o = (1 == 1) ? aa : ii;   // CS0172 // the following cast would resolve this error // (1 == 1) ? aa : (Circle)ii; } }  
```