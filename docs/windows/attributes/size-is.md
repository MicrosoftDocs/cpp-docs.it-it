---
title: size_is (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.size_is
helpviewer_keywords:
- size_is attribute
ms.assetid: 70192d09-f6c5-4d52-b3fe-303f8cb10aa5
ms.openlocfilehash: dd0ec8622dfffdf9a0578c86d75d313042cc3c01
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88841766"
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

## <a name="remarks"></a>Osservazioni

L'attributo **size_is** C++ ha la stessa funzionalità dell'attributo [size_is](/windows/win32/Midl/size-is) MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio per [first_is](first-is.md) per un esempio di come specificare una sezione di una matrice.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Campo in **`struct`** o **`union`** , parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|`max_is`|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi del parametro](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[last_is](last-is.md)<br/>
[max_is](max-is.md)<br/>
[length_is](length-is.md)
