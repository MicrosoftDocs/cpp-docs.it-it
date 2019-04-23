---
title: Abilitazione e disabilitazione dei servizi OLE DB
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB services [OLE DB], enabling and disabling
- service providers [OLE DB]
ms.assetid: 445f97eb-32a8-41c2-ad26-1169f78a074f
ms.openlocfilehash: df17a55950b03d4d63dea2199e3bc19bedb8a7e3
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59028954"
---
# <a name="enabling-and-disabling-ole-db-services"></a>Abilitazione e disabilitazione dei servizi OLE DB

La gestione di componente servizio OLE DB confronta la proprietà specificata dal consumer per le proprietà supportate dal provider per determinare se singoli componenti dei servizi può essere utilizzati per soddisfare le funzionalità estese richieste dal consumer. Ad esempio, se un'applicazione richiede un cursore scorrevole e il provider supporta solo un cursore forward-only, la gestione dei componenti del servizio Usa il componente del servizio motore del cursore Client per fornire le funzionalità di scorrimento. Se l'applicazione si basa sulla funzionalità estese supportate per impostazione predefinita nei set di righe del provider e l'applicazione non imposta in modo esplicito le proprietà per richiedere che la funzionalità, la funzionalità potrebbe non sembrare che il set di righe restituito dal Client Motore del cursore. Per essere interoperativo, le applicazioni devono sempre impostare proprietà per richiedere in modo esplicito la funzionalità estesa dove necessario.

In alcuni casi, potrebbe essere necessario disabilitare singoli servizi OLE DB per l'uso con le applicazioni esistenti che fare ipotesi sulle caratteristiche di un provider. Servizi OLE DB offrono la possibilità di disabilitare singoli servizi o tutti i servizi, in modo da connessioni o per tutte le applicazioni che usano un singolo provider.

## <a name="see-also"></a>Vedere anche

[Servizi e pooling di risorse OLE DB](../../data/oledb/ole-db-resource-pooling-and-services.md)