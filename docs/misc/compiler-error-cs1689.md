---
title: "Errore del compilatore CS1689 | Microsoft Docs"
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
  - "CS1689"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1689"
ms.assetid: 5fa6e845-40ef-4451-81ee-acbe2665527a
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1689
L'attributo 'Attribute Name' è valido solo per metodi o classi Attribute  
  
 Questo errore si verifica solo con l'attributo **ConditionalAttribute**. Come indicato nel messaggio, questo attributo può essere usato solo per i metodi o le classi Attribute. Ad esempio, il tentativo di applicare questo attributo a una classe genererà l'errore.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1689.  
  
```  
// CS1689.cs // compile with: /target:library [System.Diagnostics.Conditional("A")]   // CS1689 class MyClass {}  
```