---
title: "MSBuild Error MSB3126 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GenerateManifest.FileAssociationsNotInstalled"
helpviewer_keywords: 
  - "MSB3126"
ms.assetid: 0c92cbb6-9100-4433-8113-f2f3a1432243
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3126
**MSB3126: l'applicazione utilizza associazioni di file ma non è contrassegnata per l'installazione.  Impossibile utilizzare associazioni di file per applicazioni non installate, come le applicazioni ospitate da Web browser.**  
  
 Questo errore si verifica quando un'applicazione è configurata per utilizzare le associazioni di file ma la modalità di installazione dell'applicazione è impostata su solo online.  Dal momento che le applicazioni solo online in genere vengono eseguite in un browser, le associazioni di file non sono disponibili.  
  
### Per correggere l'errore  
  
-   Impostare **Modalità di installazione e impostazioni** su **Applicazione disponibile anche offline dal menu Start**.  Per ulteriori informazioni, vedere [How to: Specify the ClickOnce Offline or Online Install Mode](../Topic/How%20to:%20Specify%20the%20ClickOnce%20Offline%20or%20Online%20Install%20Mode.md).  
  
## Vedere anche  
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)