---
title: immediatebind (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.immediatebind
helpviewer_keywords:
- immediatebind attribute
ms.assetid: 186d40e6-9166-4d0c-9853-4e7e4d25226f
ms.openlocfilehash: 8c659f23d6828616c4a48522b61330336e994cbb
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514647"
---
# <a name="immediatebind"></a>immediatebind

Indica che il database riceverà immediatamente una notifica di tutte le modifiche apportate a una proprietà di un oggetto associato a dati.

## <a name="syntax"></a>Sintassi

```cpp
[immediatebind]
```

## <a name="remarks"></a>Note

L'attributo **immediatebind** C++ ha la stessa funzionalità dell'attributo MIDL di [immediatebind](/windows/win32/Midl/immediatebind) .

## <a name="example"></a>Esempio

Per un esempio su come usare **immediatebind**, vedere [Bindable](bindable.md) .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[defaultbind](defaultbind.md)<br/>
[displaybind](displaybind.md)<br/>
[requestedit](requestedit.md)