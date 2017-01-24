---
title: "Errore del compilatore CS0149 | Microsoft Docs"
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
  - "CS0149"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0149"
ms.assetid: c3c0e48e-8dba-4ee6-86fd-cbb02c68255c
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0149
È previsto il nome di un metodo  
  
 Quando si crea un oggetto [delegate](../Topic/delegate%20\(C%23%20Reference\).md), specificare un metodo. Per altre informazioni, vedere [Delegati](../Topic/Delegates%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0149:  
  
```  
// CS0149.cs using System; delegate string MyDelegate(int i); class MyClass { // class member-field of the declared delegate type static MyDelegate dt; public static void Main() { dt = new MyDelegate(17.45);   // CS0149 // try the following line instead // dt = new MyDelegate(Func2); F(dt); } public static string Func2(int j) { Console.WriteLine(j); return j.ToString(); } public static void F(MyDelegate myFunc) { myFunc(8); } }  
```