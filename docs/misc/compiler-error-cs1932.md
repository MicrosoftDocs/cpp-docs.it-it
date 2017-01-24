---
title: "Errore del compilatore CS1932 | Microsoft Docs"
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
  - "CS1932"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1932"
ms.assetid: fc927899-2d35-4d47-9ae9-8fc99295bb66
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1932
Impossibile assegnare 'expression' a una variabile di intervallo.  
  
 Il compilatore deve riuscire a dedurre il tipo di una variabile di intervallo, sia se è introdotta in una clausola `from` sia in una clausola `let`. Non può essere null perché null non è un tipo e non può essere assegnato con un'espressione di un tipo unsafe.  
  
### Per correggere l'errore  
  
-   Rimuovere l'assegnazione non valida.  
  
-   Eseguire il cast in modo esplicito dell'espressione a un tipo consentito  
  
## Esempio  
 Il codice seguente genera l'errore CS1932 perché il tipo della variabile di intervallo non può essere dedotto. Eseguire il cast del valore al tipo desiderato per correggere l'errore, come illustrato nell'esempio seguente.  
  
```  
// CS1932.cs using System.Linq; class Test { static void Main() { var x = from i in Enumerable.Range(1, 100) let k = null // CS1932 // Try the following line instead. let k = (string) null select i; } }  
```  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)