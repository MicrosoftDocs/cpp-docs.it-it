---
title: defaultvtable (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.defaultvtable
helpviewer_keywords:
- defaultvtable attribute
ms.assetid: 5b3ed483-f69e-44dd-80fc-952028eb9d73
ms.openlocfilehash: 2da0d8070f961f1ae0fc075585eb28881f712fb4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215257"
---
# <a name="defaultvtable"></a>defaultvtable

Definisce un'interfaccia come interfaccia vtable predefinita per un oggetto COM.

## <a name="syntax"></a>Sintassi

```cpp
[ defaultvtable(interface) ]
```

### <a name="parameters"></a>Parametri

*interface*<br/>
Interfaccia designata per la quale si desidera avere il vtable predefinito per l'oggetto COM.

## <a name="remarks"></a>Osservazioni

L'attributo **defaultvtable** di C++ ha la stessa funzionalità dell'attributo MIDL di [defaultvtable](/windows/win32/Midl/defaultvtable) .

## <a name="example"></a>Esempio

Il codice seguente Mostra gli attributi di una classe che usano **defaultvtable** per specificare un'interfaccia predefinita:

```cpp
// cpp_attr_ref_defaultvtable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyI1 {
   HRESULT x();
};

[object, uuid("00000000-0000-0000-0000-000000000002")]
__interface IMyI2 {
   HRESULT x();
};

[object, uuid("00000000-0000-0000-0000-000000000003")]
__interface IMyI3 {
   HRESULT x();
};

[coclass, source(IMyI3, IMyI1), default(IMyI3, IMyI2), defaultvtable(IMyI1),
uuid("00000000-0000-0000-0000-000000000004")]
class CMyC3 : public IMyI3 {};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclass**|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
