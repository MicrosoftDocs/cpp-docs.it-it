---
title: "MSBuild Error MSB3022 | Microsoft Docs"
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
  - "MSBuild.Copy.ExactlyOneTypeOfDestination"
helpviewer_keywords: 
  - "MSB3022"
ms.assetid: 74ebcced-8a56-4502-8fef-43d36c79a640
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3022
**Nel file di progetto è stato specificato sia "'\<attributo\>"' che "'\<attributo\>"' come parametro di input.  Scegliere uno dei valori.**  
  
 Per l'attività `Copy` è necessario specificare l'attributo `DestinationFiles` o `DestinationDirectory`, non entrambi.  
  
### Per correggere l'errore  
  
-   Specificare `DestinationFiles` o `DestinationDirectory` per l'attività `Copy` del file di progetto.  
  
## Vedere anche  
 [Copy Task](../Topic/Copy%20Task.md)   
 [Tasks](../Topic/MSBuild%20Tasks.md)