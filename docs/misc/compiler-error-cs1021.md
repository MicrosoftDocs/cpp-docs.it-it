---
title: "Errore del compilatore CS1021 | Microsoft Docs"
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
  - "CS1021"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1021"
ms.assetid: 0346ba58-d7cd-40bd-bcad-b90117fdc9b5
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1021
La costante integrale è troppo grande  
  
 Un valore assegnato a un [tipo integrale](../Topic/Integral%20Types%20Table%20\(C%23%20Reference\).md) è maggiore del valore intero senza segno massimo.  
  
 L'esempio seguente genera l'errore CS1021:  
  
```  
// CS1021.cs enum F : int { a=(int)2590000000000000000000   // CS1021 } public class clx { public static void Main() { } }  
```