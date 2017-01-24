---
title: "Avviso del compilatore (livello 1) CS3026 | Microsoft Docs"
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
  - "CS3026"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS3026"
ms.assetid: 6c57b2e3-3011-42db-b450-ce9e04c4b4ca
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS3026
Il campo conforme a CLS 'field' non può essere volatile  
  
 Una variabile volatile non deve essere conforme a CLS.  
  
## Esempio  
 L'esempio seguente genera l'errore CS3026.  
  
```  
// CS3026.cs [assembly:System.CLSCompliant(true)] public class Test { public volatile int v0 =0;   // CS3026 // To resolve remove the CLS-CComplient attribute. public static void Main() { } }  
  
```