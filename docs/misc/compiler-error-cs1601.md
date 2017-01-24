---
title: "Errore del compilatore CS1601 | Microsoft Docs"
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
  - "CS1601"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1601"
ms.assetid: 5efa1d2d-c70c-446d-a51f-d23d8a3be22e
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1601
Il parametro del delegato o del metodo non può essere di tipo 'type'  
  
 Alcuni tipi della libreria di classi .NET Framework, ad esempio <xref:System.TypedReference>, <xref:System.RuntimeArgumentHandle> e <xref:System.ArgIterator>, non possono essere usati come parametri [ref](../Topic/ref%20\(C%23%20Reference\).md) o [out](../Topic/out%20\(C%23%20Reference\).md) perché potenzialmente possono essere usati per eseguire operazioni non sicure.  
  
 L'esempio seguente genera l'errore CS1601:  
  
```  
// CS1601.cs using System; class MyClass { public void Test1 (ref TypedReference t)   // CS1601 { } public void Test2 (out ArgIterator t)   // CS1601 { } }  
```