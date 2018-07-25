---
title: Classe RemoveIUnknown | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::RemoveIUnknown
dev_langs:
- C++
ms.assetid: 998e711a-7d1a-44c6-a016-e6167aa40863
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: eb005bc3cbf411a7d5b5ddbfa44cd6aecf802105
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879542"
---
# <a name="removeiunknown-class"></a>Classe RemoveIUnknown
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename T  
>  
struct RemoveIUnknown;  
  
template <  
   typename T  
>  
class RemoveIUnknown : public T;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe.  
  
## <a name="remarks"></a>Note  
 Crea un tipo equivalente a un tipo `IUnknown`-based, ma dispone di funzioni membro `QueryInterface` `AddRef` e `Release` non virtuali.  
  
 Per impostazione predefinita, i metodi COM forniscono virtuale `QueryInterface`, `AddRef`e rilasciare i metodi. Tuttavia, `ComPtr` non richiede l'overhead dei metodi virtuali. `RemoveIUnknown` Elimina l'overhead fornendo privata, non virtuale `QueryInterface`, `AddRef`, e `Release` metodi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ReturnType`|Un sinonimo per un tipo che corrisponde al parametro di modello `T` ma dispone di membri di IUnknown non virtuali.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `T`  
  
 `RemoveIUnknown`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)