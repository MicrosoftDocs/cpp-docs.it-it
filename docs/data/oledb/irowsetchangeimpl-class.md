---
title: Classe IRowsetChangeImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IRowsetChangeImpl
- IRowsetChangeImpl
- ATL.IRowsetChangeImpl
dev_langs:
- C++
helpviewer_keywords:
- providers, updatable
- updatable providers, immediate update
- IRowsetChangeImpl class
ms.assetid: 1e9fee15-ed9e-4387-af8f-215569beca6c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 11435cd1372147efb14aed78448d889fd60dc5a0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="irowsetchangeimpl-class"></a>Classe IRowsetChangeImpl
L'implementazione di modelli OLE DB del [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx) interfaccia nella specifica OLE DB.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <  
   class T,   
   class Storage,   
   class BaseInterface = IRowsetChange,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>>  
class ATL_NO_VTABLE IRowsetChangeImpl : public BaseInterface  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata da `IRowsetChangeImpl`.  
  
 `Storage`  
 Record utente.  
  
 `BaseInterface`  
 La classe di base per l'interfaccia, ad esempio `IRowsetChange`.  
  
 `RowClass`  
 L'unità di archiviazione per l'handle di riga.  
  
 `MapClass`  
 L'unità di archiviazione per tutti gli handle di riga mantenuti dal provider.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods-used-with-irowsetchange"></a>Metodi di interfaccia (utilizzati con IRowsetChange)  
  
|||  
|-|-|  
|[DeleteRows](../../data/oledb/irowsetchangeimpl-deleterows.md)|Elimina le righe dal set di righe.|  
|[InsertRow](../../data/oledb/irowsetchangeimpl-insertrow.md)|Inserisce una riga nel set di righe.|  
|[SetData](../../data/oledb/irowsetchangeimpl-setdata.md)|Imposta i valori dei dati in una o più colonne.|  
  
### <a name="implementation-method-callback"></a>Metodo di implementazione (Callback)  
  
|||  
|-|-|  
|[FlushData](../../data/oledb/irowsetchangeimpl-flushdata.md)|Sottoposto a override dal provider per eseguire il commit nell'archivio dati.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia è responsabile per le operazioni di scrittura immediata in un archivio dati. "Immediato" significa che quando l'utente finale (l'utente che utilizza il consumer) qualsiasi modifica, tali modifiche vengono immediatamente trasmesse ai dati di archiviarla e non può essere annullata.  
  
 `IRowsetChangeImpl` implementa OLE DB `IRowsetChange` interfaccia che consente l'aggiornamento dei valori delle colonne in righe esistenti, l'eliminazione di righe e inserendo nuove righe.  
  
 L'implementazione di modelli OLE DB supporta tutti i metodi di base (`SetData`, `InsertRow`, e `DeleteRows`).  
  
> [!IMPORTANT]
>  È consigliabile leggere la documentazione seguente prima di tentare di implementare un provider:  
  
-   [Creazione di un provider aggiornabile](../../data/oledb/creating-an-updatable-provider.md)  
  
-   Capitolo 6 il *di riferimento per programmatori OLE DB*  
  
-   Vedere anche la `RUpdateRowset` classe viene utilizzata nell'esempio UpdatePV  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)