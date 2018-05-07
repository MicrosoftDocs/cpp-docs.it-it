---
title: OLE DB servizi e Pooling di risorse | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- resource pooling [OLE DB], provider requirements
- OLE DB, resource pooling
- service providers [OLE DB]
- OLE DB services [OLE DB], provider requirements
- OLE DB services [OLE DB]
- OLE DB providers, resource pooling
ms.assetid: 360c36e2-25ae-4caf-8ee7-d4a6b6898f68
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: ab8c5e5a3e219da7204ef1a1b4942dc70b2f2ad2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="ole-db-resource-pooling-and-services"></a>Servizi e pooling di risorse OLE DB
Per funzionare bene con pool di OLE DB, o con qualsiasi servizio OLE DB, il provider deve supportare l'aggregazione di tutti gli oggetti. Questo è un requisito di OLE DB versione 1.5 o versioni successive del provider. È fondamentale per l'utilizzo dei servizi. I provider che non supportano l'aggregazione non è possibile inserire in un pool e non servizi aggiuntivi forniti.  
  
 Per inserire in un pool, i provider devono supportare il modello di threading free. Il pool di risorse determina il modello di thread del provider in base al **DBPROP_THREADMODEL** proprietà.  
  
 Se il provider di stato di una connessione globale che potrebbe cambiare durante l'origine dati è in uno stato inizializzato, deve supportare la nuova **DBPROP_RESETDATASOURCE** proprietà. Questa proprietà viene chiamata prima che una connessione viene riutilizzata e offre l'opportunità per pulire lo stato prima del successivo utilizzo di provider. Se il provider non è in uno stato associato alla connessione, può restituire **DBPROPSTATUS_NOTSETTABLE** per la proprietà e la connessione non verrà riutilizzate.  
  
 I provider che si connettono a un database remoto e in grado di rilevare se che connessione vadano persa deve supportare il **DBPROP_CONNECTIONSTATUS** proprietà. Questa proprietà fornisce i servizi OLE DB la possibilità di rilevare le connessioni interrotte e assicurarsi che non vengano restituite al pool.  
  
 Infine, inserimento automatico nelle transazioni in genere non funziona a meno che non viene implementato allo stesso livello del pooling. Provider che supportano l'inserimento automatico nelle transazioni deve supportare la disattivazione di questa integrazione esponendo la **DBPROP_INIT_OLEDBSERVICES** proprietà e la disattivazione di inserimento, se il **DBPROPVAL_OS_ TXNENLISTMENT** è deselezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)