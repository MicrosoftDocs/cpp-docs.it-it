---
description: 'Altre informazioni su: supporto delle notifiche'
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
ms.openlocfilehash: 3f03ded9b900a8691c256e6cde8eaf1a2f4fb5cb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316674"
---
# <a name="supporting-notifications"></a>Supporto delle notifiche

## <a name="implementing-connection-point-interfaces-on-the-provider-and-consumer"></a>Implementazione delle interfacce dei punti di connessione sul provider e sul consumer

Per implementare le notifiche, una classe provider deve ereditare da [IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md) e [IConnectionPointContainer](../../atl/reference/iconnectionpointcontainerimpl-class.md).

`IRowsetNotifyCP` implementa il sito del provider per l'interfaccia del punto di connessione [IRowsetNotify](/previous-versions/windows/desktop/ms712959(v=vs.85)). `IRowsetNotifyCP` implementa funzioni broadcast per consigliare i listener sul punto di connessione `IID_IRowsetNotify` delle modifiche al contenuto del set di righe.

È inoltre necessario implementare e registrare `IRowsetNotify` sul consumer (noto anche come sink) utilizzando [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) , in modo che il consumer possa gestire le notifiche. Per informazioni sull'implementazione dell'interfaccia del punto di connessione sul consumer, vedere [ricezione di notifiche](../../data/oledb/receiving-notifications.md).

Inoltre, la classe deve disporre di una mappa che definisce la voce del punto di connessione, come indicato di seguito:

```cpp
BEGIN_CONNECTION_POINT_MAP
   CONNECTIONPOINT_ENTRY (IID_IRowsetNotify)
END_CONNECTION_POINT_MAP
```

## <a name="adding-irowsetnotify"></a>Aggiunta di IRowsetNotify

Per aggiungere `IRowsetNotify` , è necessario aggiungere `IConnectionPointContainerImpl<rowset-name>` e `IRowsetNotifyCP<rowset-name>` alla catena di ereditarietà.

Ad esempio, di seguito è illustrata la catena di ereditarietà per `RUpdateRowset` in [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV):

> [!NOTE]
> Il codice di esempio può essere diverso da quello riportato di seguito. Considerare il codice di esempio come la versione più aggiornata.

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

### <a name="setting-com-map-entries"></a>Impostazione delle voci della mappa COM

È anche necessario aggiungere quanto segue alla mappa COM nel set di righe:

```cpp
COM_INTERFACE_ENTRY(IConnectionPointContainer)
COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)
```

Queste macro consentono a chiunque chiami `QueryInterface` per il contenitore del punto di connessione (la base di `IRowsetNotify` ) di trovare l'interfaccia richiesta nel provider. Per un esempio di come usare i punti di connessione, vedere l'esempio di POLYGON e l'esercitazione di ATL.

### <a name="setting-connection-point-map-entries"></a>Impostazione delle voci della mappa del punto di connessione

È anche necessario aggiungere una mappa di punti di connessione. Dovrebbe essere simile a:

```cpp
BEGIN_CONNECTION_POINT_MAP(rowset-name)
     CONNECTION_POINT_ENTRY(_uuidof(IRowsetNotify))
END_CONNECTION_POINT_MAP()
```

Questa mappa dei punti di connessione consente a un componente che cerca l' `IRowsetNotify` interfaccia di individuarlo nel provider.

### <a name="setting-properties"></a>Impostazione delle proprietà

È anche necessario aggiungere le proprietà seguenti al provider. È sufficiente aggiungere proprietà basate sulle interfacce supportate.

|Proprietà|Aggiungere se si supporta|
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

La maggior parte dell'implementazione per le notifiche è già incorporata nei modelli di provider OLE DB. Se non si aggiunge `IRowsetNotifyCP` alla catena di ereditarietà, il compilatore rimuove tutto il codice dal flusso di compilazione, rendendo così le dimensioni del codice più ridotte.

## <a name="see-also"></a>Vedi anche

[Tecniche avanzate per i provider](../../data/oledb/advanced-provider-techniques.md)
