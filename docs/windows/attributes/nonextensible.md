---
title: nonextensible (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.nonextensible
helpviewer_keywords:
- nonextensible attribute
ms.assetid: c7ef1554-809f-4ea0-a7cd-dc7786d40c3e
ms.openlocfilehash: ed396b3d55e16cf195949c713ab574812b796a1a
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59032076"
---
# <a name="nonextensible"></a>nonextensible

Specifica che il `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non possono essere estese con membri aggiuntivi in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
[nonextensible]
```

## <a name="remarks"></a>Note

Il **nonextensible** attributi di C++ ha la stessa funzionalità come la [nonextensible](/windows/desktop/Midl/nonextensible) attributo MIDL.

Sfrutta **nonextensible** richiede inoltre il [oleautomation](oleautomation.md) attributo.

## <a name="example"></a>Esempio

Il codice seguente illustra un uso del **nonextensible** attributo:

```cpp
// cpp_attr_ref_nonextensible.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];
[export] typedef long HRESULT;

[dual, nonextensible, ms_union, oleautomation,
uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl
{
   HRESULT procedure (int i);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**|
|**Ripetibile**|No|
|**Attributi obbligatori**|`dual` e `oleautomation`, o `dispinterface`|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)