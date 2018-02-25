---
title: Abilitazione e disabilitazione dei servizi OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB services [OLE DB], enabling and disabling
- service providers [OLE DB]
ms.assetid: 445f97eb-32a8-41c2-ad26-1169f78a074f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dd98513201ef13f62a6eaf4a8ead90375df0f5ee
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="enabling-and-disabling-ole-db-services"></a>Abilitazione e disabilitazione dei servizi OLE DB
La gestione di componente servizio OLE DB vengono confrontate le proprietà specificate dal consumer con quelle supportate dal provider per determinare se i singoli componenti dei servizi può essere richiamati per soddisfare le funzionalità estese richieste dal consumer. Ad esempio, se un'applicazione richiede un cursore scorrevole e il provider supporta solo un cursore forward-only, Gestione componenti del servizio richiama il componente del servizio Client Cursor Engine per fornire le funzionalità di scorrimento. Se l'applicazione si basa sulla funzionalità estese supportate per impostazione predefinita nei set di righe del provider e l'applicazione non imposta in modo esplicito le proprietà per richiedere che le funzionalità, la funzionalità potrebbe non compaiono nei set di righe restituito dal Client Motore del cursore. Per garantire l'interoperabilità, le applicazioni devono sempre impostare proprietà per richiedere in modo esplicito la funzionalità estesa dove necessario.  
  
 In alcuni casi, potrebbe essere necessario disabilitare singoli servizi OLE DB per funzionare bene con applicazioni esistenti che basarsi su presupposti sulle caratteristiche di un provider. Servizi OLE DB offrono la possibilità di disabilitare singoli servizi o tutti i servizi, in modo da connessioni o per tutte le applicazioni utilizzando un unico provider.  
  
## <a name="see-also"></a>Vedere anche  
 [Servizi e pooling di risorse OLE DB](../../data/oledb/ole-db-resource-pooling-and-services.md)