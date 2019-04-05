---
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
ms.openlocfilehash: fc8d2f5edf854766dcb5dcc8ed6d57a849b8f2a0
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033190"
---
# <a name="data-source-object-interfaces"></a>Interfacce dell'oggetto origine dati

Nella tabella seguente mostra le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto origine dati.

|Interfaccia|Obbligatorio?|Implementata da modelli OLE DB?|
|---------------|---------------|--------------------------------------|
|`IDBCreateSession`|Obbligatorio|Yes|
|`IDBInitialize`|Obbligatorio|Yes|
|`IDBProperties`|Obbligatorio|Yes|
|[IPersist](/windows/desktop/api/objidl/nn-objidl-ipersist)|Obbligatorio|Yes|
|[IConnectionPointContainer](/windows/desktop/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Facoltativo|No|
|`IDBDataSourceAdmin`|Facoltativo|No|
|`IDBInfo`|Facoltativo|No|
|[IPersistFile](/windows/desktop/api/objidl/nn-objidl-ipersistfile)|Facoltativo|No|
|`ISupportErrorInfo`|Facoltativo|No|

L'origine dati oggetto implementa la `IDBProperties`, `IDBInitialize`, e `IDBCreateSession` interfacce attraverso l'ereditarietà. È possibile scegliere di supportare funzionalità aggiuntive grazie all'eredità o che non eredita da una di queste classi di implementazione. Se si desidera supportare le `IDBDataSourceAdmin` interfaccia, è necessario ereditare dal `IDBDataSourceAdminImpl` classe.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
