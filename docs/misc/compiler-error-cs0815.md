---
title: "Errore del compilatore CS0815 | Microsoft Docs"
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
  - "CS0815"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0815"
ms.assetid: 8f055d34-9ee4-482e-9e79-8b3698c55cb4
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0815
Impossibile assegnare 'expression' a una variabile locale tipizzata in modo implicito  
  
 Un'espressione che viene usata come inizializzatore per una variabile tipizzata in modo implicito deve avere un tipo. Le espressioni di funzioni anonime, le espressioni di gruppi di metodi e le espressioni letterali Null non hanno un tipo, quindi non sono inizializzatori adatti. Non è possibile inizializzare una variabile tipizzata in modo implicito con un valore Null nella relativa dichiarazione, anche se in seguito è possibile assegnarle un valore Null.  
  
### Per correggere l'errore  
  
1.  Fornire un tipo esplicito per la variabile.  
  
## Esempio  
 Il codice seguente genera l'errore CS0815:  
  
```  
// cs0815.cs class Test { public static int Main() { var d = s => -1; // CS0815 var e = (string s) => 0; // CS0815 var p = null;//CS0815 var del = delegate(string a) { return -1; };// CS0815 return -1; } }  
```  
  
## Vedere anche  
 [Variabili locali tipizzate in modo implicito](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)