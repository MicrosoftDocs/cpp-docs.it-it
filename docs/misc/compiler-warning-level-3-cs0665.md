---
title: "Avviso del compilatore (livello 3) CS0665 | Microsoft Docs"
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
  - "CS0665"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0665"
ms.assetid: bddff69b-e74e-45ce-8472-16ee53ae4609
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0665
L'assegnazione nell'espressione condizionale è sempre costante. Si intendeva utilizzare \=\= invece di \= ?  
  
 Un'espressione condizionale ha usato [\= operator](../Topic/=%20Operator%20\(C%23%20Reference\).md) e non [\=\= operator](../Topic/==%20Operator%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0665:  
  
```  
// CS0665.cs // compile with: /W:3 class Test { public static void Main() { bool i = false; if (i = true)   // CS0665 // try the following line instead // if (i == true) { } System.Console.WriteLine(i); } }  
```