---
title: doppia | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.dual
dev_langs:
- C++
helpviewer_keywords:
- dual attribute
ms.assetid: 5d4a9069-d819-42cd-ba56-bbcda17157d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6af52fab983f93964ba33cf59ca38783df66b5da
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46373581"
---
# <a name="dual"></a>dual

Inserisce un'interfaccia nel file con estensione idl come interfaccia duale.

## <a name="syntax"></a>Sintassi

```cpp
[dual]
```

## <a name="remarks"></a>Note

Quando la **duale** attributi di C++ precede un'interfaccia, fa sì che l'interfaccia da inserire all'interno del blocco di libreria nel file con estensione IDL generato.

## <a name="example"></a>Esempio

Il codice seguente è un blocco di attributi che utilizza **duale** prima di una definizione di interfaccia:

```cpp
// cpp_attr_ref_dual.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLibrary")];

[uuid("2F5F63F1-16DA-11d2-9E7B-00C04FB926DA"), dual]

__interface IStatic : IDispatch
{
   HRESULT Func1(int i);
   [   propget,
      id(1),
      bindable,
      displaybind,
      defaultbind,
      requestedit
   ]
   HRESULT P1([out, retval] long *nSize);
   [   propput,
      id(1),
      bindable,
      displaybind,
      defaultbind,
      requestedit
   ]
   HRESULT P1([in] long nSize); 
};

[cpp_quote("#include file.h")];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**interface**|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|`dispinterface`|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi per utilizzo](../windows/attributes-by-usage.md)<br/>
[custom](../windows/custom-cpp.md)<br/>
[dispinterface](../windows/dispinterface.md)<br/>
[object](../windows/object-cpp.md)<br/>
[__interface](../cpp/interface.md)  