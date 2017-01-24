---
title: "Errore del compilatore CS0112 | Microsoft Docs"
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
  - "CS0112"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0112"
ms.assetid: 6741c7c4-8553-4bbe-b950-4f908e8d9ba3
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0112
Un membro statico 'function' non può essere contrassegnato come override, virtual o abstract  
  
 Una dichiarazione di metodo in cui viene usata la parola chiave `override`, **virtual** o **abstract** non può usare anche la parola chiave **static**.  
  
 Per altre informazioni, vedere [Metodi](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0112:  
  
```  
// CS0112.cs namespace MyNamespace { abstract public class MyClass { public abstract void Foo(); } public class MyClass2 : MyClass { override public static void Foo()   // CS0112, remove static keyword { } public static int Main() { return 0; } } }  
```