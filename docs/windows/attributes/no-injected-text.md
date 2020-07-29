---
title: no_injected_text (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.no_injected_text
helpviewer_keywords:
- no_injected_text attribute
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
ms.openlocfilehash: 7e5c822c45888f41e8dd849f25658d0139e6fda0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87201245"
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

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)
