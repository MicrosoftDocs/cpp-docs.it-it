---
title: "Errore del compilatore CS0060 | Microsoft Docs"
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
  - "CS0060"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0060"
ms.assetid: ae6d4fb7-5ff9-4883-82c3-f55b190f439a
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0060
Accessibilità incoerente: la classe base 'class1' è meno accessibile della classe 'class2'  
  
 L'accessibilità della classe deve essere coerente tra la classe base e la classe ereditata.  
  
 L'esempio seguente genera l'errore CS0060:  
  
```  
// CS0060.cs class MyClass // try the following line instead // public class MyClass { } public class MyClass2 : MyClass   // CS0060 { public static void Main() { } }  
```  
  
## Vedere anche  
 [Modificatori di accesso](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md)