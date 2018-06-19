---
title: Classe ISessionPropertiesImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ISessionPropertiesImpl
dev_langs:
- C++
helpviewer_keywords:
- ISessionPropertiesImpl class
ms.assetid: ca0ba254-c7dc-4c52-abec-cf895a0c6a63
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 62b1321c9d7d50ff2cd459b395efa1e8147a06ea
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33106045"
---
# <a name="isessionpropertiesimpl-class"></a>Classe ISessionPropertiesImpl
Fornisce un'implementazione del [ISessionProperties](https://msdn.microsoft.com/en-us/library/ms713721.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ISessionPropertiesImpl :  
   public ISessionProperties,    
   public CUtlProps<PropClass>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `ISessionPropertiesImpl`.  
  
 `PropClass`  
 Una classe di proprietà definibili dall'utente che per impostazione predefinita `T`.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/isessionpropertiesimpl-getproperties.md)|Restituisce l'elenco delle proprietà del gruppo di proprietà di sessione attualmente impostati nella sessione.|  
|[SetProperties](../../data/oledb/isessionpropertiesimpl-setproperties.md)|Imposta le proprietà del gruppo di proprietà di sessione.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria sulle sessioni. Questa classe implementa le proprietà della sessione chiamando una funzione statica definita mediante il [mapping di set di proprietà](../../data/oledb/begin-propset-map.md). Il mapping di set di proprietà deve essere specificato nella classe di sessione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)