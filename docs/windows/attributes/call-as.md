---
title: call_as (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.call_as
helpviewer_keywords:
- call_as attribute
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
ms.openlocfilehash: 755741faec6c0ba702d372ca8dee486edcb72ef3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80167334"
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

## <a name="remarks"></a>Osservazioni

L'attributo **call_as** C++ ha la stessa funzionalità dell'attributo [call_as](/windows/win32/Midl/call-as) MIDL.

## <a name="example"></a>Esempio

Il codice seguente illustra come è possibile usare **call_as** per eseguire il mapping di una funzione non (`f1`) a una funzione utilizzabile in remoto (`Remf1`):

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
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[local](local-cpp.md)
