---
description: 'Altre informazioni su: con restrizioni'
title: Restricted (attributo COM C++)
ms.date: 10/03/2018
f1_keywords:
- vc-attr.restricted
helpviewer_keywords:
- restricted attribute
ms.assetid: 504a96be-b904-4269-8be1-920feba201b4
ms.openlocfilehash: 8c0dc33d1ae7cff3625f1a938cac05c7ac72f474
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329623"
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

*interfaces*<br/>
Una o più interfacce che non possono essere chiamate arbitrariamente su un oggetto COM. Questo parametro è valido solo se applicato a una classe.

## <a name="remarks"></a>Commenti

L'attributo C++ con **restrizioni** ha la stessa funzionalità dell'attributo MIDL [limitato](/windows/win32/Midl/restricted) .

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare l'attributo **Restricted** :

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo di interfaccia, **interfaccia**, **`class`** , **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclasse** (se applicata a **`class`** o **`struct`** )|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
