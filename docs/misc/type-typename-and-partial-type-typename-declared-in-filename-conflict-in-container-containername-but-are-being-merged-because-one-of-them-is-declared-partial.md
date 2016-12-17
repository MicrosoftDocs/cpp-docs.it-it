---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; e il tipo parziale &#39;&lt;nometipo&gt;&#39; dichiarato in &#39;&lt;nomefile&gt;&#39; sono in conflitto nel contenitore &#39;&lt;nomecontenitore&gt;&#39;, ma vengono uniti perch&#233; uno di loro &#232; stato dichiarato parziale | Microsoft Docs"
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
  - "vbc40047"
  - "bc40047"
helpviewer_keywords: 
  - "BC40047"
ms.assetid: 05f62dd9-f97d-4893-8904-76ecd2da474c
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; e il tipo parziale &#39;&lt;nometipo&gt;&#39; dichiarato in &#39;&lt;nomefile&gt;&#39; sono in conflitto nel contenitore &#39;&lt;nomecontenitore&gt;&#39;, ma vengono uniti perch&#233; uno di loro &#232; stato dichiarato parziale
Una classe o una struttura è presente in più definizioni nello stesso tipo di contenitore e più di una definizione non è contrassegnata con `Partial`.  
  
 È necessario usare la parola chiave [Partial](../Topic/Partial%20\(Visual%20Basic\).md) in almeno una delle diverse definizioni di una classe o struttura, ma è consigliabile usarla per tutte le definizioni parziali.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40047  
  
### Per correggere l'errore  
  
-   Usare la parola chiave [Partial](../Topic/Partial%20\(Visual%20Basic\).md) in ogni definizione parziale della classe o della struttura.