---
title: "Errore del compilatore CS0515 | Microsoft Docs"
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
  - "CS0515"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0515"
ms.assetid: 0f8c0253-218d-4c21-b22c-fa5802ba4e7f
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0515
'function': i modificatori di accesso non sono consentiti su costruttori statici  
  
 Un costruttore statico non può avere un [modificatore di accesso](../Topic/Modifiers%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0515:  
  
```  
// CS0515.cs public class Clx { public static void Main() { } } public class Clz { public static Clz()   // CS0515, remove public keyword { } }  
```