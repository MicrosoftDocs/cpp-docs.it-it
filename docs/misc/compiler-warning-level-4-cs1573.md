---
title: "Avviso del compilatore (livello 4) CS1573 | Microsoft Docs"
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
  - "CS1573"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1573"
ms.assetid: 1b68cb1a-9bfd-4343-b9b6-8ce195af5e23
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 4) CS1573
Il parametro 'parameter', diversamente da altri parametri, non contiene tag param corrispondenti nel commento XML per 'parameter'  
  
 Quando si usa l'opzione del compilatore [\/doc](../Topic/-doc%20\(C%23%20Compiler%20Options\).md), un commento è stato specificato per alcuni ma non per tutti i parametri in un metodo. È possibile che si sia dimenticato di inserire un commento per questi parametri.  
  
 L'esempio seguente genera l'errore CS1573:  
  
```  
// CS1573.cs // compile with: /W:4 public class MyClass { /// <param name='Int1'>Used to indicate status.</param> // enter a comment for Char1? public static void MyMethod(int Int1, char Char1) { } public static void Main () { } }  
```