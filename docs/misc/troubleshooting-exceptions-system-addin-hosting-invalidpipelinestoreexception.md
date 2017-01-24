---
title: "Risoluzione dei problemi relativi alle eccezioni: System.AddIn.Hosting.InvalidPipelineStoreException | Microsoft Docs"
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
  - "InvalidPipelineStoreException (eccezione)"
  - "System.AddIn.Hosting.InvalidPipelineStoreException (eccezione)"
ms.assetid: d12556bc-5cfd-481c-a27b-46ee2571e646
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.AddIn.Hosting.InvalidPipelineStoreException
Quando la ricerca di una directory ha esito negativo e l'utente non è autorizzato ad accedere al percorso radice della pipeline o a un percorso del componente aggiuntivo, viene generata un'eccezione <xref:System.AddIn.Hosting.InvalidPipelineStoreException>.  
  
## Note  
 A differenza dell'eccezione <xref:System.IO.DirectoryNotFoundException>, questa eccezione non fornisce alcuna informazione sul percorso. Ciò impedisce a un utente malintenzionato di specificare intenzionalmente percorsi errati e di utilizzare le informazioni restituite dall'eccezione per determinare i percorsi effettivi.  
  
 L'eccezione viene generata dai metodi di individuazione seguenti che compilano e aggiornano l'archivio contenente le informazioni sui componenti aggiuntivi e sulla pipeline: <xref:System.AddIn.Hosting.AddInStore.FindAddIns%2A>,<xref:System.AddIn.Hosting.AddInStore.Rebuild%2A>, <xref:System.AddIn.Hosting.AddInStore.RebuildAddIns%2A>, <xref:System.AddIn.Hosting.AddInStore.Update%2A> e <xref:System.AddIn.Hosting.AddInStore.UpdateAddIns%2A>.  
  
## Vedere anche  
 <xref:System.AddIn.Hosting.InvalidPipelineStoreException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)