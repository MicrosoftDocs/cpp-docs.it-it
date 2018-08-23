---
title: aggregabile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 66c85999e70e505176700ecaac69b75048ce2422
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595242"
---
# <a name="aggregatable"></a>aggregatable

Indica che la classe supporta l'aggregazione.

## <a name="syntax"></a>Sintassi

```cpp
[ aggregatable(
   value
) ]
```

### <a name="parameters"></a>Parametri

*valore* (facoltativo)  
Un parametro per indicare quando l'oggetto COM può essere aggregato:

- `never` L'oggetto COM non può essere aggregata.

- `allowed` È possibile creare l'oggetto COM direttamente o possono essere aggregati. Questa è l'impostazione predefinita.

- `always` L'oggetto COM non è possibile creare direttamente e può solo essere aggregato. Quando si chiama `CoCreateInstance` per questo oggetto, è necessario specificare l'oggetto aggregando `IUnknown` interfaccia (il controllo `IUnknown`).

## <a name="remarks"></a>Note

Il **aggregabile** attributi di C++ ha la stessa funzionalità come la [aggregabile](http://msdn.microsoft.com/library/windows/desktop/aa366721) attributo MIDL. Ciò significa che il compilatore passerà il **aggregabile** attributo tramite il file con estensione IDL generato.

Questo attributo richiede che anche l'attributo [coclass](../windows/coclass.md), [progid](../windows/progid.md)o [vi_progid](../windows/vi-progid.md) (o un altro attributo che implica uno di questi) sia applicato allo stesso elemento. Se viene usato un qualsiasi attributo, anche gli altri due vengono applicati automaticamente. Ad esempio, se `progid` viene applicata `vi_progid` e `coclass` vengono applicati anche.

### <a name="atl-projects"></a>Progetti ATL

Se questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento descritto in precedenza, l'attributo aggiunge anche una delle macro seguenti alla classe di destinazione:

|Valore del parametro|Inserita (macro)|
|---------------------|--------------------|
|`Never`|[DECLARE_NOT_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_not_aggregatable)|
|`Allowed`|[DECLARE_POLY_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_poly_aggregatable)|
|`Always`|[DECLARE_ONLY_AGGREGATABLE](../atl/reference/aggregation-and-class-factory-macros.md#declare_only_aggregatable)|

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

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[Aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558)  