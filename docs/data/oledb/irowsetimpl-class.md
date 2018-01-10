---
title: Classe IRowsetImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: IRowsetImpl
dev_langs: C++
helpviewer_keywords: IRowsetImpl class
ms.assetid: 6a9189af-7556-45b1-adcb-9d62bb36704c
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7b4d8dd6f6dced2b4847939b0d7ed560f1d59479
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetimpl-class"></a>Classe IRowsetImpl
Fornisce un'implementazione dell'interfaccia `IRowset`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   class T,   
   class RowsetInterface,  
   class RowClass = CSimpleRow,  
   class MapClass = CAtlMap <  
      RowClass::KeyType,  
      RowClass*   
   >  
>  
class ATL_NO_VTABLE IRowsetImpl : public RowsetInterface  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IRowsetImpl`.  
  
 `RowsetInterface`  
 Una classe derivata da `IRowsetImpl`.  
  
 `RowClass`  
 Unità di archiviazione per il **HROW**.  
  
 `MapClass`  
 Unità di archiviazione per tutti gli handle di riga mantenuti dal provider.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|  
|[CreateRow](../../data/oledb/irowsetimpl-createrow.md)|Chiamato da [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) per allocare un nuovo **HROW**. Non è chiamato direttamente dall'utente.|  
|[GetData](../../data/oledb/irowsetimpl-getdata.md)|Recupera dati da una copia del set di righe della riga.|  
|[GetDBStatus](../../data/oledb/irowsetimpl-getdbstatus.md)|Restituisce lo stato per il campo specificato.|  
|[GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md)|Recupera le righe in sequenza, memorizzando la posizione precedente.|  
|[IRowsetImpl](../../data/oledb/irowsetimpl-class.md)|Costruttore. Non è chiamato direttamente dall'utente.|  
|[RefRows](../../data/oledb/irowsetimpl-refrows.md)|Chiamato da [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) e [ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md). Non è chiamato direttamente dall'utente.|  
|[ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md)|Rilascia le righe.|  
|[Esecuzione di RestartPosition](../../data/oledb/irowsetimpl-restartposition.md)|Riposiziona posizione del recupero successivo per la posizione iniziale. vale a dire la posizione quando il set di righe è stato inizialmente creato.|  
|[SetDBStatus](../../data/oledb/irowsetimpl-setdbstatus.md)|Imposta i flag di stato per il campo specificato.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_bCanFetchBack](../../data/oledb/irowsetimpl-m-bcanfetchback.md)|Indica se un provider supporta il recupero di massa con le versioni precedenti.|  
|[m_bCanScrollBack](../../data/oledb/irowsetimpl-m-bcanscrollback.md)|Indica se un provider può disporre di scorrere il cursore con le versioni precedenti.|  
|[m_bReset](../../data/oledb/irowsetimpl-m-breset.md)|Indica se un provider ha reimpostato la posizione del cursore. Questo ha un significato speciale quando lo scorrimento all'indietro o il recupero di massa con le versioni precedenti in [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md).|  
|[m_iRowset](../../data/oledb/irowsetimpl-m-irowset.md)|Un indice al set di righe, che rappresenta il cursore.|  
|[m_rgRowHandles](../../data/oledb/irowsetimpl-m-rgrowhandles.md)|Un elenco di handle di riga.|  
  
## <a name="remarks"></a>Note  
 [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) è l'interfaccia di base del set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)