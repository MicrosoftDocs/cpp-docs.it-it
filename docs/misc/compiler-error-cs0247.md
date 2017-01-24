---
title: "Errore del compilatore CS0247 | Microsoft Docs"
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
  - "CS0247"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0247"
ms.assetid: 95a147bb-3c67-45b7-b816-4fcf7503af06
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0247
Impossibile utilizzare dimensioni negative con stackalloc  
  
 Un numero negativo è stato passato a un'istruzione [stackalloc](../Topic/stackalloc%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0247:  
  
```  
// CS0247.cs // compile with: /unsafe public class MyClass { unsafe public static void Main() { int *p = stackalloc int [-30];   // CS0247 } }  
```