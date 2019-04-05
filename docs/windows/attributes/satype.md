---
title: satype (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.satype
helpviewer_keywords:
- satype attribute
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
ms.openlocfilehash: 7588e8d855d648309c46d981898cfbbf7888f4c9
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59025724"
---
# <a name="satype"></a>satype

Specifica il tipo di dati di `SAFEARRAY` struttura.

## <a name="syntax"></a>Sintassi

```cpp
[ satype(data_type) ]
```

### <a name="parameters"></a>Parametri

*data_type*<br/>
Tipo di dati per il `SAFEARRAY` struttura dei dati che viene passato come parametro a un metodo di interfaccia.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

## <a name="remarks"></a>Note

Il **satype** C++ attributo specifica il tipo di dati di `SAFEARRAY`.

> [!NOTE]
> Un livello di riferimento indiretto viene eliminato dal `SAFEARRAY` puntatore nel file con estensione IDL generato dal modo in cui viene dichiarata nel file con estensione cpp.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_satype.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyModule")];
[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface A {
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);
};
```

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi dei parametri](parameter-attributes.md)<br/>
[Attributi del metodo](method-attributes.md)<br/>
[ID](id.md)