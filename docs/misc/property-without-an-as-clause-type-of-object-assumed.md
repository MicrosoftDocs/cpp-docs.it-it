---
title: "Propriet&#224; senza una clausola &#39;As&#39;. Verr&#224; usato il tipo Object | Microsoft Docs"
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
  - "BC42022"
  - "vbc42022"
helpviewer_keywords: 
  - "BC42022"
ms.assetid: 3379692b-8278-4488-878a-0afb76e554b1
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Propriet&#224; senza una clausola &#39;As&#39;. Verr&#224; usato il tipo Object
Una dichiarazione di proprietà non specifica una clausola `As`.  
  
 Una clausola `As` identifica un tipo di dati da associare a un elemento di programmazione. In un'[Property Statement](../Topic/Property%20Statement.md) specifica il tipo di dati del valore che la routine `Get` della proprietà restituisce al codice chiamante. Se non si include una clausola `As` nell'istruzione `Property`, il tipo di dati della proprietà sarà `Object`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42022  
  
### Per correggere l'errore  
  
-   Includere una clausola `As` nell'istruzione `Property` per specificare il tipo di dati della proprietà.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [Property Statement](../Topic/Property%20Statement.md)   
 [Get Statement](../Topic/Get%20Statement.md)