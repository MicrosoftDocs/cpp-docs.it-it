---
title: Abilitazione e disabilitazione dei servizi per un provider
ms.date: 11/04/2016
helpviewer_keywords:
- OLE DB services [OLE DB], enabling and disabling
- service providers [OLE DB]
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
ms.openlocfilehash: ca621b005dd0bad60c70298e4d49abce6fb8d1d7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665452"
---
# <a name="enabling-and-disabling-services-for-a-provider"></a>Abilitazione e disabilitazione dei servizi per un provider

I singoli servizi OLE DB possono essere abilitati o disabilitati per impostazione predefinita per tutte le applicazioni che accedono a un singolo provider. Questa operazione viene eseguita aggiungendo una voce del Registro di sistema OLEDB_SERVICES CLSID del provider, con un `DWORD` valore che specifica i servizi per abilitare o disabilitare, come illustrato nella tabella seguente.

|Servizi predefiniti abilitati|Valore della parola chiave|
|------------------------------|-------------------|
|Tutti i servizi (impostazione predefinita)|0xFFFFFFFF|
|Tutti tranne il pool e AutoEnlistment|0xFFFFFFFE|
|Tutti tranne i cursori Client|0xfffffffb|
|Tutte tranne il pool, AutoEnlistment e cursore Client|0xfffffff0|
|Nessun servizio|0x00000000|
|Nessuna aggregazione, tutti i servizi disabilitati|\<chiave mancante >|

## <a name="see-also"></a>Vedere anche

[Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)