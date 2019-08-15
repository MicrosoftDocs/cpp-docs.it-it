---
title: uidefault (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.uidefault
helpviewer_keywords:
- uidefault attribute
ms.assetid: 200de0e0-2e34-40a2-bae4-8d485a62264d
ms.openlocfilehash: b4090011aade4ebab2f5c07a8e56e91253cc7c49
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513907"
---
# <a name="uidefault"></a>uidefault

Indica che il membro delle informazioni sul tipo è il membro predefinito per la visualizzazione nell'interfaccia utente.

## <a name="syntax"></a>Sintassi

```cpp
[uidefault]
```

## <a name="remarks"></a>Note

L'attributo **uidefault** C++ ha la stessa funzionalità dell'attributo MIDL di [uidefault](/windows/win32/Midl/uidefault) .

## <a name="example"></a>Esempio

Il codice seguente illustra un esempio di **uidefault**:

```cpp
// cpp_attr_ref_uidefault.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface ICustom{
   HRESULT Custom([in] long l, [out, retval] long *pLong);
   [uidefault]HRESULT id0([in] long l);
   [uidefault]HRESULT id1([in] long l);

   [uidefault, propget] HRESULT get_y(int *y);
   [uidefault, propput] HRESULT put_y(int y);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)