---
title: "Avviso del compilatore (livello 2) CS1710 | Microsoft Docs"
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
  - "CS1710"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1710"
ms.assetid: 03c66a8d-30fc-4387-87f6-de759ec7ee88
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS1710
Il commento XML in 'type' contiene un tag typeparam duplicato per 'parameter'  
  
 La documentazione di un tipo generico include un tag duplicato per il parametro di tipo.  
  
## Esempio  
 Il codice seguente causa la visualizzazione dell'avviso CS1710.  
  
```  
// CS1710.cs // compile with: /doc:cs1710.xml // To resolve this warning, delete one of the duplicate <typeparam>'s. using System; class Stack<ItemType> { } /// <typeparam name="MyType">can be an int</typeparam> /// <typeparam name="MyType">can be an int</typeparam> class MyStackWrapper<MyType> { // Open constructed type Stack<MyType>. Stack<MyType> stack; public MyStackWrapper(Stack<MyType> s) { stack = s; } } class CMain { public static void Main() { // Closed constructed type Stack<int>. Stack<int> stackInt = new Stack<int>(); MyStackWrapper<int> MyStackWrapperInt = new MyStackWrapper<int>(stackInt); } }  
```