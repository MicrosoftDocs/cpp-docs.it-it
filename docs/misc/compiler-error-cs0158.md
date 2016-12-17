---
title: "Errore del compilatore CS0158 | Microsoft Docs"
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
  - "CS0158"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0158"
ms.assetid: 88ac61a9-ce55-4272-9141-0873765a7034
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0158
L'etichetta 'label' è la replica di un'altra etichetta con lo stesso nome in un ambito contenuto  
  
 Un'etichetta in un ambito interno nasconde un'etichetta con lo stesso nome in un ambito esterno. Per altre informazioni, vedere [goto](../Topic/goto%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0158:  
  
```  
// CS0158.cs namespace MyNamespace { public class MyClass { public static void Main() { goto lab1; lab1: { lab1: goto lab1;   // CS0158 } } } }  
```