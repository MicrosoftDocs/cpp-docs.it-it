---
title: Interfacce dell'oggetto transazione | Microsoft Docs
ms.custom: ''
ms.date: 10/24/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- interfaces, OLE DB
- transaction object interfaces
- OLE DB, interfaces
- OLE DB providers, transaction support
- OLE DB provider templates, object interfaces
- interfaces, list of
ms.assetid: d2ce99ce-6f7a-4ff9-bc6e-acda3633d5c8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 33aa2c3ec99db2c2581bce827425c2dfc25bb653
ms.sourcegitcommit: 840033ddcfab51543072604ccd5656fc6d4a5d3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2018
ms.locfileid: "50216305"
---
# <a name="transaction-object-interfaces"></a>Interfacce dell'oggetto Transaction

Oggetto transazione definisce un'unità atomica di lavoro su un'origine dati e determina le unità di lavoro correlazione tra loro. Questo oggetto non è supportato direttamente tramite i modelli di provider OLE DB (vale a dire, è necessario creare il proprio oggetto).

Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto di transazione.

|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|
|---------------|---------------|--------------------------------------|
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Obbligatorio|No|
|[ITransaction](/previous-versions/windows/desktop/ms723053)|Obbligatorio|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816)|Facoltativo|No|

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
