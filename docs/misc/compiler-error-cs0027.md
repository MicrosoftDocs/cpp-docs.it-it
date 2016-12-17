---
title: "Errore del compilatore CS0027 | Microsoft Docs"
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
  - "CS0027"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0027"
ms.assetid: 3a599876-9643-4c68-9457-3306858a73e9
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0027
La parola chiave 'this' non è disponibile nel contesto corrente  
  
 La parola chiave [this](../Topic/this%20\(C%23%20Reference\).md) è stata trovata all'esterno di una proprietà, di un metodo o di un costruttore.  
  
 Per correggere l'errore, modificare l'istruzione in modo da non usare la parola chiave `this` e\/o spostare parzialmente o totalmente l'istruzione all'interno di una proprietà, di un metodo o di un costruttore.  
  
 L'esempio seguente genera l'errore CS0027:  
  
```  
using System; using System.Collections.Generic; using System.Text; namespace ConsoleApplication3 { class MyClass { int err1 = this.Fun() + 1;  // CS0027 public int Fun() { return 10; } public void Test() { // valid use of this int err = this.Fun() + 1; Console.WriteLine(err); } public static void Main() { MyClass c = new MyClass(); c.Test(); } } }  
```