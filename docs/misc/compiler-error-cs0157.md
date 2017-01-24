---
title: "Errore del compilatore CS0157 | Microsoft Docs"
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
  - "CS0157"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0157"
ms.assetid: a5d9d506-81f8-47dd-85b6-85f8170bcbef
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0157
Il controllo non può lasciare il corpo di una clausola finally  
  
 Tutte le istruzioni in una clausola [finally](../Topic/try-catch-finally%20\(C%23%20Reference\).md) devono essere eseguite. Per altre informazioni, vedere [Istruzioni di gestione delle eccezioni](../Topic/Exception%20Handling%20Statements%20\(C%23%20Reference\).md) e [Eccezioni e gestione delle eccezioni](../Topic/Exceptions%20and%20Exception%20Handling%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0157:  
  
```  
// CS0157.cs using System; namespace MyNamespace { public class MyClass2 : Exception { } public class MyClass { public static void Main() { try { } finally { return;   // CS0157, cannot leave finally clause } } } }  
```