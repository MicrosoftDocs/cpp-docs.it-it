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
ms.openlocfilehash: f46c6f493ae41570c75c384fcc836707faeab99f
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023750"
---
# <a name="ole-db-resource-pooling-and-services"></a>Servizi e pooling di risorse OLE DB

Per funzionare bene con pool OLE DB o con qualsiasi servizio OLE DB, il provider deve supportare l'aggregazione di tutti gli oggetti. Questo è un requisito di OLE DB versione 1.5 o successive del provider. È fondamentale per l'utilizzo dei servizi. Non è possibile raggruppare in pool di provider che non supportano l'aggregazione e non vengono forniti altri servizi.

Per inserire in un pool, i provider devono supportare il modello di threading free. Il pool di risorse determina il modello di thread del provider in base alla proprietà DBPROP_THREADMODEL.

Se i provider presenta uno stato di connessione globali che potrebbe cambiare durante l'origine dati è in uno stato inizializzato, è opportuno che la nuova proprietà DBPROP_RESETDATASOURCE. Questa proprietà viene chiamata prima una connessione viene riutilizzata e offre l'opportunità di pulire lo stato prima del successivo utilizzo il provider. Se il provider non è possibile pulire uno stato associato alla connessione, per la proprietà può restituire DBPROPSTATUS_NOTSETTABLE e non sarà possibile riutilizzare la connessione.

I provider che si connettono a un database remoto e possono rilevare se tale connessione potrebbe andare persa devono supportare la proprietà DBPROP_CONNECTIONSTATUS. Questa proprietà offre servizi OLE DB la possibilità di rilevare le connessioni interrotte e assicurarsi che non vengono restituite al pool.

Infine, inserimento automatico delle transazioni a livello generale non funziona se non viene implementato lo stesso livello del pooling. Provider che supportano l'inserimento automatico delle transazioni deve supportare la disabilitazione di questa integrazione esponendo la proprietà DBPROP_INIT_OLEDBSERVICES e la disabilitazione dell'integrazione se DBPROPVAL_OS_TXNENLISTMENT è deselezionata.

## <a name="see-also"></a>Vedere anche

[Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)