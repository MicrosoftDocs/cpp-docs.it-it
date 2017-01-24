---
title: "Errore del compilatore CS1102 | Microsoft Docs"
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
  - "CS1102"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1102"
ms.assetid: 7de798d4-1b4b-4842-ae43-9bc83e6dc9a3
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1102
Non è possibile usare il modificatore di parametro 'out' con 'this'.  
  
 Quando la parola chiave `this` modifica il primo parametro di un metodo statico, indica al compilatore che il metodo è un metodo di estensione. Non sono necessari o consentiti altri modificatori sul primo parametro di un metodo di estensione.  
  
### Per correggere l'errore  
  
1.  Rimuovere i modificatori non autorizzati dal primo parametro.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1102:  
  
```  
// cs1102.cs // Compile with: /target:library. public static class Extensions { // No type parameters. public static void Test(this out int i) {} // CS1102 //Single type parameter public static void Test<T>(this out T t) {}// CS1102 //Multiple type parameters public static void Test<T,U,V>(this out U u) {}// CS1102 }  
```  
  
## Vedere anche  
 [Metodi di estensione](../Topic/Extension%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [this](../Topic/this%20\(C%23%20Reference\).md)   
 [out](../Topic/out%20\(C%23%20Reference\).md)