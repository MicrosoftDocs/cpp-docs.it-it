---
title: size_is (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.size_is
helpviewer_keywords:
- size_is attribute
ms.assetid: 70192d09-f6c5-4d52-b3fe-303f8cb10aa5
ms.openlocfilehash: 504f1bf72b8ffa15e8df50bb00c86ef909688f1e
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514036"
---
# <a name="size_is"></a>size_is

Specificare le dimensioni della memoria allocata per i puntatori dimensionati, i puntatori dimensionati ai puntatori di dimensioni e le matrici mono o multidimensionali.

## <a name="syntax"></a>Sintassi

```cpp
[ size_is("expression") ]
```

### <a name="parameters"></a>Parametri

*expression*<br/>
Dimensione della memoria allocata per i puntatori di dimensione.

## <a name="remarks"></a>Note

L'attributo **size_is** C++ ha la stessa funzionalità dell'attributo MIDL di [size_is](/windows/win32/Midl/size-is) .

## <a name="example"></a>Esempio

Vedere l'esempio relativo a [first_is](first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Campo in **struct** o **Union**, parametro interface, metodo Interface|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`max_is`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[last_is](last-is.md)<br/>
[max_is](max-is.md)<br/>
[length_is](length-is.md)