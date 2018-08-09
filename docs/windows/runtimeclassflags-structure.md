---
title: RuntimeClassFlags (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassFlags
dev_langs:
- C++
helpviewer_keywords:
- RuntimeClassFlags structure
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 823244b54513e4f6b2901bc29984604f65eb9a11
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018036"
---
# <a name="runtimeclassflags-structure"></a>RuntimeClassFlags (struttura)
Contiene il tipo di un'istanza di un [RuntimeClass](../windows/runtimeclass-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   unsigned int flags  
>  
struct RuntimeClassFlags;  
```  
  
### <a name="parameters"></a>Parametri  
 *flags*  
 Oggetto [RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md) valore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costante RuntimeClassFlags::value](../windows/runtimeclassflags-value-constant.md)|Contiene un [RuntimeClassType (enumerazione)](../windows/runtimeclasstype-enumeration.md) valore.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `RuntimeClassFlags`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)