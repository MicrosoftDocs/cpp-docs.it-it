---
title: "Errore del compilatore CS0567 | Microsoft Docs"
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
  - "CS0567"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0567"
ms.assetid: 90aefbf9-d216-4eb4-96d4-44926fa23b1e
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0567
Le interfacce non possono contenere operatori  
  
 Gli operatori non sono consentiti nelle definizioni di [interfaccia](../Topic/interface%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0567:  
  
```  
// CS0567.cs interface IA { int operator +(int aa, int bb);   // CS0567 } class Sample { public static void Main() { } }  
```