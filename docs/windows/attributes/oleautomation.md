---
title: oleautomation (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.oleautomation
helpviewer_keywords:
- oleautomation attribute
ms.assetid: c1086c91-260b-4dc3-b244-662852d09906
ms.openlocfilehash: 74701742de904b76e7b1152c8ddb3f2f5dd953c2
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031712"
---
# <a name="oleautomation"></a>oleautomation

Indica che un'interfaccia è compatibile con l'automazione.

## <a name="syntax"></a>Sintassi

```cpp
[oleautomation]
```

## <a name="remarks"></a>Note

Il **oleautomation** attributi di C++ ha la stessa funzionalità come la [oleautomation](/windows/desktop/Midl/oleautomation) attributo MIDL.

## <a name="example"></a>Esempio

Per vedere gli esempi [defaultvalue](defaultvalue.md) e [nonextensible](nonextensible.md) per un esempio dell'uso di **oleautomation**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|**dispinterface**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)