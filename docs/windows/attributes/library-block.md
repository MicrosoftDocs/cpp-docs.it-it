---
title: library_block (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.library_block
helpviewer_keywords:
- library_block attribute
ms.assetid: ae7a7ebe-5e1a-4eda-a058-11bbd058ece8
ms.openlocfilehash: 219f6a89dd7f80246e0337c2ef3bcad43540b165
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033215"
---
# <a name="libraryblock"></a>library_block

Inserisce un costrutto all'interno del blocco di libreria IDL.

## <a name="syntax"></a>Sintassi

```cpp
[library_block]
```

## <a name="remarks"></a>Note

Quando si posiziona un costrutto all'interno del blocco di libreria, assicurarsi che verrà passato nella libreria dei tipi, indipendentemente dal fatto che vi fanno riferimento. Per impostazione predefinita, i costrutti soli modificando la [coclasse](coclass.md), [dispinterface](dispinterface.md), e [idl_module](idl-module.md) attributi vengono posizionati nel blocco di libreria.

## <a name="example"></a>Esempio

Nel codice seguente, un'interfaccia personalizzata viene inserita all'interno del blocco di libreria.

```cpp
// cpp_attr_ref_library_block.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib")];
[object, library_block, uuid("9E66A290-4365-11D2-A997-00C04FA37DDB")]
__interface IMyInterface {
   HRESULT f1();
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)