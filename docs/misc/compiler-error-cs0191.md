---
title: "Errore del compilatore CS0191 | Microsoft Docs"
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
  - "CS0191"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0191"
ms.assetid: 512479e4-656e-4dcb-8d71-801541d72dcd
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0191
Non è possibile assegnare un valore alla proprietà o all'indicizzatore 'name' perché è di sola lettura  
  
 Un campo [readonly](../Topic/readonly%20\(C%23%20Reference\).md) può accettare un'assegnazione solo in un costruttore o in una dichiarazione. Per altre informazioni, vedere [Costruttori](../Topic/Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 L'errore CS0191 viene generato anche se il campo `readonly` è [static](../Topic/static%20\(C%23%20Reference\).md) e il costruttore non è contrassegnato come `static`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0191.  
  
```  
// CS0191.cs class MyClass { public readonly int TestInt = 6;  // OK to assign to readonly field in declaration MyClass() { TestInt = 11; // OK to assign to readonly field in constructor } public void TestReadOnly() { TestInt = 19;                  // CS0191 } public static void Main() { } }  
```