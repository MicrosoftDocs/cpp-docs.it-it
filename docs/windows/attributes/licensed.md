---
description: 'Altre informazioni su: con licenza'
title: concesso in licenza (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.licensed
helpviewer_keywords:
- licensed attribute
ms.assetid: 09cf3b4a-d3f2-43e3-9180-d420333b23bf
ms.openlocfilehash: 348180412c1e8b19994cf5ef3e9bedb4115bfbda
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327520"
---
# <a name="licensed"></a>licensed

Indica che l'oggetto COM a cui viene applicato viene concesso in licenza ed è necessario crearne un'istanza usando `IClassFactory2` .

## <a name="syntax"></a>Sintassi

```cpp
[licensed]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ con **licenza** ha la stessa funzionalità dell'attributo MIDL [concesso in licenza](/windows/win32/Midl/licensed) .

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_licensed.cpp
// compile with: /LD
#include "unknwn.h"
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI : IUnknown {
   HRESULT f();
};

[coclass, version("2.1"), uuid(12345678-1111-2222-3333-123456789012),
licensed, threading(free), progid(some.name)]
class CSample : public IMyI {
public:
   int nSize;
};

[module(name="MyLibrary", version="1.0", helpstring="My Library Block")];
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|`coclass`|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
