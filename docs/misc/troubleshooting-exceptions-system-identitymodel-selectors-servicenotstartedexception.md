---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.ServiceNotStartedException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.IdentityModel.Selectors.ServiceNotStartedException (eccezione)"
  - "ServiceNotStartedException (eccezione)"
ms.assetid: 6d34bab2-994a-4b0c-893d-19b5d7acf92d
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IdentityModel.Selectors.ServiceNotStartedException
Quando sul computer dell'utente non è stato avviato CardSpace, viene generata un'eccezione <xref:System.IdentityModel.Selectors.ServiceNotStartedException>. Se CardSpace ha tentato di avviarsi ma non vi è riuscito per una ragione qualsiasi, viene generata questa eccezione.  
  
 Controllare che il servizio CardSpace sia installato e attivato sul computer. Provare ad avviare manualmente il servizio CardSpace mediante Microsoft Management Console \(MMC\).  
  
 La versione 1 di CardSpace non supporta i file system FAT. CardSpace pertanto non si avvierà nei sistemi FAT e verrà generata questa eccezione.  
  
## Vedere anche  
 <xref:System.IdentityModel.Selectors.ServiceNotStartedException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)