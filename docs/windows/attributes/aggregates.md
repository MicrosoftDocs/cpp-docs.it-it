---
title: funzioni di aggregazione (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.aggregates
helpviewer_keywords:
- aggregates attribute
- aggregation [C++]
- aggregate objects [C++], aggregates attribute
- aggregates [C++]
ms.assetid: 67a084c9-941f-474b-a029-9c93b38ebe9a
ms.openlocfilehash: c9e3f84fbc781bd5187ae0c3461a6c8d68a29aa0
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69501876"
---
# <a name="aggregates"></a>aggregati

Indica che l'oggetto aggrega l'oggetto specificato dal CLSID.

## <a name="syntax"></a>Sintassi

```cpp
[ aggregates(clsid, variable_name) ]
```

### <a name="parameters"></a>Parametri

*clsid*<br/>
Specifica il CLSID dell'oggetto aggregabile.

*variable_name*<br/>
Nome della variabile da inserire. Questa variabile contiene l' `IUnknown` oggetto dell'oggetto da aggregare.

## <a name="remarks"></a>Note

Quando è applicato a un oggetto, l'attributo **aggregates** di C++ implementa un wrapper esterno per l'oggetto da aggregare (specificato da `clsid`).

Questo attributo richiede che anche l'attributo [coclass](coclass.md), [progid](progid.md)o [vi_progid](vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Se `progid` , ad esempio, viene applicato `vi_progid` `coclass` , vengono applicati anche.

### <a name="atl-projects"></a>Progetti ATL

Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. In primo luogo, alla mappa COM dell'oggetto di destinazione viene aggiunta la voce seguente:

```
COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND(_m_spAttrXXX, clsid)
```

In secondo luogo, viene aggiunta anche la macro [DECLARE_GET_CONTROLLING_UNKNOWN](../../atl/reference/aggregation-and-class-factory-macros.md#declare_get_controlling_unknown) .

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_aggregates.cpp
// compile with: /LD
#define _ATL_ATTRIBUTES
#include "atlbase.h"
#include "atlcom.h"

// requires 'aggregatable.dll'
// see aggregatable attribute to create 'aggregatable.dll'
class DECLSPEC_UUID("1a8369cc-1c91-42c4-befa-5a5d8c9d2529") CMyClass;

[module (name="MYObject")];
[object, uuid("ab006d85-e754-47c5-9ef4-2744ff32a20c")]
__interface IObject
{
};

[ coclass, aggregates(__uuidof(CMyClass)),
  uuid("91cb2c06-8931-432a-baac-206e55c4edfb")]
struct CObject : IObject
{
   int i;
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|Sì|
|**Attributi obbligatori**|Uno o più degli elementi seguenti: `coclass`, `progid`o `vi_progid`.|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi COM](com-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Aggregazione](/windows/win32/com/aggregation)<br/>
[Aggregabile](/windows/win32/Midl/aggregatable)<br/>
[COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND](../../atl/reference/com-interface-entry-macros.md#com_interface_entry_autoaggregate_blind)