---
title: Enumerazione FactoryCacheFlags | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::FactoryCacheFlags
dev_langs:
- C++
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 41b31ccede1cca717418c9f489ab7de67d313319
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="factorycacheflags-enumeration"></a>Enumerazione FactoryCacheFlags
Determina se gli oggetti factory vengono memorizzati nella cache.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
enum FactoryCacheFlags;  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, la factory dei criteri di memorizzazione nella cache è specificata come il [ModuleType](../windows/moduletype-enumeration.md) parametro di modello quando si crea un [modulo](../windows/module-class.md) oggetto. Per eseguire l'override di questo criterio, specificare un `FactoryCacheFlags` valore quando si crea un oggetto factory.  
  
|||  
|-|-|  
|`FactoryCacheDefault`|I criteri di memorizzazione nella cache il `Module` viene utilizzato l'oggetto.|  
|`FactoryCacheEnabled`|Consente la memorizzazione nella cache di factory indipendentemente dal valore di `ModuleType` parametro di modello che viene utilizzato per creare un `Module` oggetto.|  
|`FactoryCacheDisabled`|Disabilita la memorizzazione nella cache di factory indipendentemente dal valore di `ModuleType` parametro di modello che viene utilizzato per creare un `Module` oggetto.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)