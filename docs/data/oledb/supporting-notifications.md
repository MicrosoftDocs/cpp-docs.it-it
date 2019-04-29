---
title: Supporto delle notifiche
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [C++], OLE DB consumers
- events [C++], notifications in OLE DB
- OLE DB consumers, notifications
- rowsets, event notifications
- OLE DB provider templates, notifications
- OLE DB providers, notifications
ms.assetid: 76e875fd-2bfd-4e4e-9f43-dbe5a3fa7382
ms.openlocfilehash: 52c4313de5017b97a193be1afebc020c9896fe6a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62379090"
---
# <a name="supporting-notifications"></a>Supporto delle notifiche

## <a name="implementing-connection-point-interfaces-on-the-provider-and-consumer"></a>Implementazione di interfacce di punto di connessione sul Provider e Consumer

Per implementare le notifiche, è necessario ereditare una classe di provider [IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md) e [IConnectionPointContainer](../../atl/reference/iconnectionpointcontainerimpl-class.md).

`IRowsetNotifyCP` implementa il sito del provider per l'interfaccia del punto di connessione [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)). `IRowsetNotifyCP` implementa funzioni per comunicare ai listener nel punto di connessione di broadcast `IID_IRowsetNotify` delle modifiche al contenuto del set di righe.

È inoltre necessario implementare e registrare `IRowsetNotify` sul consumer (noto anche come sink) usando [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) in modo che il consumer può gestire le notifiche. Per informazioni sull'implementazione dell'interfaccia del punto di connessione sul consumer, vedere [ricezione di notifiche](../../data/oledb/receiving-notifications.md).

Inoltre, la classe deve avere una mappa che definisce la voce di punto di connessione, simile al seguente:

```cpp
BEGIN_CONNECTION_POINT_MAP
   CONNECTIONPOINT_ENTRY (IID_IRowsetNotify)
END_CONNECTION_POINT_MAP
```

## <a name="adding-irowsetnotify"></a>Aggiunta di IRowsetNotify

Per aggiungere `IRowsetNotify`, è necessario aggiungere `IConnectionPointContainerImpl<rowset-name>` e `IRowsetNotifyCP<rowset-name>` alla catena di ereditarietà.

Ad esempio, ecco la catena di ereditarietà per `RUpdateRowset` nelle [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV):

> [!NOTE]
> Il codice di esempio potrebbe essere diverso da quello riportato di seguito; è consigliabile considerare il codice di esempio come la versione più aggiornata.

```cpp
///////////////////////////////////////////////////////////////////////////
// class RUpdateRowset (in rowset.h)

class RUpdateRowset :
public CRowsetImpl< RUpdateRowset, CAgentMan, CUpdateCommand,
         CAtlArray< CAgentMan, CAtlArray<CAgentMan>>, CSimpleRow,
         IRowsetScrollImpl< RUpdateRowset, IRowsetScroll >>,
      public IRowsetUpdateImpl< RUpdateRowset, CAgentMan >,
      public IConnectionPointContainerImpl<RUpdateRowset>,
      public IRowsetNotifyCP<RUpdateRowset>
```

### <a name="setting-com-map-entries"></a>Impostazione delle voci di mappa COM

È anche necessario aggiungere il codice seguente alla mappa COM il set di righe:

```cpp
COM_INTERFACE_ENTRY(IConnectionPointContainer)
COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
```

Queste macro consentono a chiunque chiami `QueryInterface` per il contenitore del punto di connessione (la base di `IRowsetNotify`) per trovare l'interfaccia richiesta per il provider. Per un esempio di come usare i punti di connessione, vedere l'esempio di POLIGONO di ATL e l'esercitazione.

### <a name="setting-connection-point-map-entries"></a>Impostazione delle voci di mappa dei punti di connessione

È anche necessario aggiungere una mappa dei punti di connessione. È simile, ad esempio:

```cpp
BEGIN_CONNECTION_POINT_MAP(rowset-name)
     CONNECTION_POINT_ENTRY(_uuidof(IRowsetNotify))
END_CONNECTION_POINT_MAP()
```

Questa mappa dei punti di connessione consente a un componente cercando il `IRowsetNotify` interfaccia si trovano nel provider.

### <a name="setting-properties"></a>Impostazione delle proprietà

È anche necessario aggiungere le seguenti proprietà per il provider. È sufficiente aggiungere le proprietà in base alle interfacce supportate.

|Proprietà|Aggiungere se è supportare|
|--------------|------------------------|
|DBPROP_IConnectionPointContainer|Always|
|DBPROP_NOTIFICATIONGRANULARITY|Always|
|DBPROP_NOTIFICATIONPHASES|Always|
|DBPROP_NOTIFYCOLUMNSET|`IRowsetChange`|
|DBPROP_NOTIFYROWDELETE|`IRowsetChange`|
|DBPROP_NOTIFYROWINSERT|`IRowsetChange`|
|DBPROP_NOTIFYROWSETFETCHPOSITIONCHANGE|Always|
|DBPROP_NOTIFYROWFIRSTCHANGE|`IRowsetUpdate`|
|DBPROP_NOTIFYROWSETRELEASE|Always|
|DBPROP_NOTIFYROWUNDOCHANGE|`IRowsetUpdate`|
|DBPROP_NOTIFYROWUNDODELETE|`IRowsetUpdate`|
|DBPROP_NOTIFYROWUNDOINSERT|`IRowsetUpdate`|
|DBPROP_NOTIFYROWUPDATE|`IRowsetUpdate`|

La maggior parte dell'implementazione per le notifiche è già incorporato nei modelli di Provider OLE DB. Se non si aggiungono `IRowsetNotifyCP` alla catena di ereditarietà, il compilatore rimuove tutto il codice dal flusso di compilazione, riducendo le dimensioni del codice.

## <a name="see-also"></a>Vedere anche

[Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)