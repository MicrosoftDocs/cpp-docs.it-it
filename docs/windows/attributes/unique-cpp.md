---
description: 'Altre informazioni su: Unique (C++)'
title: Unique (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.unique
helpviewer_keywords:
- unique attribute
ms.assetid: abd7ed14-5ae7-44a8-8333-0058e9c92b2f
ms.openlocfilehash: 46db247e5e2106821fb3ab36746c1586409388ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118316"
---
# <a name="unique-c"></a>unique (C++)

Specifica un puntatore univoco.

## <a name="syntax"></a>Sintassi

```cpp
[unique]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ **univoco** ha la stessa funzionalità dell'attributo MIDL [univoco](/windows/win32/Midl/unique) .

## <a name="example"></a>Esempio

Vedere l'esempio [ref](ref-cpp.md) per un esempio di utilizzo di **Unique**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`typedef`**, **`struct`** , **`union`** , parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)
