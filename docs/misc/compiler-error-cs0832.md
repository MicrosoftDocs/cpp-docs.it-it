---
title: "Errore del compilatore CS0832 | Microsoft Docs"
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
  - "CS0832"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0832"
ms.assetid: b5527209-a9bd-4f8c-a432-2e89bb1905d1
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0832
L'albero delle espressioni non può contenere un operatore di assegnazione.  
  
 Una albero delle espressioni non mantiene lo stato di variabile o non prevede il concetto di percorso di archiviazione.  
  
### Per correggere l'errore  
  
1.  Rimuovere l'operatore di assegnazione dall'espressione lambda o di query.  
  
## Esempio  
 Nell'esempio di codice, come in tutte le espressioni lambda, `x` è solo un parametro di input passato per valore. Non è possibile modificarne il valore in un albero delle espressioni. Può essere modificato in un'espressione lambda delegato.  
  
```  
// cs0843.cs using System; using System.Linq; using System.Linq.Expressions; public class C { public static int Main() { Expression<Func<int, int>> e = x => x += 5; // CS0843 return 1; } }  
```