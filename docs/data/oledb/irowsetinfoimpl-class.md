---
title: Classe IRowsetInfoImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.IRowsetInfoImpl
- IRowsetInfoImpl
- ATL::IRowsetInfoImpl
dev_langs:
- C++
helpviewer_keywords:
- IRowsetInfoImpl class
ms.assetid: 9c654155-7727-464e-bd31-143e68391a47
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f9b784dbb13ff39be21ccd353d514dd244d5ae41
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="irowsetinfoimpl-class"></a>Classe IRowsetInfoImpl
Fornisce un'implementazione per il [IRowsetInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>  
class ATL_NO_VTABLE IRowsetInfoImpl :   
   public IRowsetInfo,    
   public CUtlProps<PropClass>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IRowsetInfoImpl`.  
  
 `PropClass`  
 Una classe di proprietà definibili dall'utente che per impostazione predefinita `T`.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/irowsetinfoimpl-getproperties.md)|Restituisce le impostazioni correnti di tutte le proprietà supportate dal set di righe.|  
|[GetReferencedRowset](../../data/oledb/irowsetinfoimpl-getreferencedrowset.md)|Restituisce un puntatore a interfaccia al set di righe a cui si applica un segnalibro.|  
|[GetSpecification](../../data/oledb/irowsetinfoimpl-getspecification.md)|Restituisce un puntatore a interfaccia per l'oggetto (di comando o di sessione) che ha creato questo set di righe.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria sui set di righe. Questa classe implementa le proprietà del set di righe tramite il [mapping di set di proprietà](../../data/oledb/begin-propset-map.md) definito nella classe di comando. Sebbene la classe di set di righe viene visualizzata per utilizzare la proprietà della classe di comando set, il set di righe viene fornito con la propria copia delle proprietà in fase di esecuzione, quando viene creato da un oggetto comando o sessione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** altdb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)