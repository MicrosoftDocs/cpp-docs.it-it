---
title: "Errore del compilatore CS1637 | Microsoft Docs"
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
  - "CS1637"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1637"
ms.assetid: 95aa82ab-bd52-4def-b5f3-d65e6dcb3855
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1637
Gli iteratori non possono avere parametri unsafe o tipi yield  
  
 Controllare l'elenco di argomenti dell'iteratore e il tipo di tutte le istruzioni yield per verificare di non stare usando tipi unsafe.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1637:  
  
```  
// CS1637.cs // compile with: /unsafe using System.Collections; public unsafe class C { public IEnumerator Iterator1(int* p)  // CS1637 { yield return null; } }  
```