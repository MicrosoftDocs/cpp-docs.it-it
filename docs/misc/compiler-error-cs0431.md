---
title: "Errore del compilatore CS0431 | Microsoft Docs"
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
  - "CS0431"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0431"
ms.assetid: 05da7ea7-f33d-48d4-948e-d64be56f91ba
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0431
Non è possibile usare l'alias 'identifier' con '::' perché l'alias fa riferimento a un tipo. Usare '.'.  
  
 È stato usato "::" con un alias che fa riferimento a un tipo. Per risolvere l'errore, usare l'operatore ".".  
  
 L'esempio seguente genera l'errore CS0431:  
  
```  
// CS0431.cs using A = Outer; public class Outer { public class Inner { public static void Meth() {} } } public class MyClass { public static void Main() { A::Inner.Meth();   // CS0431 A.Inner.Meth();   // OK } }  
```