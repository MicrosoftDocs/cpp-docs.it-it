---
title: "Errore del compilatore CS0012 | Microsoft Docs"
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
  - "CS0012"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0012"
ms.assetid: 5523e349-22f4-4b0b-b4b0-c4bf26c461f4
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0012
Il tipo 'type' è definito in un assembly di cui manca il riferimento. Aggiungere un riferimento all'assembly 'assembly'.  
  
 Non è stata trovata la definizione relativa a un tipo a cui si fa riferimento. Questo errore può verificarsi se nella compilazione non è inclusa una DLL obbligatoria. Per altre informazioni, vedere [Add Reference Dialog Box](http://msdn.microsoft.com/it-it/2feb0fe2-0805-4cc9-8cba-b0315849dfb7) e [\/reference \(Import Metadata\)](../Topic/-reference%20\(C%23%20Compiler%20Options\).md).  
  
 La sequenza di compilazioni genera seguente l'errore CS0012:  
  
```  
// cs0012a.cs // compile with: /target:library public class A {}  
```  
  
 Quindi:  
  
```  
// cs0012b.cs // compile with: /target:library /reference:cs0012a.dll public class B { public static A f() { return new A(); } }  
```  
  
 Quindi:  
  
```  
// cs0012c.cs // compile with: /reference:cs0012b.dll class C { public static void Main() { object o = B.f();   // CS0012 } }  
```  
  
 L'errore CS0012 può essere risolto eseguendo la compilazione con `/reference:cs0012b.dll;cs0012a.dll`, oppure mediante la [Add Reference Dialog Box](http://msdn.microsoft.com/it-it/2feb0fe2-0805-4cc9-8cba-b0315849dfb7) in Visual Studio, per aggiungere un riferimento a cs0012a.dll oltre a cs0012b.dll.