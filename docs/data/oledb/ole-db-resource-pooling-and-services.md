---
title: Servizi e pooling di risorse OLE DB
ms.date: 10/29/2018
helpviewer_keywords:
- resource pooling [OLE DB], provider requirements
- OLE DB, resource pooling
- service providers [OLE DB]
- OLE DB services [OLE DB], provider requirements
- OLE DB services [OLE DB]
- OLE DB providers, resource pooling
ms.assetid: 360c36e2-25ae-4caf-8ee7-d4a6b6898f68
ms.openlocfilehash: 67eeffff2bf165a5ccbdbaa546ad5b9ca9a57914
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210028"
---
# <a name="ole-db-resource-pooling-and-services"></a>Servizi e pooling di risorse OLE DB

Per lavorare bene con OLE DB pooling o con qualsiasi servizio OLE DB, il provider deve supportare l'aggregazione di tutti gli oggetti. Si tratta di un requisito di qualsiasi provider OLE DB 1,5 o versione successiva. È fondamentale per sfruttare i servizi. Non è possibile raggruppare i provider che non supportano l'aggregazione e non viene fornito alcun servizio aggiuntivo.

Per essere in pool, i provider devono supportare il modello di thread libero. Il pool di risorse determina il modello di thread del provider in base alla proprietà DBPROP_THREADMODEL.

Se il provider ha uno stato di connessione globale che può cambiare mentre l'origine dati è in uno stato inizializzato, deve supportare la nuova proprietà DBPROP_RESETDATASOURCE. Questa proprietà viene chiamata prima che venga riutilizzata una connessione e fornisce al provider la possibilità di pulire lo stato prima del successivo utilizzo. Se il provider non è in grado di pulire alcuno stato associato alla connessione, può restituire DBPROPSTATUS_NOTSETTABLE per la proprietà e la connessione non verrà riutilizzata.

I provider che si connettono a un database remoto e possono rilevare se tale connessione potrebbe andare persa deve supportare la proprietà DBPROP_CONNECTIONSTATUS. Questa proprietà offre ai servizi OLE DB la possibilità di rilevare le connessioni inutilizzate e di assicurarsi che non vengano restituite al pool.

Infine, l'integrazione automatica delle transazioni in genere non funziona a meno che non venga implementata allo stesso livello del pool. I provider che supportano l'integrazione automatica delle transazioni devono supportare la disabilitazione di questa integrazione esponendo la proprietà DBPROP_INIT_OLEDBSERVICES e disabilitando l'integrazione se il DBPROPVAL_OS_TXNENLISTMENT è deselezionato.

## <a name="see-also"></a>Vedere anche

[Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)
