---
title: call_as (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.call_as
helpviewer_keywords:
- call_as attribute
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
ms.openlocfilehash: 16839f5a5040e6b0019005912782ba359178cc47
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579897"
---
# <a name="callas"></a>call_as

Consente a un [locale](local-cpp.md) funzione viene mappata a una funzione remota in modo che quando viene chiamata la funzione remota, viene richiamata la funzione locale.

## <a name="syntax"></a>Sintassi

```cpp
[ call_as(function) ]
```

### <a name="parameters"></a>Parametri

*function*<br/>
La funzione locale che si desidera siano chiamati quando viene richiamata una funzione remota.

## <a name="remarks"></a>Note

Il **call_as** attributi di C++ ha la stessa funzionalità come la [call_as](/windows/desktop/Midl/call-as) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente illustra come usare **call_as** eseguire il mapping di una funzione non utilizzabili in remoto (`f1`) a una funzione utilizzabile in remoto (`Remf1`):

```cpp
// cpp_attr_ref_call_as.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];
[dual, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMInterface {
   [local] HRESULT f1 ( int i );
   [call_as(f1)] HRESULT Remf1 ( int i );
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[local](local-cpp.md)