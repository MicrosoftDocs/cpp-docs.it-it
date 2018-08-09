---
title: no_injected_text | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.no_injected_text
dev_langs:
- C++
helpviewer_keywords:
- no_injected_text attribute
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fc0dcba6597b6b8a3b37c240bf1c4a58f30b6b23
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40020343"
---
# <a name="noinjectedtext"></a>no_injected_text
Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
[ no_injected_text(  
   boolean  
) ];  
```  
  
### <a name="parameters"></a>Parametri  
 *booleano* (facoltativo)  
 **true** se si desidera che nessun codice inserito, **false** per consentire al codice da inserire. **true** è il valore predefinito.  
  
## <a name="remarks"></a>Note  
 L'uso più comune del **no_injected_text** consiste nell'attributo C++ il [/Fx](../build/reference/fx-merge-injected-code.md) opzione del compilatore, che consente di inserire il **no_injected_text** attributo nel file mrg.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   