---
title: "L&#39;operatore &#39;&lt;simbolooperatore&gt;&#39; non restituisce un valore per tutti i percorsi del codice | Microsoft Docs"
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
  - "vbc42106"
  - "bc42106"
helpviewer_keywords: 
  - "BC42106"
ms.assetid: 175b2bc9-5233-462d-97de-9d97b003cc46
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore &#39;&lt;simbolooperatore&gt;&#39; non restituisce un valore per tutti i percorsi del codice
L'operatore '\<simbolooperatore\>' non restituisce un valore in tutti i percorsi del codice. In fase di esecuzione, quando viene usato il risultato, potrebbe verificarsi un'eccezione dovuta a un riferimento Null.  
  
 Per una routine di operatore esiste almeno un possibile percorso all'interno del codice che non restituisce alcun valore.  
  
 L'unico modo per ottenere un valore da una routine di operatore consiste nell'includerla in un'[Return Statement](../Topic/Return%20Statement%20\(Visual%20Basic\).md).  
  
 Se il controllo passa all'istruzione `End Operator`, la routine di operatore restituisce il valore predefinito del tipo di dati della proprietà. Per altre informazioni, vedere la sezione relativa al comportamento in [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md).  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42106  
  
### Per correggere l'errore  
  
-   Controllare la logica del flusso di controllo e assicurarsi che tutti i percorsi possibili terminino con un'istruzione `Return`. In particolare, l'ultima istruzione che precede `End Operator` dovrebbe essere un'istruzione `Return`.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)