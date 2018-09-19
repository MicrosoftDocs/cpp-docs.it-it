---
title: Abilitazione e disabilitazione dei servizi OLE DB | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB services [OLE DB], enabling and disabling
- service providers [OLE DB]
ms.assetid: 445f97eb-32a8-41c2-ad26-1169f78a074f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 6edd507edc21d58d17435b1d31d918a965db624a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46100734"
---
# <a name="enabling-and-disabling-ole-db-services"></a>Abilitazione e disabilitazione dei servizi OLE DB

La gestione di componente servizio OLE DB confronta la proprietà specificata dal consumer con quelle supportate dal provider per determinare se è stato possibile richiamare i singoli componenti dei servizi per soddisfare estendere le funzionalità richieste dal consumer. Ad esempio, se un'applicazione richiede un cursore scorrevole e il provider supporta solo un cursore forward-only, la gestione dei componenti del servizio richiama il componente del servizio motore del cursore Client per fornire le funzionalità di scorrimento. Se l'applicazione si basa sulla funzionalità estese supportate per impostazione predefinita nei set di righe del provider e l'applicazione non imposta in modo esplicito le proprietà per richiedere che la funzionalità, la funzionalità potrebbe non sembrare che il set di righe restituito dal Client Motore del cursore. Per essere interoperativo, le applicazioni devono sempre impostare proprietà per richiedere in modo esplicito la funzionalità estesa dove necessario.  
  
In alcuni casi, potrebbe essere necessario disabilitare singoli servizi OLE DB per l'uso con le applicazioni esistenti che fare ipotesi sulle caratteristiche di un provider. Servizi OLE DB offrono la possibilità di disabilitare singoli servizi o tutti i servizi, in modo da connessioni o per tutte le applicazioni che usano un singolo provider.  
  
## <a name="see-also"></a>Vedere anche  

[Servizi e pooling di risorse OLE DB](../../data/oledb/ole-db-resource-pooling-and-services.md)