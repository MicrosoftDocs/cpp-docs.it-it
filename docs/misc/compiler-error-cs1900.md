---
title: "Errore del compilatore CS1900 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1900"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1900"
ms.assetid: 08141138-bfea-4af3-a9a0-ec54cf2caa13
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1900
Il livello di avviso deve essere compreso tra 0 e 4  
  
 L'opzione del compilatore [\/warn](../Topic/-warn%20\(C%23%20Compiler%20Options\).md) può accettare solo uno dei cinque valori possibili \(0, 1, 2, 3 o 4\). Qualsiasi altro valore passato a **\/warn** genererà l'errore CS1900.  
  
 L'esempio seguente genera l'errore CS1900:  
  
```  
// CS1900.cs // compile with: /W:5 // CS1900 expected class x { public static void Main() { } }  
```