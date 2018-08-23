---
title: call_as | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.call_as
dev_langs:
- C++
helpviewer_keywords:
- call_as attribute
ms.assetid: a09d7f1f-353b-4870-9b45-f0284161695d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b5fffe1490587e36d39a959f75796093cbc32a0f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42601994"
---
# <a name="callas"></a>call_as

Consente a un [locale](../windows/local-cpp.md) funzione viene mappata a una funzione remota in modo che quando viene chiamata la funzione remota, viene richiamata la funzione locale.

## <a name="syntax"></a>Sintassi

```cpp
[ call_as(
   function
) ]
```

### <a name="parameters"></a>Parametri

*function*  
La funzione locale che si desidera siano chiamati quando viene richiamata una funzione remota.

## <a name="remarks"></a>Note

Il **call_as** attributi di C++ ha la stessa funzionalità come la [call_as](http://msdn.microsoft.com/library/windows/desktop/aa366748) attributo MIDL.

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

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[local](../windows/local-cpp.md)  