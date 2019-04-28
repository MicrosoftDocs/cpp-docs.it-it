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
ms.openlocfilehash: b35c1d3d6ff7d5d74493e843575f7448c4df8d8f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62283824"
---
# <a name="receiving-notifications"></a>Ricezione di notifiche

OLE DB fornisce interfacce per la ricezione di notifiche quando si verificano eventi. Questi elementi sono descritti [OLE DB oggetto Notifications](/previous-versions/windows/desktop/ms725406(v=vs.85)) nel **riferimento per programmatori OLE DB**. Il programma di installazione di questi eventi Usa il meccanismo di punto di connessione COM standard. Ad esempio, un oggetto ATL che desidera recuperare gli eventi tramite `IRowsetNotify` implementa la `IRowsetNotify` interfaccia aggiungendo `IRowsetNotify` per l'elenco derivato dalla classe ed esponendolo attraverso una macro COM_INTERFACE_ENTRY.

`IRowsetNotify` dispone di tre metodi, che possono essere chiamati in momenti diversi. Se si desidera rispondere solo a uno di questi metodi, è possibile usare la [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) (classe), che restituisce E_NOTIMPL per i metodi non si è interessati.

Quando si crea il set di righe, è necessario indicare al provider che si desidera che l'oggetto set di righe restituito per supportare `IConnectionPointContainer`, che è necessario configurare la notifica.

Il codice seguente viene illustrato come aprire il set di righe da un oggetto ATL e usare il `AtlAdvise` funzione per impostare il sink di notifica. `AtlAdvise` Restituisce un cookie che viene usato quando chiama `AtlUnadvise`.

```cpp
CDBPropSet propset(DBPROPSET_ROWSET);
propset.AddProperty(DBPROP_IConnectionPointContainer, true);
```

Quindi, usato nel codice seguente:

```cpp
product.Open(session, _T("Products"), &propset);

AtlAdvise(product.m_spRowset, GetUnknown(), IID_IRowsetNotify, &m_dwCookie);
```

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)