---
title: "Errore del compilatore CS0138 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0138"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0138"
ms.assetid: 970545f8-5ee5-428e-921a-3aa29f68d16d
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0138
Una direttiva using dello spazio dei nomi può essere applicata solo a spazi dei nomi. 'type' è un tipo, non uno spazio dei nomi  
  
 Una direttiva [using](../Topic/using%20\(C%23%20Reference\).md) può assumere come parametro solo il nome di uno spazio dei nomi. Per altre informazioni, vedere [Spazi dei nomi](../Topic/Namespaces%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0138:  
  
```  
// CS0138.cs using System.Object;   // CS0138  
```