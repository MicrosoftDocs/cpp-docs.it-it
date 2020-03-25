---
title: max_is (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.max_is
helpviewer_keywords:
- max_is attribute
ms.assetid: 7c851f5c-6649-4d77-a792-247c37d8f560
ms.openlocfilehash: b4931962febb1e68701aa3fe271e08f3aa8d9238
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80166757"
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

## <a name="remarks"></a>Osservazioni

L'attributo **max_is** C++ ha la stessa funzionalità dell'attributo [max_is](/windows/win32/Midl/max-is) MIDL.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Campo in **struct** o **Union**, parametro interface, metodo Interface|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
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
