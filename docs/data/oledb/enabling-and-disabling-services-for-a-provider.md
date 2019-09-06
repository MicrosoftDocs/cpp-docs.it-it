---
title: Abilitazione e disabilitazione dei servizi per un provider
ms.date: 07/30/2019
helpviewer_keywords:
- OLE DB services [OLE DB], enabling and disabling
- service providers [OLE DB]
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
ms.openlocfilehash: a74f8a8b099a30cf25007547e8059c77728435f9
ms.sourcegitcommit: 725e86dabe2901175ecc63261c3bf05802dddff4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2019
ms.locfileid: "70311694"
---
# <a name="enabling-and-disabling-services-for-a-provider"></a>Abilitazione e disabilitazione dei servizi per un provider

Per impostazione predefinita, i singoli servizi di OLE DB possono essere abilitati o disabilitati per tutte le applicazioni che accedono a un singolo provider. Questa operazione viene eseguita aggiungendo una voce del registro di sistema OLEDB_SERVICES sotto il CLSID del provider, con un valore DWORD che specifica i servizi da abilitare o disabilitare, come illustrato nella tabella seguente.

|Servizi predefiniti abilitati|Valore DWORD|
|------------------------------|-------------------|
|Tutti i servizi ad eccezione del cursore client e del pool|0xfffffffa|
|Tutti i servizi ad eccezione del cursore client|0xfffffffb|
|Tutti i servizi tranne il pool e l'integrazione automatica|0xfffffffc|
|Tutti i servizi eccetto il pooling|0xfffffffe|
|Tutti i servizi (impostazione predefinita)|0xFFFFFFFF|
|Nessun servizio|0x00000000|
|Nessuna aggregazione, tutti i servizi disabilitati|Nessuna voce del registro di sistema OLEDB_Services|

## <a name="see-also"></a>Vedere anche

[Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)
