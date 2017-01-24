---
title: "Errore del compilatore CS0542 | Microsoft Docs"
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
  - "CS0542"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0542"
ms.assetid: 68a89948-8b56-4cd5-95e2-0df7fcad50ac
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0542
'user\-defined type': i nomi dei membri non possono essere uguali a quelli del tipo di inclusione  
  
 I membri di una classe o struct non possono avere lo stesso nome della classe o dello struct, a meno che il membro sia un costruttore.  
  
 L'esempio seguente genera l'errore CS0542:  
  
```c#  
// CS0542.cs class C { public int C; }  
```  
  
 Questo errore può essere generato se si inserisce accidentalmente un tipo restituito in un costruttore, che in effetti lo rende un metodo ordinario. L'esempio seguente genera l'errore CS0542 perché `F` è un metodo, non un costruttore, perché ha un tipo restituito:  
  
```c#  
// CS0542.cs class F { // Remove void from F() to resolve the problem. void F()   // CS0542, same name as the class { } } class MyClass { public static void Main() { } }  
```  
  
 Se una classe è denominata 'Item' e ha un indicizzatore dichiarato come `this`, potrebbe essere visualizzato questo errore. Nel codice creato il nome 'Item' viene assegnato a un indicizzatore predefinito, provocando il conflitto.  
  
```c#  
// CS0542b.cs class Item { public int this[int i]  // CS0542 { get { return 0; } } } class CMain { public static void Main() { } }  
```