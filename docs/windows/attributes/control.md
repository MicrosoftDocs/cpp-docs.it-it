---
title: Control (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.control
helpviewer_keywords:
- Control attribute
ms.assetid: 3d046bb2-4afe-4cb8-a762-233b296e1975
ms.openlocfilehash: 59f1a6d1ad940f79693f9c5e37c1fe6527da3805
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224461"
---
# <a name="control"></a>controllo

Specifica che il tipo definito dall'utente è un controllo.

## <a name="syntax"></a>Sintassi

```cpp
[control]
```

## <a name="remarks"></a>Osservazioni

L'attributo **Control** implica l'attributo [coclass](coclass.md) . L'attributo del **controllo** C++ ha la stessa funzionalità dell'attributo MIDL del [controllo](/windows/win32/Midl/control) .

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_control.cpp
// compile with: /LD
#include <windows.h>
[module(name="Test", control=true)];

[object, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
};

[coclass, control, appobject, uuid("9e66a294-4365-11d2-a997-00c04fa37ddb")]
class CTest : public ICustom {};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)
