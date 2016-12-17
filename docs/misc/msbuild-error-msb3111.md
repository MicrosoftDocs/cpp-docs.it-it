---
title: "MSBuild Error MSB3111 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.ConfigBindingRedirectsWithPartialTrust"
helpviewer_keywords: 
  - "MSB3111"
ms.assetid: f01286a1-ba27-4733-a431-35ffe9a31356
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3111
**MSB3111: l'utilizzo dei reindirizzamenti dell'associazione app.config richiede l'attendibilità totale.**  
  
 Questo avviso viene generato quando il processo di compilazione rileva che l'applicazione ha tentato di reindirizzare alcuni dei propri assembly verso un'altra versione all'interno del file app.config.  Questo procedimento non funziona per le applicazioni parzialmente attendibili.  
  
## Vedere anche  
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)