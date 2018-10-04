---
title: Aggregatable (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.aggregatable
dev_langs:
- C++
helpviewer_keywords:
- aggregatable attribute
ms.assetid: 9253a46a-cd76-41f2-b3b6-86f709bb069c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0b686cd19d76706bb6a30286cf611c563c1aed50
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791213"
---
# <a name="aggregatable"></a>aggregatable

Indica che la classe supporta l'aggregazione.

## <a name="syntax"></a>Sintassi

```cpp
[ aggregatable(value) ]
```

### <a name="parameters"></a>Parametri

*valore*<br/>
(Facoltativo) Un parametro per indicare quando l'oggetto COM può essere aggregato:

- `never` L'oggetto COM non può essere aggregata.

- `allowed` È possibile creare l'oggetto COM direttamente o possono essere aggregati. Questa è l'impostazione predefinita.

- `always` L'oggetto COM non è possibile creare direttamente e può solo essere aggregato. Quando si chiama `CoCreateInstance` per questo oggetto, è necessario specificare l'oggetto aggregando `IUnknown` interfaccia (il controllo `IUnknown`).

## <a name="remarks"></a>Note

Il **aggregabile** attributi di C++ ha la stessa funzionalità come la [aggregabile](/windows/desktop/Midl/aggregatable) attributo MIDL. Ciò significa che il compilatore passerà il **aggregabile** attributo tramite il file con estensione IDL generato.

Questo attributo richiede che il [coclasse](coclass.md), [progid](progid.md), o [vi_progid](vi-progid.md) attributo (o un altro attributo che implica uno di questi) anche sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se `progid` viene applicata `vi_progid` e `coclass` vengono applicati anche.

### <a name="atl-projects"></a>Progetti ATL

Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento descritto in precedenza, l'attributo aggiunge anche una delle macro seguenti alla classe di destinazione:

|Valore del parametro|Inserita (macro)|
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
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Uno o più delle operazioni seguenti: `coclass`, `progid`, o `vi_progid`.|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Aggregazione](/windows/desktop/com/aggregation)  