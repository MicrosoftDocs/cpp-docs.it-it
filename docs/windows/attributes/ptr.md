---
title: PTR (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.ptr
helpviewer_keywords:
- ptr attribute
ms.assetid: 95eaea57-a5be-45f6-a612-ba2c9bc4645a
ms.openlocfilehash: 2c712a2d9c85e0fe8fd8c4dbad5c7f48812ab1a2
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030128"
---
# <a name="ptr"></a>ptr

Definisce un puntatore come puntatore completo.

## <a name="syntax"></a>Sintassi

```cpp
[ptr]
```

## <a name="remarks"></a>Note

Il **ptr** attributi di C++ ha la stessa funzionalità come la [ptr](/windows/desktop/Midl/ptr) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [defaultvalue](defaultvalue.md) per un esempio dell'uso dei **ptr**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia, **(typedef)**|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi del metodo](method-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)