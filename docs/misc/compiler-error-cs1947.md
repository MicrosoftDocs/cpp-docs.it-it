---
title: "Errore del compilatore CS1947 | Microsoft Docs"
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
  - "CS1947"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1947"
ms.assetid: e2822fba-a176-4466-9cdc-63c44e22ebcb
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1947
Non è possibile assegnare la variabile di intervallo 'variable name'. È di sola lettura.  
  
 Una variabile di intervallo è analoga a una variabile di iterazione in un'istruzione `foreach`. Non può essere assegnata a un'espressione di query.  
  
### Per correggere l'errore  
  
1.  Rimuovere l'assegnazione alla variabile di intervallo.  
  
2.  Se necessario, introdurre una nuova variabile di intervallo mediante la clausola `let` e usarla per archiviare il valore.  
  
## Esempio  
 Il codice seguente genera l'errore CS1947:  
  
```  
// cs1947.cs using System.Linq; class Test { static void Main() { int[] array = new int[] { 1, 2, 3, 4, 5 }; var x = from i in array let k = i select i = 5; // CS1947 x.ToList(); } }  
```  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)