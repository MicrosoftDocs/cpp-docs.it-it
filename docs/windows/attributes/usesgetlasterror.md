---
title: usesgetlasterror (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.usesgetlasterror
helpviewer_keywords:
- usesgetlasterror attribute
ms.assetid: d149e33d-35a7-46cb-9137-ae6883d86122
ms.openlocfilehash: 44a1a55114bcf2466aa5b084f2b53c5457f1a0aa
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50487022"
---
# <a name="usesgetlasterror"></a>usesgetlasterror

Indica al chiamante che se si verifica un errore quando si chiama tale funzione, quindi il chiamante può quindi chiamare `GetLastError` per recuperare il codice di errore.

## <a name="syntax"></a>Sintassi

```cpp
[usesgetlasterror]
```

## <a name="remarks"></a>Note

Il **usesgetlasterror** attributi di C++ ha la stessa funzionalità come la [usesgetlasterror](/windows/desktop/Midl/usesgetlasterror) attributo MIDL.

## <a name="example"></a>Esempio

Vedere le [idl_module](idl-module.md) esempio per un esempio di come usare **usesgetlasterror**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**modulo** attributo|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)