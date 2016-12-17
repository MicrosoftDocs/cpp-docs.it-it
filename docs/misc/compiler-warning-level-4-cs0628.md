---
title: "Avviso del compilatore (livello 4) CS0628 | Microsoft Docs"
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
  - "CS0628"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0628"
ms.assetid: a54cfad8-27c9-4abb-8c83-982615489a10
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 4) CS0628
'member': il nuovo membro protected è stato dichiarato nella classe sealed  
  
 Una classe [sealed](../Topic/sealed%20\(C%23%20Reference\).md) non può introdurre un membro [protected](../Topic/protected%20\(C%23%20Reference\).md) perché nessun'altra classe potrà ereditare dalla classe `sealed` e usare il membro `protected`.  
  
 L'esempio seguente genera l'errore CS0628:  
  
```  
// CS0628.cs // compile with: /W:4 sealed class C { protected int i;   // CS0628 } class MyClass { public static void Main() { } }  
```