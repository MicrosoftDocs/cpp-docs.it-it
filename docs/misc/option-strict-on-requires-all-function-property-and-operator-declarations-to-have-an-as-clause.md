---
title: "Option Strict On richiede che tutte le dichiarazioni di funzioni, di propriet&#224; e di operatori abbiano una clausola &#39;As&#39; | Microsoft Docs"
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
  - "vbc30210"
  - "bc30210"
helpviewer_keywords: 
  - "BC30210"
ms.assetid: 4d217e56-0eac-4834-bcad-234a69809390
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On richiede che tutte le dichiarazioni di funzioni, di propriet&#224; e di operatori abbiano una clausola &#39;As&#39;
Una dichiarazione contiene una proprietà dichiarata o un valore restituito da una funzione senza una clausola `As`. Quando `Option Strict` è `On`, ogni variabile, proprietà, argomento di routine e funzione deve essere dichiarata con una clausola `As` per specificare il tipo di dati, ad esempio `Dim MyNum As Short`.  
  
 **ID errore:** BC30210  
  
### Per correggere l'errore  
  
1.  Verificare che la parola chiave `As` non sia digitata in modo errato.  
  
2.  Fornire una clausola `As` per la proprietà dichiarata o il valore restituito dalla funzione oppure attivare `Option Strict Off`.  
  
## Vedere anche  
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [Routine Function](../Topic/Function%20Procedures%20\(Visual%20Basic\).md)