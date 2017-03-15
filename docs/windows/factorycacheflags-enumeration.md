---
title: "Enumerazione FactoryCacheFlags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::FactoryCacheFlags"
dev_langs: 
  - "C++"
ms.assetid: 6f54258f-0144-4264-9608-414e5905f6fb
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Enumerazione FactoryCacheFlags
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
|`FactoryCacheEnabled`|La memorizzazione nella cache di factory indipendentemente il `ModuleType` parametro di modello che viene utilizzato per creare un `Module` oggetto.|  
|`FactoryCacheDisabled`|Disabilita la memorizzazione nella cache di factory indipendentemente il `ModuleType` parametro di modello che viene utilizzato per creare un `Module` oggetto.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** implements.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft:: wrl](../windows/microsoft-wrl-namespace.md)