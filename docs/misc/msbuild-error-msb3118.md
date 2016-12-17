---
title: "MSBuild Error MSB3118 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.UseApplicationTrustInvalidFrameworkVersion"
helpviewer_keywords: 
  - "MSB3118"
ms.assetid: 9bf5b430-0cfb-4da5-a7f7-04d69f20cce1
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3118
**MSB3118: l'applicazione è impostata per l'utilizzo dell'attendibilità dell'applicazione, ma TargetFrameworkVersion non è impostato su v3.5.**  
  
 Questo errore viene generato quando si imposta la proprietà <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.UseApplicationTrust%2A> su `True` e la proprietà <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A> su una versione precedente la `v3.5`, ad esempio, `v2.0`.  
  
### Per correggere l'errore  
  
-   Impostare la proprietà <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A> su `v3.5` o versione successiva.  
  
## Vedere anche  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.UseApplicationTrust%2A>   
 <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.UseApplicationTrust%2A>   
 <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A>   
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A>   
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [MSBuild Error MSB3116](../misc/msbuild-error-msb3116.md)   
 [MSBuild Error MSB3117](../misc/msbuild-error-msb3117.md)   
 [MSBuild Error MSB3119](../misc/msbuild-error-msb3119.md)   
 [MSBuild Error MSB3174](../misc/msbuild-error-msb3174.md)   
 [MSBuild Error MSB3185](../misc/msbuild-error-msb3185.md)