---
description: 'Altre informazioni su: propget'
title: propget (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.propget
helpviewer_keywords:
- propget attribute
ms.assetid: c9d4a97f-36dd-4b61-8eb0-b1a217598f14
ms.openlocfilehash: 9fe284fb35d4753fbc3e124458200a9882838450
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327406"
---
# <a name="propget"></a>propget

Specifica una funzione di accesso alla proprietà.

## <a name="syntax"></a>Sintassi

```cpp
[propget]
```

## <a name="remarks"></a>Osservazioni

L'attributo **propget** di C++ ha la stessa funzionalità dell'attributo MIDL di [propget](/windows/win32/Midl/propget) .

## <a name="example"></a>Esempio

Vedere l'esempio per [associabile](bindable.md) per un esempio di uso di **propget**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Metodo|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|`propput`, `propputref`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[propput](propput.md)<br/>
[propputref](propputref.md)
