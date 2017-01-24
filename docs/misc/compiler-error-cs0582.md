---
title: "Errore del compilatore CS0582 | Microsoft Docs"
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
  - "CS0582"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0582"
ms.assetid: cc0f4c75-c41d-423e-a4dc-e55a124f5cae
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0582
L'oggetto Conditional non è valido nei membri di interfaccia  
  
 **ConditionalAttribute** non è valido in un membro di interfaccia.  
  
 L'esempio seguente genera l'errore CS0582:  
  
```  
// CS0582.cs // compile with: /target:library using System.Diagnostics; interface MyIFace { [ConditionalAttribute("DEBUG")]   // CS0582 void zz(); }  
```