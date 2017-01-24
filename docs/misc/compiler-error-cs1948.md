---
title: "Errore del compilatore CS1948 | Microsoft Docs"
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
  - "CS1948"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1948"
ms.assetid: 3dac3abe-0edd-4ee1-8fb1-bc597ea63e1f
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1948
La variabile di intervallo 'name' non può avere lo stesso nome di un parametro di tipo del metodo  
  
 In uno stesso spazio di dichiarazione non possono esistere due dichiarazioni dello stesso identificatore.  
  
### Per correggere l'errore  
  
1.  Modificare il nome della variabile di intervallo o del parametro di tipo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1948 perché l'identificatore `T` viene usato per la variabile di intervallo e per il parametro di tipo nel metodo `TestMethod`:  
  
```  
// cs1948.cs using System.Linq; class Test { public void TestMethod<T>(T t) { var x = from T in Enumerable.Range(1, 100) // CS1948 select T; } }  
```