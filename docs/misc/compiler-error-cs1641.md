---
title: "Errore del compilatore CS1641 | Microsoft Docs"
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
  - "CS1641"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1641"
ms.assetid: ba6eab47-c28b-4531-b6a0-6d538b236d19
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1641
In un campo buffer a dimensione fissa, l'identificatore della dimensione della matrice deve trovarsi dopo il nome del campo  
  
 A differenza delle matrici normali, i buffer a dimensione fissa richiedono una dimensione costante da specificare nel punto di dichiarazione. Per risolvere questo errore, aggiungere un valore letterale intero positivo o un numero intero positivo costante e inserire le parentesi quadre dopo l'identificatore.  
  
 L'esempio seguente genera l'errore CS1641:  
  
```  
// CS1641.cs // compile with: /unsafe /target:library unsafe struct S { fixed int [] a;  // CS1641 // OK fixed int b [10]; const int c = 10; fixed int d [c]; }  
```