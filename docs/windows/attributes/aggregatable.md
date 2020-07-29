---
title: aggregable (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.aggregatable
helpviewer_keywords:
- aggregatable attribute
ms.assetid: 9253a46a-cd76-41f2-b3b6-86f709bb069c
ms.openlocfilehash: 883094c85418c15455a020cfe73538a6576eddd0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224487"
---
# <a name="aggregatable"></a>aggregatable

Indica che la classe supporta l'aggregazione.

## <a name="syntax"></a>Sintassi

```cpp
[ aggregatable(value) ]
```

### <a name="parameters"></a>Parametri

*value*<br/>
Opzionale Parametro per indicare quando l'oggetto COM può essere aggregato:

- `never`Impossibile aggregare l'oggetto COM.

- `allowed`L'oggetto COM può essere creato direttamente oppure può essere aggregato. Questa è la modalità predefinita.

- `always`L'oggetto COM non può essere creato direttamente e può essere aggregato. Quando si chiama `CoCreateInstance` per questo oggetto, è necessario specificare l'interfaccia dell'oggetto di aggregazione `IUnknown` (controllo `IUnknown` ).

## <a name="remarks"></a>Osservazioni

L'attributo C++ **aggregabile** ha la stessa funzionalità dell'attributo MIDL [aggregabile](/windows/win32/Midl/aggregatable) . Questo significa che il compilatore passerà l'attributo **aggregabile** attraverso al file IDL generato.

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Se, ad esempio, `progid` viene applicato `vi_progid` , `coclass` vengono applicati anche.

### <a name="atl-projects"></a>Progetti ATL

Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento descritto in precedenza, l'attributo aggiunge anche una delle seguenti macro alla classe di destinazione:

|Valore del parametro|Inserita macro|
|---------------------|--------------------|
|`Never`|[DECLARE_NOT_AGGREGATABLE](../../atl/reference/aggregation-and-class-factory-macros.md#declare_not_aggregatable)|
|`Allowed`|[DECLARE_POLY_AGGREGATABLE](../../atl/reference/aggregation-and-class-factory-macros.md#declare_poly_aggregatable)|
|`Always`|[DECLARE_ONLY_AGGREGATABLE](../../atl/reference/aggregation-and-class-factory-macros.md#declare_only_aggregatable)|

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_aggregatable.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

[module(name="MyModule")];

[ coclass, aggregatable(allowed),
  uuid("1a8369cc-1c91-42c4-befa-5a5d8c9d2529")]
class CMyClass {};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Uno o più degli elementi seguenti: `coclass` , `progid` o `vi_progid` .|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Aggregazione](/windows/win32/com/aggregation)
