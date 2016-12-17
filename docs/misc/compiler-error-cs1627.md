---
title: "Errore del compilatore CS1627 | Microsoft Docs"
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
  - "CS1627"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1627"
ms.assetid: 58dd6e22-e9ed-4e5c-ae04-ce255f07064e
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1627
Dopo yield return è prevista l'espressione  
  
 Questo errore si verifica se `yield` viene usato senza un'espressione. Per evitare questo errore, inserire l'espressione appropriata nell'istruzione.  
  
 L'esempio seguente genera l'errore CS1627:  
  
```  
// CS1627.cs using System.Collections; class C : IEnumerable { public IEnumerator GetEnumerator() { yield return;   // CS1627 // To resolve, add the following line: // yield return 0; } } public class CMain { public static void Main() { } }  
```