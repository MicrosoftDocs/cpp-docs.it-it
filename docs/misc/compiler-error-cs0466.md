---
title: "Errore del compilatore CS0466 | Microsoft Docs"
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
  - "CS0466"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0466"
ms.assetid: db6be72b-120a-4b48-b41c-a738d02adae0
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0466
'method1' non deve contenere un parametro params perché 'method2' non ne ha  
  
 Non è possibile usare il parametro `params` in un membro di classe se l'interfaccia implementata non lo usa.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0466.  
  
```  
// CS0466.cs interface I { void F1(params int[] a); void F2(int[] a); } class C : I { void I.F1(params int[] a) {} void I.F2(params int[] a) {}   // CS0466 void I.F2(int[] a) {}   // OK public static void Main() { I i = (I) new C(); i.F1(new int[] {1, 2} ); i.F2(new int[] {1, 2} ); } }  
```