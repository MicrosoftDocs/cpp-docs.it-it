---
title: "Errore del compilatore CS1655 | Microsoft Docs"
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
  - "CS1655"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1655"
ms.assetid: 041e9daa-c026-494f-b086-0db9a23c969b
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1655
Non è possibile passare i campi di 'variable' come un argomento ref o out perché è 'readonly variable type'  
  
 Questo errore si verifica se si tenta di passare un membro di una variabile [foreach](../Topic/foreach,%20in%20\(C%23%20Reference\).md), una variabile [using](../Topic/using%20Statement%20\(C%23%20Reference\).md) o una variabile [fixed](../Topic/fixed%20Statement%20\(C%23%20Reference\).md) a una funzione come argomento ref o out. Questo non è consentito perché queste variabili sono considerate di sola lettura in questi contesti.  
  
 L'esempio seguente genera l'errore CS1655:  
  
```  
// CS1655.cs struct S { public int i; } class CMain { static void f(ref int iref) { } public static void Main() { S[] sa = new S[10]; foreach(S s in sa) { CMain.f(ref s.i);  // CS1655 } } }  
```