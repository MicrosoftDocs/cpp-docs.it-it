---
title: OLE DB servizi e Pooling di risorse | Microsoft Docs
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
ms.openlocfilehash: c2a04d0b990906f9f124edc9dbda71d65127e4ed
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39338561"
---
# <a name="ole-db-resource-pooling-and-services"></a>Servizi e pooling di risorse OLE DB
Per funzionare bene con pool OLE DB o con qualsiasi servizio OLE DB, il provider deve supportare l'aggregazione di tutti gli oggetti. Questo è un requisito di OLE DB versione 1.5 o successive del provider. È fondamentale per l'utilizzo dei servizi. I provider che non supportano l'aggregazione non è possibile raggruppare in pool e non vengono forniti altri servizi.  
  
 Per inserire in un pool, i provider devono supportare il modello di threading free. Il pool di risorse determina il modello di thread del provider in base al `DBPROP_THREADMODEL` proprietà.  
  
 Se i provider presenta uno stato di connessione globali che potrebbe cambiare durante l'origine dati è in uno stato inizializzato, è opportuno che il nuovo `DBPROP_RESETDATASOURCE` proprietà. Questa proprietà viene chiamata prima una connessione viene riutilizzata e offre l'opportunità di pulire lo stato prima del successivo utilizzo il provider. Se il provider non è possibile pulire uno stato associato alla connessione, può restituire `DBPROPSTATUS_NOTSETTABLE` per la proprietà e la connessione non verrà riutilizzate.  
  
 I provider che si connettono a un database remoto e in grado di rilevare se deve supportare la connessione vada persa la `DBPROP_CONNECTIONSTATUS` proprietà. Questa proprietà offre servizi OLE DB la possibilità di rilevare le connessioni interrotte e assicurarsi che non vengono restituiti al pool.  
  
 Infine, inserimento automatico delle transazioni a livello generale non funziona se non viene implementato lo stesso livello del pooling. Provider che supportano l'inserimento automatico delle transazioni deve supportare la disabilitazione di questa integrazione esponendo le `DBPROP_INIT_OLEDBSERVICES` proprietà e la disattivazione di inserimento se la `DBPROPVAL_OS_TXNENLISTMENT` viene deselezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)