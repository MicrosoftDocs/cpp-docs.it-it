---
title: "L&#39;evento &#39;Class_Terminate&#39; non &#232; pi&#249; supportato | Microsoft Docs"
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
  - "vbc42002"
  - "bc42002"
helpviewer_keywords: 
  - "BC42002"
ms.assetid: 11eeac74-666d-4b23-81bc-b1691290ddd0
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;evento &#39;Class_Terminate&#39; non &#232; pi&#249; supportato
L'evento 'Class\_Terminate' non è più supportato. Per liberare risorse, utilizzare 'Sub Finalize'.  
  
 L'evento `Class_Terminate` delle versioni precedenti di Visual Basic è sostituito da costruttori di classi.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42002  
  
### Per correggere l'errore  
  
-   Dichiarare una routine `Sub` denominata `Finalize` per terminare una classe.`Sub Finalize` viene chiamato quando il Garbage Collector rileva che non esistono più riferimenti attivi all'istanza.  
  
## Vedere anche  
 [Classes for Visual Basic 6.0 Users](http://msdn.microsoft.com/it-it/d625222c-cd32-4c8d-b25c-ea71729b88b7)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)   
 [NOT IN BUILD: Procedura: Implementare il modello Dispose Finalize \(Visual Basic\)](http://msdn.microsoft.com/it-it/adf7a232-4ebb-485d-8626-8d64421eb0c4)