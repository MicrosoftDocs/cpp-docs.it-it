---
title: PTR (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.ptr
helpviewer_keywords:
- ptr attribute
ms.assetid: 95eaea57-a5be-45f6-a612-ba2c9bc4645a
ms.openlocfilehash: 9e45cd529562fe238f96f98cf7f91e15df34270a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224383"
---
# <a name="ptr"></a>ptr

Designa un puntatore come puntatore completo.

## <a name="syntax"></a>Sintassi

```cpp
[ptr]
```

## <a name="remarks"></a>Osservazioni

L'attributo C++ **ptr** ha la stessa funzionalità dell'attributo MIDL [ptr](/windows/win32/Midl/ptr) .

## <a name="example"></a>Esempio

Vedere l'esempio per [DefaultValue](defaultvalue.md) per un esempio di utilizzo di **ptr**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro di interfaccia, metodo di interfaccia,**`typedef`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)
