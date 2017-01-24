---
title: "MSBuild Error MSB3185 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.NoEntryPoint"
helpviewer_keywords: 
  - "MSB3185"
ms.assetid: 032c63c5-d662-42ba-84e1-e3ccca8cee05
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3185
**MSB3185: EntryPoint non specificato per il manifesto.**  
  
 Questo errore viene generato quando un manifesto non specifica un punto di ingresso.  Questo errore può essere applicabile sia al manifesto dell'applicazione sia a quello di distribuzione.  
  
### Per correggere l'errore  
  
-   Se si utilizza l'attività GenerateApplicationManifest, assicurarsi di specificare un punto di ingresso valido o di impostare la proprietà TargetFrameworkVersion su "v3.5" oppure su una versione successiva.  Per un manifesto di applicazione, un punto di ingresso valido è un file exe.  
  
-   Se si utilizza l'attività GenerateDeploymentManifest, assicurarsi di specificare punti di ingresso validi nei manifesti.  Per un manifesto di distribuzione, un punto di ingresso valido è un manifesto di applicazione.  
  
## Vedere anche  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A>   
 <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A>   
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [Elemento \<PackageFiles\>](../Topic/%3CPackageFiles%3E%20Element%20\(Bootstrapper\).md)   
 [MSBuild Error MSB3116](../misc/msbuild-error-msb3116.md)   
 [MSBuild Error MSB3117](../misc/msbuild-error-msb3117.md)   
 [MSBuild Error MSB3118](../misc/msbuild-error-msb3118.md)   
 [MSBuild Error MSB3174](../misc/msbuild-error-msb3174.md)