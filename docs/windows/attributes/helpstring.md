---
title: helpstring (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpstring
helpviewer_keywords:
- helpstring attribute [C++]
ms.assetid: 0401e905-a63e-4fad-98d0-d1efea111966
ms.openlocfilehash: 57f7a5bfd5bd0e7a6509797ec34e88531304ec92
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88831034"
---
# <a name="helpstring"></a>helpstring

Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.

## <a name="syntax"></a>Sintassi

```cpp
[ helpstring("string") ]
```

### <a name="parameters"></a>Parametri

*string*<br/>
Testo della stringa della guida.

## <a name="remarks"></a>Osservazioni

L'attributo **helpstring** di C++ ha la stessa funzionalità dell'attributo MIDL di [helpstring](/windows/win32/Midl/helpstring) .

## <a name="example"></a>Esempio

Vedere l'esempio per [DefaultValue](defaultvalue.md) per un esempio di come usare **helpstring**.

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**interfaccia**, **`typedef`** , **`class`** , metodo, proprietà|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[helpfile](helpfile.md)<br/>
[helpcontext](helpcontext.md)
