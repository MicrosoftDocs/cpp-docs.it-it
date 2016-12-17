---
title: "Errore del compilatore CS1953 | Microsoft Docs"
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
  - "CS1953"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1953"
ms.assetid: b8af5eed-0f3b-4258-b4e2-f5d184288239
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1953
Un'espressione lambda dell'albero delle espressioni non può contenere un gruppo di metodi.  
  
 Una chiamata al metodo richiede l'operatore `()`. Il nome del metodo senza tale operatore fa riferimento al gruppo di metodi, ovvero il set di tutti i metodi di overload con lo stesso nome.  
  
### Per correggere l'errore  
  
1.  Se si intendeva chiamare il metodo, aggiungere l'operatore `()`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1953:  
  
```  
// cs1953.cs using System; using System.Linq.Expressions; class CS1953 { public static void Main() { double num = 10; Expression<Func<bool>> testExpr = () => num.GetType is int; // CS1953 } }  
```