---
title: AsyncResultType (enumerazione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncResultType
dev_langs:
- C++
helpviewer_keywords:
- AsyncResultType enumeration
ms.assetid: 4195d234-3f3f-4363-9118-6ad2a7551cf2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7989f28ae9c9e3af4c73ec454487d34dd7cff570
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644755"
---
# <a name="asyncresulttype-enumeration"></a>AsyncResultType (enumerazione)
Specifica il tipo di risultato restituito dal `GetResults()` (metodo).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
enum AsyncResultType;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`MultipleResults`|Un set di risultati più, che vengono presentati progressivamente between `Start` lo stato e prima `Close()` viene chiamato.|  
|`SingleResult`|Un singolo risultato, viene visualizzato dopo il `Complete` evento si verifica.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)