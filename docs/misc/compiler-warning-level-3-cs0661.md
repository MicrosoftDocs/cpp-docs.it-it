---
title: "Avviso del compilatore (livello 3) CS0661 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0661"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0661"
ms.assetid: c218665e-5947-40bb-b633-d268483e6522
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0661
'class' definisce l'operatore \=\= o l'operatore \!\= ma non esegue l'override di Object.GetHashCode\(\)  
  
 Il compilatore ha rilevato l'operatore di uguaglianza o di disuguaglianza definito dall'utente, ma non l'override per la funzione **GetHashCode**. Un operatore di uguaglianza o disuguaglianza definito dall'utente implica che si vuole eseguire anche l'override della funzione **GetHashCode**.  
  
 L'esempio seguente genera l'errore CS0661:  
  
```  
// CS0661.cs // compile with: /W:3 class Test   // CS0661 { public static bool operator == (object o, Test t) { return true; } public static bool operator != (object o, Test t) { return true; } public override bool Equals(object o) { return true; } // uncomment the GetHashCode function to resolve // public override int GetHashCode() // { //    return 0; // } public static void Main() { } }  
```