---
description: 'Altre informazioni su: switch_type'
title: switch_type (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.switch_type
helpviewer_keywords:
- switch_type attribute
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
ms.openlocfilehash: e291524d00afff89aa17634307426ef62cd40f4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327267"
---
# <a name="switch_type"></a>switch_type

Identifica il tipo della variabile utilizzata come unione discriminante.

## <a name="syntax"></a>Sintassi

```cpp
[switch_type(
type
}]
```

### <a name="parameters"></a>Parametri

*type*<br/>
Il tipo di opzione può essere un Integer, un carattere, un valore booleano o un tipo di enumerazione.

## <a name="remarks"></a>Commenti

L'attributo **switch_type** C++ ha la stessa funzionalità dell'attributo [switch_type](/windows/win32/Midl/switch-type) MIDL.

Gli attributi C++ non supportano le [unioni incapsulate](/windows/win32/Midl/encapsulated-unions). Le [unioni non incapsulate](/windows/win32/Midl/nonencapsulated-unions) sono supportate solo nel formato seguente:

```cpp
// cpp_attr_ref_switch_type.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLibrary")];
[ export ]
struct SizedValue2 {
   [switch_type("char"), switch_is(kind)] union {
      [case(1), string]
         wchar_t* wval;
      [default, string]
         char* val;
   };
   char kind;
};
```

## <a name="example"></a>Esempio

Vedere l'esempio di [caso](case-cpp.md) per un uso di esempio di **switch_type**.

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
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[esportazione](export.md)
