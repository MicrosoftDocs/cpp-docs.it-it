---
title: ModuleType (enumerazione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ModuleType
dev_langs:
- C++
helpviewer_keywords:
- ModuleType enumeration
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 831f1fbcb2da205fa08286a1fbbbf414e66075d4
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40019930"
---
# <a name="moduletype-enumeration"></a>ModuleType (enumerazione)
Specifica se un modulo deve supportare un server in-process o un server out-of-process.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
enum ModuleType;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`InProc`|Un server in-process.|  
|`OutOfProc`|Un server out-of-process.|  
|`DisableCaching`|Disabilitare il meccanismo di memorizzazione nella cache sul modulo.|  
|`InProcDisableCaching`|Combinazione di `InProc` e `DisableCaching`.|  
|`OutOfProcDisableCaching`|Combinazione di `OutOfProc` e `DisableCaching`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)