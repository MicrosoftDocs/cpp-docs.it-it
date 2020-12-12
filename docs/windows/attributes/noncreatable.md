---
description: 'Altre informazioni su: non creabili'
title: noncreable (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.noncreatable
helpviewer_keywords:
- noncreatable attribute
ms.assetid: 4d17937b-0bff-41af-ba57-53e18b7ab5a9
ms.openlocfilehash: 1bbd871d19ab4e02aa4d8acf715da76c4287ce64
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327457"
---
# <a name="noncreatable"></a>noncreatable

Definisce un oggetto di cui non è possibile creare un'istanza.

## <a name="syntax"></a>Sintassi

```cpp
[noncreatable]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ non **creabile** ha la stessa funzionalità dell'attributo MIDL non [creabile](/windows/win32/Midl/noncreatable) e viene passato automaticamente all'oggetto generato. File IDL del compilatore.

Quando questo attributo viene usato in un progetto che usa ATL, il comportamento dell'attributo viene modificato. Oltre al comportamento precedente, l'attributo inserisce anche la [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro. Questa macro indica a ATL che l'oggetto non può essere creato esternamente.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_noncreatable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, uuid("11111111-1111-1111-1111-111111111111")]
__interface A
{
};

[coclass, uuid("11111111-1111-1111-1111-111111111112"), noncreatable]
class CMyClass : public A
{
   HRESULT xx();
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|**coclass**|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
