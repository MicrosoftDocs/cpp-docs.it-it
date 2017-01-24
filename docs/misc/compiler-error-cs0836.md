---
title: "Errore del compilatore CS0836 | Microsoft Docs"
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
  - "CS0836"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0836"
ms.assetid: 74a12271-1612-45aa-a398-7964e0269892
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0836
Impossibile utilizzare il tipo anonimo in un'espressione costante.  
  
 Gli unici oggetti consentiti in un'espressione costante sono costanti, valori letterali ed espressioni matematiche denominati che si combinano in espressioni costanti.  
  
### Per correggere l'errore  
  
1.  Rendere denominato il tipo anonimo.  
  
## Esempio  
 L'esempio seguente mostra un modo per generare l'errore CS0836:  
  
```  
// cs0836.cs using System; [AttributeUsage(AttributeTargets.Class, AllowMultiple = true, Inherited = false)] public class A : Attribute { public A(object obj) { } } [A(new { })] // CS0836 public class B { } public class Test { public static int Main() { return 0; } }  
```