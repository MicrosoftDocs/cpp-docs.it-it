---
title: Pooling di risorse in un'applicazione OLE DB
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB services [OLE DB], resource pooling
- resource pooling [OLE DB], services
- OLE DB, resource pooling
- OLE DB providers, resource pooling
ms.assetid: 2ead1bcf-bbd4-43ea-a307-bb694b992fc1
ms.openlocfilehash: 786c2b31bb93b0691d80885c86377e2afba8c1dc
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59029304"
---
# <a name="resource-pooling-in-your-ole-db-application"></a>Pooling di risorse in un'applicazione OLE DB

Per sfruttare il pooling nell'applicazione, è necessario assicurarsi che servizi OLE DB vengono richiamati tramite il recupero dell'origine dati `IDataInitialize` o `IDBPromptInitialize`. Se si usa direttamente `CoCreateInstance` per richiamare il provider in base a CLSID del provider, non vengono richiamati servizi OLE DB.

I servizi OLE DB Gestisci pool di origini dati connesse fino a un riferimento a `IDataInitialize` o `IDBPromptInitialize` viene mantenuto o, purché sia disponibile una connessione in uso. I pool vengono aggiornati automaticamente anche all'interno di un ambiente di servizi COM+ 1.0 o Internet Information Services (IIS). Se l'applicazione sfrutta il pool esterno in un ambiente di servizi COM+ 1.0 o IIS, è consigliabile mantenere un riferimento a `IDataInitialize` o `IDBPromptInitialize` o contenere almeno una connessione. Per assicurarsi che il pool non venga eliminato quando viene rilasciata l'ultima connessione dall'applicazione, mantenere il riferimento o un attimo alla connessione per la durata dell'applicazione.

Il pool da cui viene creata la connessione al momento di identificare servizi OLE DB che `Initialize` viene chiamato. Dopo la connessione viene disegnata da un pool, non può essere spostato su un altro pool. Quindi, evitare di eseguire operazioni nell'applicazione che modificano le informazioni di inizializzazione, ad esempio la chiamata `UnInitialize` o la chiamata `QueryInterface` per un'interfaccia specifica del provider prima di chiamare `Initialize`. Inoltre, le connessioni stabilite con un valore diverso da DBPROMPT_NOPROMPT dei messaggi di richiesta non sono in pool. Tuttavia, la stringa di inizializzazione recuperata da una connessione stabilita tramite cui viene richiesto è utilizzabile per stabilire le connessioni in pool aggiuntive alla stessa origine dati.

Alcuni provider è necessario stabilire una connessione separata per ogni sessione. Queste connessioni aggiuntive devono essere inserite separatamente nella transazione distribuita, se presente. OLE DB cache services e riutilizza una singola sessione per ogni origine dati, ma se l'applicazione richiede più di una sessione alla volta da una singola origine dati, il provider potrebbe finire con la creazione di connessioni aggiuntive ed eseguendo gli elenchi delle transazioni aggiuntivi che non sono in pool. È più efficiente per creare un'origine dati separata per ogni sessione in un ambiente in pool rispetto alla creazione di più sessioni da una singola origine dati.

Infine, poiché ADO esegue automaticamente l'utilizzo di OLE DB servizi, è possibile utilizzare ADO per stabilire le connessioni e la limitazione delle richieste e integrazione vengano eseguiti automaticamente.

## <a name="see-also"></a>Vedere anche

[Servizi e pooling di risorse OLE DB](../../data/oledb/ole-db-resource-pooling-and-services.md)