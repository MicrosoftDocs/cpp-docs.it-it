---
title: "Errore del compilatore CS0473 | Microsoft Docs"
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
  - "CS0473"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0473"
ms.assetid: 58eb141e-7da0-41c8-b868-7cd2a15f07f9
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0473
L'implementazione esplicita dell'interfaccia 'method name' corrisponde a più membri di interfaccia. La scelta effettiva del membro dipende dall'interfaccia. Provare a usare un'implementazione non esplicita.  
  
 In alcuni casi un metodo generico potrebbe acquisire la stessa firma di un metodo non generico. Il problema è che non è possibile nel sistema di metadati dell'infrastruttura CLI \(Common Language Infrastructure \) dichiarare in modo non ambiguo i metodi associati agli slot. Tale determinazione dipende dall'infrastruttura CLI.  
  
> [!NOTE]
>  Questo errore viene generato in Visual Studio 2008 nei punti in cui non era generato in Visual Studio 2005.  
  
### Per correggere l'errore  
  
1.  Eliminare l'implementazione esplicita e implementare entrambi i metodi di interfaccia con l'implementazione implicita `public int TestMethod(int)`.  
  
## Esempio  
 Il codice seguente genera l'errore CS0473:  
  
```  
// cs0473.cs public interface ITest<T> { int TestMethod(int i); int TestMethod(T i); } public class ImplementingClass : ITest<int> { int ITest<int>.TestMethod(int i) // CS0473 { return i + 1; } public int TestMethod(int i) { return i - 1; } } class T { static int Main() { ImplementingClass a = new ImplementingClass(); if (a.TestMethod(0) != -1) return -1; ITest<int> i_a = a; System.Console.WriteLine(i_a.TestMethod(0).ToString()); if (i_a.TestMethod(0) != 1) return -1; return 0; } }  
  
```  
  
## Vedere anche  
 [Fabulous Adventures in Coding](http://blogs.msdn.com/ericlippert/archive/2006/04/06/570126.aspx)