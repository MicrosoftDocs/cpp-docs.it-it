---
title: intervallo (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 10/02/2018
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
ms.openlocfilehash: 593cfbd4b7430c3f6ac5b4f2ab1053665136ab25
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791157"
---
# <a name="range-c"></a>range (C++)

Specifica un intervallo di valori consentiti per gli argomenti o i campi i cui valori vengono impostati in fase di esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
[ range(low, high) ]
```

### <a name="parameters"></a>Parametri

*low*<br/>
Il valore minimo dell'intervallo.

*high*<br/>
Il valore massimo dell'intervallo.

## <a name="remarks"></a>Note

Il **intervallo** attributi di C++ ha la stessa funzionalità come la [intervallo](/windows/desktop/Midl/range) attributo MIDL.

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

Per altre informazioni sui contesti di attributi, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[Attributi di membro dati](data-member-attributes.md)  