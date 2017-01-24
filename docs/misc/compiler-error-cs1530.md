---
title: "Errore del compilatore CS1530 | Microsoft Docs"
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
  - "CS1530"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1530"
ms.assetid: 3844b5ef-e0ec-42df-9267-72689020f128
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1530
La parola chiave 'new' non è consentita negli elementi definiti in uno spazio dei nomi  
  
 Non è necessario specificare la parola chiave [new](../Topic/new%20\(C%23%20Reference\).md) nei costrutti inclusi in [namespace](../Topic/namespace%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS1530:  
  
```  
// CS1530.cs namespace a { new class i   // CS1530 { } // try the following instead class ii { public static void Main() { } } }  
```