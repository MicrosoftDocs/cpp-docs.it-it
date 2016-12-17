---
title: "Errore del compilatore CS1931 | Microsoft Docs"
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
  - "CS1931"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1931"
ms.assetid: c0071c3d-ae11-4073-87df-508150daef68
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1931
La variabile di intervallo 'variable' è in conflitto con una dichiarazione precedente di 'variable'.  
  
 La dichiarazione di una variabile di intervallo, così come qualunque altra dichiarazione, deve avere un identificatore univoco all'interno dello spazio di dichiarazione della variabile.  
  
### Per correggere l'errore  
  
1.  Assegnare un nome univoco alla variabile di intervallo.  
  
## Esempio  
 Il codice seguente genera l'errore CS1931 perché l'identificatore `x` viene usato sia come variabile locale in `Main`, sia come variabile di intervallo nell'espressione di query:  
  
```  
// cs1931.cs class Test { static void Main() { int x = 1; var y = from x in Enumerable.Range(1, 100) // CS1931 select x; } }  
```  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)