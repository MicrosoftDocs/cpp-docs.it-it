---
title: switch_is (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.switch_is
helpviewer_keywords:
- switch_is attribute
ms.assetid: f1fffe5d-12d2-4e0f-8803-ccb715177d2d
ms.openlocfilehash: ccac405480e415df17b42f02dce74759f578d025
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031089"
---
# <a name="switchis"></a>switch_is

Specifica l'espressione o un identificatore che agisce come l'unione discriminante che consente di selezionare il membro dell'unione.

## <a name="syntax"></a>Sintassi

```cpp
[switch_is]
```

## <a name="remarks"></a>Note

Il **switch_is** attributi di C++ ha la stessa funzionalità come la [switch_is](/windows/desktop/Midl/switch-is) attributo MIDL.

## <a name="example"></a>Esempio

Vedere le [case](case-cpp.md) per un esempio dell'uso di esempio **switch_is**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**typedef**|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[switch_type](switch-type.md)