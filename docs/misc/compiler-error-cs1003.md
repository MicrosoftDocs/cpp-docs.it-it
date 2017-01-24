---
title: "Errore del compilatore CS1003 | Microsoft Docs"
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
  - "CS1003"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1003"
ms.assetid: 59f4d053-13c0-4f79-830e-263acdbe94fa
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1003
Errore di sintassi. È previsto 'char'  
  
 Il compilatore genera questo errore per segnalare diverse condizioni di errore. Esaminare il codice per individuare l'errore di sintassi.  
  
 L'esempio seguente genera l'errore CS1003:  
  
```  
// CS1003.cs public class b { public static void Main() { int[] a; a[);   // CS1003 } }  
```