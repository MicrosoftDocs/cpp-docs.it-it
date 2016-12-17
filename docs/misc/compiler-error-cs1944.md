---
title: "Errore del compilatore CS1944 | Microsoft Docs"
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
  - "CS1944"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1944"
ms.assetid: e5e2c018-9a7e-48ee-8dd3-98e3553777c1
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1944
Un albero delle espressioni non può contenere un'operazione di puntatore unsafe  
  
 Gli alberi delle espressioni non supportano i tipi puntatore perché il metodo <xref:System.Linq.Expressions.Expression%601.Compile%2A?displayProperty=fullName> può produrre solo codice verificabile. Vedere i commenti.  
  
### Per correggere l'errore  
  
1.  Non usare tipi puntatore quando si prova a creare un albero delle espressioni.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1944:  
  
<CodeContentPlaceHolder>0</CodeContentPlaceHolder>  
 In alcune situazioni la presenza di puntatori in un albero delle espressioni è accettabile. Si consideri il codice di esempio seguente:  
  
 `Expression<Func\<int*[], int*[]>) e = (int*[] i)=>i;`  
  
 Questo codice è un albero delle espressioni valido perché nessun argomento di tipo è un tipo puntatore. Ci sono matrici di puntatori e le matrici non sono tipi puntatore. Inoltre, il corpo dell'albero delle espressioni non tenta di eseguire operazioni pericolose sui puntatori.  
  
## Vedere anche  
 [non protette](../Topic/unsafe%20\(C%23%20Reference\).md)