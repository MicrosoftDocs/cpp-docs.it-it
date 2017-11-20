---
title: Enumerazione ModuleType | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::ModuleType
dev_langs: C++
helpviewer_keywords: ModuleType enumeration
ms.assetid: 61a763af-a5a4-451d-8b40-815af507fcde
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a516795124ec3de6bb90102b3ea200d3365f33c4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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