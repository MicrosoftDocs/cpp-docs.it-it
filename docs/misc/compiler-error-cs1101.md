---
title: "Errore del compilatore CS1101 | Microsoft Docs"
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
  - "CS1101"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1101"
ms.assetid: d6fc8834-eadf-4497-b442-0751895e6764
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1101
Non è possibile usare il modificatore di parametro 'ref' con 'this'.  
  
 Quando la parola chiave `this` modifica il primo parametro di un metodo statico, indica al compilatore che il metodo è un metodo di estensione. Non sono necessari o consentiti altri modificatori sul primo parametro di un metodo di estensione.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1101:  
  
```  
// cs1101.cs // Compile with: /target:library public static class Extensions { // No type parameters. public static void Test(ref this int i) {} // CS1101 // Single type parameter. public static void Test<T>(ref this T t) {}// CS1101 // Multiple type parameters. public static void Test<T,U,V>(ref this U u) {}// CS1101 }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [this](../Topic/this%20\(C%23%20Reference\).md)   
 [ref](../Topic/ref%20\(C%23%20Reference\).md)