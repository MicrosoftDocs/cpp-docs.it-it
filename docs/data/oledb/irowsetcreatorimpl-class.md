---
title: Classe IRowsetCreatorImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IRowsetCreatorImpl
- ATL.IRowsetCreatorImpl
- ATL::IRowsetCreatorImpl<T>
- ATL.IRowsetCreatorImpl<T>
- IRowsetCreatorImpl
dev_langs:
- C++
helpviewer_keywords:
- IRowsetCreatorImpl class
ms.assetid: 92cc950f-7978-4754-8d9a-defa63867d82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0492994193130ffa6a547691490b4da1ae557c8f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33102137"
---
# <a name="irowsetcreatorimpl-class"></a>Classe IRowsetCreatorImpl
Esegue le stesse funzioni come `IObjectWithSite` ma consente anche di proprietà OLE DB **DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS**.  
  
## <a name="syntax"></a>Sintassi

```cpp
template < class T >  
class ATL_NO_VTABLE IRowsetCreatorImpl   
   : public IObjectWithSiteImpl< T >  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe derivata da **IRowsetCreator**.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[SetSite](../../data/oledb/irowsetcreatorimpl-setsite.md)|Imposta il sito che contiene l'oggetto set di righe.|  
  
## <a name="remarks"></a>Note  
 Questa classe eredita da [IObjectWithSite](http://msdn.microsoft.com/library/windows/desktop/ms693765) ed esegue l'override [IObjectWithSite::SetSite](http://msdn.microsoft.com/library/windows/desktop/ms683869). Quando un oggetto provider di comando o sessione crea un set di righe, chiama `QueryInterface` per l'oggetto set di righe cercando `IObjectWithSite` e chiama `SetSite` passando l'oggetto di set di righe **IUnkown** interfaccia come interfaccia del sito.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)