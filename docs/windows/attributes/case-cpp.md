---
title: case (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.case
helpviewer_keywords:
- case attribute
ms.assetid: 6fb883c3-0526-4932-a901-b4564dcaeb7d
ms.openlocfilehash: b3058f2fe6f35e1b11d4790780cb0fcdcaada706
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62148445"
---
# <a name="case-c"></a>case (C++)

Utilizzato con il [switch_type](switch-type.md) dell'attributo un **union**.

## <a name="syntax"></a>Sintassi

```cpp
[ case(value) ]
```

#### <a name="parameters"></a>Parametri

*value*<br/>
Un possibile valore per il quale si desidera fornire l'elaborazione di input. Il tipo della **valore** può essere uno dei tipi seguenti:

- `int`

- `char`

- `boolean`

- `enum`

o un identificatore di tale tipo.

## <a name="remarks"></a>Note

Il **case** attributi di C++ ha la stessa funzionalità come la **case** attributo MIDL. Questo attributo viene utilizzato solo con il [switch_type](switch-type.md) attributo.

## <a name="example"></a>Esempio

Il codice seguente illustra un uso le **caso** attributo:

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
|**Si applica a**|Membro di un **classe** o **struct**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](class-attributes.md)