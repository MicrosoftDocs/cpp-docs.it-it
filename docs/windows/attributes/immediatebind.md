---
title: immediatebind (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.immediatebind
helpviewer_keywords:
- immediatebind attribute
ms.assetid: 186d40e6-9166-4d0c-9853-4e7e4d25226f
ms.openlocfilehash: d5241a6972ea0444a980e3e868c44e7e0c15dc64
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833049"
---
# <a name="immediatebind"></a>immediatebind

Indica che il database riceverà immediatamente una notifica di tutte le modifiche apportate a una proprietà di un oggetto associato a dati.

## <a name="syntax"></a>Sintassi

```cpp
[immediatebind]
```

## <a name="remarks"></a>Osservazioni

L'attributo **immediatebind** di C++ ha la stessa funzionalità dell'attributo MIDL di [immediatebind](/windows/win32/Midl/immediatebind) .

## <a name="example"></a>Esempio

Per un esempio su come usare **immediatebind**, vedere [Bindable](bindable.md) .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[defaultbind](defaultbind.md)<br/>
[displaybind](displaybind.md)<br/>
[requestedit](requestedit.md)
