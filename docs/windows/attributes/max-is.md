---
title: max_is (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.max_is
helpviewer_keywords:
- max_is attribute
ms.assetid: 7c851f5c-6649-4d77-a792-247c37d8f560
ms.openlocfilehash: f2e6db997891817620c1b2c1f70cb310818dd346
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514423"
---
# <a name="max_is"></a>max_is

Definisce il valore massimo per un indice di matrice valido.

## <a name="syntax"></a>Sintassi

```cpp
[ max_is("expression") ]
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Una o più espressioni del linguaggio C. Sono consentiti slot di argomento vuoti.

## <a name="remarks"></a>Note

L'attributo **max_is** C++ ha la stessa funzionalità dell'attributo MIDL di [max_is](/windows/win32/Midl/max-is) .

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Campo in **struct** o **Union**, parametro interface, metodo Interface|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|**size_is**|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="example"></a>Esempio

Vedere [first_is](first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[last_is](last-is.md)<br/>
[length_is](length-is.md)<br/>
[size_is](size-is.md)