---
title: "Errore del compilatore CS0220 | Microsoft Docs"
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
  - "CS0220"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0220"
ms.assetid: f520bf34-bff8-4796-882b-1a9b1d5b977c
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0220
Operazione in overflow in fase di compilazione in modalità checked  
  
 In modalità [checked](../Topic/checked%20\(C%23%20Reference\).md), ovvero l'impostazione predefinita, è stata rilevata un'operazione che ha provocato una perdita di dati. Correggere gli input dell'assegnazione oppure usare [unchecked](../Topic/unchecked%20\(C%23%20Reference\).md) per risolvere l'errore. Per altre informazioni, vedere [Checked e Unchecked](../Topic/Checked%20and%20Unchecked%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0220:  
  
```  
// CS0220.cs using System; class TestClass { const int x = 1000000; const int y = 1000000; public int MethodCh() { int z = (x * y);   // CS0220 return z; } public int MethodUnCh() { unchecked { int z = (x * y); return z; } } public static void Main() { TestClass myObject = new TestClass(); Console.WriteLine("Checked  : {0}", myObject.MethodCh()); Console.WriteLine("Unchecked: {0}", myObject.MethodUnCh()); } }  
```