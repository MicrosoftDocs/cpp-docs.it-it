---
title: "Errore del compilatore CS0102 | Microsoft Docs"
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
  - "CS0102"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0102"
ms.assetid: c9419779-649f-4c24-b0f3-f0a1be46659e
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0102
Il tipo 'type name' contiene già una definizione per 'identifier'  
  
 Una classe contiene più dichiarazioni per identificatori con lo stesso nome nello stesso ambito. Per correggere l'errore, rinominare gli identificatori duplicati.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0102.  
  
```  
// CS0102.cs // compile with: /target:library namespace MyApp { public class MyClass { string s = "Hello"; string s = "Goodbye";   // CS0102 public void GetString() { string s = "Hello again";   // method scope, no error } } }  
  
```