---
title: propputref (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.propputref
helpviewer_keywords:
- propputref attribute
ms.assetid: 9b0aed74-fdc7-4e59-9117-949bea4f86dd
ms.openlocfilehash: dbb5d5966fc82f69be0ed7d2fa0a66ad558a7915
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88839907"
---
# <a name="propputref"></a>propputref

Specifica una funzione di impostazione di proprietà che usa un riferimento invece di un valore.

## <a name="syntax"></a>Sintassi

```cpp
[propputref]
```

## <a name="remarks"></a>Osservazioni

L'attributo **propputref** di C++ ha la stessa funzionalità dell'attributo MIDL di [propputref](/windows/win32/Midl/propputref) .

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di uso di **propputref**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|`propget`, `propput`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[propget](propget.md)<br/>
[propput](propput.md)
