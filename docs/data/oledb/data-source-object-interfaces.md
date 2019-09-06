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
ms.openlocfilehash: a615694a9db75cdaf3b187cf6d29248bd26ef978
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "70311837"
---
# <a name="data-source-object-interfaces"></a>Interfacce dell'oggetto origine dati

Nella tabella seguente vengono illustrate le interfacce obbligatorie e facoltative definite da OLE DB per un oggetto origine dati.

|Interfaccia|Obbligatorio?|Implementato da modelli di OLE DB?|
|---------------|---------------|--------------------------------------|
|`IDBCreateSession`|Mandatory|Sì|
|`IDBInitialize`|Mandatory|Yes|
|`IDBProperties`|Mandatory|Yes|
|[IPersist](/windows/win32/api/objidl/nn-objidl-ipersist)|Mandatory|Sì|
|[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Facoltativo|No|
|`IDBDataSourceAdmin`|Facoltativo|No|
|`IDBInfo`|Facoltativo|No|
|[IPersistFile](/windows/win32/api/objidl/nn-objidl-ipersistfile)|Facoltativo|No|
|`ISupportErrorInfo`|Facoltativo|No|

L'oggetto origine dati implementa le `IDBProperties`interfacce `IDBInitialize`, e `IDBCreateSession` tramite l'ereditarietà. È possibile scegliere di supportare funzionalità aggiuntive ereditando o non ereditando da una di queste classi di implementazione. Se si desidera supportare l' `IDBDataSourceAdmin` interfaccia, è necessario ereditare `IDBDataSourceAdminImpl` dalla classe.

## <a name="see-also"></a>Vedere anche

[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
