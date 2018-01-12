---
title: Abilitazione e disabilitazione dei servizi per un Provider | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- OLE DB services [OLE DB], enabling and disabling
- service providers [OLE DB]
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dc6b3d7cc8e80eaa24c2e2dd9b4e23e79dfb09f9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="enabling-and-disabling-services-for-a-provider"></a>Abilitazione e disabilitazione dei servizi per un provider
I singoli servizi OLE DB possono essere abilitati o disabilitati per impostazione predefinita per tutte le applicazioni che accedono a un unico provider. Questa operazione viene eseguita aggiungendo un **OLEDB_SERVICES** voce del Registro di sistema nel provider del CLSID, con un `DWORD` valore che specifica i servizi per abilitare o disabilitare, come illustrato nella tabella seguente.  
  
|Servizi predefiniti attivati|Valore della parola chiave|  
|------------------------------|-------------------|  
|Tutti i servizi (impostazione predefinita)|0xFFFFFFFF|  
|Tutti tranne Pooling e AutoEnlistment|0xFFFFFFFE|  
|Tutti tranne Client Cursor|0xfffffffb|  
|Tutti tranne Pooling, AutoEnlistment e posizione del cursore Client|0xfffffff0|  
|Nessun servizio|0x00000000|  
|Nessuna aggregazione, tutti i servizi disabilitati|\<chiave mancante >|  
  
## <a name="see-also"></a>Vedere anche  
 [Abilitazione e disabilitazione dei servizi OLE DB](../../data/oledb/enabling-and-disabling-ole-db-services.md)