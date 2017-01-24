---
title: "Avviso del compilatore (livello 1) CS1633 | Microsoft Docs"
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
  - "CS1633"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1633"
ms.assetid: f31db218-f880-4fc4-ab34-8bcdc49011da
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1633
La direttiva \#pragma non è stata riconosciuta  
  
 Il pragma usato non corrisponde a uno dei pragma noti supportati dal compilatore C\#. Per risolvere questo errore, usare solo i pragma supportati.  
  
 L'esempio seguente genera l'errore CS1633:  
  
```  
// CS1633.cs // compile with: /W:1 #pragma unknown  // CS1633 class C { public static void Main() { } }  
```