---
title: Abilitazione e disabilitazione dei servizi per un provider
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB services [OLE DB], enabling and disabling
- service providers [OLE DB]
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
ms.openlocfilehash: d91f08accf1a8be69f63d6bbcaa4c620d68c1077
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59033031"
---
# <a name="enabling-and-disabling-services-for-a-provider"></a>Abilitazione e disabilitazione dei servizi per un provider

I singoli servizi OLE DB possono essere abilitati o disabilitati per impostazione predefinita per tutte le applicazioni che accedono a un singolo provider. Questa operazione viene eseguita aggiungendo una voce del Registro di sistema OLEDB_SERVICES CLSID del provider, con un valore DWORD che specifica i servizi per abilitare o disabilitare, come illustrato nella tabella seguente.

|Servizi predefiniti abilitati|Valore della parola chiave|
|------------------------------|-------------------|
|Tutti i servizi (impostazione predefinita)|0xffffffff|
|Tutti tranne il pool e AutoEnlistment|0xFFFFFFFE|
|Tutti tranne i cursori Client|0xfffffffb|
|Tutte tranne il pool, AutoEnlistment e cursore Client|0xfffffff0|
|Nessun servizio|0x00000000|
|Nessuna aggregazione, tutti i servizi disabilitati|\<chiave mancante >|

## <a name="see-also"></a>Vedere anche

[Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)