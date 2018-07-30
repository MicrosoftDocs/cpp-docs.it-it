---
title: Classe IRowsetIdentityImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IRowsetIdentityImpl
- ATL.IRowsetIdentityImpl
- IRowsetIdentityImpl
- IsSameRow
- IRowsetIdentityImpl.IsSameRow
- ATL.IRowsetIdentityImpl.IsSameRow
- IRowsetIdentityImpl::IsSameRow
- ATL::IRowsetIdentityImpl::IsSameRow
dev_langs:
- C++
helpviewer_keywords:
- IRowsetIdentityImpl class
- IsSameRow method
ms.assetid: 56821edf-e045-40c8-96bd-231552cd5799
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 55c9b4b7e14a9572f5a8922b65a41a9a92a0d688
ms.sourcegitcommit: 889a75be1232817150be1e0e8d4d7f48f5993af2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/30/2018
ms.locfileid: "39337709"
---
# <a name="irowsetidentityimpl-class"></a>Classe IRowsetIdentityImpl
Implementa OLE DB [IRowsetIdentity](https://msdn.microsoft.com/library/ms715913.aspx) interfaccia, che consente di eseguire test per l'identità di riga.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class RowClass = CSimpleRow>  
class ATL_NO_VTABLE IRowsetIdentityImpl   
   : public IRowsetIdentity  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Una classe derivata da `IRowsetIdentityImpl`.  
  
 *RowClass*  
 L'unità di archiviazione per il `HROW`.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[IsSameRow](#issamerow)|Confronta due handle di riga per vedere se fanno riferimento alla stessa riga.|  
  
## <a name="issamerow"></a> Irowsetidentityimpl:: Issamerow
Confronta due handle di riga per vedere se fanno riferimento alla stessa riga.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
STDMETHOD(IsSameRow )(HROW hThisRow,  
   HROW hThatRow);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IRowsetIdentity::IsSameRow](https://msdn.microsoft.com/library/ms719629.aspx) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  
 Per confrontare gli handle di riga, questo metodo viene eseguito il cast di `HROW` handle a `RowClass` membri e chiamate `memcmp` sugli indicatori di misura.  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)