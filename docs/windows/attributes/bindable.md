---
title: associabileC++ (attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.bindable
helpviewer_keywords:
- bindable attribute
ms.assetid: a2360f92-927b-4af8-98cc-6eca7f4ec954
ms.openlocfilehash: 4a74531a40bcacdae4ef98c292884e7a43fa82fe
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69501831"
---
# <a name="bindable"></a>bindable

Indica che la proprietà supporta il data binding.

## <a name="syntax"></a>Sintassi

```cpp
[bindable]
```

## <a name="remarks"></a>Note

L' C++ attributo associabile ha la stessa funzionalità dell'attributo MIDL [associabile](/windows/win32/Midl/bindable) . È possibile usarlo nelle proprietà definite con gli attributi [propget](propget.md), [propput](propput.md)o [propputref](propputref.md) oppure è possibile definire manualmente un metodo associabile.

Negli esempi MFC seguenti viene illustrato l'utilizzodi Bindable:

- [Esempi di controlli: Controlli ActiveX basati su MFC](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/controls)

- [Esempio di CIRC: Controllo ActiveX](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/controls)

- [Esempio TESTHELP: Controllo ActiveX con descrizioni comandi e guida](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/controls)

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come è possibile utilizzare associabile in una proprietà:

```cpp
// cpp_attr_ref_bindable.cpp
// compile with: /LD
#include <windows.h>
[
   uuid("479B29E3-9A2C-11D0-B696-00A0C903487A"), dispinterface, helpstring("property demo Interface")
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
|**Attributi non validi**|Nessuna|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[defaultbind](defaultbind.md)<br/>
[displaybind](displaybind.md)<br/>
[immediatebind](immediatebind.md)<br/>
[requestedit](requestedit.md)