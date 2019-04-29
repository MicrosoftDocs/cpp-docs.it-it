---
title: length_is (C++ attributo COM)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.length_is
helpviewer_keywords:
- length_is attribute
ms.assetid: 1d99b883-84bb-4b1e-b098-eb780fc94f40
ms.openlocfilehash: 1de168606b57c801bc3dc1fb9aee76eb6f3d54c8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409304"
---
# <a name="lengthis"></a>length_is

Specifica il numero di elementi della matrice deve essere trasmesso.

## <a name="syntax"></a>Sintassi

```cpp
[ length_is("expression") ]
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Una o più espressioni del linguaggio C. Gli slot di argomenti vuoto sono consentiti.

## <a name="remarks"></a>Note

Il **length_is** C++ attributo ha la stessa funzionalità come il [length_is](/windows/desktop/Midl/length-is) attributo MIDL.

## <a name="example"></a>Esempio

Visualizzare [first_is](first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Nel campo **struct** oppure **union**, parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[max_is](max-is.md)<br/>
[last_is](last-is.md)<br/>
[size_is](size-is.md)