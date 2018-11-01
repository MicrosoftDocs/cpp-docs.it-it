---
title: size_is (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.size_is
helpviewer_keywords:
- size_is attribute
ms.assetid: 70192d09-f6c5-4d52-b3fe-303f8cb10aa5
ms.openlocfilehash: 95b0e16e5f5d085e526f45e8e98898474fc5a17f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50449439"
---
# <a name="sizeis"></a>size_is

Specificare le dimensioni della memoria allocata per i puntatori con dimensioni, ridimensionati i puntatori ai puntatori a dimensioni e unidimensionali o le matrici multidimensionali.

## <a name="syntax"></a>Sintassi

```cpp
[ size_is("expression") ]
```

### <a name="parameters"></a>Parametri

*Espressione*<br/>
Le dimensioni della memoria allocata per le dimensioni i puntatori.

## <a name="remarks"></a>Note

Il **size_is** attributi di C++ ha la stessa funzionalità come la [size_is](/windows/desktop/Midl/size-is) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [first_is](first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Nel campo **struct** oppure **union**, parametro di interfaccia, metodo di interfaccia|
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