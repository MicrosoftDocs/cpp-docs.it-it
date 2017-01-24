---
title: "Errore del compilatore CS1945 | Microsoft Docs"
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
  - "CS1945"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1945"
ms.assetid: 787f61b0-4767-451c-8c78-8e456b5057eb
caps.latest.revision: 5
caps.handback.revision: 5
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1945
Un albero delle espressioni non può contenere un'espressione di metodo anonimo.  
  
 Gli alberi delle espressioni possono contenere solo espressioni. I metodi anonimi possono rappresentare solo istruzioni.  
  
### Per correggere l'errore  
  
1.  Non provare a creare un albero delle espressioni con un'istruzione.  
  
## Esempio  
 Il codice seguente genera l'errore CS1945:  
  
```  
// cs1945.cs using System; using System.Linq.Expressions; public delegate void D(); class Test { static void Main() { Expression<Func<int, Func<int, bool>>> tree = (x => delegate(int i) { return true; }); // CS1945 } }  
```  
  
## Vedere anche  
 [Strutture ad albero dell'espressione](../Topic/Expression%20Trees%20\(C%23%20and%20Visual%20Basic\).md)   
 [Istruzioni, espressioni e operatori](../Topic/Statements,%20Expressions,%20and%20Operators%20\(C%23%20Programming%20Guide\).md)