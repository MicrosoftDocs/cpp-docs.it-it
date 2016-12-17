---
title: "Errore del compilatore CS1909 | Microsoft Docs"
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
  - "CS1909"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1909"
ms.assetid: d465a107-0911-4440-8b3a-1e5dea6fda3c
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1909
L'attributo DefaultValue non è applicabile a parametri di tipo 'type'  
  
 L'errore CS1909 viene generato quando si usa un attributo `DefaultValue` non applicabile al tipo di parametro.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1909.  
  
```  
// CS1909.cs // compile with: /target:library using System.Runtime.InteropServices; public interface ISomeInterface { void Test1([DefaultParameterValue(new int[] {1, 2})] int[] arr1);   // CS1909 void Test2([DefaultParameterValue("Test String")] string s);   // OK }  
```