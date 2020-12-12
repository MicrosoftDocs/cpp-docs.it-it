---
description: 'Altre informazioni su: ricezione di notifiche'
title: Ricezione di notifiche
ms.date: 10/24/2018
helpviewer_keywords:
- notifications [C++], OLE DB consumers
- receiving notifications in OLE DB
- events [C++], notifications in OLE DB
- notifications [C++], events
- OLE DB consumers, notifications
- rowsets, event notifications
- OLE DB providers, notifications
ms.assetid: 305a1103-0c87-40c8-94bc-7fbbdd52ae32
ms.openlocfilehash: 1885223a7d2b3e932cf449312eab989ecf1d2554
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316882"
---
# <a name="receiving-notifications"></a>Ricezione di notifiche

OLE DB fornisce interfacce per la ricezione di notifiche quando si verificano eventi. Queste informazioni sono descritte in [OLE DB notifiche degli oggetti](/previous-versions/windows/desktop/ms725406(v=vs.85)) nella Guida **di riferimento per i programmatori OLE DB**. L'installazione di questi eventi usa il meccanismo del punto di connessione COM standard. Ad esempio, un oggetto ATL che desidera recuperare eventi tramite `IRowsetNotify` implementa l' `IRowsetNotify` interfaccia aggiungendo `IRowsetNotify` all'elenco derivato dalla classe ed esponendolo tramite una COM_INTERFACE_ENTRY macro.

`IRowsetNotify` dispone di tre metodi, che possono essere chiamati in diversi momenti. Se si desidera rispondere solo a uno di questi metodi, è possibile utilizzare la classe [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) , che restituisce E_NOTIMPL per i metodi a cui non si è interessati.

Quando si crea il set di righe, è necessario indicare al provider che si desidera che l'oggetto set di righe restituito supporti `IConnectionPointContainer` , che è necessario per impostare la notifica.

Nel codice seguente viene illustrato come aprire il set di righe da un oggetto ATL e utilizzare la `AtlAdvise` funzione per impostare il sink di notifica. `AtlAdvise` Restituisce un cookie utilizzato quando si chiama `AtlUnadvise` .

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
propset.AddProperty(DBPROP_IConnectionPointContainer, true);
```

Quindi, usato dal codice seguente:

```cpp
product.Open(session, _T("Products"), &propset);

AtlAdvise(product.m_spRowset, GetUnknown(), IID_IRowsetNotify, &m_dwCookie);
```

## <a name="see-also"></a>Vedi anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
