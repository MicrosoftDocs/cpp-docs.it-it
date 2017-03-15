---
title: "Ricezione di notifiche | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "notifiche [C++], eventi"
  - "notifiche [C++], OLE DB (consumer)"
  - "OLE DB (consumer), notifiche"
  - "provider OLE DB, notifiche"
  - "ricezione di notifiche in OLE DB"
  - "rowset, notifiche di eventi"
ms.assetid: 305a1103-0c87-40c8-94bc-7fbbdd52ae32
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Ricezione di notifiche
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In OLE DB sono incluse le interfacce necessarie per ricevere notifiche in corrispondenza di determinati eventi.  Per ulteriori informazioni, vedere [OLE DB Object Notifications](https://msdn.microsoft.com/en-us/library/ms725406.aspx) in *OLE DB Programmer's Reference \(Platform SDK\)* \(informazioni in lingua inglese\).  Per la configurazione di questi eventi viene utilizzato il meccanismo dei punti di connessione COM standard.  Un oggetto ATL che, ad esempio, debba recuperare degli eventi tramite `IRowsetNotify` implementa l'interfaccia `IRowsetNotify` aggiungendo `IRowsetNotify` all'elenco derivato dalla classe ed esponendo tale interfaccia attraverso una macro **COM\_INTERFACE\_ENTRY**.  
  
 `IRowsetNotify` prevede tre metodi, che è possibile chiamare in situazioni diverse.  Se si desidera rispondere a uno solo di questi metodi, è possibile utilizzare la classe [IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md), che restituisce **E\_NOTIMPL** per i metodi non desiderati.  
  
 Quando si crea il rowset, è necessario indicare al provider che si desidera che l'oggetto rowset restituito supporti la classe **IConnectionPointContainer**, necessaria per impostare la notifica.  
  
 Nel codice riportato di seguito viene mostrato come aprire il rowset da un oggetto ATL e utilizzare la funzione `AtlAdvise` per impostare il sink di notifica.  `AtlAdvise` restituisce un cookie utilizzato per la chiamata a `AtlUnadvise`.  
  
```  
CDBPropSet propset(DBPROPSET_ROWSET);  
propset.AddProperty(DBPROP_IConnectionPointContainer, true);  
  
product.Open(session, _T("Products"), &propset);  
  
AtlAdvise(product.m_spRowset, GetUnknown(), IID_IRowsetNotify, &m_dwCookie);  
```  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)