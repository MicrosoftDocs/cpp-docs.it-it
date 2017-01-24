---
title: "MSBuild Error MSB3181 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.DuplicateTargetPath"
helpviewer_keywords: 
  - "MSB3181"
ms.assetid: 49349fc2-3fa1-470d-a5cb-6ad72b93f408
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3181
**MSB3181: due o più oggetti hanno lo stesso percorso di destinazione '\<percorso\>'.**  
  
 Questo avviso viene generato durante la generazione del manifesto di applicazione quando due o più assembly o file di riferimento condividono lo stesso percorso di destinazione.  Il percorso include il nome file e tutti questi assembly si sovrascrivono l'uno l'altro nel momento della distribuzione.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)