---
title: "Errore del compilatore CS1008 | Microsoft Docs"
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
  - "CS1008"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1008"
ms.assetid: e595a431-2cf0-4cc1-998f-94aecb2a6db1
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1008
È previsto il tipo byte, sbyte, short, ushort, int, uint, long o ulong  
  
 Alcuni tipi di dati, ad esempio [enums](../Topic/enum%20\(C%23%20Reference\).md), possono essere dichiarati solo per contenere i dati dei tipi specificati.  
  
 L'esempio seguente genera l'errore CS1008:  
  
```  
// CS1008.cs abstract public class clx { enum splitch : char   // CS1008, char not valid type for enums { x, y, z } public static void Main() { } }  
```