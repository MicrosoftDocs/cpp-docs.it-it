---
title: "Dichiarazione di variabile senza una clausola &#39;As&#39;. Verr&#224; usato il tipo Object | Microsoft Docs"
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
  - "BC42020"
  - "vbc42020"
helpviewer_keywords: 
  - "BC42020"
ms.assetid: 9422b16d-39b5-4d49-b697-608226ccafea
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Dichiarazione di variabile senza una clausola &#39;As&#39;. Verr&#224; usato il tipo Object
Una dichiarazione di variabile non specifica una clausola `As`.  
  
 Una clausola `As` identifica un tipo di dati da associare a un elemento di programmazione. In un'[Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md), specifica il tipo di dati di una o più variabili. Se non si include una clausola `As` nell'istruzione `Dim`, il tipo di dati della variabile sarà `Object`.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42020  
  
### Per correggere l'errore  
  
-   Includere una clausola `As` nell'istruzione `Dim` per specificare il tipo di dati della variabile.  
  
## Vedere anche  
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [Dichiarazione di variabili](../Topic/Variable%20Declaration%20in%20Visual%20Basic.md)