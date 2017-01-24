---
title: "Errore del compilatore CS1044 | Microsoft Docs"
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
  - "CS1044"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1044"
ms.assetid: 18fc1ff5-8b97-4c31-99a1-5985b8e58024
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1044
Impossibile utilizzare più di un tipo nelle istruzioni for, using, fixed e nelle dichiarazioni  
  
 Il compilatore ha trovato un'istruzione non valida.  
  
 L'esempio seguente genera l'errore CS1044:  
  
```  
// CS1044.cs using System; public class MyClass : IDisposable { public void Dispose() { Console.WriteLine("Res1.Dispose()"); } public static void Main() { using (MyClass mc1 = new MyClass(), MyClass mc2 = new MyClass())   // CS1044, remove an instantiation { } } }  
```