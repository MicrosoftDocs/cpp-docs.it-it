---
title: "Errore del compilatore CS0439 | Microsoft Docs"
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
  - "CS0430"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0439"
ms.assetid: 5cbac869-1b1b-45f9-98c8-38c17348035f
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0439
Una dichiarazione di alias extern deve precedere tutti gli altri elementi definiti nello spazio dei nomi  
  
 Questo errore si verifica quando una dichiarazione `extern` è preceduta da altri elementi, ad esempio una dichiarazione `using`, nello stesso spazio dei nomi. Le dichiarazioni `extern` devono precedere tutti gli altri elementi dello spazio dei nomi.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0439:  
  
```  
// CS0439.cs using System; extern alias MyType;   // CS0439 // To resolve the error, make the extern alias the first line in the file. public class Test { public static void Main() { } }  
```