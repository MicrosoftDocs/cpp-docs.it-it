---
title: "Errore del compilatore CS1520 | Microsoft Docs"
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
  - "CS1520"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1520"
ms.assetid: 1aeeee83-52a6-45dc-b197-a9a6de3a220c
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1520
Il metodo deve avere un tipo restituito  
  
 Un metodo dichiarato in una classe, in uno struct o in un'interfaccia deve includere un tipo restituito esplicito. Nell'esempio seguente, il metodo Square ha un valore restituito [string](../Topic/string%20\(C%23%20Reference\).md):  
  
```  
class Test { string IntToString(int i) { return i.ToString(); } }  
```  
  
 L'esempio seguente genera l'errore CS1520:  
  
```  
// CS1520a.cs public class x { // Method declaration missing a return type MyMethod()   // CS1520 {} // Add the desired return type: // void MyMethod2() // { } public static void Main() { } }  
```  
  
 In alternativa, l'errore può verificarsi quando la combinazione di maiuscole e minuscole nel nome di un costruttore è diversa da quella della dichiarazione della classe o dello struct, come nell'esempio seguente: Poiché il nome è non esattamente identico a quello della classe, il compilatore lo interpreta come un metodo normale, non come un costruttore, e genera l'errore:  
  
```  
// CS1520b.cs public class Class1 { // Should be Class1, not class1 public class1()   // CS1520 { } static void Main() { } }  
```  
  
## Vedere anche  
 [Metodi](../Topic/Methods%20\(C%23%20Programming%20Guide\).md)   
 [Costruttori](../Topic/Constructors%20\(C%23%20Programming%20Guide\).md)