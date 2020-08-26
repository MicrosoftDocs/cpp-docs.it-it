---
title: propput (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.propput
helpviewer_keywords:
- propput attribute
ms.assetid: 1f84dda9-9cce-4e16-aaf0-b2c5219827f2
ms.openlocfilehash: 11f216dd183f3977aee9af90c6579d01cad45fdf
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88839946"
---
# <a name="propput"></a>propput

Specifica un funzione di impostazione delle proprietà.

## <a name="syntax"></a>Sintassi

```cpp
[propput]
```

## <a name="remarks"></a>Osservazioni

L'attributo **propput** di C++ ha la stessa funzionalità dell'attributo MIDL di [propput](/windows/win32/Midl/propput) .

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di uso di **propput**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|`propget`, `propputref`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[propget](propget.md)<br/>
[propputref](propputref.md)
