---
title: "Errore del compilatore CS1535 | Microsoft Docs"
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
  - "CS1535"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1535"
ms.assetid: 19f41e78-9aea-4575-abd0-60ddb927276f
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1535
L'operatore unario di overload 'operator' accetta un parametro  
  
 La definizione di un [operatore che supporta l'overload](../Topic/Overloadable%20Operators%20\(C%23%20Programming%20Guide\).md) unario deve accettare un parametro.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1535:  
  
```  
// CS1535.cs class MyClass { // uncomment the method parameter to resolve CS1535 public static MyClass operator ++ (/*MyClass MC1*/)   // CS1535 { return new MyClass(); } public static int Main() { return 1; } }  
```