---
title: "Errore del compilatore CS0101 | Microsoft Docs"
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
  - "CS0101"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0101"
ms.assetid: edb5246b-c16b-4845-bb2d-0ef769d014c7
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0101
Lo spazio dei nomi 'namespace' contiene già una definizione per 'type'  
  
 [namespace](../Topic/namespace%20\(C%23%20Reference\).md) contiene identificatori duplicati. Rinominare o eliminare uno degli identificatori duplicati. Per altre informazioni, vedere [Spazi dei nomi](../Topic/Namespaces%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0101:  
  
```  
// CS0101.cs namespace MyNamespace { public class MyClass { static public void Main() { } } public class MyClass   // CS0101 { } }  
```