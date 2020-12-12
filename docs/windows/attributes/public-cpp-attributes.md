---
description: 'Altre informazioni su: Public (attributi C++)'
title: Public (attributi C++) (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.public
helpviewer_keywords:
- public attribute
ms.assetid: c42e1fd5-6cb1-48fe-8a03-95f2a2e0137c
ms.openlocfilehash: ee6fb641dc122c7d31c25d3433e2a427710ef40a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329660"
---
# <a name="public-c-attributes"></a>public (attributi C++)

Assicura che un typedef entri nella libreria dei tipi anche se non vi viene fatto riferimento dall'interno del file IDL.

## <a name="syntax"></a>Sintassi

```cpp
[public]
```

## <a name="remarks"></a>Osservazioni

L' **`public`** attributo C++ ha la stessa funzionalità dell'attributo MIDL [pubblico](/windows/win32/Midl/public) .

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare l' **`public`** attributo:

```cpp
// cpp_attr_ref_public.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export, public] typedef long MEMBERID;

[dispinterface, uuid(99999999-9999-9999-9999-000000000000)]
__interface IFireTabCtrl : IDispatch
{
   [id(2)] long procedure ([in, optional] VARIANT i);
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`typedef`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)
