---
title: "Errore del compilatore CS1578 | Microsoft Docs"
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
  - "CS1578"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1578"
ms.assetid: 8356cd33-5acc-4db7-8bbd-2d25f9d7728e
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1578
È previsto un nome di file, un commento su una sola riga o la fine della riga  
  
 Dopo una direttiva [\#line](../Topic/%23line%20\(C%23%20Reference\).md) è consentito solo un nome file \(tra virgolette doppie\) o un commento su una sola riga.  
  
 L'esempio seguente genera l'errore CS1578:  
  
```  
// CS1578.cs class MyClass { static void Main() { #line 101 abc.cs   // CS1578 // try the following line instead //#line 101 "abc.cs" intt i;          // error will be reported on line 101 } }  
```