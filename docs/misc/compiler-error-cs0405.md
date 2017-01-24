---
title: "Errore del compilatore CS0405 | Microsoft Docs"
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
  - "CS0405"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0405"
ms.assetid: 0bf51e24-dc6c-438f-a928-b5bfbf35f81a
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0405
Il vincolo 'constraint' è duplicato per il parametro di tipo 'type parameter'  
  
 La dichiarazione generica contiene due parametri identici. Per correggere l'errore, rimuovere il duplicato.  
  
 L'esempio seguente genera l'errore CS0405:  
  
```  
// CS0405.cs interface I { } class C<T> where T : I, I  // CS0405.cs { }  
```