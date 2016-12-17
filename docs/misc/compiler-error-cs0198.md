---
title: "Errore del compilatore CS0198 | Microsoft Docs"
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
  - "CS0198"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0198"
ms.assetid: 222c20f6-3f7f-4750-9f99-b5e6ae6c1271
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0198
Non è possibile effettuare un'assegnazione a campi del campo statico di sola lettura 'name' \(tranne che in un costruttore statico o in un inizializzatore di variabile\)  
  
 Una variabile [readonly](../Topic/readonly%20\(C%23%20Reference\).md) deve avere lo stesso utilizzo [static](../Topic/static%20\(C%23%20Reference\).md) del costruttore in cui si vuole inizializzarla. Per altre informazioni, vedere [Costruttori statici](../Topic/Static%20Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0198:  
  
```  
// CS0198.cs class MyClass { public static readonly int TestInt = 6; MyClass() { TestInt = 11;   // CS0198, constructor is not static and readonly field is } public static void Main() { } }  
```