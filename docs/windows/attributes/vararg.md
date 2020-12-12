---
description: 'Altre informazioni su: vararg'
title: vararg (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.vararg
helpviewer_keywords:
- vararg attribute
ms.assetid: 20fc3244-18e9-411c-990e-d5b4fa29a570
ms.openlocfilehash: 7eb2df5f0a2be212bc49c69f329f875f02bf408d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329505"
---
# <a name="vararg"></a>vararg

Specifica che la funzione assume un numero variabile di argomenti.

## <a name="syntax"></a>Sintassi

```cpp
[vararg]
```

## <a name="remarks"></a>Osservazioni

L'attributo **vararg** di C++ ha la stessa funzionalità dell'attributo MIDL di [vararg](/windows/win32/Midl/vararg) .

## <a name="example"></a>Esempio

Il codice seguente illustra l'uso di **vararg**:

```cpp
// cpp_attr_ref_vararg.cpp
// compile with: /LD
#include "unknwn.h"
#include "oaidl.h"
[module(name="MyLibrary")];

[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface X : public IUnknown
{
   [vararg] HRESULT Button([in, satype(VARIANT)]SAFEARRAY *psa);
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
[Attributi di metodo](method-attributes.md)
