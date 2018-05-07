---
title: Ricezione di notifiche | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- notifications [C++], OLE DB consumers
- receiving notifications in OLE DB
- events [C++], notifications in OLE DB
- notifications [C++], events
- OLE DB consumers, notifications
- rowsets, event notifications
- OLE DB providers, notifications
ms.assetid: 305a1103-0c87-40c8-94bc-7fbbdd52ae32
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d9e1dee5c63281c729cdb798a190938c6433aac0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="receiving-notifications"></a>Ricezione di notifiche
OLE DB fornisce interfacce per la ricezione di notifiche quando si verificano gli eventi. Questi elementi sono descritti [OLE DB Object Notifications](https://msdn.microsoft.com/en-us/library/ms725406.aspx) nel *riferimento per programmatori OLE DB*. Il programma di installazione di questi eventi viene utilizzato il meccanismo di punto di connessione COM standard. Ad esempio, un oggetto ATL che si desidera recuperare gli eventi tramite `IRowsetNotify` implementa il `IRowsetNotify` interfaccia aggiungendo `IRowsetNotify` all'elenco derivato dalla classe ed esporlo tramite un **COM_INTERFACE_ENTRY** (macro).  
  
 `IRowsetNotify` dispone di tre metodi, che possono essere chiamati in momenti diversi. Se si desidera rispondere a uno solo di questi metodi, è possibile utilizzare il [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md) classe, che restituisce **E_NOTIMPL** per i metodi non si è interessati in.  
  
 Quando si crea il set di righe, è necessario indicare al provider che si desidera che l'oggetto set di righe restituito per supportare **IConnectionPointContainer**, che è necessario impostare la notifica.  
  
 Il codice seguente viene illustrato come aprire il set di righe da un oggetto ATL e utilizzare il `AtlAdvise` funzione per impostare il sink di notifica. `AtlAdvise` Restituisce un cookie che viene utilizzato quando si chiama `AtlUnadvise`.  
  
```  
CDBPropSet propset(DBPROPSET_ROWSET);  

propset.AddProperty(DBPROP_IConnectionPointContainer, true);  
  

product.Open(session, _T("Products"), &propset);  
  

AtlAdvise(product.m_spRowset, GetUnknown(), IID_IRowsetNotify, &m_dwCookie);  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)