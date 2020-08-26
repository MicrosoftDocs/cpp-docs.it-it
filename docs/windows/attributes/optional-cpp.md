---
title: facoltativo (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.optional
helpviewer_keywords:
- optional attribute
ms.assetid: 86656a66-8e11-4589-8e30-9b0f34eeed03
ms.openlocfilehash: 31e2dbac988cdbac8aca2d01a70177825d764a5b
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842169"
---
# <a name="optional-c"></a>optional (C++)

Specifica un parametro facoltativo per una funzione membro.

## <a name="syntax"></a>Sintassi

```cpp
[optional]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ **facoltativo** ha la stessa funzionalità dell'attributo MIDL [facoltativo](/windows/win32/Midl/optional) .

## <a name="example"></a>Esempio

Il codice seguente illustra come può essere usato **facoltativo** :

```cpp
// cpp_attr_ref_optional.cpp
// compile with: /LD
#include "unknwn.h"
[module(name="ATLFIRELib")];

[dispinterface, uuid("00000000-0000-0000-0000-000000000001")]
__interface IFireTabCtrl : IDispatch
{
   [id(1)] long procedure ([in, optional] VARIANT i);
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Parametro interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)
