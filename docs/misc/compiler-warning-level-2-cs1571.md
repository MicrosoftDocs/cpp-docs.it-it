---
title: "Avviso del compilatore (livello 2) CS1571 | Microsoft Docs"
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
  - "CS1571"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1571"
ms.assetid: 23b08885-9f69-4376-a952-4820b065a5c0
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS1571
Il commento XML in 'construct' contiene un tag param duplicato per 'parameter'  
  
 Quando si usa l'opzione del compilatore [\/doc](../Topic/-doc%20\(C%23%20Compiler%20Options\).md), vengono trovati più commenti per lo stesso parametro di metodo. Rimuovere una delle righe duplicate.  
  
 L'esempio seguente genera l'errore CS1571:  
  
```  
// CS1571.cs // compile with: /W:2 /doc:x.xml /// <summary>help text</summary> public class MyClass { /// <param name='Int1'>Used to indicate status.</param> /// <param name='Char1'>An initial.</param> /// <param name='Int1'>Used to indicate status.</param> // CS1571 public static void MyMethod(int Int1, char Char1) { } /// <summary>help text</summary> public static void Main () { } }  
```