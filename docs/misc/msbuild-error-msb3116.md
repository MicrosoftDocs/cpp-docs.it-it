---
title: "MSBuild Error MSB3116 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.HostInBrowserNotOnlineOnly"
helpviewer_keywords: 
  - "MSB3116"
ms.assetid: bf04c587-d0e2-4d68-bbff-da9a985ea70e
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3116
**MSB3116: l'applicazione è contrassegnata per l'hosting nel browser, ma anche per l'utilizzo sia online che offline.  Impostare l'applicazione sul solo utilizzo online.**  
  
 Quando si distribuisce un'applicazione Web browser WPF, è necessario impostare la proprietà <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A> su `True`.  Quando la proprietà <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A> è impostata su `True`, è necessario impostare la proprietà <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.DeployManifest.Install%2A> su `False` \(per rendere l'installazione disponibile solo online\).  Se l'ultima condizione non viene soddisfatta, verrà visualizzato questo messaggio di errore.  
  
### Per correggere l'errore  
  
-   Impostare la proprietà <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.DeployManifest.Install%2A> su `False`.  
  
## Vedere anche  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A>   
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.DeployManifest.Install%2A>   
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)