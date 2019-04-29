---
title: helpstringdll (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpstringdll
helpviewer_keywords:
- helpstringdll attribute [C++]
ms.assetid: 121271fa-f061-492b-b87f-bbfcf4b02e7b
ms.openlocfilehash: 72f5926018e3ac7ec4770f83d7a2c3438b67d861
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409538"
---
# <a name="helpstringdll"></a>helpstringdll

Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).

## <a name="syntax"></a>Sintassi

```cpp
[ helpstringdll("string") ]
```

### <a name="parameters"></a>Parametri

*string*<br/>
La DLL da utilizzare per eseguire una ricerca di stringhe di documento.

## <a name="remarks"></a>Note

Il **helpstringdll** attributi di C++ ha la stessa funzionalità come la [helpstringdll](/windows/desktop/Midl/helpstringdll) attributo MIDL.

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
|**Si applica a**|**classe**, **interfaccia**, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)