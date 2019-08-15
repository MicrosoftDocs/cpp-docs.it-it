---
title: FAD (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.odl
helpviewer_keywords:
- odl attribute
ms.assetid: 75dcb314-b50f-4a63-9180-507ac1bc78f3
ms.openlocfilehash: a4ae1aa7f27348e37c565b35e3dc0b2b1011c9cb
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514324"
---
# <a name="odl"></a>odl

Identifica un'interfaccia come interfaccia Object Description Language (FAD). Il compilatore MIDL non richiede l'attributo **FAD** ; viene riconosciuta solo per la compatibilità con i file. FAD precedenti.

## <a name="syntax"></a>Sintassi

```cpp
[odl]
```

## <a name="remarks"></a>Note

L'attributo **FAD** C++ ha la stessa funzionalità dell'attributo di MIDL di [FAD](/windows/win32/Midl/odl) .

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
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)