---
title: Classe IRowsetInfoImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IRowsetInfoImpl
- IRowsetInfoImpl
- ATL::IRowsetInfoImpl
dev_langs: C++
helpviewer_keywords: IRowsetInfoImpl class
ms.assetid: 9c654155-7727-464e-bd31-143e68391a47
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cba03cfdda0b7a55c8f4719d5340566ee5dc6050
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetinfoimpl-class"></a>Classe IRowsetInfoImpl
Fornisce un'implementazione per il [IRowsetInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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