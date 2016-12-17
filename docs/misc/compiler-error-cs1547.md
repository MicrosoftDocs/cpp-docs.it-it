---
title: "Errore del compilatore CS1547 | Microsoft Docs"
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
  - "CS1547"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1547"
ms.assetid: 40029557-076a-47d8-aabc-d86c56a846d7
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1547
Non è possibile usare la parola chiave 'void' in questo contesto  
  
 Il compilatore ha rilevato un uso non valido della parola chiave [void](../Topic/void%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS1547:  
  
```  
// CS1547.cs public class MyClass { void BadMethod() { void i;   // CS1547, cannot have variables of type void } public static void Main() { } }  
```