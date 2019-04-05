---
title: defaultbind (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.defaultbind
helpviewer_keywords:
- defaultbind attribute
ms.assetid: b20a8437-24e6-4b6d-a2df-09fe5e1006e0
ms.openlocfilehash: f0dd9101966f22253e6c4098c3c64d22d0a0cba6
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59041364"
---
# <a name="defaultbind"></a>defaultbind

Indica la singola proprietà associabile che meglio rappresenta l'oggetto.

## <a name="syntax"></a>Sintassi

```cpp
[defaultbind]
```

## <a name="remarks"></a>Note

Il **defaultbind** attributi di C++ ha la stessa funzionalità come la [defaultbind](/windows/desktop/Midl/defaultbind) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [associabile](bindable.md) per un esempio di come usare **defaultbind**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi del metodo](method-attributes.md)<br/>
[Attributi del membro dati](data-member-attributes.md)<br/>
[displaybind](displaybind.md)<br/>
[immediatebind](immediatebind.md)<br/>
[requestedit](requestedit.md)