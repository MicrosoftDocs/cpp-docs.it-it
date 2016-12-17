---
title: "Errore MSB3254 di MSBuild | Microsoft Docs"
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
  - "MSB3254"
ms.assetid: cb9636b2-d9b3-466d-959c-14c7c8017a78
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Errore MSB3254 di MSBuild
**MSB3254: impossibile leggere un file  passato a InstalledAssemblySubsetTables o trovato cercando nella cartella \<nome\> in TargetFrameworkDirectories. Il file \<nome\> verrà ignorato.**  
  
 Questo errore si verifica quando non è possibile leggere il file XML di [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], client.xml.  Il file è illeggibile perché è danneggiato, bloccato o per altri problemi.  
  
 [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] è un sottoinsieme della libreria di runtime completa di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] 3.5.  Per ulteriori informazioni su [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], vedere [Profilo client .NET Framework](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
 Procedure  
  
### Per correggere l'errore  
  
-   Assicurarsi di disporre di autorizzazioni complete e di accesso completo al file oppure reinstallare la libreria di runtime di [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] Redistributable per sostituire il file danneggiato.  
  
## Vedere anche  
 [Project Element \(MSBuild\)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)