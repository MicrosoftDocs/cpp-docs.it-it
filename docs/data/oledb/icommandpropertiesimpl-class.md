---
title: Classe ICommandPropertiesImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ICommandPropertiesImpl
- ATL.ICommandPropertiesImpl
- ATL::ICommandPropertiesImpl
dev_langs:
- C++
helpviewer_keywords:
- ICommandPropertiesImpl class
ms.assetid: b3cf6aea-527e-4f0d-96e0-669178b021a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 25be1548bd41f832a007f102c138fc01f8818774
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33099001"
---
# <a name="icommandpropertiesimpl-class"></a>Classe ICommandPropertiesImpl
Fornisce un'implementazione del [ICommandProperties](https://msdn.microsoft.com/en-us/library/ms723044.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class PropClass = T>  
class ATL_NO_VTABLE ICommandPropertiesImpl   
   : public ICommandProperties, public CUtlProps<PropClass>  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da  
  
 `PropClass`  
 Classe di proprietà.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/icommandpropertiesimpl-getproperties.md)|Restituisce l'elenco delle proprietà del gruppo di proprietà set di righe che sono attualmente richiesti per il set di righe.|  
|[SetProperties](../../data/oledb/icommandpropertiesimpl-setproperties.md)|Imposta le proprietà del gruppo di proprietà set di righe.|  
  
## <a name="remarks"></a>Note  
 Questo campo è obbligatorio in comandi. L'implementazione è fornita da una funzione statica definita mediante il [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) (macro).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)