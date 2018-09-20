---
title: switch_type | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.switch_type
dev_langs:
- C++
helpviewer_keywords:
- switch_type attribute
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0ed603a416e7f56e4415ce36ad4b3fd8059d311f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46415746"
---
# <a name="switchtype"></a>switch_type

Identifica il tipo della variabile utilizzata come l'unione discriminante.

## <a name="syntax"></a>Sintassi

```cpp
[switch_type(
type
}]
```

### <a name="parameters"></a>Parametri

*type*<br/>
Il tipo di commutatore, può essere di tipo integer, carattere, booleano o enumerazione.

## <a name="remarks"></a>Note

Il **switch_type** attributi di C++ ha la stessa funzionalità come la [switch_type](/windows/desktop/Midl/switch-type) attributo MIDL.

Gli attributi di C++ non supportano [incapsulato unioni](/windows/desktop/Midl/encapsulated-unions). [Le unioni nonencapsulated](/windows/desktop/Midl/nonencapsulated-unions) sono supportati solo nel formato seguente:

```cpp
// cpp_attr_ref_switch_type.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLibrary")];
[ export ]
struct SizedValue2 {
   [switch_type("char"), switch_is(kind)] union {
      [case(1), string]
         wchar_t* wval;
      [default, string]
         char* val;
   };
   char kind;
};
```

## <a name="example"></a>Esempio

Vedere le [case](../windows/case-cpp.md) per un esempio dell'uso di esempio **switch_type**.

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**typedef**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[export](../windows/export.md)  