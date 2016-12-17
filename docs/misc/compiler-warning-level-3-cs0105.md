---
title: "Avviso del compilatore (livello 3) CS0105 | Microsoft Docs"
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
  - "CS0105"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0105"
ms.assetid: 96d1d5d7-79e9-424f-bbde-f87e88b70003
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 3) CS0105
La direttiva using per 'namespace' è già presente in questo spazio dei nomi  
  
 Uno [spazio dei nomi](../Topic/namespace%20\(C%23%20Reference\).md),che deve essere dichiarato una sola volta, è stato invece dichiarato più volte. Rimuovere tutte le dichiarazioni dello spazio dei nomi duplicate.  
  
 L'esempio seguente genera l'errore CS0105:  
  
```  
// CS0105.cs // compile with: /W:3 using System; using System;   // CS0105 public class a { public static void Main() { } }  
```