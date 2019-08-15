---
title: usesgetlasterror (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.usesgetlasterror
helpviewer_keywords:
- usesgetlasterror attribute
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
ms.openlocfilehash: b14316bd929f4b41b13a76c41e94b31b7534e9d8
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513888"
---
# <a name="usesgetlasterror"></a>usesgetlasterror

Indica al chiamante che se si verifica un errore durante la chiamata a tale funzione, il chiamante può quindi `GetLastError` chiamare per recuperare il codice di errore.

## <a name="syntax"></a>Sintassi

```cpp
[usesgetlasterror]
```

## <a name="remarks"></a>Note

L'attributo **usesgetlasterror** C++ ha la stessa funzionalità dell'attributo MIDL di [usesgetlasterror](/windows/win32/Midl/usesgetlasterror) .

## <a name="example"></a>Esempio

Vedere l'esempio [idl_module](idl-module.md) per un esempio di come usare **usesgetlasterror**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|attributo **Module**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)