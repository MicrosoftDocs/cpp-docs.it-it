---
title: "Errore del compilatore CS0308 | Microsoft Docs"
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
  - "CS0308"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0308"
ms.assetid: b52ef9d2-f5b3-4baf-9a7e-bb1371e79463
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0308
Il tipo o metodo 'identifier' non generico non può essere usato con argomenti di tipo.  
  
 Il metodo o tipo non è generico, ma è stato usato con argomenti di tipo. Per evitare questo errore, rimuovere le parentesi angolari e gli argomenti di tipo oppure dichiarare nuovamente il metodo o il tipo come metodo o tipo generico.  
  
 L'esempio seguente genera l'errore CS0308:  
  
```  
// CS0308a.cs class MyClass { public void F() {} public static void Main() { F<int>();  // CS0308 – F is not generic. // Try this instead: // F(); } }  
```  
  
 Anche l'esempio seguente genera l'errore CS0308. Per risolvere l'errore, usare la direttiva "using System.Collections.Generic".  
  
```  
// CS0308b.cs // compile with: /t:library using System.Collections; // To resolve, uncomment the following line: // using System.Collections.Generic; public class MyStack<T> { // Store the elements of the stack: private T[] items = new T[100]; private int stack_counter = 0; // Define the iterator block: public IEnumerator<T> GetEnumerator()   // CS0308 { for (int i = stack_counter - 1 ; i >= 0; i--) yield return items[i]; } }  
  
```