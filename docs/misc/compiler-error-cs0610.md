---
title: "Errore del compilatore CS0610 | Microsoft Docs"
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
  - "CS0610"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0610"
ms.assetid: 6cdce74c-5c00-4539-9df1-32be70e9912d
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0610
Il campo o la proprietà non può essere di tipo 'type'  
  
 Alcuni tipi non possono essere usati come campi o proprietà, ad esempio i tipi **System.ArgIterator** e **System.TypedReference**.  
  
 L'esempio seguente genera l'errore CS0610 dovuto all'uso di **System.TypedReference** come campo:  
  
```  
// CS0610.cs public class MainClass { System.TypedReference i;   // CS0610 public static void Main () { } public static void Test(System.TypedReference i)   // OK { } }  
```