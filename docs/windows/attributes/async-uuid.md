---
description: 'Altre informazioni su: async_uuid'
title: async_uuid (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.async_uuid
helpviewer_keywords:
- async_uuid attribute
ms.assetid: 235cb0d7-be58-4dd9-983c-e2a21bbc42c6
ms.openlocfilehash: cb55fe66f05bfc7879470bfa6c64c00ffd2913e8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205330"
---
# <a name="async_uuid"></a>async_uuid

Specifica l'UUID che indica al compilatore MIDL di definire versioni sincrone e asincrone di un'interfaccia COM.

## <a name="syntax"></a>Sintassi

```cpp
[async_uuid (uuid)]
```

### <a name="parameters"></a>Parametri

*UUID*<br/>
UUID che identifica la versione dell'interfaccia.

## <a name="remarks"></a>Commenti

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

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)
