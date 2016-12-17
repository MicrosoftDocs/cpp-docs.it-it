---
title: "Errore del compilatore CS0023 | Microsoft Docs"
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
  - "CS0023"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0023"
ms.assetid: 7a30073c-99de-41fa-ac6d-4a0dfbb76de9
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0023
Non è possibile applicare l'operatore 'operator' all'operando di tipo 'type'  
  
 Si è provato ad applicare un operatore a una variabile il cui tipo non è previsto per essere usato con l'operatore. Per altre informazioni, vedere [Tipi](../Topic/Types%20\(C%23%20Programming%20Guide\).md) e [Operatori](../Topic/C%23%20Operators.md).  
  
 L'esempio seguente genera l'errore CS0023:  
  
```  
// CS0023.cs namespace x { public class a { public static void Main() { string s = "hello"; s = -s;   // CS0023, minus operator not allowed on strings } } }  
```