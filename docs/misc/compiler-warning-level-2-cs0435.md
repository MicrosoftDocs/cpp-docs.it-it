---
title: "Avviso del compilatore (livello 2) CS0435 | Microsoft Docs"
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
  - "CS0435"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0435"
ms.assetid: e70cd8c1-d399-4af8-8b1e-69a1de389aad
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS0435
Lo spazio dei nomi 'namespace' in 'assembly' è in conflitto con il tipo importato 'type' in 'assembly'. Verrà usato lo spazio dei nomi definito in 'assembly'.  
  
 Questo avviso viene generato quando uno spazio dei nomi in un file di origine \(file\_2\) è in conflitto con un tipo importato in file\_1. Il compilatore usa il tipo del file di origine.  
  
 L'esempio seguente genera l'errore CS0435:  
  
 Compilare innanzitutto il file:  
  
```  
// CS0435_1.cs // compile with: /t:library public class Util { public class A { } }  
```  
  
 Compilare quindi il file:  
  
```  
// CS0435_2.cs // compile with: /r:CS0435_1.dll using System; namespace Util { public class A { } } public class Test { public static void Main() { Console.WriteLine(typeof(Util.A)); // CS0435 } }  
```