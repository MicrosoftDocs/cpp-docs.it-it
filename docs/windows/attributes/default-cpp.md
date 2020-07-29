---
title: default (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.default
helpviewer_keywords:
- default attribute
- attributes [C#], default attribute
- defaults, default attribute
ms.assetid: 0cdca716-1ba8-46d7-9399-167e55492870
ms.openlocfilehash: dc0244897f73a5185451159aa0f4ec66dd9dae56
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215270"
---
# <a name="default-c"></a>default (C++)

Indica che l'interfaccia personalizzata o dispatch definita in una coclasse rappresenta l'interfaccia di programmabilità predefinita.

## <a name="syntax"></a>Sintassi

```cpp
[ default(interface1, interface2) ]
```

### <a name="parameters"></a>Parametri

*interfaccia1*<br/>
Interfaccia predefinita che verrà resa disponibile per gli ambienti di scripting che creano un oggetto basato sulla classe definita con l' **`default`** attributo.

Se non si specifica un'interfaccia predefinita, la prima occorrenza di un'interfaccia non di origine viene usata come predefinita.

*Interface2*<br/>
Opzionale Interfaccia di origine predefinita. È necessario anche specificare questa interfaccia con l'attributo [source](source-cpp.md) .

Se non si specifica un'interfaccia di origine predefinita, viene usata come predefinita la prima interfaccia di origine.

## <a name="remarks"></a>Osservazioni

L' **`default`** attributo C++ ha la stessa funzionalità dell'attributo MIDL [predefinito](/windows/win32/Midl/default) . L' **`default`** attributo viene usato anche con l'attributo [case](case-cpp.md) .

## <a name="example"></a>Esempio

Il codice seguente illustra come **`default`** usare la definizione di una coclasse per specificare `ICustomDispatch` come interfaccia di programmabilità predefinita:

```cpp
// cpp_attr_ref_default.cpp
// compile with: /LD
#include "windows.h"
[module(name="MyLibrary")];

[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
};

[dual, uuid("9E66A291-4365-11D2-A997-00C04FA37DDB")]
__interface IDual {
   HRESULT Dual([in] long l, [out, retval] long *pLong);
};

[object, uuid("9E66A293-4365-11D2-A997-00C04FA37DDB")]
__interface ICustomDispatch : public IDispatch {
   HRESULT Dispatch([in] long l, [out, retval] long *pLong);
};

[   coclass, default(ICustomDispatch), source(IDual), uuid("9E66A294-4365-11D2-A997-00C04FA37DDB")
]
class CClass : public ICustom, public IDual, public ICustomDispatch {
   HRESULT Custom(long l, long *pLong) { return(S_OK); }
   HRESULT Dual(long l, long *pLong) { return(S_OK); }
   HRESULT Dispatch(long l, long *pLong) { return(S_OK); }
};

int main() {
#if 0 // Can't instantiate without implementations of IUnknown/IDispatch
   CClass *pClass = new CClass;

   long llong;

   pClass->custom(1, &llong);
   pClass->dual(1, &llong);
   pClass->dispinterface(1, &llong);
   pClass->dispatch(1, &llong);

   delete pClass;
#endif
   return(0);
}
```

L'attributo di [origine](source-cpp.md) include anche un esempio di come usare **`default`** .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**`class`**, **`struct`** , membro dati|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclasse** (se applicata a **`class`** o **`struct`** )|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[coclass](coclass.md)
