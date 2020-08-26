---
title: implements_category (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.implements_category
helpviewer_keywords:
- implements_category attribute
ms.assetid: fb162df3-1ebe-43dc-a084-668d7ef8c03f
ms.openlocfilehash: cd9a4de8834bc22368393e9ea4639884785af0f2
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846121"
---
# <a name="implements_category"></a>implements_category

Specifica le categorie di componenti implementate dalla classe di destinazione.

## <a name="syntax"></a>Sintassi

```cpp
[ implements_category(implements_category="uuid") ]
```

### <a name="parameters"></a>Parametri

*implements_category*<br/>
ID della categoria implementata.

## <a name="remarks"></a>Osservazioni

L'attributo **implements_category** C++ specifica le categorie di componenti implementate dalla classe di destinazione. A tale scopo, è necessario creare una mappa delle categorie e aggiungere voci separate specificate dall'attributo **implements_category** . Per altre informazioni, vedere [categorie di componenti e il](/windows/win32/com/component-categories-and-how-they-work)relativo funzionamento.

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Se, ad esempio, `progid` viene applicato `vi_progid` , `coclass` vengono applicati anche.

## <a name="example"></a>Esempio

Il codice seguente specifica che l'oggetto seguente implementa la `Control` categoria.

```cpp
// cpp_attr_ref_implements_category.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module (name="MyLib")];
[ coclass, implements_category("CATID_Control"),
  uuid("20a0d0cc-5172-40f5-99ae-5e032f3205ae")]
class CMyClass {};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|Sì|
|**Attributi richiesti**|Uno dei seguenti: `coclass` , `progid` o `vi_progid`|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[IMPLEMENTED_CATEGORY](../../atl/reference/category-macros.md#implemented_category)
