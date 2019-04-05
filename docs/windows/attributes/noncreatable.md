---
title: noncreatable (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.noncreatable
helpviewer_keywords:
- noncreatable attribute
ms.assetid: 4d17937b-0bff-41af-ba57-53e18b7ab5a9
ms.openlocfilehash: a10d93650c0ae564019a09b34c3a604d12327998
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59039991"
---
# <a name="noncreatable"></a>noncreatable

Definisce un oggetto che non è possibile creare istanze di se stesso.

## <a name="syntax"></a>Sintassi

```cpp
[noncreatable]
```

## <a name="remarks"></a>Note

Il **noncreatable** attributi di C++ ha la stessa funzionalità come il [non creabile](/windows/desktop/Midl/noncreatable) attributo MIDL e viene automaticamente passato all'oggetto generato. File IDL dal compilatore.

Quando questo attributo viene usato all'interno di un progetto che usa ATL, il comportamento dell'attributo cambia. Oltre al comportamento precedente, l'attributo inserisce anche il [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../../atl/reference/object-map-macros.md#object_entry_non_createable_ex_auto) macro. Questa macro indica che l'oggetto non è possibile creare esternamente ad ATL.

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

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|**coclass**|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
