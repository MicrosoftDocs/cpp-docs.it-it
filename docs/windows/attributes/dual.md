---
title: dual (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.dual
helpviewer_keywords:
- dual attribute
ms.assetid: 5d4a9069-d819-42cd-ba56-bbcda17157d9
ms.openlocfilehash: 8f02f6b69b31f10b41d5c920cfc2ad62dfa1cef2
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59023958"
---
# <a name="dual"></a>dual

Inserisce un'interfaccia nel file con estensione idl come interfaccia duale.

## <a name="syntax"></a>Sintassi

```cpp
[dual]
```

## <a name="remarks"></a>Note

Quando la **duale** attributi di C++ precede un'interfaccia, fa sì che l'interfaccia da inserire all'interno del blocco di libreria nel file con estensione IDL generato.

## <a name="example"></a>Esempio

Il codice seguente è un blocco di attributi che utilizza **duale** prima di una definizione di interfaccia:

```cpp
// cpp_attr_ref_dual.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLibrary")];

[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), dual]

__interface IStatic : IDispatch
{
   HRESULT Func1(int i);
   [   propget,    id(1),    bindable,    displaybind,    defaultbind,    requestedit
   ]
   HRESULT P1([out, retval] long *nSize);
   [   propput,    id(1),    bindable,    displaybind,    defaultbind,    requestedit
   ]
   HRESULT P1([in] long nSize);
};

[cpp_quote("#include file.h")];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|`dispinterface`|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi in base all'utilizzo](attributes-by-usage.md)<br/>
[personalizzati](custom-cpp.md)<br/>
[dispinterface](dispinterface.md)<br/>
[object](object-cpp.md)<br/>
[__interface](../../cpp/interface.md)