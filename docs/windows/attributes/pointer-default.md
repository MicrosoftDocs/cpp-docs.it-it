---
title: pointer_default (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.pointer_default
helpviewer_keywords:
- pointer_default attribute
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
ms.openlocfilehash: 8261d789f50c2750cccce48dac675ef478a70420
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50504390"
---
# <a name="pointerdefault"></a>pointer_default

Specifica l'attributo di puntatore predefinite per tutti i puntatori, ad eccezione dei puntatori di primo livello che vengono visualizzati nell'elenco di parametri.

## <a name="syntax"></a>Sintassi

```cpp
[ pointer_default(value) ]
```

### <a name="parameters"></a>Parametri

*valore*<br/>
Un valore che descrive il tipo di puntatore: **ptr**, **ref**, o **univoco**.

## <a name="remarks"></a>Note

Il **pointer_default** attributi di C++ ha la stessa funzionalità come la [pointer_default](/windows/desktop/Midl/pointer-default) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [defaultvalue](defaultvalue.md) per un esempio dell'uso dei **pointer_default**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)