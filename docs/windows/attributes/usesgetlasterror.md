---
description: 'Altre informazioni su: usesgetlasterror'
title: usesgetlasterror (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.usesgetlasterror
helpviewer_keywords:
- usesgetlasterror attribute
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
ms.openlocfilehash: f43ae005e2f888f4318900cbde58f449011bd15e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329510"
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

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)
