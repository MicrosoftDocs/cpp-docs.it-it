---
title: "Errore del compilatore CS0698 | Microsoft Docs"
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
  - "CS0698"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0698"
ms.assetid: 68211652-fdfa-4d37-9451-f0b4238f9fe6
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0698
Un tipo generico non può derivare da 'class' perché è una classe Attribute  
  
 Ogni classe che deriva da una classe Attribute è essa stessa un attributo. Gli attributi non possono essere tipi generici.  
  
 L'esempio seguente genera l'errore CS0698:  
  
```  
// CS0698.cs class C<T> : System.Attribute  // CS0698 { }  
```