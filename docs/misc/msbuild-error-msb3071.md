---
title: "MSBuild Error MSB3071 | Microsoft Docs"
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
  - "MSBuild.Exec.AllDriveLettersMappedError"
helpviewer_keywords: 
  - "MSB3071"
ms.assetid: 8afbc6ec-e399-4f06-a30b-f33c87642ef7
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3071
**Tutte le lettere di unità dalla A: alla Z: sono attualmente in uso.  La directory di lavoro "\<path\>" è un percorso UNC, pertanto l'attività "Exec" necessita di una lettera di unità libera per eseguire il mapping del percorso UNC.  Prima di eseguire nuovamente il comando, disconnettere una o più risorse condivise per liberare lettere di unità o specificare una directory di lavoro locale.**  
  
 Tutte le lettere di unità da A: a Z: sono attualmente in uso.  Poiché la cartella di lavoro specificata è un percorso UNC, l'attività `Exec` richiede una lettera di unità libera per eseguire il mapping del percorso UNC.  
  
### Per correggere l'errore  
  
-   Disconnettersi da una o più risorse condivise per liberare lettere di unità.  
  
-   Specificare una cartella di lavoro locale prima di tentare di eseguire nuovamente questo comando.  
  
## Vedere anche  
 [Exec Task](../Topic/Exec%20Task.md)