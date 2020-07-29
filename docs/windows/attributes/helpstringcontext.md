---
title: helpstringcontext (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpstringcontext
helpviewer_keywords:
- helpstringcontext attribute [C++]
ms.assetid: d4cd135e-d91c-4aa3-9353-8aeb096f52cf
ms.openlocfilehash: e6d4a6b4ab2381fc9ebe0f237978c92fe0f656c5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224448"
---
# <a name="helpstringcontext"></a>helpstringcontext

Specifica l'ID di un argomento della Guida in un file con estensione hlp o CHM.

## <a name="syntax"></a>Sintassi

```cpp
[ helpstringcontext(contextID) ]
```

### <a name="parameters"></a>Parametri

*contextID*<br/>
Identificatore di contesto della guida a 32 bit nel file della **Guida** .

## <a name="remarks"></a>Osservazioni

L'attributo **helpstringcontext** di C++ ha la stessa funzionalità dell'attributo [helpstringcontext](/windows/win32/Midl/helpstringcontext) FAD.

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
|**Si applica a**|**`class`**, **interfaccia**, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[modulo](module-cpp.md)
