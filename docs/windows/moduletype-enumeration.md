---
title: Enumerazione ModuleType | Documenti Microsoft
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
ms.openlocfilehash: d36355c9f64f9f5c827ef8c4d5b3cb6a77d17b65
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876836"
---
# <a name="moduletype-enumeration"></a>ModuleType (enumerazione)
Specifica se un modulo deve supportare un server in-process o un server out-of-process.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)