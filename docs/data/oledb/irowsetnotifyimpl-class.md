---
title: "Classe IRowsetNotifyImpl | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetNotifyImpl"
  - "ATL::IRowsetNotifyImpl"
  - "IRowsetNotifyImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetNotifyImpl (classe)"
ms.assetid: fbfd0cb2-38ff-4b42-899a-8de902f834b8
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe IRowsetNotifyImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa l'interfaccia e registra [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx) sul consumer \(anche noto come "il sink"\) in modo da poter gestire le notifiche.  
  
## Sintassi  
  
```  
class ATL_NO_VTABLE IRowsetNotifyImpl : public IRowsetNotify  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[OnFieldChange](../../data/oledb/irowsetnotifyimpl-onfieldchange.md)|Notifica al consumer tutte le modifiche apportate al valore di una colonna.|  
|[OnRowChange](../../data/oledb/irowsetnotifyimpl-onrowchange.md)|Notifica al consumer la prima modifica apportata a una riga o tutte le modifiche che hanno effetto sull'intera riga.|  
|[OnRowsetChange](../../data/oledb/irowsetnotifyimpl-onrowsetchange.md)|Notifica al consumer tutte le modifiche che hanno effetto sull'intero set di righe.|  
  
## Note  
 Vedere [Ricezione di notifiche](../../data/oledb/receiving-notifications.md) sull'implementazione del punto di connessione per collegare sul consumer.  
  
 `IRowsetNotifyImpl` fornisce un'implementazione fittizia per `IRowsetNotify`, con le funzioni vuote per i metodi `IRowsetNotify`, [OnFieldChange](https://msdn.microsoft.com/en-us/library/ms715961.aspx), [OnRowChange](https://msdn.microsoft.com/en-us/library/ms722694.aspx) e [OnRowsetChange](https://msdn.microsoft.com/en-us/library/ms722669.aspx).  Se si eredita dalla classe quando si implementa un'interfaccia di `IRowsetNotify`, è possibile implementare solo i metodi necessari.  È inoltre necessario fornire le implementazioni vuote per gli altri metodi manualmente.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [IRowsetNotify](https://msdn.microsoft.com/en-us/library/ms712959.aspx)   
 [Classe IRowsetNotifyCP](../../data/oledb/irowsetnotifycp-class.md)