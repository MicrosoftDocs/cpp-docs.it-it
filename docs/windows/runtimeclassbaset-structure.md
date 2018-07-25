---
title: Struttura RuntimeClassBaseT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::RuntimeClassBaseT
dev_langs:
- C++
ms.assetid: a62775fb-3359-4f45-9ff1-c07fa8da464b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3ea147ebddff03401f6151bcdc44d96efb233f90
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33888993"
---
# <a name="runtimeclassbaset-structure"></a>Struttura RuntimeClassBaseT
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   unsigned int RuntimeClassTypeT  
>  
friend struct Details::RuntimeClassBaseT;  
```  
  
#### <a name="parameters"></a>Parametri  
 `RuntimeClassTypeT`  
 Un campo di flag che specifica uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.  
  
## <a name="remarks"></a>Note  
 Fornisce metodi helper per `QueryInterface` operazioni e ottenere gli ID di interfaccia.  
  
## <a name="members"></a>Membri  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `RuntimeClassBaseT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento (libreria Windows Runtime)](http://msdn.microsoft.com/en-us/00000000-0000-0000-0000-000000000000)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)