---
title: no_injected_text | Documenti Microsoft
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
ms.openlocfilehash: 74336ffaa5e1f9f1990acedf1669526c9152b82b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880348"
---
# <a name="noinjectedtext"></a>no_injected_text
Impedisce al compilatore di codice in seguito a uso dell'attributo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      [ no_injected_text(  
   boolean  
) ];  
```  
  
#### <a name="parameters"></a>Parametri  
 `boolean`(facoltativo)  
 **true** se si desidera che nessun codice inserito, **false** per consentire al codice di essere inserito. **true** è l'impostazione predefinita.  
  
## <a name="remarks"></a>Note  
 L'utilizzo più comune del **no_injected_text** attributo C++ è il [/Fx](../build/reference/fx-merge-injected-code.md) opzione del compilatore, che inserisce il **no_injected_text** attributo nel file mrg.  
  
## <a name="requirements"></a>Requisiti  
  
### <a name="attribute-context"></a>Contesto attributo  
  
|||  
|-|-|  
|**Si applica a**|Ovunque|  
|**Ripetibile**|No|  
|**Attributi obbligatori**|Nessuna|  
|**Attributi non validi**|Nessuno|  
  
 Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi del compilatore](../windows/compiler-attributes.md)   
