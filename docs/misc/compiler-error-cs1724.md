---
title: "Errore del compilatore CS1724 | Microsoft Docs"
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
  - "CS1724"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1724"
ms.assetid: f25ec28e-c20b-457d-afc2-284494e69dad
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1724
Il valore specificato per l'argomento di 'System.Runtime.InteropServices.DefaultCharSetAttribute' non è valido  
  
 Questo errore viene generato da un argomento non valido nella classe <xref:System.Runtime.InteropServices.DefaultCharSetAttribute>.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1724.  
  
```  
// CS1724.cs using System.Runtime.InteropServices; // To resolve, replace 42 with a valid CharSet value. [module:DefaultCharSetAttribute((CharSet)42)]   // CS1724 class C { [DllImport("F.Dll")] extern static void FW1Named(); static void Main() {} }  
```