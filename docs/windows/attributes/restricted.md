---
title: Restricted (C++ attributo com)
ms.date: 10/03/2018
f1_keywords:
- vc-attr.restricted
helpviewer_keywords:
- restricted attribute
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
ms.openlocfilehash: 01dabcd15eb1a14734c16b9e54c0ab2e030d0479
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514066"
---
# <a name="restricted"></a>restricted

Specifica che un membro di un modulo, di un'interfaccia o di un'interfaccia dispatch non può essere chiamato in modo arbitrario.

## <a name="syntax"></a>Sintassi

```cpp
[ restricted(
   interfaces
) ]
```

### <a name="parameters"></a>Parametri

*interfacce*<br/>
Una o più interfacce che non possono essere chiamate arbitrariamente su un oggetto COM. Questo parametro è valido solo se applicato a una classe.

## <a name="remarks"></a>Note

L' C++ attributo Restricted ha la stessa funzionalità dell'attributo MIDL [limitato](/windows/win32/Midl/restricted) .

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare l' attributo Restricted:

```cpp
// cpp_attr_ref_restricted.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface a
{
};

[object, uuid("00000000-0000-0000-0000-000000000002")]
__interface b
{
};

[coclass, restricted(a,b), uuid("00000000-0000-0000-0000-000000000003")]
class c : public a, public b
{
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia, **interfaccia**, **classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclasse** (quando applicato alla **classe** o allo **struct**)|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)