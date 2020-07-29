---
title: Case (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.case
helpviewer_keywords:
- case attribute
ms.assetid: 6fb883c3-0526-4932-a901-b4564dcaeb7d
ms.openlocfilehash: 23330b7b220873725dc566df947f3f3596160029
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232807"
---
# <a name="case-c"></a>case (C++)

Utilizzato con l'attributo [switch_type](switch-type.md) in un oggetto **`union`** .

## <a name="syntax"></a>Sintassi

```cpp
[ case(value) ]
```

#### <a name="parameters"></a>Parametri

*value*<br/>
Un possibile valore di input per il quale si desidera fornire l'elaborazione. Il tipo di **valore** può essere uno dei tipi seguenti:

- **`int`**

- **`char`**

- `boolean`

- **`enum`**

o un identificatore di tale tipo.

## <a name="remarks"></a>Osservazioni

L'attributo del **caso** C++ ha la stessa funzionalità dell'attributo del **case** MIDL. Questo attributo viene utilizzato solo con l'attributo [switch_type](switch-type.md) .

## <a name="example"></a>Esempio

Il codice seguente illustra l'uso dell'attributo **case** :

```cpp
// cpp_attr_ref_case.cpp
// compile with: /LD
#include <unknwn.h>
[export]
struct SizedValue2 {
   [switch_type(char), switch_is(kind)] union {
      [case(1), string]
          wchar_t* wval;
      [default, string]
          char* val;
   };
    char kind;
};
[module(name="ATLFIRELib")];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Membro di un oggetto **`class`** o**`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
