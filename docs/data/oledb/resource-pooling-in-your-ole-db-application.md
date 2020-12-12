---
description: "Altre informazioni su: pool di risorse nell'applicazione OLE DB"
title: Pooling di risorse in un'applicazione OLE DB
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB services [OLE DB], resource pooling
- resource pooling [OLE DB], services
- OLE DB, resource pooling
- OLE DB providers, resource pooling
ms.assetid: 2ead1bcf-bbd4-43ea-a307-bb694b992fc1
ms.openlocfilehash: 504217092f4e4a19a3db2898b97e6a35269db7ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316869"
---
# <a name="resource-pooling-in-your-ole-db-application"></a>Pooling di risorse in un'applicazione OLE DB

Per sfruttare il pool nell'applicazione, è necessario assicurarsi che i servizi OLE DB vengano richiamati ottenendo l'origine dati tramite `IDataInitialize` o `IDBPromptInitialize` . Se si utilizza direttamente `CoCreateInstance` per richiamare il provider in base al CLSID del provider, non viene richiamato alcun servizio OLE DB.

I servizi di OLE DB gestiscono i pool di origini dati connesse purché venga mantenuto o mantenuto un riferimento a o a condizione che sia `IDataInitialize` `IDBPromptInitialize` presente una connessione in uso. I pool vengono inoltre mantenuti automaticamente all'interno di un ambiente COM+ 1,0 Services o Internet Information Services (IIS). Se l'applicazione sfrutta il pool esterno a un ambiente IIS 1,0 o a servizi COM+, è necessario mantenere un riferimento a `IDataInitialize` o `IDBPromptInitialize` o tenere presente almeno una connessione. Per assicurarsi che il pool non venga eliminato definitivamente quando l'ultima connessione viene rilasciata dall'applicazione, mantenere il riferimento o attendere la connessione per la durata dell'applicazione.

I servizi OLE DB identificano il pool da cui viene disegnata la connessione al momento della `Initialize` chiamata. Quando la connessione viene disegnata da un pool, non può essere spostata in un pool diverso. Evitare quindi di eseguire operazioni nell'applicazione che modificano le informazioni di inizializzazione, ad esempio chiamando `UnInitialize` o chiamando `QueryInterface` per un'interfaccia specifica del provider prima di chiamare `Initialize` . Inoltre, le connessioni stabilite con un valore di richiesta diverso da DBPROMPT_NOPROMPT non sono in pool. Tuttavia, la stringa di inizializzazione recuperata da una connessione stabilita tramite richiesta può essere utilizzata per stabilire connessioni aggiuntive in pool alla stessa origine dati.

Alcuni provider devono effettuare una connessione separata per ogni sessione. Queste connessioni aggiuntive devono essere integrate separatamente nella transazione distribuita, se disponibile. OLE DB Services memorizza nella cache e riutilizza una singola sessione per ogni origine dati, ma se l'applicazione richiede più di una sessione alla volta da una singola origine dati, il provider potrebbe stabilire connessioni aggiuntive ed eseguire ulteriori integrazioni delle transazioni non incluse nel pool. È più efficiente creare un'origine dati distinta per ogni sessione in un ambiente in pool anziché creare più sessioni da un'unica origine dati.

Infine, poiché ADO utilizza automaticamente i servizi di OLE DB, è possibile utilizzare ADO per stabilire connessioni e il pool e l'integrazione avvengono automaticamente.

## <a name="see-also"></a>Vedi anche

[Pool di risorse OLE DB e servizi](../../data/oledb/ole-db-resource-pooling-and-services.md)
