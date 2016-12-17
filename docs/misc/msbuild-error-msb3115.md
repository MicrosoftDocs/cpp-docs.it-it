---
title: "MSBuild Error MSB3115 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MSBuild.GenerateManifest.InvalidEntryPoint"
helpviewer_keywords: 
  - "MSB3115"
ms.assetid: 7d9d4156-fd6a-455a-8a3d-b191485f1294
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3115
**MSB3115: il file '\<file\>' non è un punto di ingresso valido.**  
  
 Questo errore viene generato quando un manifesto specifica un punto di ingresso non valido.  
  
### Per correggere l'errore  
  
-   Assicurarsi di specificare dei punti di ingresso validi nei manifesti.  Per un manifesto di applicazione, un punto di ingresso valido è un file exe.  Per un manifesto di distribuzione, un punto di ingresso valido è un manifesto di applicazione.