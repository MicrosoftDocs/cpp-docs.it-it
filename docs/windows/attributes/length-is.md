---
title: length_is (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.length_is
helpviewer_keywords:
- length_is attribute
ms.assetid: 1d99b883-84bb-4b1e-b098-eb780fc94f40
ms.openlocfilehash: 4f4bfe233e3228c50aee734de4ad979c38a55fda
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514535"
---
# <a name="length_is"></a>length_is

Specifica il numero di elementi della matrice da trasmettere.

## <a name="syntax"></a>Sintassi

```cpp
[ length_is("expression") ]
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Una o più espressioni del linguaggio C. Sono consentiti slot di argomento vuoti.

## <a name="remarks"></a>Note

L'attributo **length_is** C++ ha la stessa funzionalità dell'attributo MIDL di [length_is](/windows/win32/Midl/length-is) .

## <a name="example"></a>Esempio

Vedere [first_is](first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Campo in **struct** o **Union**, parametro interface, metodo Interface|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[max_is](max-is.md)<br/>
[last_is](last-is.md)<br/>
[size_is](size-is.md)