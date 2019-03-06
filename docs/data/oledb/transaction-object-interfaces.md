---
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
ms.openlocfilehash: 386fb83df9ea7a889c8bb11f550313aad0bda926
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57418893"
---
# <a name="transaction-object-interfaces"></a>Interfacce dell'oggetto Transaction

Oggetto transazione definisce un'unità atomica di lavoro su un'origine dati e determina le unità di lavoro correlazione tra loro. Questo oggetto non è supportato direttamente tramite i modelli di provider OLE DB (vale a dire, è necessario creare il proprio oggetto).

Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto di transazione.

|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|
|---------------|---------------|--------------------------------------|
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Obbligatorio|No|
|[ITransaction](/previous-versions/windows/desktop/ms723053(v=vs.85))|Obbligatorio|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816(v=vs.85))|Facoltativo|No|

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
