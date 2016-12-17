---
title: "Il tipo di parametro o il tipo restituito di questo operatore di conversione deve essere il tipo che lo contiene | Microsoft Docs"
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
  - "vbc33022"
  - "bc33022"
helpviewer_keywords: 
  - "BC33022"
ms.assetid: 55baff11-eb35-4c81-bc04-5006524ab450
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo di parametro o il tipo restituito di questo operatore di conversione deve essere il tipo che lo contiene
La definizione di un operatore di conversione specifica sia il tipo di parametro che il tipo restituito con tipi diversi da quello della classe o della struttura in cui è definito l'operatore.  
  
 Quando si definisce un operatore di conversione in una classe o una struttura, deve convertire verso o dal tipo di quella classe o struttura.  
  
 **ID errore:** BC33022  
  
### Per correggere l'errore  
  
-   Sostituire il tipo di parametro o il tipo restituito con il tipo della classe o della struttura in cui è definito l'operatore.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)