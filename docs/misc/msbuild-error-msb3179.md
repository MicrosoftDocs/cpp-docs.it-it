---
title: "MSBuild Error MSB3179 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.ComImport"
helpviewer_keywords: 
  - "MSB3179"
ms.assetid: fa744f6c-e398-4e60-b4f7-455ace7e3bd2
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3179
**MSB3179: problema durante l'isolamento del riferimento COM '\<assembly\>': '\<errore\>'**  
  
 Si tratta di un messaggio di errore generico indicante un problema relativo alla generazione di voci COM regfree nel manifesto dell'applicazione \(come specificato dal parametro di attività `IsolatedComReferences`\).  La seconda parte del messaggio di errore fornisce informazioni più specifiche sulla natura del problema.  Una possibile causa di questo errore è che i componenti COM regfree non sono registrati correttamente nel computer di compilazione.  
  
### Per correggere l'errore  
  
-   Verificare che tutti i componenti COM siano registrati nel computer di compilazione.  
  
## Vedere anche  
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)