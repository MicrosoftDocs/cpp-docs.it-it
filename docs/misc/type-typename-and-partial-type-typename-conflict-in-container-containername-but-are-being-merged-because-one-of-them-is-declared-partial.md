---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; e il tipo parziale &#39;&lt;nometipo&gt;&#39; sono in conflitto nel contenitore &#39;&lt;nomecontenitore&gt;&#39;, ma vengono uniti perch&#233; uno di loro &#232; stato dichiarato parziale | Microsoft Docs"
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
  - "bc40046"
  - "vbc40046"
helpviewer_keywords: 
  - "BC40046"
ms.assetid: c243e70b-ecd5-49ef-a260-a7bb12a4a3b1
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; e il tipo parziale &#39;&lt;nometipo&gt;&#39; sono in conflitto nel contenitore &#39;&lt;nomecontenitore&gt;&#39;, ma vengono uniti perch&#233; uno di loro &#232; stato dichiarato parziale
Una classe o una struttura è presente in più definizioni nello stesso tipo di contenitore e più di una definizione non è contrassegnata con `Partial`.  
  
 È necessario usare la parola chiave [Partial](../Topic/Partial%20\(Visual%20Basic\).md) in almeno una delle diverse definizioni di una classe o struttura, ma è consigliabile usarla per tutte le definizioni parziali.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40046  
  
### Per correggere l'errore  
  
-   Usare la parola chiave [Partial](../Topic/Partial%20\(Visual%20Basic\).md) in ogni definizione parziale della classe o della struttura.  
  
## Vedere anche  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)