---
title: "Errore del compilatore CS1552 | Microsoft Docs"
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
  - "CS1552"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1552"
ms.assetid: 647af14d-249e-4f69-80a8-2c0d77fbb244
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1552
L'identificatore di tipo matrice, \[\], deve trovarsi prima del nome del parametro  
  
 L'identificatore del tipo di matrice si trova dopo il nome della variabile nella dichiarazione di matrice.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1552:  
  
```  
// CS1552.cs public class C { public static void Main(string args[])   // CS1552 // try the following line instead // public static void Main(string [] args) { } }  
```