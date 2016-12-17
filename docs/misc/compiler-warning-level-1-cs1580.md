---
title: "Avviso del compilatore (livello 1) CS1580 | Microsoft Docs"
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
  - "CS1580"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1580"
ms.assetid: ffd1b6d7-6cab-47e3-b7fe-c79cb435cddf
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS1580
Il tipo non è valido per il parametro 'numero parametro' nell'attributo cref del commento XML  
  
 Durante un tentativo di fare riferimento a un form di overload di un metodo, il compilatore ha rilevato un errore di sintassi. In genere questo indica che è stato specificato il nome del parametro e non il tipo. Verrà inserita una riga in formato non valido nel file XML generato.  
  
 L'esempio seguente genera l'errore CS1580:  
  
```  
// CS1580.cs // compile with: /W:1 /doc:x.xml using System; /// <seealso cref="Test(i)"/>   // CS1580 // try the following line instead // /// <seealso cref="Test(int)"/> public class MyClass { /// <summary>help text</summary> public static void Main() { } /// <summary>help text</summary> public void Test(int i) { } /// <summary>help text</summary> public void Test(char i) { } }  
```