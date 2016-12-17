---
title: "Errore del compilatore CS1654 | Microsoft Docs"
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
  - "CS1654"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1654"
ms.assetid: 471c1298-1908-449d-b765-8dc3cd81a11d
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1654
'variable' è una variabile 'read\-only variable type'. Impossibile modificarne i membri  
  
 Questo errore si verifica quando si prova a modificare i membri di una variabile di sola lettura perché inclusa in un costrutto speciale.  
  
 Un'area comune in cui ciò si verifica è all'interno dei cicli [foreach](../Topic/foreach,%20in%20\(C%23%20Reference\).md). È un errore in fase di compilazione per modificare il valore degli elementi della raccolta. Di conseguenza è possibile apportare modifiche agli elementi che sono [tipi valore](../Topic/Value%20Types%20\(C%23%20Reference\).md), tra cui [struct](../Topic/Structs%20\(C%23%20Programming%20Guide\).md). In una raccolta i cui elementi sono [tipi riferimento](../Topic/Reference%20Types%20\(C%23%20Reference\).md), è possibile modificare i membri accessibili di ogni elemento, ma qualsiasi tentativo di aggiungere o rimuovere o sostituire elementi completi genererà [Compiler Error CS1656](../Topic/Compiler%20Error%20CS1656.md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS1654 perché `Book` è uno `struct`. Per correggere l'errore, modificare lo `struct` in una [classe](../Topic/class%20\(C%23%20Reference\).md).  
  
```  
using System.Collections.Generic; using System.Text; namespace CS1654 { struct Book { public string Title; public string Author; public double Price; public Book(string t, string a, double p) { Title=t; Author=a; Price=p; } } class Program { List<Book> list; static void Main(string[] args) { //Use a collection initializer to initialize the list Program prog = new Program(); prog.list = new List<Book>(); prog.list.Add(new Book ("The C# Programming Language", "Hejlsberg, Wiltamuth, Golde", 29.95)); prog.list.Add(new Book ("The C++ Programming Language", "Stroustrup", 29.95)); prog.list.Add(new Book ("The C Programming Language", "Kernighan, Ritchie", 29.95)); foreach(Book b in prog.list) { //Compile error if Book is a struct //Make Book a class to modify its members b.Price +=9.95; // CS1654 } } } }  
  
```