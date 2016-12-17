---
title: "Servizi e pooling di risorse OLE DB | Microsoft Docs"
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
  - "provider OLE DB, pool di risorse"
  - "OLE DB (servizi) [OLE DB]"
  - "OLE DB (servizi) [OLE DB], requisiti del provider"
  - "OLE DB, pool di risorse"
  - "pool di risorse [OLE DB], requisiti del provider"
  - "provider di servizi [OLE DB]"
ms.assetid: 360c36e2-25ae-4caf-8ee7-d4a6b6898f68
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Servizi e pooling di risorse OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per un efficace utilizzo del pooling OLE DB o di qualsiasi servizio OLE DB, è necessario che il provider supporti l'aggregazione per tutti gli oggetti.  Si tratta di un requisito di tutti i provider OLE DB versione 1.5 o successiva  ed è indispensabile per l'utilizzo dei servizi.  Se i provider non supportano l'aggregazione, non sarà possibile eseguire il pooling e non verrà fornito alcun servizio aggiuntivo.  
  
 Per l'esecuzione del pooling, è necessario che i provider supportino il modello di threading Free.  Il pool di risorse determina il modello di threading del provider in base alla proprietà **DBPROP\_THREADMODEL**.  
  
 Se il provider presenta uno stato di connessione globale che può variare mentre l'origine dati è in uno stato inizializzato, è opportuno che il provider supporti la nuova proprietà **DBPROP\_RESETDATASOURCE**.  Questa proprietà viene chiamata prima di riutilizzare una connessione e offre al provider l'opportunità di annullare lo stato prima del successivo utilizzo.  Se il provider non è in grado di annullare uno stato associato alla connessione, potrà restituire **DBPROPSTATUS\_NOTSETTABLE** per la proprietà e la connessione non verrà riutilizzata.  
  
 È opportuno che i provider che eseguono la connessione a un database remoto e che sono in grado di rilevare l'eventuale perdita di tale connessione supportino la proprietà **DBPROP\_CONNECTIONSTATUS**.  Questa proprietà consente ai servizi OLE DB di rilevare le connessioni interrotte e di verificare che non vengano restituite al pool.  
  
 Infine, l'integrazione automatica delle transazioni in genere non funziona se non viene implementata allo stesso livello del pooling.  È opportuno che i provider che supportano l'inserimento automatico delle transazioni supportino anche la disattivazione di tale inserimento mediante l'esposizione della proprietà **DBPROP\_INIT\_OLEDBSERVICES** e la disattivazione dell'inserimento se **DBPROPVAL\_OS\_TXNENLISTMENT** è deselezionata.  
  
## Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)