---
title: helpstringdll (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpstringdll
helpviewer_keywords:
- helpstringdll attribute [C++]
ms.assetid: 121271fa-f061-492b-b87f-bbfcf4b02e7b
ms.openlocfilehash: 46323a7ff4164111b48aed24b12bef5d400afacc
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217246"
---
# <a name="helpstringdll"></a>helpstringdll

Specifica il nome della DLL da usare per eseguire la ricerca di stringhe di documento (localizzazione).

## <a name="syntax"></a>Sintassi

```cpp
[ helpstringdll("string") ]
```

### <a name="parameters"></a>Parametri

*string*<br/>
DLL da usare per eseguire la ricerca di stringhe di documento.

## <a name="remarks"></a>Osservazioni

L'attributo **helpstringdll** di C++ ha la stessa funzionalità dell'attributo MIDL di [helpstringdll](/windows/win32/Midl/helpstringdll) .

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_helpstringdll.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib", helpstringdll="xx.dll")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI
{
   HRESULT xxx();
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **interfaccia**, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
