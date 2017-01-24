---
title: "Operatore senza clausola &#39;As&#39;. Verr&#224; usato il tipo Object | Microsoft Docs"
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
  - "vbc41005"
  - "bc41005"
helpviewer_keywords: 
  - "BC41005"
ms.assetid: 42be84ed-7aa6-4ac0-9dd4-663e90f13e09
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Operatore senza clausola &#39;As&#39;. Verr&#224; usato il tipo Object
Una routine di operatore non specifica una clausola `As`.  
  
 Una clausola `As` identifica un tipo di dati da associare a un elemento di programmazione. In un'[Operator Statement](../Topic/Operator%20Statement.md) specifica il tipo di dati del valore che la routine di operatore restituisce al codice chiamante. Se non si include una clausola `As` nell'istruzione `Operator`, il tipo di dati restituito sarà `Object`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC41005  
  
### Per correggere l'errore  
  
-   Includere una clausola `As` nell'istruzione `Operator` per specificare il tipo di dati restituito.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)