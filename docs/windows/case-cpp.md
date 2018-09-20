---
title: case (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.case
dev_langs:
- C++
helpviewer_keywords:
- case attribute
ms.assetid: 6fb883c3-0526-4932-a901-b4564dcaeb7d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e6b610ce888e91ed8029c4166fa79a847d700dba
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436520"
---
# <a name="case-c"></a>case (C++)

Utilizzato con il [switch_type](../windows/switch-type.md) dell'attributo un **union**.

## <a name="syntax"></a>Sintassi

```cpp
[ case(
   value
) ]
```

#### <a name="parameters"></a>Parametri

*valore*<br/>
Un possibile valore per il quale si desidera fornire l'elaborazione di input. Il tipo della **valore** può essere uno dei tipi seguenti:

- `int`

- `char`

- `boolean`

- `enum`

o un identificatore di tale tipo.

## <a name="remarks"></a>Note

Il **case** attributi di C++ ha la stessa funzionalità come la **case** attributo MIDL. Questo attributo viene utilizzato solo con il [switch_type](../windows/switch-type.md) attributo.

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

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[Attributi di classe](../windows/class-attributes.md)  