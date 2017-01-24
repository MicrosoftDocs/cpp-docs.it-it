---
title: "&#200; necessario il riferimento al modulo &#39;&lt;nomeassembly&gt;&#39; contenente l&#39;interfaccia implementata &#39;&lt;nomeinterfaccia&gt;&#39; | Microsoft Docs"
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
  - "vbc30009"
  - "bc30009"
helpviewer_keywords: 
  - "BC30009"
ms.assetid: b2dfb89d-7fde-4a8e-ba7f-fe1e59eabaca
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; necessario il riferimento al modulo &#39;&lt;nomeassembly&gt;&#39; contenente l&#39;interfaccia implementata &#39;&lt;nomeinterfaccia&gt;&#39;
È necessario il riferimento al modulo '\<nomeassembly\>' contenente l'interfaccia implementata '\<nomeinterfaccia\>'. Aggiungerne uno al progetto.  
  
 L'interfaccia viene definita in una libreria a collegamento dinamico \(DLL\) o in un assembly a cui non si fa direttamente riferimento nel progetto. Il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] richiede un riferimento per evitare ambiguità nel caso in cui l'interfaccia sia definita in più di una DLL o di un assembly.  
  
 **ID errore:** BC30009  
  
### Per correggere l'errore  
  
-   Includere il nome della DLL o dell'assembly senza riferimento nei riferimenti del progetto.  
  
## Vedere anche  
 [NIB: Riferimento a spazi dei nomi e componenti](http://msdn.microsoft.com/it-it/568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)