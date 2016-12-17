---
title: "Errore del compilatore CS0611 | Microsoft Docs"
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
  - "CS0611"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0611"
ms.assetid: bbd857a0-9454-4438-a21c-fef5bc7eee06
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0611
Gli elementi di una matrice non possono essere di tipo 'type'  
  
 Alcuni tipi non possono essere usati come tipo di matrice. Questi tipi includono **System.TypedReference** e **System.ArgIterator**.  
  
 L'esempio seguente genera CS0611 in seguito all'utilizzo di **System.TypedReference** come elemento della matrice:  
  
```  
// CS0611.cs public class a { public static void Main() { System.TypedReference[] ao = new System.TypedReference [10];   // CS0611 // try the following line instead // int[] ao = new int[10]; } }  
```