---
title: "Option Strict On richiede che tutte le dichiarazioni di variabili abbiano una clausola &#39;As&#39; | Microsoft Docs"
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
  - "bc30209"
  - "vbc30209"
helpviewer_keywords: 
  - "BC30209"
ms.assetid: 69c2e32a-86aa-4075-a142-440605a7063a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On richiede che tutte le dichiarazioni di variabili abbiano una clausola &#39;As&#39;
Una dichiarazione contiene una variabile dichiarata senza una clausola `As`. Quando `Option Strict` è `On`, ogni variabile, proprietà, argomento di routine e funzione deve essere dichiarata con una clausola `As` per specificare il tipo di dati, ad esempio `Dim MyNum As Short`.  
  
 **ID errore:** BC30209  
  
### Per correggere l'errore  
  
1.  Verificare che la parola chiave `As` non sia digitata in modo errato.  
  
2.  Fornire una clausola `As` per la variabile dichiarata oppure usare `Option Strict Off`.  
  
## Vedere anche  
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Dichiarazione di variabili](../Topic/Variable%20Declaration%20in%20Visual%20Basic.md)