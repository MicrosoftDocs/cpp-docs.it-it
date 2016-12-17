---
title: "MSBuild Error MSB3256 | Microsoft Docs"
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
  - "MSB3256"
ms.assetid: 809ccd0a-78cd-4bf5-83a8-2fb51815ea27
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3256
**MSB3256: nessun assembly letto dagli elenchi redist.  Impossibile generare l'elenco di esclusione di sottoinsiemi TargetFramework.**  
  
 Non è possibile trovare un elenco di elementi ridistribuibili \(elenco redist\).  
  
 Per generare un elenco di assembly da escludere dal sottoinsieme di .NET Framework, sono necessari due file: un "elenco redist" denominato FrameworkList.xml, contenente i nomi di elementi ridistribuibili in .NET Framework e un "elenco di bit" denominato client.xml, contenente i nomi degli elementi in .NET Framework.  Poiché la definizione del sottoinsieme richiede entrambi gli elenchi, se l'elenco redist non è presente, il sottoinsieme di .NET Framework non può essere risolto.  
  
 [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)] è un sottoinsieme della libreria di runtime completa di [!INCLUDE[net_v35_short](../misc/includes/net_v35_short_md.md)].  Per ulteriori informazioni su [!INCLUDE[net_client_v35_long](../misc/includes/net_client_v35_long_md.md)], vedere [Profilo client .NET Framework](../Topic/.NET%20Framework%20Client%20Profile.md).  
  
### Per correggere l'errore  
  
-   Fornire un elenco redist valido denominato FrameworkList.xml o scegliere come destinazione la libreria completa di [!INCLUDE[net_v35_short](../misc/includes/net_v35_short_md.md)] Redistributable.  Per informazioni su come destinare l'applicazione alla versione completa di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)], vedere [Procedura: destinare una versione di .NET Framework](../Topic/How%20to:%20Target%20a%20Version%20of%20the%20.NET%20Framework.md).  
  
## Vedere anche  
 [Target Framework and Target Platform](../Topic/MSBuild%20Target%20Framework%20and%20Target%20Platform.md)   
 [Project Element \(MSBuild\)](../Topic/Project%20Element%20\(MSBuild\).md)   
 [Additional Resources](../Topic/Additional%20MSBuild%20Resources.md)