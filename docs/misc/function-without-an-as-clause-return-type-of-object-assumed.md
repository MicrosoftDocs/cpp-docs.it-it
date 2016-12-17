---
title: "Funzione senza una clausola &#39;As&#39;. Verr&#224; utilizzato il tipo restituito Object | Microsoft Docs"
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
  - "BC42021"
  - "vbc42021"
helpviewer_keywords: 
  - "BC42021"
ms.assetid: c1efadf1-fba3-437b-a311-240c4d07d894
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Funzione senza una clausola &#39;As&#39;. Verr&#224; utilizzato il tipo restituito Object
Una routine `Function` non specifica una clausola `As`.  
  
 Una clausola `As` identifica un tipo di dati da associare a un elemento di programmazione. In un'[Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md) specifica il tipo di dati del valore che la routine `Function` restituisce al codice chiamante. Se non si include una clausola `As` nell'istruzione `Function`, il tipo di dati restituito sarà `Object`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42021  
  
### Per correggere l'errore  
  
-   Includere una clausola `As` nell'istruzione `Function` per specificare il tipo di dati restituito.  
  
## Vedere anche  
 [Routine Function](../Topic/Function%20Procedures%20\(Visual%20Basic\).md)