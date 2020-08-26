---
title: async_uuid (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.async_uuid
helpviewer_keywords:
- async_uuid attribute
ms.assetid: 235cb0d7-be58-4dd9-983c-e2a21bbc42c6
ms.openlocfilehash: cb0abdcedc26c5ffe197e52d5da4fbad1ec516d2
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88836244"
---
# <a name="async_uuid"></a>async_uuid

Specifica l'UUID che indica al compilatore MIDL di definire versioni sincrone e asincrone di un'interfaccia COM.

## <a name="syntax"></a>Sintassi

```cpp
[async_uuid (uuid)]
```

### <a name="parameters"></a>Parametri

*uuid*<br/>
UUID che identifica la versione dell'interfaccia.

## <a name="remarks"></a>Osservazioni

L'attributo **async_uuid** C++ ha la stessa funzionalità dell'attributo [async_uuid](/windows/win32/Midl/async-uuid) MIDL.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_async_uuid.cpp
// compile with: /LD
#include <Windows.h>
[module(name="Test")];
[object, uuid("9e66a290-4365-11d2-a997-00c04fa37ddb"),
async_uuid("e8583106-38fd-487e-912e-4fc8645c677e")]
__interface ICustom {
   HRESULT Custom([in] long l, [out, retval] long *pLong);
};
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|`interface`|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|**Dual**, **interfaccia dispatch**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
