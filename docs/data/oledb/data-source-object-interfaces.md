---
description: "Altre informazioni su: interfacce dell'oggetto origine dati"
title: Interfacce dell'oggetto origine dati
ms.date: 10/24/2018
helpviewer_keywords:
- data source objects [C++], interfaces
- data source objects [C++]
- interfaces [C++], OLE DB
- interfaces [C++], list of
- OLE DB provider templates [C++], object interfaces
- OLE DB [C++], interfaces
ms.assetid: 929e100c-c08c-4b64-8437-d8d1357226f6
ms.openlocfilehash: ecc37ca4286e288939ccd15bdcd073379c27f7c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287619"
---
# <a name="data-source-object-interfaces"></a>Interfacce dell'oggetto origine dati

Nella tabella seguente vengono illustrate le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto origine dati.

|Interfaccia|Necessaria?|Implementato da modelli di OLE DB?|
|---------------|---------------|--------------------------------------|
|`IDBCreateSession`|Obbligatorio|Sì|
|`IDBInitialize`|Obbligatorio|Sì|
|`IDBProperties`|Obbligatorio|Sì|
|[IPersist](/windows/win32/api/objidl/nn-objidl-ipersist)|Obbligatorio|Sì|
|[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Facoltativo|No|
|`IDBDataSourceAdmin`|Facoltativo|No|
|`IDBInfo`|Facoltativo|No|
|[IPersistFile](/windows/win32/api/objidl/nn-objidl-ipersistfile)|Facoltativo|No|
|`ISupportErrorInfo`|Facoltativo|No|

L'oggetto origine dati implementa le `IDBProperties` `IDBInitialize` interfacce, e `IDBCreateSession` tramite l'ereditarietà. È possibile scegliere di supportare funzionalità aggiuntive ereditando o non ereditando da una di queste classi di implementazione. Se si desidera supportare l' `IDBDataSourceAdmin` interfaccia, è necessario ereditare dalla `IDBDataSourceAdminImpl` classe.

## <a name="see-also"></a>Vedi anche

[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
