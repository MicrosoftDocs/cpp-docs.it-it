---
title: Classe IDBPropertiesImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2cc488ac71afedaaf590ef93dbc8d43997e30d0c
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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