---
title: "Abilitazione e disabilitazione dei servizi OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB (servizi) [OLE DB], abilitazione e disabilitazione"
  - "provider di servizi [OLE DB]"
ms.assetid: 445f97eb-32a8-41c2-ad26-1169f78a074f
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Abilitazione e disabilitazione dei servizi OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In OLE DB Service Component Manager le proprietà specificate dal consumer vengono confrontate con quelle supportate dal provider per determinare se sia possibile richiamare singoli componenti dei servizi e soddisfare le funzionalità estese richieste dal consumer.  Se ad esempio in un'applicazione è richiesto un cursore scorrevole e il provider supporta esclusivamente un cursore forward\-only, verrà richiamato il componente del servizio Client Cursor Engine per fornire le funzionalità di scorrimento.  Se nell'applicazione sono utilizzate funzionalità estese supportate nel rowset del provider per impostazione predefinita, ma non vengono impostate in modo esplicito le proprietà per la richiesta di tali funzionalità, è possibile che le funzionalità non vengano rese disponibili nel rowset restituito da Client Cursor Engine.  Per garantire l'interoperabilità è opportuno che nelle applicazioni vengano sempre impostate le proprietà per la richiesta esplicita di funzionalità estese, se necessario.  
  
 In alcuni casi può essere opportuno disabilitare singolarmente alcuni servizi OLE DB per consentire un corretto funzionamento con applicazioni esistenti in cui viene data per scontata la presenza di determinate caratteristiche di un provider.  I servizi OLE DB possono essere disabilitati singolarmente o globalmente, sia per le singole connessioni che per tutte le applicazioni che fanno uso di un dato provider.  
  
## Vedere anche  
 [Servizi e pooling di risorse OLE DB](../../data/oledb/ole-db-resource-pooling-and-services.md)