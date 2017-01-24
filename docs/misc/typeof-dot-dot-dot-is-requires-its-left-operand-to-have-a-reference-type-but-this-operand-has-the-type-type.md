---
title: "L&#39;operando sinistro di &#39;TypeOf... Is&#39; deve avere un tipo riferimento, ma questo operando ha il tipo valore &#39;&lt;tipo&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30021"
  - "vbc30021"
helpviewer_keywords: 
  - "BC30021"
ms.assetid: a6e76fc8-9c7f-4e55-8b68-e6e7b03a6737
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operando sinistro di &#39;TypeOf... Is&#39; deve avere un tipo riferimento, ma questo operando ha il tipo valore &#39;&lt;tipo&gt;&#39;
L'espressione `TypeOf...Is` controlla la compatibilità dei tipi in fase di esecuzione di una variabile oggetto. Questa compatibilità non è definita per i tipi valore.  
  
 **ID errore:** BC30021  
  
### Per correggere l'errore  
  
-   Se `Option Strict` è `Off`, usare la funzione `TypeName` o `VarType` per ottenere informazioni sul tipo di dati della variabile.  
  
-   Se `Option Strict` è `On`, la dichiarazione di variabile determina il tipo di dati della variabile.  
  
## Vedere anche  
 [Comparison Operators in Visual Basic](../Topic/Comparison%20Operators%20in%20Visual%20Basic.md)   
 [NOT IN BUILD: Funzione TypeName \(Visual Basic\)](http://msdn.microsoft.com/it-it/6197bc6c-e8a6-4711-883c-0c95e94e272c)   
 [NOT IN BUILD: Funzione VarType \(Visual Basic\)](http://msdn.microsoft.com/it-it/e820b6fc-faa6-4de4-836a-0466032dc190)   
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)