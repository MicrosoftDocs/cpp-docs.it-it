---
title: "MSBuild Error MSB3072 | Microsoft Docs"
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
  - "MSBuild.Exec.MissingCommandError"
helpviewer_keywords: 
  - "MSB3072"
ms.assetid: c8468e1c-d8c7-441c-b274-123ac856f147
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3072
**è necessario un comando per eseguire l'attività "Exec".**  
  
 L'attributo `Command` è un attributo obbligatorio per l'attività `Exec`.  
  
### Per correggere l'errore  
  
1.  Nel file di progetto specificare l'attributo `Command` per l'attività `Exec`.  
  
## Vedere anche  
 [Exec Task](../Topic/Exec%20Task.md)   
 [Tasks](../Topic/MSBuild%20Tasks.md)