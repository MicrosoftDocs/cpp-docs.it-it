---
description: 'Altre informazioni su: intervallo (C++)'
title: Range (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.range
helpviewer_keywords:
- range attribute
ms.assetid: f352f79e-ecb3-4cdd-9cdd-8406ef473594
ms.openlocfilehash: 0c1a45ac1f4e968de52c9ed2bffb89ac2cf5fd04
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327351"
---
# <a name="range-c"></a>range (C++)

Specifica un intervallo di valori consentiti per argomenti o campi i cui valori sono impostati in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
[ range(low, high) ]
```

### <a name="parameters"></a>Parametri

*basso*<br/>
Valore dell'intervallo minimo.

*alta*<br/>
Valore di intervallo massimo.

## <a name="remarks"></a>Commenti

L'attributo dell' **intervallo** C++ ha la stessa funzionalità dell'attributo [Range](/windows/win32/Midl/range) MIDL.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_range.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
   HRESULT length_is1([in, range(0, 999)] long f, [in, length_is(f)] char array[10]);
   HRESULT length_is2([in, range(-99, -1)] long f, [in, length_is("f"), size_is(10)] char *array);
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo di interfaccia, parametro interface|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[Attributi dei membri dati](data-member-attributes.md)
