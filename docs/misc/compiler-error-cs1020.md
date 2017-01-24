---
title: "Errore del compilatore CS1020 | Microsoft Docs"
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
  - "CS1020"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1020"
ms.assetid: e8860769-a847-4248-a37b-77a59863467c
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1020
È previsto un operatore binario che supporti l'overload  
  
 Si è provato a definire un [overload degli operatori](../Topic/Overloadable%20Operators%20\(C%23%20Programming%20Guide\).md), ma l'operatore non è di tipo binario, che accetta due parametri.  
  
 L'esempio seguente genera l'errore CS1020:  
  
```  
// CS1020.cs public class iii { public static int operator ++(iii aa, int bb)   // CS1020, change ++ to + { return 0; } public static void Main() { } }  
```