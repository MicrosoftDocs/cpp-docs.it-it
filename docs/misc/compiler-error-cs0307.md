---
title: "Errore del compilatore CS0307 | Microsoft Docs"
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
  - "CS0307"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0307"
ms.assetid: 202a9985-ed7a-4e0a-9573-5624e066d314
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0307
'construct' 'identifier' non è un metodo generico. Per un elenco di espressioni, includere l'espressione \< tra parentesi.  
  
 Il costrutto denominato non è un tipo o un metodo, gli unici costrutti che possono accettare argomenti generici. Rimuovere gli argomenti di tipo tra parentesi angolari. Se un oggetto è generico, è necessario dichiarare il costrutto generico come tipo o metodo generico.  
  
 L'esempio seguente genera l'errore CS0307:  
  
```  
// CS0307.cs class C { public int P { get { return 1; } } public static void Main() { C c = new C(); int p = c.P<int>();  // CS0307 – C.P is a property // Try this instead // int p = c.P; } }  
```