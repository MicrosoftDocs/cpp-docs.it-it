---
title: "Errore del compilatore CS1511 | Microsoft Docs"
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
  - "CS1511"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1511"
ms.assetid: c04b5268-5bc3-41db-af6b-463ab1d802b4
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1511
La parola chiave 'base' non è disponibile in un metodo statico  
  
 La parola chiave [base](../Topic/base%20\(C%23%20Reference\).md) è stata usata in un metodo [static](../Topic/static%20\(C%23%20Reference\).md).`base` può essere chiamato solo in un costruttore di istanze, un metodo di istanza o una funzione di accesso di istanza.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1511.  
  
```  
// CS1511.cs // compile with: /target:library public class A { public int j = 0; } class C : A { public void Method() { base.j = 3;   // base allowed here } public static int StaticMethod() { base.j = 3;   // CS1511 return 1; } }  
```