---
title: Enumerazione ModuleType | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ModuleType
dev_langs:
- C++
helpviewer_keywords:
- ModuleType enumeration
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dd68d911a3734510bfb35db4b3ee0c4b8e46a4a0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)