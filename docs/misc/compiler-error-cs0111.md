---
title: "Errore del compilatore CS0111 | Microsoft Docs"
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
  - "CS0111"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0111"
ms.assetid: 87afb689-f27b-451d-84eb-d6bdf17aea41
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0111
Il tipo 'class' definisce già un membro denominato 'member' con gli stessi tipi di parametro  
  
 L'errore CS0111 si verifica se una classe contiene due dichiarazioni di membri con lo stesso nome e gli stessi tipi di parametro. Per altre informazioni, vedere [Metodi](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0111.  
  
```  
// CS0111.cs class A { void Test() { } public static void Test(){}   // CS0111 public static void Main() {} }  
```