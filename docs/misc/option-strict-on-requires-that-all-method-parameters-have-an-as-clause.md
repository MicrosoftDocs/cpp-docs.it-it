---
title: "Option Strict On richiede che tutti i parametri dei metodi abbiano una clausola &#39;As&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30211"
  - "bc30211"
helpviewer_keywords: 
  - "BC30211"
ms.assetid: 855795ce-8499-4525-a1de-cbb8ba364cd7
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On richiede che tutti i parametri dei metodi abbiano una clausola &#39;As&#39;
Un metodo contiene un parametro senza una clausola `As`. Quando `Option Strict` è On, ogni variabile, proprietà, argomento di routine e funzione deve essere dichiarata con una clausola `As` per specificare il tipo di dati, ad esempio `Sub GetData(ByVal filter As String)`.  
  
 **ID errore:** BC30211  
  
### Per correggere l'errore  
  
-   Verificare che la parola chiave `As` non sia digitata in modo errato.  
  
-   Fornire una clausola `As` per la variabile dichiarata oppure usare `Option Strict` Off.  
  
## Vedere anche  
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [Sub Statement](../Topic/Sub%20Statement%20\(Visual%20Basic\).md)   
 [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md)