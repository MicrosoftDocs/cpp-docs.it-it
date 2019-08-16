---
title: iid_is (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.iid_is
helpviewer_keywords:
- iid_is attribute
ms.assetid: 2f9b42a9-7130-4b08-9b1e-0d5d360e10ff
ms.openlocfilehash: 8bfa20f55afd85019795fdd40548158c2f49e126
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514666"
---
# <a name="iid_is"></a>iid_is

Specifica l'IID dell'interfaccia COM a cui fa riferimento un puntatore a interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
[ iid_is("expression") ]
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Espressione del linguaggio C che specifica un IID di un'interfaccia COM a cui fa riferimento un puntatore a interfaccia.

## <a name="remarks"></a>Note

L'attributo **iid_is** C++ ha la stessa funzionalità dell'attributo MIDL di [iid_is](/windows/win32/Midl/iid-is) .

## <a name="example"></a>Esempio

Il codice seguente illustra l'uso di **iid_is**:

```cpp
// cpp_attr_ref_iid_is.cpp
// compile with: /LD
#include "wtypes.h"
#include "unknwn.h"
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl : IDispatch
{
   [id(1)] HRESULT CreateInstance([in] REFIID riid,[out, iid_is("riid")]
   IUnknown ** ppvObject);
};

[module(name="ATLFIRELib")];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, membro dati|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)