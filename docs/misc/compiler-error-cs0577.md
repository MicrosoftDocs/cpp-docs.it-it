---
title: "Errore del compilatore CS0577 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0577"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0577"
ms.assetid: 34f8f453-f016-4f2c-981a-0d61449cd74b
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0577
L'attributo Conditional non è valido per 'function' perché rappresenta l'implementazione di un costruttore, di un distruttore, di un operatore o di un'interfaccia esplicita  
  
 Non è possibile applicare `Conditional` ai metodi specificati.  
  
 Non è possibile ad esempio usare alcuni attributi in una definizione di interfaccia esplicita. L'esempio seguente genera l'errore CS0577:  
  
```  
// CS0577.cs // compile with: /target:library interface I { void m(); } public class MyClass : I { [System.Diagnostics.Conditional("a")]   // CS0577 void I.m() {} }  
```