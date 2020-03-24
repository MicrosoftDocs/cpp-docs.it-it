---
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
ms.openlocfilehash: 4b630a9728770a5e35e6d6300cf465b90238350c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209788"
---
# <a name="receiving-notifications"></a>Ricezione di notifiche

OLE DB fornisce interfacce per la ricezione di notifiche quando si verificano eventi. Queste informazioni sono descritte in [OLE DB notifiche degli oggetti](/previous-versions/windows/desktop/ms725406(v=vs.85)) nella Guida **di riferimento per i programmatori OLE DB**. L'installazione di questi eventi usa il meccanismo del punto di connessione COM standard. Ad esempio, un oggetto ATL che desidera recuperare eventi tramite `IRowsetNotify` implementa l'interfaccia `IRowsetNotify` aggiungendo `IRowsetNotify` all'elenco derivato dalla classe ed esponendolo tramite una macro COM_INTERFACE_ENTRY.

`IRowsetNotify` dispone di tre metodi, che possono essere chiamati in diversi momenti. Se si desidera rispondere solo a uno di questi metodi, è possibile utilizzare la classe [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) , che restituisce E_NOTIMPL per i metodi a cui non si è interessati.

Quando si crea il set di righe, è necessario indicare al provider che si desidera che l'oggetto set di righe restituito supporti `IConnectionPointContainer`, necessario per impostare la notifica.

Nel codice seguente viene illustrato come aprire il set di righe da un oggetto ATL e utilizzare la funzione `AtlAdvise` per configurare il sink di notifica. `AtlAdvise` restituisce un cookie utilizzato quando si chiama `AtlUnadvise`.

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
propset.AddProperty(DBPROP_IConnectionPointContainer, true);
```

Quindi, usato dal codice seguente:

```cpp
product.Open(session, _T("Products"), &propset);

AtlAdvise(product.m_spRowset, GetUnknown(), IID_IRowsetNotify, &m_dwCookie);
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)
