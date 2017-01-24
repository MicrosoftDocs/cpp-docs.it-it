---
title: "Errore del compilatore CS1512 | Microsoft Docs"
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
  - "CS1512"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1512"
ms.assetid: 50740d85-598d-478f-bfe3-e8c2e1a02ab8
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1512
La parola chiave 'base' non è disponibile nel contesto corrente  
  
 La parola chiave [base](../Topic/base%20\(C%23%20Reference\).md) è stata usata al di fuori di un metodo, di una proprietà o di un costruttore.  
  
 L'esempio seguente genera l'errore CS1512:  
  
```  
// CS1512.cs using System; class Base {} class CMyClass : Base { private String xx = base.ToString();   // CS1512 // Try putting this initialization in the constructor instead: // public CMyClass() // { //    xx = base.ToString(); // } public static void Main() { CMyClass z = new CMyClass(); } }  
```