---
title: "Avviso del compilatore (livello 1) CS3012 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS3012"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3012"
ms.assetid: 1f7555b4-61e4-4821-85c9-586301df4c5c
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3012
Impossibile specificare l'attributo CLSCompliant su un modulo che differisce dall'attributo CLSCompliant sull'assembly  
  
 Affinché un modulo sia conforme alla specifica CLS \(Common Language Specification\) tramite `[module:System.CLCSompliant(true)]`, è necessario che venga compilato con l'opzione del compilatore [\/target:module](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md). Per altre informazioni sulle specifiche CLS, vedere [Indipendenza del linguaggio e componenti indipendenti dal linguaggio](../Topic/Language%20Independence%20and%20Language-Independent%20Components.md).  
  
## Esempio  
 L'esempio seguente, quando compilato senza `/target:module`, genera l'errore CS3012:  
  
```  
// CS3012.cs // compile with: /W:1 [module:System.CLSCompliant(true)]   // CS3012 public class C { public static void Main() { } }  
```