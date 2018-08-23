---
title: intervallo (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.range
dev_langs:
- C++
helpviewer_keywords:
- range attribute
ms.assetid: f352f79e-ecb3-4cdd-9cdd-8406ef473594
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3c1ad17b6f658129ff33be28843ebb48b86f7845
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599627"
---
# <a name="range-c"></a>range (C++)

Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
[ range(
   low,
   high
) ]
```

### <a name="parameters"></a>Parametri

*low*  
Il valore minimo dell'intervallo.

*high*  
Il valore massimo dell'intervallo.

## <a name="remarks"></a>Note

Il **intervallo** attributi di C++ ha la stessa funzionalità come la [intervallo](http://msdn.microsoft.com/library/windows/desktop/aa367151) attributo MIDL.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_range.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];

[object, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
   HRESULT length_is1([in, range(0, 999)] long f, [in, length_is(f)] char array[10]);
   HRESULT length_is2([in, range(-99, -1)] long f, [in, length_is("f"), size_is(10)] char *array);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia, parametro di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[Attributi di parametro](../windows/parameter-attributes.md)  
[Attributi di membro dati](../windows/data-member-attributes.md)  