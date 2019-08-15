---
title: Unique (C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.unique
helpviewer_keywords:
- unique attribute
ms.assetid: abd7ed14-5ae7-44a8-8333-0058e9c92b2f
ms.openlocfilehash: 91e563ed121ba09e0c2ca2660f30c75956232ea0
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514910"
---
# <a name="unique-c"></a>unique (C++)

Specifica un puntatore univoco.

## <a name="syntax"></a>Sintassi

```cpp
[unique]
```

## <a name="remarks"></a>Note

L'attributo **Unique** C++ ha la stessa funzionalità dell'attributo MIDL [univoco](/windows/win32/Midl/unique) .

## <a name="example"></a>Esempio

Vedere l'esempio [ref](ref-cpp.md) per un esempio di utilizzo di **Unique**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**typedef**, **struct**, **Union**, parametro di interfaccia, metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di parametro](parameter-attributes.md)