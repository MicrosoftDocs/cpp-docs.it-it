---
title: "MSBuild Error MSB1013 | Microsoft Docs"
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
  - "MSBuild.RepeatedResponseFileError"
helpviewer_keywords: 
  - "MSB1013"
ms.assetid: 3e85c710-99e6-4141-b058-63a144a06454
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1013
**Il file di risposta è stato specificato due volte.  È possibile specificare un file di risposta una sola volta.**  
  
 La riga di comando contiene riferimenti a più file di risposta.  Ad esempio, `msbuild @response.rsp @response.rsp`.  
  
 Questo errore può verificarsi anche se il file di risposta specificato include un riferimento a un altro file di risposta in cui è presente un riferimento al file di risposta originale.  È possibile specificare un file di risposta una sola volta in ogni compilazione.  
  
### Per correggere l'errore  
  
-   Rimuovere il riferimento doppio al file di risposta.  Ad esempio, invece di utilizzare `msbuild @response.rsp @response.rsp`, utilizzare `msbuild @response.rsp`.  
  
-   Rimuovere il riferimento al file di risposta originale dal file di risposta che lo contiene.  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)