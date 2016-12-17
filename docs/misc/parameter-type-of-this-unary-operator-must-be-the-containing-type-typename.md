---
title: "Il parametro di tipo dell&#39;operatore unario deve essere del tipo &#39;&lt;nometipo&gt;&#39; che lo contiene | Microsoft Docs"
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
  - "vbc33020"
  - "bc33020"
helpviewer_keywords: 
  - "BC33020"
ms.assetid: 9c2c2c5b-6f18-49d2-bd6e-e735a6bced77
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro di tipo dell&#39;operatore unario deve essere del tipo &#39;&lt;nometipo&gt;&#39; che lo contiene
La definizione di un operatore unario specifica un parametro con un tipo diverso da quello della classe o della struttura nella quale viene definito l'operatore.  
  
 Quando si definisce un operatore in una classe o struttura, è necessario che almeno uno dei parametri sia del tipo di quella classe o struttura. Nel caso di un operatore unario, è necessario che l'unico operatore sia del tipo di quella classe o struttura.  
  
 **ID errore:** BC33020  
  
### Per correggere l'errore  
  
-   Modificare il tipo di parametro nel tipo della classe o della struttura in cui viene definito l'operatore.  
  
-   Se si vuole considerare un tipo di dati come parametro e restituire un tipo di dati diverso come risultato dell'operazione, definire invece un operatore di conversione.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)