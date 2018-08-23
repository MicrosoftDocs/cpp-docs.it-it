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
ms.openlocfilehash: e63b0b47dcc3f53ecd5af2d51505df844f66437a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599386"
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