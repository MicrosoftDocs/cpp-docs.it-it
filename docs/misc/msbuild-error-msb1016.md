---
title: "MSBuild Error MSB1016 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.MissingVerbosityError"
helpviewer_keywords: 
  - "MSB1016"
ms.assetid: 967a9757-0513-48ae-bf1d-b1b019993c70
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1016
**Specificare il livello di dettaglio.**  
  
 Per l'opzione **\/verbosity** è necessario specificare un livello di dettaglio.  
  
### Per correggere l'errore  
  
1.  Specificare il livello di dettaglio nel formato `/verbosity:<level>`.  I livelli di dettaglio disponibili sono q\[uiet\], m\[inimal\], n\[ormal\], d\[etailed\] e diag\[nostic\], ad esempio `/verbosity:quiet`, `/verbosity:q` o  `/v:q`  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)