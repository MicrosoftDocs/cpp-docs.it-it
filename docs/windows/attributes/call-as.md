---
title: call_as (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.call_as
helpviewer_keywords:
- call_as attribute
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
ms.openlocfilehash: f36cf8d1be589cc614a6def583b00af00aabdb61
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69501799"
---
# <a name="call_as"></a>call_as

Consente di eseguire il mapping di una funzione [locale](local-cpp.md) a una funzione remota in modo che, quando viene chiamata la funzione remota, venga richiamata la funzione locale.

## <a name="syntax"></a>Sintassi

```cpp
[ call_as(function) ]
```

### <a name="parameters"></a>Parametri

*function*<br/>
Funzione locale che si desidera chiamare quando viene richiamata una funzione remota.

## <a name="remarks"></a>Note

L'attributo **call_as** C++ ha la stessa funzionalità dell'attributo MIDL di [call_as](/windows/win32/Midl/call-as) .

## <a name="example"></a>Esempio

Il codice seguente illustra come è possibile usare **call_as** per eseguire il mapping di una`f1`funzione non () a una`Remf1`funzione utilizzabile in remoto ():

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
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[local](local-cpp.md)