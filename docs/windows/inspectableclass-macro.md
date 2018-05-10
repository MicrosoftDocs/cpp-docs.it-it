---
title: Macro InspectableClass | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::InspectableClass
dev_langs:
- C++
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 922f7f74771125aed0122c408ef902da2569e5c7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="inspectableclass-macro"></a>Macro InspectableClass
Imposta il nome e l'attendibilità del livello di classe runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
InspectableClass(  
   runtimeClassName,   
   trustLevel)  
```  
  
#### <a name="parameters"></a>Parametri  
 `runtimeClassName`  
 Il nome completo testuale della classe di runtime.  
  
 `trustLevel`  
 Uno del [TrustLevel](http://msdn.microsoft.com/library/br224625.aspx) valori enumerati.  
  
## <a name="remarks"></a>Note  
 Il `InspectableClass` macro può essere utilizzata solo con tipi di Windows Runtime.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)