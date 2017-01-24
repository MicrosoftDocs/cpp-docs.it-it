---
title: "L&#39;evento &#39;Class_Initialize&#39; non &#232; pi&#249; supportato | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc42001"
  - "bc42001"
helpviewer_keywords: 
  - "BC42001"
ms.assetid: 31e7c383-894e-416c-b834-3688cc340ccf
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;evento &#39;Class_Initialize&#39; non &#232; pi&#249; supportato
L'evento 'Class\_Initialize' non è più supportato. Per inizializzare una classe, utilizzare 'Sub New'.  
  
 L'evento `Class_Initialize` delle versioni precedenti di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] è sostituito da costruttori di classi.  
  
 Per impostazione predefinita, si tratta di un messaggio di avviso. Per informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC42001  
  
### Per correggere l'errore  
  
-   Dichiarare una o più routine `Sub` denominate `New` per inizializzare la classe.`Sub New` viene chiamato quando un'istanza della classe è appena creata.  
  
## Vedere anche  
 [Class\_Initialize Changes in Visual Basic](http://msdn.microsoft.com/it-it/2cd023cf-2869-4836-b08d-43822294beeb)   
 [Classes for Visual Basic 6.0 Users](http://msdn.microsoft.com/it-it/d625222c-cd32-4c8d-b25c-ea71729b88b7)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)