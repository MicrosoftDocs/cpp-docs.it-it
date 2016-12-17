---
title: "Errore del compilatore CS1039 | Microsoft Docs"
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
  - "CS1039"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1039"
ms.assetid: 266e9f7f-fe17-445a-aefd-6b7795167d68
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1039
Valore letterale stringa non completo  
  
 Il compilatore ha rilevato un valore letterale [string](../Topic/string%20\(C%23%20Reference\).md) con un formato non corretto.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1039. Per risolvere l'errore, aggiungere le virgolette di chiusura.  
  
```  
// CS1039.cs public class MyClass { public static void Main() { string b = @"hello, world;   // CS1039 } }  
```