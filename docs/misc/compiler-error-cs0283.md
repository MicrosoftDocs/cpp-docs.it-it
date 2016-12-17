---
title: "Errore del compilatore CS0283 | Microsoft Docs"
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
  - "CS0283"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0283"
ms.assetid: f94a5b84-92c5-4602-894d-6f856d57e0e6
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0283
Il tipo 'type' non può essere dichiarato const  
  
 Il tipo specificato in una dichiarazione di costante deve essere `byte`, `char`, `short`, `int`, `long`, `float`, `double`, `decimal`, `bool`, `string`, un tipo enum o un tipo riferimento a cui viene assegnato un valore Null. Ogni espressione costante deve restituire un valore del tipo di destinazione o di un tipo che può essere convertito nel tipo di destinazione mediante una conversione implicita.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0283.  
  
```  
// CS0283.cs struct MyTest { } class MyClass { // To resolve the error but retain the "const-ness", // change const to readonly. const MyTest test = new MyTest();   // CS0283 public static int Main() { return 1; } }  
```