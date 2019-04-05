---
title: iid_is (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.iid_is
helpviewer_keywords:
- iid_is attribute
ms.assetid: 2f9b42a9-7130-4b08-9b1e-0d5d360e10ff
ms.openlocfilehash: b91fb7937bb0e20f2500eace9695bc0ddba21b26
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038557"
---
# <a name="iidis"></a>iid_is

Specifica l'IID dell'interfaccia COM a cui punta un puntatore a interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
[ iid_is("expression") ]
```

### <a name="parameters"></a>Parametri

*espressione*<br/>
Un'espressione del linguaggio C che specifica un IID di un'interfaccia COM a cui punta un puntatore a interfaccia.

## <a name="remarks"></a>Note

Il **iid_is** attributi di C++ ha la stessa funzionalità come la [iid_is](/windows/desktop/Midl/iid-is) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare **iid_is**:

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
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi dei parametri](parameter-attributes.md)