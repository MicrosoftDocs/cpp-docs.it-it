---
title: usesgetlasterror (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.usesgetlasterror
helpviewer_keywords:
- usesgetlasterror attribute
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
ms.openlocfilehash: e3d3c292554350d85296971a9bd3620909ef47c7
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831632"
---
# <a name="usesgetlasterror"></a>usesgetlasterror

Indica al chiamante che se si verifica un errore durante la chiamata a tale funzione, il chiamante può quindi chiamare `GetLastError` per recuperare il codice di errore.

## <a name="syntax"></a>Sintassi

```cpp
[usesgetlasterror]
```

## <a name="remarks"></a>Osservazioni

L'attributo **usesgetlasterror** di C++ ha la stessa funzionalità dell'attributo MIDL di [usesgetlasterror](/windows/win32/Midl/usesgetlasterror) .

## <a name="example"></a>Esempio

Vedere l'esempio [idl_module](idl-module.md) per un esempio di come usare **usesgetlasterror**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|attributo **Module**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)
