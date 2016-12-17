---
title: "Avviso del compilatore (livello 3) CS0642 | Microsoft Docs"
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
  - "CS0642"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0642"
ms.assetid: e2df58c0-9b7e-4e50-8e31-e0134955f62c
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0642
L'istruzione vuota è probabilmente errata  
  
 Un punto e virgola dopo un'istruzione condizionale può far sì che il codice venga eseguito in modo diverso da quello previsto.  
  
 È possibile usare l'opzione del compilatore **\/nowarn** o `#pragmas warning` per disabilitare questo avviso. Per altre informazioni, vedere [\/nowarn \(Suppress Specified Warnings\)](../Topic/-nowarn%20\(C%23%20Compiler%20Options\).md) o [\#pragma warning](../Topic/%23pragma%20warning%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0642:  
  
```  
// CS0642.cs // compile with: /W:3 class MyClass { public static void Main() { int i; for (i = 0; i < 10; i += 1);   // CS0642 semicolon intentional? { System.Console.WriteLine (i); } } }  
```