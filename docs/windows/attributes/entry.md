---
title: entry (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.entry
helpviewer_keywords:
- entry attribute
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
ms.openlocfilehash: 63e5ccebb1d3844af8dd11b4b094abe96e3e257c
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845315"
---
# <a name="entry"></a>entry

Specifica una funzione o una costante esportata in un modulo identificando il punto di ingresso nella DLL.

## <a name="syntax"></a>Sintassi

```cpp
[ entry(id) ]
```

### <a name="parameters"></a>Parametri

*id*<br/>
ID del punto di ingresso.

## <a name="remarks"></a>Osservazioni

La **voce** C++ attribute ha la stessa funzionalità della [voce](/windows/win32/Midl/entry) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio per [idl_module](idl-module.md) per un esempio di utilizzo della **voce**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Attributo `idl_module`|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)
