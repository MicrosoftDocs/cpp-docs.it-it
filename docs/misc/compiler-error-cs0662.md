---
title: "Errore del compilatore CS0662 | Microsoft Docs"
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
  - "CS0662"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0662"
ms.assetid: 836fa15e-3bf3-4af5-8acf-072d7d731dcd
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0662
'method' non può specificare solo l'attributo Out in un parametro ref. Usare entrambi gli attributi In e Out o nessuno dei due.  
  
 Un metodo di interfaccia include un parametro che usa [ref](../Topic/ref%20\(C%23%20Reference\).md) solo con l'attributo [Out](frlrfSystemRuntimeInteropServicesOutAttributeClassTopic). Un parametro `ref` che usa l'attributo **Out** deve usare anche l'attributo [In](frlrfSystemRuntimeInteropServicesInAttributeClassTopic).  
  
 L'esempio seguente genera l'errore CS0662:  
  
```  
// CS0662.cs using System.Runtime.InteropServices; interface I { void method([Out] ref int i);   // CS0662 // try one of the following lines instead // void method(ref int i); // void method([Out, In]ref int i); } class test { public static void Main() { } }  
```