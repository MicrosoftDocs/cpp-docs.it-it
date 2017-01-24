---
title: "Errore del compilatore CS0663 | Microsoft Docs"
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
  - "CS0663"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0663"
ms.assetid: 9f96c42b-dcc8-4a0f-8404-289fc88dba5e
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0663
non può definire metodi di overload che differiscono solo per ref e out.  
  
 I metodi che si differenziano solo per l'uso di [ref](../Topic/ref%20\(C%23%20Reference\).md) e [out](../Topic/out%20\(C%23%20Reference\).md) in un parametro non sono consentiti.  
  
 L'esempio seguente genera l'errore CS0663:  
  
```  
// CS0663.cs class TestClass { public static void Main() { } public void Test(ref int i) { } public void Test(out int i)   // CS0663 { } }  
```