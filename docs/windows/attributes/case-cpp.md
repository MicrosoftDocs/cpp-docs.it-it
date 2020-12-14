---
description: 'Altre informazioni su: case (C++)'
title: Case (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.case
helpviewer_keywords:
- case attribute
ms.assetid: 6fb883c3-0526-4932-a901-b4564dcaeb7d
ms.openlocfilehash: d851e662387425ca94cc6a03877babf011c7028b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247436"
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

## <a name="remarks"></a>Commenti

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Membro di un oggetto **`class`** o **`struct`**|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](class-attributes.md)
