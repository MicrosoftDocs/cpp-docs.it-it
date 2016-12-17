---
title: "Errore del compilatore CS1055 | Microsoft Docs"
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
  - "CS1055"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1055"
ms.assetid: a93cb577-95fc-490a-97c4-2f366409f2c3
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1055
È prevista una funzione di accesso add o remove  
  
 Se [event](../Topic/event%20\(C%23%20Reference\).md) non è dichiarato come campo, deve definire le funzioni di accesso **add** e **remove**.  
  
 L'esempio seguente genera l'errore CS1055:  
  
```  
// CS1055.cs delegate void del(); class Test { public event del MyEvent { int i;   // CS1055 // uncomment accessors and delete previous line to resolve // add // { //    MyEvent += value; // } // remove // { //    MyEvent -= value; // } } public static void Main() { } }  
```