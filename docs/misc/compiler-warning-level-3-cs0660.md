---
title: "Avviso del compilatore (livello 3) CS0660 | Microsoft Docs"
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
  - "CS0660"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0660"
ms.assetid: 2f77b45b-c5c6-46af-abe9-002e67887896
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0660
'class' definisce l'operatore \=\= o l'operatore \!\= ma non esegue l'override di Object.Equals\(object o\)  
  
 Il compilatore ha rilevato l'operatore di uguaglianza o di disuguaglianza definito dall'utente, ma non l'override per la funzione **Equals**. Un operatore di uguaglianza o disuguaglianza definito dall'utente implica che si vuole eseguire anche l'override della funzione **Equals**. Per altre informazioni, vedere [NIB \- Indicazioni per l'overload di Equals\(\) e dell'operatore \=\= \(Guida per programmatori C\#\)](http://msdn.microsoft.com/it-it/7e4c24c5-7693-4c45-88fb-ba5204fbcb20).  
  
 L'esempio seguente genera l'errore CS0660:  
  
```  
// CS0660.cs // compile with: /W:3 /warnaserror class Test   // CS0660 { public static bool operator == (object o, Test t) { return true; } // uncomment the Equals function to resolve // public override bool Equals(object o) // { //    return true; // } public override int GetHashCode() { return 0; } public static void Main() { } }  
```