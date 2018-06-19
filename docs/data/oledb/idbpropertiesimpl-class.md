---
title: Classe IDBPropertiesImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IDBPropertiesImpl
- ATL.IDBPropertiesImpl
- ATL.IDBPropertiesImpl<T>
- ATL::IDBPropertiesImpl<T>
- ATL::IDBPropertiesImpl
dev_langs:
- C++
helpviewer_keywords:
- IDBPropertiesImpl class
ms.assetid: a7f15a8b-95b2-4316-b944-d5d03f8d74ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 3685e6a77e4293ef65b5ee98a0aa326500cfdb2d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33105124"
---
# <a name="idbpropertiesimpl-class"></a>Classe IDBPropertiesImpl
Fornisce un'implementazione per il `IDBProperties` interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T>   
class ATL_NO_VTABLE IDBPropertiesImpl   
   : public IDBProperties, public CUtlProps<T>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IDBPropertiesImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/idbpropertiesimpl-getproperties.md)|Restituisce i valori delle proprietà nei gruppi di proprietà di origine dati, informazioni sull'origine dati e l'inizializzazione che sono attualmente impostati nell'oggetto origine dati o i valori delle proprietà nel gruppo di proprietà di inizializzazione che vengono impostati il enumeratore.|  
|[GetPropertyInfo](../../data/oledb/idbpropertiesimpl-getpropertyinfo.md)|Restituisce informazioni su tutte le proprietà supportate dal provider.|  
|[SetProperties](../../data/oledb/idbpropertiesimpl-setproperties.md)|Imposta le proprietà i gruppi di proprietà origine dati e l'inizializzazione, per gli oggetti origine dati o al gruppo di proprietà di inizializzazione, per gli enumeratori.|  
  
## <a name="remarks"></a>Note  
 [IDBProperties](https://msdn.microsoft.com/en-us/library/ms719607.aspx) è un'interfaccia obbligatoria per gli oggetti origine dati e un'interfaccia facoltativa per gli enumeratori. Tuttavia, se espone un enumeratore [IDBInitialize](https://msdn.microsoft.com/en-us/library/ms713706.aspx), deve esporre `IDBProperties`. `IDBPropertiesImpl` implementa `IDBProperties` utilizzando una funzione statica definita da [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)