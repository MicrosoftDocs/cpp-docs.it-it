---
description: 'Altre informazioni su: call_as'
title: call_as (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.call_as
helpviewer_keywords:
- call_as attribute
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
ms.openlocfilehash: de407da1401479327185c6133c625d61e1e221cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247449"
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

## <a name="remarks"></a>Commenti

L'attributo **call_as** C++ ha la stessa funzionalità dell'attributo [call_as](/windows/win32/Midl/call-as) MIDL.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come è possibile utilizzare **call_as** per eseguire il mapping di una funzione non ( `f1` ) a una funzione utilizzabile in remoto ( `Remf1` ):

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[locale](local-cpp.md)
