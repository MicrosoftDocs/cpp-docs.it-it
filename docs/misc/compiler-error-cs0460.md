---
title: "Errore del compilatore CS0460 | Microsoft Docs"
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
  - "CS0460"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0460"
ms.assetid: 98d39ded-d3f9-4520-b912-892e574c056b
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0460
I vincoli per i metodi di override e di implementazione esplicita di interfacce sono ereditati dal metodo base, pertanto non possono essere specificati in maniera diretta  
  
 Quando un metodo generico che fa parte di una classe derivata esegue l'override di un metodo nella classe base, non è possibile specificare vincoli per il metodo sottoposto a override. Il metodo di override nella classe derivata eredita i vincoli dal metodo nella classe base.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0460.  
  
```  
// CS0460.cs // compile with: /target:library class BaseClass { BaseClass() { } } interface I { void F1<T>() where T : BaseClass; void F2<T>() where T : struct; void F3<T>() where T : BaseClass; } class ExpImpl : I { void I.F1<T>() where T : BaseClass {}   // CS0460 void I.F2<T>() where T : class {}  // CS0460 }  
```