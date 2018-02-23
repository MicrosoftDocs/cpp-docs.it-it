---
title: CBulkRowset (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::CBulkRowset
- ATL.CBulkRowset
- ATL::CBulkRowset<TAccessor>
- CBulkRowset
- ATL.CBulkRowset<TAccessor>
dev_langs:
- C++
helpviewer_keywords:
- CBulkRowset class
ms.assetid: c6bde426-c543-4022-a98a-9519d9e2ae59
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 990178bf1a98ccd522755ce82eae229558fb7747
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="cbulkrowset-class"></a>Classe CBulkRowset
Recupera e modifica di righe su cui lavorare sui dati in blocco tramite il recupero di più handle di riga con una singola chiamata.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class TAccessor>  
class CBulkRowset : public CRowset<TAccessor>  
```  
  
#### <a name="parameters"></a>Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddRefRows](../../data/oledb/cbulkrowset-addrefrows.md)|Incrementa il conteggio dei riferimenti.|  
|[CBulkRowset](../../data/oledb/cbulkrowset-cbulkrowset.md)|Costruttore.|  
|[MoveFirst](../../data/oledb/cbulkrowset-movefirst.md)|Recupera la prima riga di dati, eseguire un recupero di massa nuovo se necessario.|  
|[MoveLast](../../data/oledb/cbulkrowset-movelast.md)|Passa all'ultima riga.|  
|[Metodo MoveNext](../../data/oledb/cbulkrowset-movenext.md)|Recupera la riga successiva di dati.|  
|[MovePrev](../../data/oledb/cbulkrowset-moveprev.md)|Passa alla riga precedente.|  
|[MoveToBookmark](../../data/oledb/cbulkrowset-movetobookmark.md)|Recupera la riga contrassegnata da un segnalibro o la riga in corrispondenza di un offset specificato dal segnalibro.|  
|[MoveToRatio](../../data/oledb/cbulkrowset-movetoratio.md)|Recupera le righe a partire da una posizione decimale nel set di righe.|  
|[ReleaseRows](../../data/oledb/cbulkrowset-releaserows.md)|Imposta la riga corrente (**m_nCurrentRow**) a zero e rilascia tutte le righe.|  
|[SetRows](../../data/oledb/cbulkrowset-setrows.md)|Imposta il numero di handle di riga per il recupero da un'unica chiamata.|  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato l'utilizzo del `CBulkRowset` classe.  
  
 [!code-cpp[NVC_OLEDB_Consumer#1](../../data/oledb/codesnippet/cpp/cbulkrowset-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)