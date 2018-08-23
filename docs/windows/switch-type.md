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
ms.openlocfilehash: 28501c0105ce9d62c72dc9013b881029f4bc8bfb
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42590666"
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

*type*  
Il tipo di commutatore, può essere di tipo integer, carattere, booleano o enumerazione.

## <a name="remarks"></a>Note

Il **switch_type** attributi di C++ ha la stessa funzionalità come la [switch_type](http://msdn.microsoft.com/library/windows/desktop/aa367276) attributo MIDL.

Gli attributi di C++ non supportano [incapsulato unioni](http://msdn.microsoft.com/library/windows/desktop/aa366811). [Le unioni nonencapsulated](http://msdn.microsoft.com/library/windows/desktop/aa367119) sono supportati solo nel formato seguente:

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

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi Typedef, Enum, Union e Struct](../windows/typedef-enum-union-and-struct-attributes.md)  
[export](../windows/export.md)  