---
title: "Errore del compilatore CS1554 | Microsoft Docs"
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
  - "CS1554"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1554"
ms.assetid: 81e8d4ac-cdbf-4b75-8932-0bc271a8405c
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1554
Dichiarazione non valida. Usare '\<tipo\> operator op \(...'  
  
 Il tipo restituito per un oggetto [operator](../Topic/operator%20\(C%23%20Reference\)2.md) definito dall'utente deve essere visualizzato prima della parola chiave operator.  
  
 L'esempio seguente genera l'errore CS1554:  
  
```  
// CS1554.cs class MyClass { public static operator ++ MyClass (MyClass f)    // CS1554 // try the following line instead // public static MyClass operator ++ (MyClass f) { return new MyClass (); } public static void Main() { } }  
```