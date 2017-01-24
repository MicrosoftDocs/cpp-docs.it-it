---
title: "MSBuild Error MSB3188 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.PrerequisiteNotSigned"
helpviewer_keywords: 
  - "MSB3188"
ms.assetid: 8520e960-3b31-4e25-9fce-b9092b869bd0
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3188
**MSB3188: l'assembly '\<assembly\>' deve disporre di una firma sicura per poter essere contrassegnato come un prerequisito.**  
  
 Questo errore viene generato quando un assembly prerequisito non dispone di una firma sicura.  Si applica solo ai manifesti di applicazione.  
  
### Per correggere l'errore  
  
-   Assicurarsi che tutti gli assembly utilizzati dal progetto presentino una firma sicura.