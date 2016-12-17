---
title: "MSBuild Error MSB3174 | Microsoft Docs"
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
  - "MSBuild.GenerateManifest.InvalidValue"
helpviewer_keywords: 
  - "MSB3174"
ms.assetid: 6f9a040c-7f21-40fd-bf74-03f99f265e79
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3174
**MSB3174: Valore non valido per '\<file\>'.**  
  
 Questo errore viene generato quando nel processo di compilazione viene rilevato un problema generale durante il controllo del formato di un file manifesto.  Il messaggio di errore si riferisce al nome del file manifesto.  
  
 L'impostazione errata di uno dei parametri seguenti genera questo messaggio di errore.  Ogni parametro elencato è una proprietà di <xref:Microsoft.Build.Tasks.GenerateApplicationManifest> o <xref:Microsoft.Build.Tasks.GenerateDeploymentManifest> ad esempio <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A> o <xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.MinimumRequiredVersion%2A>.  
  
 Quando l'attività è <xref:Microsoft.Build.Tasks.GenerateApplicationManifest>, si applicano i requisiti seguenti:  
  
|Parametro|Requisiti|  
|---------------|---------------|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyName%2A>|Deve essere un nome file valido.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyVersion%2A>|Ha gli stessi requisiti del metodo <xref:System.Version.%23ctor%2A>.  Tutti gli ottetti devono essere maggiori di 0.  È necessario specificare tutti e quattro gli ottetti.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.ClrVersion%2A>|Ha gli stessi requisiti del metodo <xref:System.Version.%23ctor%2A>.  Tutti gli ottetti devono essere maggiori di 0.  È necessario specificare tutti e quattro gli ottetti.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.OSVersion%2A>|Ha gli stessi requisiti del metodo <xref:System.Version.%23ctor%2A>.  Tutti gli ottetti devono essere maggiori di 0.  È necessario specificare tutti e quattro gli ottetti.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.Platform%2A>|Deve essere **AnyCPU**, **x86**, **x64** o **Itanium**.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.ManifestType%2A>|Deve essere **Nativo** o **ClickOnce**.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.TargetCulture%2A>|Può essere una stringa vuota.  Possono essere anche impostazioni cultura non associate ad alcun paese, specificate solo dal codice della lingua minuscolo a due cifre, ad esempio "jp" per il giapponese.  In caso contrario, questo valore ha gli stessi requisiti del metodo <xref:System.Globalization.CultureInfo.%23ctor%2A>.|  
|<xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A>|Deve avere il formato v*\#*.*\#*.  Deve presentare una versione successiva a 2.0.  Una stringa vuota è accettabile.|  
  
 Quando l'attività è <xref:Microsoft.Build.Tasks.GenerateDeploymentManifest>, si applicano i requisiti seguenti:  
  
|Parametro|Requisiti|  
|---------------|---------------|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyName%2A>|Deve essere un nome file valido.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.AssemblyVersion%2A>|Ha gli stessi requisiti del metodo <xref:System.Version.%23ctor%2A>.  Tutti gli ottetti devono essere maggiori di 0.  È necessario specificare tutti e quattro gli ottetti.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.MinimumRequiredVersion%2A>|Ha gli stessi requisiti del metodo <xref:System.Version.%23ctor%2A>.  Tutti gli ottetti devono essere maggiori di 0.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.Platform%2A>|Deve essere **AnyCPU**, **x86**, **x64** o **Itanium**.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateManifestBase.TargetCulture%2A>|Può essere una stringa vuota.  Possono essere anche impostazioni cultura non associate ad alcun paese, specificate solo dal codice della lingua minuscolo a due cifre, ad esempio "jp" per il giapponese.  In caso contrario, questo valore ha gli stessi requisiti del metodo <xref:System.Globalization.CultureInfo.%23ctor%2A>.|  
|<xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.UpdateMode%2A>|Deve essere **Primo piano** o **Sfondo**.  Una stringa vuota è accettabile.|  
|<xref:Microsoft.Build.Tasks.GenerateDeploymentManifest.UpdateUnit%2A>|Deve essere **Ore**, **Giorni** o **Settimane**.  Una stringa vuota è accettabile.|  
  
## Vedere anche  
 <xref:Microsoft.Build.Tasks.Deployment.ManifestUtilities.ApplicationManifest.HostInBrowser%2A>   
 <xref:Microsoft.Build.Tasks.GenerateApplicationManifest.TargetFrameworkVersion%2A>   
 [Riferimenti dello schema di prodotti e package](../Topic/Product%20and%20Package%20Schema%20Reference.md)   
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [MSBuild Error MSB3116](../misc/msbuild-error-msb3116.md)   
 [MSBuild Error MSB3117](../misc/msbuild-error-msb3117.md)   
 [MSBuild Error MSB3118](../misc/msbuild-error-msb3118.md)   
 [MSBuild Error MSB3185](../misc/msbuild-error-msb3185.md)