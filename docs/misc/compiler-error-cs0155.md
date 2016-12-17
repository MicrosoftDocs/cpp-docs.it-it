---
title: "Errore del compilatore CS0155 | Microsoft Docs"
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
  - "CS0155"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0155"
ms.assetid: 6c92984a-2b10-453e-9cb7-e6a1d1b98aa6
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0155
Il tipo rilevato o generato deve derivare da System.Exception  
  
 Si è provato a passare un tipo di dati che non deriva da **System.Exception** in un blocco [catch](../Topic/try-catch%20\(C%23%20Reference\).md). Solo i tipi di dati che derivano da **System.Exception** possono essere passati in un blocco **catch**. Per altre informazioni, vedere [Istruzioni di gestione delle eccezioni](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) e [Eccezioni e gestione delle eccezioni](../Topic/Exceptions%20and%20Exception%20Handling%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0155:  
  
```  
// CS0155.cs using System; namespace MyNamespace { public class MyClass2 // try the following line instead // public class MyClass2 : Exception { } public class MyClass { public static void Main() { try { } catch (MyClass2)   // CS0155, resolves if you derive MyClass2 from Exception { } } } }  
```