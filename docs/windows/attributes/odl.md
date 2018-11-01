---
title: ODL (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.odl
helpviewer_keywords:
- odl attribute
ms.assetid: 75dcb314-b50f-4a63-9180-507ac1bc78f3
ms.openlocfilehash: e2fa1ddc0acfd0d6680ebd58c7762adb96ac180a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50571795"
---
# <a name="odl"></a>odl

Identifica un'interfaccia come interfaccia oggetto Description Language (ODL). Il compilatore MIDL non richiede la **odl** ; dell'attributo viene riconosciuto solo per compatibilità con i file. ODL meno recenti.

## <a name="syntax"></a>Sintassi

```cpp
[odl]
```

## <a name="remarks"></a>Note

Il **odl** attributi di C++ ha la stessa funzionalità come la [odl](/windows/desktop/Midl/odl) attributo MIDL.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_odl.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLIb")];

[odl, oleautomation, dual, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyInterface
{
   HRESULT x();
};

[coclass, uuid("00000000-0000-0000-0000-000000000002")]
class cmyClass : public IMyInterface
{
public:
   HRESULT x(){}
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)