---
title: Classe IOpenRowsetImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IOpenRowsetImpl
dev_langs:
- C++
helpviewer_keywords:
- IOpenRowsetImpl class
ms.assetid: d259cedc-1db4-41cf-bc9f-5030907ab486
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: dd34987fcff3bee663a06276e3ded3c44d7ae77c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33102085"
---
# <a name="iopenrowsetimpl-class"></a>Classe IOpenRowsetImpl
Fornisce l'implementazione per il `IOpenRowset` interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class SessionClass>  
class IOpenRowsetImpl : public IOpenRowset  
```  
  
#### <a name="parameters"></a>Parametri  
 `SessionClass`  
 La classe, derivata da `IOpenRowsetImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CreateRowset](../../data/oledb/iopenrowsetimpl-createrowset.md)|Crea un oggetto set di righe. Non è chiamato direttamente dall'utente.|  
|[OpenRowset](../../data/oledb/iopenrowsetimpl-openrowset.md)|Apre e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice. (Non in ATLDB. H)|  
  
## <a name="remarks"></a>Note  
 Il [IOpenRowset](https://msdn.microsoft.com/en-us/library/ms716946.aspx) interfaccia è obbligatoria per un oggetto di sessione. Verrà aperto e restituisce un set di righe che include tutte le righe da una singola tabella di base o un indice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)