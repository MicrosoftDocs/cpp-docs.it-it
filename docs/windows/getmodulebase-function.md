---
title: Funzione GetModuleBase | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::GetModuleBase
dev_langs:
- C++
ms.assetid: 123d3b14-2eaf-4e02-8dcd-b6567917c6a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 25e4bb6db6114f7d64522dfe145d51ffaabd476a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="getmodulebase-function"></a>Funzione GetModuleBase
Recupera un [ModuleBase](../windows/modulebase-class.md) puntatore che consente di incrementare e decrementare il conteggio dei riferimenti di un [RuntimeClass](../windows/runtimeclass-class.md) oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline Details::ModuleBase* GetModuleBase() throw()  
```  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore a un `ModuleBase` oggetto.  
  
## <a name="remarks"></a>Note  
 Questa funzione viene utilizzata internamente per incrementare e decrementare il conteggio di riferimento all'oggetto.  
  
 È possibile utilizzare questa funzione per controllare i conteggi dei riferimenti chiamando [modulebase:: Incrementobjectcount](../windows/modulebase-incrementobjectcount-method.md) e [modulebase:: Decrementobjectcount](../windows/modulebase-decrementobjectcount-method.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)