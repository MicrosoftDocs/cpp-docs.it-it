---
title: "&#200; necessario il riferimento all&#39;assembly &#39;&lt;nomeassembly&gt;&#39; contenente la definizione dell&#39;evento &#39;&lt;nomeevento&gt;&#39; | Microsoft Docs"
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
  - "vbc30005"
  - "bc30005"
helpviewer_keywords: 
  - "BC30005"
ms.assetid: 843b0b2f-0f93-41c3-8727-13a2138e8140
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; necessario il riferimento all&#39;assembly &#39;&lt;nomeassembly&gt;&#39; contenente la definizione dell&#39;evento &#39;&lt;nomeevento&gt;&#39;
È necessario il riferimento all'assembly '\<`assemblyname`\>' contenente la definizione dell'evento '\<`eventname`\>'. Aggiungerne un riferimento al progetto.  
  
 L'evento è definito in una libreria a collegamento dinamico \(DLL\) o in un assembly a cui non si fa direttamente riferimento nel progetto. Il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] richiede un riferimento per evitare ambiguità nel caso in cui l'evento venga definito in più DLL o assembly.  
  
 **ID errore:** BC30005  
  
### Per correggere l'errore  
  
-   Includere il nome della DLL o dell'assembly senza riferimento nei riferimenti del progetto.  
  
## Vedere anche  
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)