---
title: "Errore del compilatore CS1004 | Microsoft Docs"
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
  - "CS1004"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1004"
ms.assetid: 93cc1b93-ca4c-49a8-af03-9fbfc84ccab9
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1004
Modificatore 'modifier' duplicato  
  
 È stato rilevato un modificatore duplicato, ad esempio un modificatore **access**.  
  
 L'esempio seguente genera l'errore CS1004:  
  
```  
// CS1004.cs public class clx { public public static void Main()   // CS1004, two public keywords { } }  
```