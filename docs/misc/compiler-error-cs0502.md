---
title: "Errore del compilatore CS0502 | Microsoft Docs"
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
  - "CS0502"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0502"
ms.assetid: 6cd6deda-73a1-42d8-893b-45a685e63380
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0502
'member' non può essere contemporaneamente abstract e sealed  
  
 Un membro di classe non può essere contemporaneamente [abstract](../Topic/abstract%20\(C%23%20Reference\).md) e [sealed](../Topic/sealed%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0502:  
  
```  
// CS0502.cs public class B { abstract public void F(); } public class C : B { abstract sealed override public void F()   // CS0502 { } } public class CMain { public static void Main() { } }  
```