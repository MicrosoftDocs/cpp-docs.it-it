---
title: "Errore del compilatore CS0549 | Microsoft Docs"
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
  - "CS0549"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0549"
ms.assetid: ae965019-9dee-4f28-9e9a-6f379bd0d757
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0549
'function' è un nuovo membro virtuale nella classe sealed 'class'  
  
 Non è possibile usare una [classe](../Topic/sealed%20\(C%23%20Reference\).md) [sealed](../Topic/class%20\(C%23%20Reference\).md) come classe base.  Per questo motivo, è inutile usare un metodo virtuale in una classe sealed.  
  
 L'esempio seguente genera l'errore CS0549:  
  
```  
// CS0549.cs // compile with: /target:library sealed public class MyClass { virtual public void TestMethod() {}   // CS0549 public void TestMethod2() {}   // OK }  
```