---
title: library_block | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.library_block
dev_langs:
- C++
helpviewer_keywords:
- library_block attribute
ms.assetid: ae7a7ebe-5e1a-4eda-a058-11bbd058ece8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 33febb69db2a8f3bd67205de2e6e5cf019016471
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42598493"
---
# <a name="libraryblock"></a>library_block

Inserisce un costrutto all'interno del blocco di libreria IDL.

## <a name="syntax"></a>Sintassi

```cpp
[library_block]
```

## <a name="remarks"></a>Note

Quando si posiziona un costrutto all'interno del blocco di libreria, assicurarsi che verrà passato nella libreria dei tipi, indipendentemente dal fatto che vi fanno riferimento. Per impostazione predefinita, i costrutti soli modificando la [coclasse](../windows/coclass.md), [dispinterface](../windows/dispinterface.md), e [idl_module](../windows/idl-module.md) attributi vengono posizionati nel blocco di libreria.

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
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi del compilatore](../windows/compiler-attributes.md)  
[Attributi autonomi](../windows/stand-alone-attributes.md)  