---
title: "Errore del compilatore CS0670 | Microsoft Docs"
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
  - "CS0670"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0670"
ms.assetid: 59379171-284f-4d55-8741-af6a97879abc
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0670
Il campo non può essere di tipo void  
  
 Il tipo di un campo è stato dichiarato come [void](../Topic/void%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0670:  
  
```  
// CS0670.cs class C { void f;   // CS0670 // try the following line instead // public int f; public static void Main() { C myc = new C(); myc.f = 0; } }  
```