---
title: "Divisione per zero (errore di run-time di Visual Basic) | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrID11"
ms.assetid: 5b9bc5d6-792e-48bc-a974-012e07ad95f3
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Divisione per zero (errore di run-time di Visual Basic)
Un'espressione usata come divisore ha un valore pari a zero.  
  
### Per correggere l'errore  
  
1.  Controllare l'ortografia delle variabili nell'espressione. Un nome di variabile scritto in modo non corretto può creare implicitamente una variabile numerica inizializzata su zero.  
  
2.  Controllare le operazioni precedenti nelle variabili dell'espressione, specialmente quelle passate alla routine come argomenti da altre routine.  
  
## Vedere anche  
 [Passing Arguments by Value and by Reference](../Topic/Passing%20Arguments%20by%20Value%20and%20by%20Reference%20\(Visual%20Basic\).md)   
 [Parameter Passing Mechanism Changes in Visual Basic](http://msdn.microsoft.com/it-it/0fa2b0dc-aa1c-4797-bbd6-aa13c611cab2)