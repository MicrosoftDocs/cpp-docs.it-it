---
title: "Errore del compilatore CS0020 | Microsoft Docs"
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
  - "CS0020"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0020"
ms.assetid: 7a54db39-6530-4e34-aa17-a90f85223d08
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0020
Divisione per la costante zero  
  
 In un'espressione viene usato un valore letterale 0, non una variabile, nel denominatore di un'operazione di divisione. La divisione per zero non è definita e pertanto non è valida.  
  
 L'esempio seguente genera l'errore CS0020:  
  
```  
// CS0020.cs namespace x { public class b { public static void Main() { 1 / 0;   // CS0020 } } }  
```  
  
## Vedere anche  
 [Operatori](../Topic/Operators%20\(C%23%20Programming%20Guide\).md)