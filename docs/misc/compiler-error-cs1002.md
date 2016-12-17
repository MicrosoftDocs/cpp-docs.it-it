---
title: "Errore del compilatore CS1002 | Microsoft Docs"
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
  - "CS1002"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1002"
ms.assetid: 659b7abf-9311-40c9-9594-5372464c6148
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1002
È previsto un punto e virgola \(;\)  
  
 Il compilatore ha rilevato l'assenza di un punto e virgola. In C\# è necessario inserire un punto e virgola alla fine di ogni istruzione. Un'istruzione può estendersi su più righe.  
  
 L'esempio seguente genera l'errore CS1002:  
  
```  
// CS1002.cs namespace x { abstract public class clx { int i   // CS1002, missing semicolon public static int Main() { return 0; } } }  
```  
  
## Vedere anche  
 [Istruzioni](../Topic/Statements%20\(C%23%20Programming%20Guide\).md)