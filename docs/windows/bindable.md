---
title: associabile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.bindable
dev_langs:
- C++
helpviewer_keywords:
- bindable attribute
ms.assetid: a2360f92-927b-4af8-98cc-6eca7f4ec954
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4c529abb1ade786bf7ec0a2d5cff5c49f6197be7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42601589"
---
# <a name="bindable"></a>bindable

Indica che la proprietà supporta il data binding.

## <a name="syntax"></a>Sintassi

```cpp
[bindable]
```

## <a name="remarks"></a>Note

Il **associabile** attributi di C++ ha la stessa funzionalità come la [associabile](http://msdn.microsoft.com/library/windows/desktop/aa366738) attributo MIDL. È possibile usarlo nelle proprietà definite con la [propget](../windows/propget.md), [propput](../windows/propput.md), o [propputref](../windows/propputref.md) attributi, oppure è possibile definire manualmente un metodo associabile.

L'uso di mostrato nei seguenti esempi MFC **associabile**:

- [Esempi di controlli: I controlli ActiveX, basata su MFC](http://msdn.microsoft.com/a44adf86-0ba0-4504-bedb-512b6cba2e63)

- [Esempio CIRC: Controllo ActiveX](http://msdn.microsoft.com/9ba34d04-280e-49f4-90ae-41a6be44c95b)

- [Esempio: TESTHELP controllo ActiveX con le descrizioni comandi e la Guida](http://msdn.microsoft.com/d822861d-c6f0-4d0a-ad11-970eebb1e8cd)

## <a name="example"></a>Esempio

Il codice seguente illustra come usare **associabile** su una proprietà:

```cpp
// cpp_attr_ref_bindable.cpp
// compile with: /LD
#include <windows.h>
[
   uuid("479B29E3-9A2C-11D0-B696-00A0C903487A"),
   dispinterface,
   helpstring("property demo Interface")  
]
__interface IPropDemo : IDispatch {

   [propget, id(1), bindable, displaybind, defaultbind, requestedit] HRESULT P1([out, retval] long *nSize);
   [propput, id(1), bindable, displaybind, defaultbind, requestedit] HRESULT P1([in] long nSize);
   [id(3), bindable, propget] HRESULT Object([out, retval] IDispatch **ppObj);
   [id(3), bindable, propputref] HRESULT Object([in] IDispatch* pObj);
   [id(-552), helpstring("method AboutBox")] HRESULT AboutBox();
};

[ module(name="PropDemoLib", uuid="479B29E2-9A2C-11D0-B696-00A0C903487A", version="1.0", helpstring="property demo") ];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[defaultbind](../windows/defaultbind.md)  
[displaybind](../windows/displaybind.md)  
[immediatebind](../windows/immediatebind.md)  
[requestedit](../windows/requestedit.md)  