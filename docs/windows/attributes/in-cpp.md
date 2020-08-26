---
title: in (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.in
helpviewer_keywords:
- in attribute
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
ms.openlocfilehash: 2838a00ffe365f42fb7778b654306eb0c73b5996
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842234"
---
# <a name="in-c"></a>in (C++)

Indica che un parametro deve essere passato dalla routine chiamante alla routine chiamata.

## <a name="syntax"></a>Sintassi

```cpp
[in]
```

## <a name="remarks"></a>Osservazioni

L'attributo **in** C++ ha la stessa funzionalità di [nell'](/windows/win32/Midl/in) attributo MIDL.

## <a name="example"></a>Esempio

Per un esempio di come usare **in**, vedere [Bindable](bindable.md) .

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|**retval**|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[DefaultValue](defaultvalue.md)<br/>
[id](id.md)<br/>
[out](out-cpp.md)
