---
title: switch_type (C++ attributo COM)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.switch_type
helpviewer_keywords:
- switch_type attribute
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
ms.openlocfilehash: b461769d3d988efae0be7380e1e0112e3f3cf801
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59027857"
---
# <a name="switchtype"></a>switch_type

Identifica il tipo della variabile utilizzata come l'unione discriminante.

## <a name="syntax"></a>Sintassi

```cpp
[switch_type(
type
}]
```

### <a name="parameters"></a>Parametri

*type*<br/>
Il tipo di commutatore, può essere di tipo integer, carattere, booleano o enumerazione.

## <a name="remarks"></a>Note

Il **switch_type** C++ attributo ha la stessa funzionalità come il [switch_type](/windows/desktop/Midl/switch-type) attributo MIDL.

Gli attributi di C++ non supportano [incapsulato unioni](/windows/desktop/Midl/encapsulated-unions). [Le unioni nonencapsulated](/windows/desktop/Midl/nonencapsulated-unions) sono supportati solo nel formato seguente:

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

Vedere le [case](case-cpp.md) per un esempio dell'uso di esempio **switch_type**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**typedef**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[export](export.md)