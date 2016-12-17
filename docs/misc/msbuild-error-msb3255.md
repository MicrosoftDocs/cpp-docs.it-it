---
title: "Errore MSB3255 di MSBuild | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "MSB3255"
ms.assetid: baac844e-a662-4421-bed1-2bc98f2e1cdf
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Errore MSB3255 di MSBuild
**MSB3255: impossibile trovare i file di sottoinsieme .NET Framework di destinazione nelle relative directory o nei percorsi specificati in InstalledAssemblySubsetTables.**  
  
 Questo errore si verifica quando viene passato un nome nella proprietà <xref:Microsoft.Build.Tasks.ResolveAssemblyReference.FullTargetFrameworkSubsetNames%2A>, ma non è possibile trovare un sottoinsieme con tale nome.  
  
 [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] è un sottoinsieme della libreria di runtime completa di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] 3.5.  Per ulteriori informazioni su [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], vedere [Profilo client .NET Framework](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
 Procedure  
  
### Per correggere l'errore  
  
-   Inserire una copia del file di sottoinsieme nella cartella di .NET Framework di destinazione o in uno dei percorsi specificati in <xref:Microsoft.Build.Tasks.ResolveAssemblyReference.InstalledAssemblySubsetTables%2A>.  
  
## Vedere anche  
 [Project Element \(MSBuild\)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)