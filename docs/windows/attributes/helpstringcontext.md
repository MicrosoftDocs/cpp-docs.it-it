---
title: helpstringcontext (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpstringcontext
helpviewer_keywords:
- helpstringcontext attribute [C++]
ms.assetid: d4cd135e-d91c-4aa3-9353-8aeb096f52cf
ms.openlocfilehash: a6df5b63291fbc54d6c12a116fccd8372e8ced9a
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59026110"
---
# <a name="helpstringcontext"></a>helpstringcontext

Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.

## <a name="syntax"></a>Sintassi

```cpp
[ helpstringcontext(contextID) ]
```

### <a name="parameters"></a>Parametri

*contextID*<br/>
Un identificatore di contesto della Guida in linea a 32 bit nel **aiutare** file.

## <a name="remarks"></a>Note

Il **helpstringcontext** attributi di C++ ha la stessa funzionalità come la [helpstringcontext](/windows/desktop/Midl/helpstringcontext) ODL (attributo).

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_helpstringcontext.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[   object, helpstring("help string"), helpstringcontext(1), uuid="11111111-1111-1111-1111-111111111111"
]
__interface IMyI
{
   HRESULT xx();
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **interfaccia**, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi del metodo](method-attributes.md)<br/>
[module](module-cpp.md)