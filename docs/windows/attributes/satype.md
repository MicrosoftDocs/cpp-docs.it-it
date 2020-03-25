---
title: satype (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.satype
helpviewer_keywords:
- satype attribute
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
ms.openlocfilehash: 4619deec6d5e4e9083fbc7bcab53caee0101285c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80166276"
---
# <a name="satype"></a>satype

Specifica il tipo di dati della struttura `SAFEARRAY`.

## <a name="syntax"></a>Sintassi

```cpp
[ satype(data_type) ]
```

### <a name="parameters"></a>Parametri

*data_type*<br/>
Il tipo di dati per la struttura di dati `SAFEARRAY` passati come parametro a un metodo di interfaccia.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

## <a name="remarks"></a>Osservazioni

L'attributo **satype** C++ specifica il tipo di dati della `SAFEARRAY`.

> [!NOTE]
> Un livello di riferimento indiretto viene eliminato dal puntatore `SAFEARRAY` nel file con estensione IDL generato dal modo in cui viene dichiarata nel file con estensione cpp.

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
[Attributi di parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[id](id.md)
