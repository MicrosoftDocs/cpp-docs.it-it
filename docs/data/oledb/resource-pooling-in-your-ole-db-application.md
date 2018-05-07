---
title: Pooling di risorse in un'applicazione OLE DB | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB services [OLE DB], resource pooling
- resource pooling [OLE DB], services
- OLE DB, resource pooling
- OLE DB providers, resource pooling
ms.assetid: 2ead1bcf-bbd4-43ea-a307-bb694b992fc1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ece7ce128251f66360566c9b1965466352c4e493
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="resource-pooling-in-your-ole-db-application"></a>Pooling di risorse in un'applicazione OLE DB
Per sfruttare il pooling nell'applicazione, è necessario verificare che i servizi OLE DB vengono richiamati ottenendo l'origine dati tramite **IDataInitialize** o **IDBPromptInitialize**. Se si utilizza direttamente `CoCreateInstance` per richiamare il provider di base sul CLSID del provider, non viene richiamati alcun servizio OLE DB.  
  
 I servizi OLE DB mantengono i pool delle origini dati connesse fino a un riferimento a **IDataInitialize** o **IDBPromptInitialize** è interrotto o purché sia disponibile una connessione in uso. I pool vengono aggiornati automaticamente anche all'interno di un ambiente di servizi COM+ 1.0 o Internet Information Services (IIS). Se l'applicazione consente di sfruttare il pooling all'esterno di un ambiente di servizi COM+ 1.0 o IIS, è consigliabile mantenere un riferimento a **IDataInitialize** o **IDBPromptInitialize** o conservi almeno connessione. Per assicurarsi che il pool non venga eliminato quando l'ultima connessione viene rilasciata dall'applicazione, mantenere il riferimento o mantenere attiva la connessione per la durata dell'applicazione.  
  
 Il pool da cui è stata creata la connessione al momento di identificare i servizi OLE DB che `Initialize` viene chiamato. Dopo la connessione viene disegnata da un pool, non può essere spostato su un altro pool. Pertanto, evitare di eseguire operazioni che modificano le informazioni di inizializzazione, ad esempio la chiamata dell'applicazione `UnInitialize` o chiamare `QueryInterface` per un'interfaccia specifica del provider prima di chiamare `Initialize`. Inoltre, le connessioni stabilite con un valore di prompt diverso da **DBPROMPT_NOPROMPT** non sono in pool. Tuttavia, la stringa di inizializzazione recuperata da una connessione stabilita tramite prompt consente di stabilire connessioni in pool aggiuntive alla stessa origine dati.  
  
 Alcuni provider è necessario stabilire una connessione separata per ogni sessione. Queste connessioni aggiuntive devono essere inserite separatamente nella transazione distribuita, se presente. Servizi OLE DB vengono memorizzati nella cache e riutilizzata una sola sessione per ogni origine dati, ma se l'applicazione richiede più di una sessione alla volta da una singola origine dati, il provider potrà finire vengono stabilite le connessioni aggiuntive e l'esecuzione di inserimenti nell'elenco delle transazioni aggiuntivi che sono non è in pool. È molto più efficiente per creare un'origine dati separata per ogni sessione in un ambiente in pool rispetto alla creazione di più sessioni da una singola origine dati.  
  
 Infine, poiché ADO rende automaticamente l'utilizzo di OLE DB services, è possibile utilizzare ADO per stabilire le connessioni e il pooling e l'inserimento eseguita automaticamente.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi e pooling di risorse OLE DB](../../data/oledb/ole-db-resource-pooling-and-services.md)