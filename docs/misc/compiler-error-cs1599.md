---
title: "Errore del compilatore CS1599 | Microsoft Docs"
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
  - "CS1599"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1599"
ms.assetid: 4cdb282d-0f5d-459b-afc1-8980fbb22067
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1599
Il metodo o il delegato non può restituire il tipo 'type'  
  
 Alcuni tipi della libreria di classi .NET Framework, ad esempio <xref:System.TypedReference>, <xref:System.RuntimeArgumentHandle> e <xref:System.ArgIterator>, non possono essere usati come tipi restituiti perché potenzialmente possono essere usati per eseguire operazioni non sicure.  
  
 L'esempio seguente genera l'errore CS1599:  
  
```  
// CS1599.cs using System; class MyClass { public static void Main() { } public TypedReference Test1()   // CS1599 { return null; } public ArgIterator Test2()   // CS1599 { return null; } }  
```