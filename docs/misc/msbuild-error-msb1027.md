---
title: "MSBuild Error MSB1027 | Microsoft Docs"
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
  - "MSBuild.CannotAutoDisableAutoResponseFile"
helpviewer_keywords: 
  - "MSB1027"
ms.assetid: 2ef8d643-616c-4608-be76-5c2c8e18a9e7
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1027
**Impossibile specificare l'opzione \/noautoresponse nel file di risposta automatica MSBuild.rsp o in file di risposta a cui il file di risposta automatica fa riferimento.**  
  
 L'opzione **\/noautoresponse** è stata trovata nel file di risposta MSBuild.rsp o un altro file di risposta incluso nel file MSBuild.rsp.  Il file di risposta non può essere utilizzato per disattivare sé stesso.  
  
### Per correggere l'errore  
  
-   Specificare un altro file di risposta.  
  
-   Rimuovere l'opzione **\/noautoresponse** dal file di risposta MSBuild.rsp.  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)