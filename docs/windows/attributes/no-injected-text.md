---
title: no_injected_text (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.no_injected_text
helpviewer_keywords:
- no_injected_text attribute
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
ms.openlocfilehash: 354643020e704a87daa2e56e923b6a0a704bf0b5
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038369"
---
# <a name="noinjectedtext"></a>no_injected_text

Impedisce al compilatore di inserire codice in seguito a uso dell'attributo.

## <a name="syntax"></a>Sintassi

```cpp
[ no_injected_text(boolean) ];
```

### <a name="parameters"></a>Parametri

*boolean*<br/>
(Facoltativo) **true** se si desidera che nessun codice inserito, **false** per consentire al codice da inserire. **true** è il valore predefinito.

## <a name="remarks"></a>Note

L'uso più comune del **no_injected_text** consiste nell'attributo C++ il [/Fx](../../build/reference/fx-merge-injected-code.md) opzione del compilatore, che consente di inserire il **no_injected_text** attributo nel file mrg.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)