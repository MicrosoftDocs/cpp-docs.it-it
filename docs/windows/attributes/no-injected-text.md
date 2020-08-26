---
title: no_injected_text (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.no_injected_text
helpviewer_keywords:
- no_injected_text attribute
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
ms.openlocfilehash: ab718376d5da7214813d5ab2e0caaa7bbccd077b
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88844080"
---
# <a name="no_injected_text"></a>no_injected_text

Impedisce al compilatore di inserire codice come risultato dell'utilizzo dell'attributo.

## <a name="syntax"></a>Sintassi

```cpp
[ no_injected_text(boolean) ];
```

### <a name="parameters"></a>Parametri

*boolean*<br/>
(Facoltativo) **`true`** Se non si desidera inserire codice, per consentire l'inserimento del **`false`** codice. **`true`** è il valore predefinito.

## <a name="remarks"></a>Osservazioni

L'uso più comune dell'attributo **no_injected_text** C++ è l'opzione del compilatore [/FX](../../build/reference/fx-merge-injected-code.md) , che inserisce l'attributo **no_injected_text** nel file. mrg.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)
