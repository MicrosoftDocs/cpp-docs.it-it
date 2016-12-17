---
title: "Errore del compilatore CS0053 | Microsoft Docs"
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
  - "CS0053"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0053"
ms.assetid: 62a96ef4-e8d2-44d0-9d39-5cd7a38efe52
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0053
Accessibilità incoerente: il tipo di proprietà 'type' è meno accessibile della proprietà 'property'  
  
 Un costrutto pubblico deve restituire un oggetto accessibile pubblicamente. Per altre informazioni, vedere [Modificatori di accesso](../Topic/Access%20Modifiers%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0053:  
  
```  
// CS0053.cs class MyClass //defaults to private accessibility // try the following line instead // public class MyClass { } public class MyClass2 { public MyClass myProperty   // CS0053 { get { return new MyClass(); } set { } } } public class MyClass3 { public static void Main() { } }  
```