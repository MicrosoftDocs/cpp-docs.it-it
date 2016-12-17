---
title: "Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.Persistence.InstanceNotFoundException | Microsoft Docs"
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
  - "InstanceNotFoundException (eccezione)"
  - "System.ServiceModel.Persistence.InstanceNotFoundException (eccezione)"
ms.assetid: e3905352-dff0-41d4-b970-8e1b26d85a83
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.ServiceModel.Persistence.InstanceNotFoundException
Un'eccezione <xref:System.ServiceModel.Persistence.InstanceNotFoundException> viene generata nelle circostanze seguenti:  
  
-   Viene eseguita un'operazione su un'istanza durevole del servizio contrassegnata per il completamento.  
  
-   Un provider di persistenza creato da un oggetto <xref:System.ServiceModel.Persistence.SqlPersistenceProviderFactory> tenta di bloccare, sbloccare o elaborare dati relativi allo stato non presenti nel database.  
  
## Vedere anche  
 <xref:System.ServiceModel.Persistence.InstanceNotFoundException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)