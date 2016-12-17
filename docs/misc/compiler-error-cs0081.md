---
title: "Errore del compilatore CS0081 | Microsoft Docs"
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
  - "CS0081"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0081"
ms.assetid: a5649abc-89ea-4f64-8c3c-eb36df926561
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0081
La dichiarazione del parametro di tipo deve essere un identificatore anziché un tipo  
  
 Quando si dichiara un metodo o un tipo generico, specificare il parametro di tipo come un identificatore, ad esempio "T" o "inputType". Quando il codice client chiama il metodo, fornisce il tipo, che sostituisce ogni occorrenza dell'identificatore nel corpo del metodo o della classe. Per altre informazioni, vedere [Parametri di tipo generico](../Topic/Generic%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
```  
// CS0081.cs class MyClass { public void F<int>() {}   // CS0081 public void F<T>(T input) {}   // OK public static void Main() { MyClass a = new MyClass(); a.F<int>(2); a.F<double>(.05); } }  
```  
  
## Vedere anche  
 [Generics](../Topic/Generics%20\(C%23%20Programming%20Guide\).md)