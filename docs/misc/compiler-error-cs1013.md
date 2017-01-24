---
title: "Errore del compilatore CS1013 | Microsoft Docs"
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
  - "CS1013"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1013"
ms.assetid: e5b1d24d-e558-4f7c-b2b1-3a644710005d
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1013
Numero non valido  
  
 Il compilatore ha rilevato un numero in formato non valido. Per altre informazioni sui tipi integrali, vedere [Tabella dei tipi integrali](../Topic/Integral%20Types%20Table%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS1013:  
  
```  
// CS1013.cs class Sample { static void Main() { int i = 0x;   // CS1013 } }  
```