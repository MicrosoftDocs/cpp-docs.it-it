---
title: "&#200; necessario il riferimento al modulo &#39;&lt;nomemodulo&gt;&#39; contenente la classe base &#39;&lt;classebase&gt;&#39; | Microsoft Docs"
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
  - "vbc30008"
  - "bc30008"
helpviewer_keywords: 
  - "BC30008"
ms.assetid: ec8de475-8a8b-4aa5-86c9-6fcc44dcec06
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; necessario il riferimento al modulo &#39;&lt;nomemodulo&gt;&#39; contenente la classe base &#39;&lt;classebase&gt;&#39;
È necessario il riferimento al modulo '\<nomemodulo\>' contenente la classe base '\<classebase\>'. Aggiungerne uno al progetto.  
  
 La classe è definita in un modulo a cui non si fa riferimento direttamente nel progetto. Il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] richiede un riferimento per evitare ambiguità nel caso in cui la classe venga definita in più moduli.  
  
 **ID errore:** BC30008  
  
### Per correggere l'errore  
  
-   Includere il nome del modulo senza riferimento nei riferimenti del progetto.  
  
## Vedere anche  
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)