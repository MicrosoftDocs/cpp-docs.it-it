---
title: satype (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.satype
helpviewer_keywords:
- satype attribute
ms.assetid: 1716590b-6bcb-4aba-b1bc-82f7335f02c3
ms.openlocfilehash: 16da256f491dbb0002d92cadaceda14a49eb2192
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842780"
---
# <a name="satype"></a>satype

Specifica il tipo di dati della `SAFEARRAY` struttura.

## <a name="syntax"></a>Sintassi

```cpp
[ satype(data_type) ]
```

### <a name="parameters"></a>Parametri

*data_type*<br/>
Tipo di dati per la `SAFEARRAY` struttura di dati passata come parametro a un metodo di interfaccia.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|nessuno|

## <a name="remarks"></a>Osservazioni

L'attributo **satype** di C++ specifica il tipo di dati di `SAFEARRAY` .

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
[Attributi del parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[id](id.md)
