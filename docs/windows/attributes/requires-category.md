---
title: requires_category (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.requires_category
helpviewer_keywords:
- requires_category attribute
ms.assetid: a645fdc6-1ef5-414d-8c56-5fe2686d4687
ms.openlocfilehash: d566e74a9019259e526fa27aec26500e9ef3e1c1
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846004"
---
# <a name="requires_category"></a>requires_category

Specifica le categorie di componenti obbligatorie della classe di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
[ requires_category(
  requires_category) ]
```

### <a name="parameters"></a>Parametri

*requires_category*<br/>
ID della categoria richiesta.

## <a name="remarks"></a>Osservazioni

L'attributo **requires_category** C++ specifica le categorie di componenti richieste dalla classe di destinazione. Per ulteriori informazioni, vedere [REQUIRED_CATEGORY](../../atl/reference/category-macros.md#required_category).

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento.

## <a name="example"></a>Esempio

Il codice seguente richiede che l'oggetto implementi la categoria del controllo.

```cpp
// cpp_attr_ref_requires_category.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name="MyLibrary")];

[ coclass, requires_category("CATID_Control"),
  uuid("1e1a2436-f3ea-4ff3-80bf-5409370e8144")]
class CMyClass {};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Uno o più degli elementi seguenti: `coclass` , `progid` o `vi_progid` .|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[implements_category](implements-category.md)
