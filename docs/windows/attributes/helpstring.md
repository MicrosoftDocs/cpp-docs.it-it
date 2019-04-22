---
title: helpstring (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.helpstring
helpviewer_keywords:
- helpstring attribute [C++]
ms.assetid: 0401e905-a63e-4fad-98d0-d1efea111966
ms.openlocfilehash: 623b2c7fb4ce7c3e5de87d21f012d008720fdee2
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59022205"
---
# <a name="helpstring"></a>helpstring

Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.

## <a name="syntax"></a>Sintassi

```cpp
[ helpstring("string") ]
```

### <a name="parameters"></a>Parametri

*string*<br/>
Il testo della stringa della Guida.

## <a name="remarks"></a>Note

Il **helpstring** attributi di C++ ha la stessa funzionalità come la [helpstring](/windows/desktop/Midl/helpstring) attributo MIDL.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [defaultvalue](defaultvalue.md) per un esempio di come usare **helpstring**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interfaccia**, **typedef**, **classe**, metodo, proprietà|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di interfaccia](interface-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[helpfile](helpfile.md)<br/>
[helpcontext](helpcontext.md)