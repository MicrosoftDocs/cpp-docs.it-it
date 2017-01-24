---
title: "Avviso del compilatore (livello 1) CS1522 | Microsoft Docs"
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
  - "CS1522"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1522"
ms.assetid: afb99bbf-a1d9-441e-b392-6845bea23f27
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1522
Il blocco switch è vuoto  
  
 Il compilatore ha rilevato un blocco [switch](../Topic/switch%20\(C%23%20Reference\).md) senza istruzioni **case** o **default**. Un blocco `switch` deve avere una o più istruzioni **case** o **default**.  
  
 L'esempio seguente genera l'errore CS1522:  
  
```  
// CS1522.cs // compile with: /W:1 using System; class x { public static void Main() { int i = 6; switch(i)   // CS1522 { // add something to the switch block, for example: /* case (5): Console.WriteLine("5"); return; default: Console.WriteLine("not 5"); return; */ } } }  
```