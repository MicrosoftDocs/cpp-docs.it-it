---
title: Classe IDBCreateCommandImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IDBCreateCommandImpl
- IDBCreateCommandImpl
- ATL.IDBCreateCommandImpl
dev_langs:
- C++
helpviewer_keywords:
- IDBCreateCommandImpl class
ms.assetid: eac4755e-1668-42e1-958e-a35620c385ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cc032a488626f2d366152f2d2b70b2539b9137b9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33101526"
---
# <a name="idbcreatecommandimpl-class"></a>Classe IDBCreateCommandImpl
Fornisce un'implementazione del [IDBCreateCommand](https://msdn.microsoft.com/en-us/library/ms711625.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class CommandClass >  
class ATL_NO_VTABLE IDBCreateCommandImpl   
   : public IDBCreateCommand  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 L'oggetto sessione derivato da `IDBCreateCommandImpl`.  
  
 `CommandClass`  
 La classe di comando.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[CreateCommand](../../data/oledb/idbcreatecommandimpl-createcommand.md)|Crea un nuovo comando.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia facoltativa per l'oggetto di sessione per ottenere un nuovo comando.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)