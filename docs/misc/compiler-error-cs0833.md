---
title: "Errore del compilatore CS0833 | Microsoft Docs"
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
  - "CS0833"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0833"
ms.assetid: 4ae32454-265f-47aa-bf2a-ee1d702330b7
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0833
Un tipo anonimo non può avere più proprietà con lo stesso nome.  
  
 Un tipo anonimo, come qualsiasi altro tipo, non può avere due proprietà con lo stesso nome.  
  
### Per correggere l'errore  
  
1.  Assegnare un nome univoco a ogni proprietà del tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0833:  
  
```  
// cs0833.cs using System; public class C { public static int Main() { var c = new { p1 = 1, p1 = 2 }; // CS0833 return 1; } }  
```  
  
## Vedere anche  
 [Tipi anonimi](../Topic/Anonymous%20Types%20\(C%23%20Programming%20Guide\).md)