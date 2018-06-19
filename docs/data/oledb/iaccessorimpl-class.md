---
title: Classe IAccessorImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IAccessorImpl
dev_langs:
- C++
helpviewer_keywords:
- IAccessorImpl class
ms.assetid: 768606da-8b71-417c-a62c-88069ce7730d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d62deeb487fded5895bbd47332a0f8a6ad7bbce6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33102524"
---
# <a name="iaccessorimpl-class"></a>Classe IAccessorImpl
Fornisce un'implementazione del [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, 
          class BindType = ATLBINDINGS,
          class BindingVector = CAtlMap <HACCESSOR hAccessor, BindType* pBindingsStructure>>  
class ATL_NO_VTABLE IAccessorImpl : public IAccessorImplBase<BindType>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe di oggetto set di righe o di comando.  
  
 `BindType`  
 Unità di archiviazione per le informazioni di associazione. Il valore predefinito è il **ATLBINDINGS** struttura (vedere Atldb. h).  
  
 `BindingVector`  
 Unità di archiviazione di informazioni sulle colonne. Il valore predefinito è [CAtlMap](../../atl/reference/catlmap-class.md) in cui l'elemento principale è un **HACCESSOR** valore e l'elemento value è un puntatore a un `BindType` struttura.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)|Costruttore.|  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[AddRefAccessor](../../data/oledb/iaccessorimpl-addrefaccessor.md)|Aggiunge un conteggio dei riferimenti a una funzione di accesso esistente.|  
|[CreateAccessor](../../data/oledb/iaccessorimpl-createaccessor.md)|Crea una funzione di accesso da un set di associazioni.|  
|[GetBindings](../../data/oledb/iaccessorimpl-getbindings.md)|Restituisce le associazioni in una funzione di accesso.|  
|[ReleaseAccessor](../../data/oledb/iaccessorimpl-releaseaccessor.md)|Rilascia una funzione di accesso.|  
  
## <a name="remarks"></a>Note  
 Questo campo è obbligatorio nel set di righe e i comandi. OLE DB Provider richiede che implementano un **HACCESSOR**, che è un tag a una matrice di [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) strutture. **HACCESSOR**s forniti da `IAccessorImpl` sono gli indirizzi del `BindType` strutture. Per impostazione predefinita, `BindType` è definito come un **ATLBINDINGS** in `IAccessorImpl`della definizione di modello. `BindType` fornisce un meccanismo utilizzato da `IAccessorImpl` per tenere traccia del numero di elementi nel relativo **DBBINDING** nonché un flag di conteggio e delle funzioni di accesso di riferimento della matrice.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)