---
title: "MSBuild Error MSB3117 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.HostInBrowserInvalidFrameworkVersion"
helpviewer_keywords: 
  - "MSB3117"
ms.assetid: 18aec642-6000-4626-bf75-f3547769c780
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3117
**MSB3117: l'applicazione è impostata per l'hosting nel browser, ma TargetFrameworkVersion è impostato su v2.0.**  
  
 Un'applicazione browser WPF è stata distribuita con la proprietà <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A> impostata su `True`, ma la proprietà TargetFrameworkVersion è impostata su `v2.0` o `v3.0`.  Se si utilizza questa impostazione, è necessario impostare la proprietà <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A> su un valore pari a `v3.5` o superiore.  
  
### Per correggere l'errore  
  
-   Impostare il valore della proprietà <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A> su un valore pari a `v3.5` o superiore.  
  
## Vedere anche  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A>   
 <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A>   
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [MSBuild Error MSB3116](../misc/msbuild-error-msb3116.md)   
 [MSBuild Error MSB3118](../misc/msbuild-error-msb3118.md)   
 [MSBuild Error MSB3174](../misc/msbuild-error-msb3174.md)   
 [MSBuild Error MSB3185](../misc/msbuild-error-msb3185.md)