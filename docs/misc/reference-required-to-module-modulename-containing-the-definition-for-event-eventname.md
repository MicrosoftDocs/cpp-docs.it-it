---
title: "&#200; necessario il riferimento al modulo &#39;&lt;nomemodulo&gt;&#39; contenente il tipo &#39;&lt;nomeevento&gt;&#39; | Microsoft Docs"
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
  - "vbc30006"
  - "bc30006"
helpviewer_keywords: 
  - "BC30006"
ms.assetid: 7ab80acd-b47b-4920-bb15-6a3206b984e4
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; necessario il riferimento al modulo &#39;&lt;nomemodulo&gt;&#39; contenente il tipo &#39;&lt;nomeevento&gt;&#39;
È necessario il riferimento al modulo '\<`modulename`\>' contenente il tipo '\<`eventname`\>'. Aggiungerne uno al progetto.  
  
 L'evento è definito in un modulo a cui non si fa riferimento direttamente nel progetto. Il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] richiede un riferimento per evitare ambiguità nel caso in cui l'evento venga definito in più moduli.  
  
 **ID errore:** BC30006  
  
### Per correggere l'errore  
  
-   Includere il nome del modulo senza riferimento nei riferimenti del progetto.  
  
## Vedere anche  
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)