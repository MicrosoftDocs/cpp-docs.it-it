---
title: "MSBuild Error MSB3023 | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.Copy.NeedsDestination"
helpviewer_keywords: 
  - "MSB3023"
ms.assetid: 3505ad1e-d54f-4cb4-a299-ac03684cb391
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3023
**Nessuna destinazione specificata per la copia.  Specificare "'\<attributo\>'" o "'\<attributo\>'".**  
  
 È necessario specificare una destinazione per l'attività `Copy` utilizzando uno degli attributi `DestinationFiles`e`DestinationDirectory`.  
  
### Per correggere l'errore  
  
-   Specificare `DestinationFiles`o`DestinationDirectory`per l'attività `Copy`.  
  
## Vedere anche  
 [Copy Task](../Topic/Copy%20Task.md)   
 [Tasks](../Topic/MSBuild%20Tasks.md)