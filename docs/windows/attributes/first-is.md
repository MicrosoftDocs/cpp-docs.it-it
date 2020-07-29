---
title: first_is (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.first_is
helpviewer_keywords:
- first_is attribute
ms.assetid: 89acbf56-3b38-4d44-83e8-1ce2f6f74ffd
ms.openlocfilehash: 192d08471241526cace895bd5a5147070316cd6d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228063"
---
# <a name="first_is"></a>first_is

Specifica l'indice del primo elemento di matrice da trasmettere.

## <a name="syntax"></a>Sintassi

```cpp
[ first_is("expression") ]
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Una o più espressioni del linguaggio C. Sono consentiti slot di argomento vuoti.

## <a name="remarks"></a>Osservazioni

L'attributo **first_is** C++ ha la stessa funzionalità dell'attributo [first_is](/windows/win32/Midl/first-is) MIDL.

## <a name="example"></a>Esempio

Il codice seguente illustra vari modi per specificare una sezione in una matrice:

```cpp
// cpp_attr_ref_first_is.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"

[module(name="MyLib")];

[object, uuid(11111111-1111-1111-1111-111111111111)]
__interface b
{
   [id(0), propget, bindable, displaybind, defaultbind,
requestedit] HRESULT get_I([out, retval]long *i);
   HRESULT Proc1([in] short First, [in] short Last,
[first_is(First), last_is(Last), size_is(Last-First)] char Arr1[]);
   HRESULT Proc2([in] short First, [in] short Last,
[last_is(First), size_is(Last)] char Arr2[]);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Campo in **`struct`** o **`union`** , parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[last_is](last-is.md)<br/>
[max_is](max-is.md)<br/>
[length_is](length-is.md)<br/>
[size_is](size-is.md)
