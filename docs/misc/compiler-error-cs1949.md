---
title: "Errore del compilatore CS1949 | Microsoft Docs"
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
  - "CS1949"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1949"
ms.assetid: 959f553e-ac3d-43a1-b0a0-11e270f2ad64
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1949
Impossibile utilizzare la parola chiave contestuale 'var' in una dichiarazione di variabile di intervallo.  
  
 Una variabile di intervallo è tipizzata in modo implicito dal compilatore. Non è necessario usare [var](../Topic/var%20\(C%23%20Reference\).md) con una variabile di intervallo.  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave `var`  davanti alla variabile di intervallo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1949:  
  
```  
// cs1949.cs using System; using System.Linq; class Test { static void Main() { var x = from var i in Enumerable.Range(1, 100) // CS1949 select i; } }  
```  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)   
 [Introduction to LINQ Queries \(C\#\)](../Topic/Introduction%20to%20LINQ%20Queries%20\(C%23\).md)