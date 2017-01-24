---
title: "MSBuild Error MSB1024 | Microsoft Docs"
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
  - "MSBuild.MultipleSchemasError"
helpviewer_keywords: 
  - "MSB1024"
ms.assetid: dff30870-da1a-479f-998b-03d0f5e16088
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB1024
**È possibile specificare solo uno schema per la convalida del progetto.**  
  
 Per l'opzione **\/validate** è possibile specificare un solo schema.  
  
### Per correggere l'errore  
  
1.  Specificare un solo schema per la convalida del progetto utilizzando il formato `/validate:<schema>`, ad esempio `/validate:MyExtendedBuildSchema.xsd`  
  
## Vedere anche  
 [Command\-Line Reference](../Topic/MSBuild%20Command-Line%20Reference.md)