---
title: "Classe CBulkRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CBulkRowset"
  - "ATL.CBulkRowset"
  - "ATL::CBulkRowset<TAccessor>"
  - "CBulkRowset"
  - "ATL.CBulkRowset<TAccessor>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CBulkRowset (classe)"
ms.assetid: c6bde426-c543-4022-a98a-9519d9e2ae59
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Classe CBulkRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le raccolte e modificare le righe per lavorare sui dati recupero di massa handle di riga con una singola chiamata.  
  
## Sintassi  
  
```  
template <class TAccessor>  
class CBulkRowset : public CRowset<TAccessor>  
```  
  
#### Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddRefRows](../../data/oledb/cbulkrowset-addrefrows.md)|Incrementa il conteggio dei riferimenti.|  
|[CBulkRowset](../../data/oledb/cbulkrowset-cbulkrowset.md)|Costruttore.|  
|[Membro](../../data/oledb/cbulkrowset-movefirst.md)|Recupera la prima riga di dati, eseguendo una nuova raccolta di massa se necessario.|  
|[MoveLast](../../data/oledb/cbulkrowset-movelast.md)|Consente di passare all'ultima riga.|  
|[MoveNext](../../data/oledb/cbulkrowset-movenext.md)|Recupera la riga successiva di dati.|  
|[Membro](../../data/oledb/cbulkrowset-moveprev.md)|Consente di passare alla riga precedente.|  
|[MoveToBookmark](../../data/oledb/cbulkrowset-movetobookmark.md)|Recupera la riga contrassegnata da un segnalibro o la riga in un offset specificato dal bookmark.|  
|[MoveToRatio](../../data/oledb/cbulkrowset-movetoratio.md)|Le raccolte di righe da una posizione frazionaria del rowset.|  
|[ReleaseRows](../../data/oledb/cbulkrowset-releaserows.md)|Imposta la riga corrente \(**m\_nCurrentRow**\) su zero e versioni tutte le righe.|  
|[SetRows](../../data/oledb/cbulkrowset-setrows.md)|Imposta il numero di handle di riga da recuperare da una chiamata.|  
  
## Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo della classe di `CBulkRowset`.  
  
 [!code-cpp[NVC_OLEDB_Consumer#1](../../data/oledb/codesnippet/CPP/cbulkrowset-class_1.cpp)]  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)