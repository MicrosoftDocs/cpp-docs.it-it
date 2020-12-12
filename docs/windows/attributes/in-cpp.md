---
description: 'Altre informazioni su: in (C++)'
title: in (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.in
helpviewer_keywords:
- in attribute
ms.assetid: 7b450cc4-4d2e-4910-a195-7487c6b7c373
ms.openlocfilehash: c4d19fcf7adc767986306a3ef55b26a2cc91dccf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321376"
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

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[DefaultValue](defaultvalue.md)<br/>
[id](id.md)<br/>
[out](out-cpp.md)
