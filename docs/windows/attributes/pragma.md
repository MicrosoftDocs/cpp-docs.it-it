---
title: pragma (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.pragma
helpviewer_keywords:
- pragma attribute
ms.assetid: 3f90d023-b8b5-4007-8311-008bb72cbea1
ms.openlocfilehash: d90e37e27f7e2a13ffebd11043e415c1d43751c5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50430499"
---
# <a name="pragma"></a>pragma

Genera la stringa specificata nel file con estensione IDL generato senza l'utilizzo delle virgolette.

## <a name="syntax"></a>Sintassi

```cpp
[ pragma(pragma_statement) ];
```

### <a name="parameters"></a>Parametri

*pragma_statement*<br/>
Il pragma che si desidera accedere al file IDL generato.

## <a name="remarks"></a>Note

Il **pragma** attributo C++ ha la stessa funzionalità di [pragma](/windows/desktop/Midl/pragma) attributo MIDL.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_pragma.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];
[pragma(pack(4))];

[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface A
{
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[pack](../../preprocessor/pack.md)