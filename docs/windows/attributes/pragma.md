---
description: 'Altre informazioni su: pragma'
title: pragma (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.pragma
helpviewer_keywords:
- pragma attribute
ms.assetid: 3f90d023-b8b5-4007-8311-008bb72cbea1
ms.openlocfilehash: 1c9b9313b05d5f6b6123189b823ef750cb7c16a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327398"
---
# <a name="pragma"></a>pragma

Genera la stringa specificata nel file con estensione IDL generato senza utilizzare le virgolette.

## <a name="syntax"></a>Sintassi

```cpp
[ pragma(pragma_statement) ];
```

### <a name="parameters"></a>Parametri

*pragma_statement*<br/>
Il pragma che si desidera inserire nel file con estensione IDL generato.

## <a name="remarks"></a>Commenti

L'attributo **pragma** C++ ha la stessa funzionalità dell'attributo [pragma](/windows/win32/Midl/pragma) MIDL.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_pragma.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="MyLib")];
[pragma(pack(4))];

[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface A
{
   [id(1)] HRESULT MyMethod ([in, satype("BSTR")] SAFEARRAY **p);
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[pack](../../preprocessor/pack.md)
