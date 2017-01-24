---
title: "Errore del compilatore CS0156 | Microsoft Docs"
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
  - "CS0156"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0156"
ms.assetid: 32026b1b-bcd7-4464-b63f-3b38c00452a6
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0156
L'utilizzo dell'istruzione throw senza argomenti non è consentito in una clausola finally annidata all'interno della clausola catch di inclusione più vicina  
  
 Un'istruzione [throw](../Topic/throw%20\(C%23%20Reference\).md) senza parametri può essere usata solo in una clausola **catch** che non accetta parametri.  
  
 Per altre informazioni, vedere [Istruzioni di gestione delle eccezioni](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) e [Eccezioni e gestione delle eccezioni](../Topic/Exceptions%20and%20Exception%20Handling%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0156:  
  
```  
// CS0156.cs using System; namespace MyNamespace { public class MyClass2 : Exception { } public class MyClass { public static void Main() { try { throw;   // CS0156 } catch(MyClass2) { throw;   // this throw is valid } } } }  
```