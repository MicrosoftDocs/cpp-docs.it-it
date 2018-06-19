---
title: Classe IRowsetLocateImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetLocateImpl
dev_langs:
- C++
helpviewer_keywords:
- providers, bookmarks
- IRowsetLocateImpl class
- bookmarks, OLE DB
ms.assetid: a8aa3149-7ce8-4976-a680-2da193fd3234
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: db8d0b5d81a53a71413998b39947eb71a1bd508a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33111029"
---
# <a name="irowsetlocateimpl-class"></a>Classe IRowsetLocateImpl
Implementa OLE DB [IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx) interfaccia, che recupera righe arbitrarie da un set di righe.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <  
   class T,   
   class RowsetInterface,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap < RowClass::KeyType, RowClass* >,   
   class BookmarkKeyType = LONG,   
   class BookmarkType = LONG,   
   class BookmarkMapClass = CAtlMap < RowClass::KeyType, RowClass* >>  
class ATL_NO_VTABLE IRowsetLocateImpl : public IRowsetImpl<  
       T,   
       RowsetInterface,   
       RowClass,   
       MapClass>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata da `IRowsetLocateImpl`.  
  
 `RowsetInterface`  
 Una classe derivata da `IRowsetImpl`.  
  
 `RowClass`  
 L'unità di archiviazione per il **HROW**.  
  
 `MapClass`  
 L'unità di archiviazione per tutti gli handle di riga mantenuti dal provider.  
  
 `BookmarkKeyType`  
 Il tipo del segnalibro, ad esempio un valore LONG o una stringa. I segnalibri ordinari devono avere una lunghezza di almeno due byte. (A byte singolo è riservato per OLE DB [segnalibri standard](https://msdn.microsoft.com/en-us/library/ms712954.aspx)**DBBMK_FIRST**, **DBBMK_LAST**, e **DBBMK_INVALID**.)  
  
 `BookmarkType`  
 Il meccanismo di mapping per la gestione delle relazioni nei dati segnalibro.  
  
 `BookmarkMapClass`  
 L'unità di archiviazione per tutti gli handle di riga mantenuto dal segnalibro.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[Compare](../../data/oledb/irowsetlocateimpl-compare.md)|Confronta due segnalibri.|  
|[GetRowsAt](../../data/oledb/irowsetlocateimpl-getrowsat.md)|Recupera le righe a partire dalla riga specificata da un offset da un segnalibro.|  
|[GetRowsByBookmark](../../data/oledb/irowsetlocateimpl-getrowsbybookmark.md)|Recupera le righe che soddisfano i segnalibri specificati.|  
|[hash](../../data/oledb/irowsetlocateimpl-hash.md)|Restituisce i valori per i segnalibri specificati hash.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_rgBookmarks](../../data/oledb/irowsetlocateimpl-m-rgbookmarks.md)|Matrice di segnalibri.|  
  
## <a name="remarks"></a>Note  
 `IRowsetLocateImpl` è l'implementazione di modelli OLE DB del [IRowsetLocate](https://msdn.microsoft.com/en-us/library/ms721190.aspx) interfaccia. `IRowsetLocate` viene utilizzato per recuperare le righe arbitrarie da un set di righe. Un set di righe che non implementa questa interfaccia è un `sequential` set di righe. Quando `IRowsetLocate` è presente un set di righe, colonna 0 è il segnalibro per le righe, la lettura di questa colonna otterrà il valore di un segnalibro che può essere usato per riposizionare alla stessa riga.  
  
 `IRowsetLocateImpl` viene utilizzato per implementare il supporto per segnalibro nel provider. I segnalibri sono segnaposti (indici in un set di righe) che consentono al consumer di tornare rapidamente a una riga, che consente l'accesso ai dati ad alta velocità. Il provider determina i segnalibri disponibili in modo univoco una riga. Utilizzando `IRowsetLocateImpl` metodi, è possibile confrontare i segnalibri, recupero righe di offset, fetch righe dal segnalibro e restituiscono i valori hash per i segnalibri.  
  
 Per supportare i segnalibri di OLE DB in un set di righe, assicurarsi che il set di righe erediti da questa classe.  
  
 Per informazioni sull'implementazione di supporto per segnalibro, vedere [Provider supporto dei bookmark](../../data/oledb/provider-support-for-bookmarks.md) nel *Guida per programmatori Visual C++* e [segnalibri](https://msdn.microsoft.com/en-us/library/ms709728.aspx) nel *Di riferimento per programmatori OLE DB* in Platform SDK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: Atldb. h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [IRowsetLocate:IRowset](https://msdn.microsoft.com/en-us/library/ms721190.aspx)   
 [Supporto dei bookmark nel provider](../../data/oledb/provider-support-for-bookmarks.md)   
 [Segnalibri](https://msdn.microsoft.com/en-us/library/ms709728.aspx)