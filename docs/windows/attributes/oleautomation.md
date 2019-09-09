---
title: oleautomation (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.oleautomation
helpviewer_keywords:
- oleautomation attribute
ms.assetid: c1086c91-260b-4dc3-b244-662852d09906
ms.openlocfilehash: 56970d8b1067e1ac38230b6995074210ddc5549b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514358"
---
# <a name="oleautomation"></a>oleautomation

Indica che un'interfaccia è compatibile con l'automazione.

## <a name="syntax"></a>Sintassi

```cpp
[oleautomation]
```

## <a name="remarks"></a>Note

L'attributo **oleautomation** C++ ha la stessa funzionalità dell'attributo MIDL di [oleautomation](/windows/win32/Midl/oleautomation) .

## <a name="example"></a>Esempio

Vedere gli esempi per [DefaultValue](defaultvalue.md) e non [estendibile](nonextensible.md) per un esempio di uso di **oleautomation**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|**dispinterface**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)