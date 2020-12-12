---
description: 'Altre informazioni su: interfacce oggetto transazione'
title: Interfacce dell'oggetto Transaction
ms.date: 10/24/2018
helpviewer_keywords:
- interfaces, OLE DB
- transaction object interfaces
- OLE DB, interfaces
- OLE DB providers, transaction support
- OLE DB provider templates, object interfaces
- interfaces, list of
ms.assetid: d2ce99ce-6f7a-4ff9-bc6e-acda3633d5c8
ms.openlocfilehash: bc8eec6ca5a962e825eafa12255d8a47a8a463f3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272643"
---
# <a name="transaction-object-interfaces"></a>Interfacce dell'oggetto Transaction

L'oggetto Transaction definisce un'unità di lavoro atomica su un'origine dati e determina il modo in cui tali unità di lavoro sono correlate tra loro. Questo oggetto non è supportato direttamente dai modelli di provider OLE DB, ovvero è necessario creare un oggetto personalizzato.

Nella tabella seguente vengono illustrate le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto transazione.

|Interfaccia|Necessaria?|Implementato da modelli di OLE DB?|
|---------------|---------------|--------------------------------------|
|[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Obbligatorio|No|
|[ITransaction](/previous-versions/windows/desktop/ms723053(v=vs.85))|Obbligatorio|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816(v=vs.85))|Facoltativo|No|

## <a name="see-also"></a>Vedere anche

[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
