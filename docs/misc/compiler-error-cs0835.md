---
title: "Errore del compilatore CS0835 | Microsoft Docs"
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
  - "CS0835"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0835"
ms.assetid: 593c26f6-6d82-49a6-8ace-4d29dd9f5fbe
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0835
Non è possibile convertire un'espressione lambda in un albero delle espressioni in cui l'argomento 'type' del tipo non è un tipo delegato.  
  
 Se un'espressione lambda viene convertita in un albero delle espressioni, quest'ultimo deve avere un tipo delegato per il relativo argomento. Inoltre, l'espressione lambda deve essere convertibile nel tipo delegato.  
  
### Per correggere l'errore  
  
1.  Modificare il parametro di tipo da `int` a un tipo delegato, ad esempio `Func<int,int>`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0835:  
  
```  
// cs0835.cs using System; using System.Linq; using System.Linq.Expressions; public class C { public static int Main() { Expression<int> e = x => x + 1; // CS0835 // Try the following line instead. // Expression<Func<int,int>> e2 = x => x + 1; return 1; } }  
```