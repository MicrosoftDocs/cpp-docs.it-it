---
description: 'Altre informazioni su: no_injected_text'
title: no_injected_text (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.no_injected_text
helpviewer_keywords:
- no_injected_text attribute
ms.assetid: 5256f808-e41e-4f4a-9ea5-e447919f5696
ms.openlocfilehash: 3d6b4b77055b6706256b25b0b722034e0275ec19
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327475"
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

## <a name="remarks"></a>Commenti

L'uso più comune dell'attributo **no_injected_text** C++ è l'opzione del compilatore [/FX](../../build/reference/fx-merge-injected-code.md) , che inserisce l'attributo **no_injected_text** nel file. mrg.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi del compilatore](compiler-attributes.md)
