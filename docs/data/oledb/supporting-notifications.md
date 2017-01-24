---
title: "Supporto delle notifiche | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "eventi (C++), notifiche in OLE DB"
  - "notifiche [C++], OLE DB (consumer)"
  - "OLE DB (consumer), notifiche"
  - "modelli del provider OLE DB, notifiche"
  - "provider OLE DB, notifiche"
  - "rowset, notifiche di eventi"
ms.assetid: 76e875fd-2bfd-4e4e-9f43-dbe5a3fa7382
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto delle notifiche
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Implementazione di interfacce per i punti di connessione su provider e consumer  
 Per implementare le notifiche, è necessario che la classe del provider erediti da [IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md) e [IConnectionPointContainer](../../atl/reference/iconnectionpointcontainerimpl-class.md).  
  
 `IRowsetNotifyCP` implementa il sito del provider per l'interfaccia del punto di connessione [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx).  `IRowsetNotifyCP` implementa le funzioni di trasmissione per comunicare ai listener sul punto di connessione **IID\_IRowsetNotify** le modifiche apportate al contenuto del rowset.  
  
 Tenere presente che è anche necessario implementare e registrare `IRowsetNotify` sul consumer tramite [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) in modo che il consumer possa gestire le notifiche. In questo caso,si dice che il consumer funge da sink.  Per informazioni sull'implementazione dell'interfaccia del punto di connessione sul consumer, vedere [Ricezione di notifiche](../../data/oledb/receiving-notifications.md).  
  
 È inoltre necessario che la classe contenga una mappa con la definizione della voce del punto di connessione, come illustrato di seguito:  
  
```  
BEGIN_CONNECTION_POINT_MAP  
   CONNECTIONPOINT_ENTRY (IID_IRowsetNotify)  
END_CONNECTION_POINT_MAP  
```  
  
## Aggiunta di IRowsetNotify  
 Per aggiungere `IRowsetNotify`, è necessario aggiungere `IConnectionPointContainerImpl<rowset-name>` e `IRowsetNotifyCP<rowset-name>` alla catena di ereditarietà.  
  
 Di seguito, ad esempio, è riportata la catena di ereditarietà di `RUpdateRowset` presente in [UpdatePV](http://msdn.microsoft.com/it-it/c8bed873-223c-4a7d-af55-f90138c6f38f):  
  
> [!NOTE]
>  È possibile che il codice di esempio sia diverso e più aggiornato rispetto a quello riportato di seguito.  
  
```  
///////////////////////////////////////////////////////////////////////////  
// class RUpdateRowset (in rowset.h)  
  
class RUpdateRowset :   
public CRowsetImpl< RUpdateRowset, CAgentMan, CUpdateCommand,   
         CAtlArray< CAgentMan, CAtlArray<CAgentMan> >, CSimpleRow,   
         IRowsetScrollImpl< RUpdateRowset, IRowsetScroll > >,  
      public IRowsetUpdateImpl< RUpdateRowset, CAgentMan >,  
      public IConnectionPointContainerImpl<RUpdateRowset>,  
      public IRowsetNotifyCP<RUpdateRowset>  
```  
  
### Impostazione delle voci della mappa COM  
 Sarà inoltre necessario aggiungere quanto segue alla mappa COM del rowset:  
  
```  
COM_INTERFACE_ENTRY(IConnectionPointContainer)  
COM_INTERFACE_ENTRY_IMPL(IConnectionPointContainer)  
```  
  
 Queste macro consentono agli oggetti che eseguono chiamate a `QueryInterface` per cercare il contenitore del punto di connessione, ovvero la base di `IRowsetNotify`, di trovare l'interfaccia richiesta sul provider.  Per un esempio di utilizzo dei punti di connessione, vedere l'esempio e l'esercitazione ATL POLYGON.  
  
### Impostazione delle voci della mappa dei punti di connessione  
 È inoltre necessario aggiungere una mappa dei punti di connessione  simile alla seguente:  
  
```  
BEGIN_CONNECTION_POINT_MAP(rowset-name)  
     CONNECTION_POINT_ENTRY(_uuidof(IRowsetNotify))  
END_CONNECTION_POINT_MAP()  
```  
  
 Questa mappa dei punti di connessione consente a un componente che cerca l'interfaccia `IRowsetNotify` di trovarla nel provider.  
  
### Impostazione delle proprietà  
 È inoltre necessario aggiungere le seguenti proprietà al provider.  Aggiungere solo le proprietà necessarie per le interfacce supportate.  
  
|Proprietà|Interfaccia per la quale è necessario aggiungere la proprietà|  
|---------------|-------------------------------------------------------------------|  
|**DBPROP\_IConnectionPointContainer**|Sempre|  
|**DBPROP\_NOTIFICATIONGRANULARITY**|Sempre|  
|**DBPROP\_NOTIFICATIONPHASES**|Sempre|  
|**DBPROP\_NOTIFYCOLUMNSET**|`IRowsetChange`|  
|**DBPROP\_NOTIFYROWDELETE**|`IRowsetChange`|  
|**DBPROP\_NOTIFYROWINSERT**|`IRowsetChange`|  
|**DBPROP\_NOTIFYROWSETFETCHPOSITIONCHANGE**|Sempre|  
|**DBPROP\_NOTIFYROWFIRSTCHANGE**|`IRowsetUpdate`|  
|**DBPROP\_NOTIFYROWSETRELEASE**|Sempre|  
|**DBPROP\_NOTIFYROWUNDOCHANGE**|`IRowsetUpdate`|  
|**DBPROP\_NOTIFYROWUNDODELETE**|`IRowsetUpdate`|  
|**DBPROP\_NOTIFYROWUNDOINSERT**|`IRowsetUpdate`|  
|**DBPROP\_NOTIFYROWUPDATE**|`IRowsetUpdate`|  
  
 L'implementazione per le notifiche è in gran parte già incorporata nei modelli provider OLE DB.  Grazie a una funzionalità del compilatore di Visual C\+\+ .NET, se non si aggiunge `IRowsetNotifyCP` alla catena di ereditarietà, tutto questo codice verrà rimosso dal flusso di compilazione, riducendo le dimensioni del codice.  
  
## Vedere anche  
 [Tecniche avanzate del provider](../../data/oledb/advanced-provider-techniques.md)