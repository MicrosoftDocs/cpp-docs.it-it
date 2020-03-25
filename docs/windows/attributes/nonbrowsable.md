---
title: nonbrowsable (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.nonbrowsable
helpviewer_keywords:
- nonbrowsable attribute
ms.assetid: e71a98e7-4b65-454a-9829-342b9f2a84be
ms.openlocfilehash: f0aae070c1c97695180797b228178b210493b7bb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80166562"
---
# <a name="nonbrowsable"></a>nonbrowsable

Indica che un membro di interfaccia non deve essere visualizzato in un visualizzatore proprietà.

## <a name="syntax"></a>Sintassi

```cpp
[nonbrowsable]
```

## <a name="remarks"></a>Osservazioni

L' **nonbrowsable** C++ attributo non esplorabile ha la stessa funzionalità dell'attributo MIDL non [esplorabile](/windows/win32/Midl/nonbrowsable) .

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_nonbrowsable.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, helpstring("help string"), helpstringcontext(1),
uuid="11111111-1111-1111-1111-111111111111"]
__interface IMyI
{
   [nonbrowsable] HRESULT xx();
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)
