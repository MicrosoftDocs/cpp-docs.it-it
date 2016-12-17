---
title: "Errore del compilatore CS0056 | Microsoft Docs"
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
  - "CS0056"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0056"
ms.assetid: 8878b09c-5b7b-40e0-be0d-61ef5b36c151
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0056
Accessibilità incoerente: il tipo restituito 'type' è meno accessibile dell'operatore 'operator'  
  
 Un costrutto pubblico deve restituire un oggetto accessibile pubblicamente. Per altre informazioni, vedere [Modificatori di accesso](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0056:  
  
```  
// CS0056.cs class MyClass // try the following line instead // public class MyClass { } public class A { public static implicit operator MyClass(A a)   // CS0056 { return new MyClass(); } public static void Main() { } }  
```