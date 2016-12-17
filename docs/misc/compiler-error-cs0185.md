---
title: "Errore del compilatore CS0185 | Microsoft Docs"
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
  - "CS0185"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0185"
ms.assetid: d6546e10-0af3-4860-8e6f-2da7dbeb3d28
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0185
'type' non è un tipo riferimento richiesto dall'istruzione lock  
  
 L'istruzione [lock](../Topic/lock%20Statement%20\(C%23%20Reference\).md) può valutare solo i tipi riferimento. Per altre informazioni, vedere [Sincronizzazione di thread](../Topic/Thread%20Synchronization%20\(C%23%20and%20Visual%20Basic\).md) e [Tipi di riferimento](../Topic/Reference%20Types%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0185:  
  
```  
// CS0185.cs public class MainClass { public static void Main () { lock (1)   // CS0185 // try the following lines instead // MainClass x = new MainClass(); // lock(x) { } } }  
```