---
title: DefaultValue | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.defaultvalue
dev_langs:
- C++
helpviewer_keywords:
- defaultvalue attribute
ms.assetid: efa5d050-b2cc-4d9e-9b8e-79954f218d3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 70be45d1a7221590912ea71b38d3aa4404197df1
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599128"
---
# <a name="defaultvalue"></a>defaultvalue

Consente di specificare un valore predefinito per un parametro facoltativo tipizzato.

## <a name="syntax"></a>Sintassi

```cpp
[ defaultvalue= value ]
```

### <a name="parameters"></a>Parametri

*valore*  
Il valore predefinito per il parametro.

## <a name="remarks"></a>Note

Il **defaultvalue** attributi di C++ ha la stessa funzionalità come la [defaultvalue](http://msdn.microsoft.com/library/windows/desktop/aa366793) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente illustra un metodo di interfaccia usando il **defaultvalue** attributo:

```cpp
// cpp_attr_ref_defaultvalue.cpp
// compile with: /LD
#include <windows.h>

[export] typedef long HRESULT;
[export, ptr, string] typedef unsigned char * MY_STRING_TYPE;

[  uuid("479B29EE-9A2C-11D0-B696-00A0C903487A"),
   dual, oleautomation,
   helpstring("IFireTabCtrl Interface"),
   helpcontext(122), pointer_default(unique) ]

__interface IFireTabCtrl : IDispatch {
   [bindable, propget] HRESULT get_Size([out, retval, defaultvalue("33")] long *nSize);
   [bindable, propput] HRESULT put_Size([in] int nSize);
};

[ module(name="ATLFIRELib", uuid="479B29E1-9A2C-11D0-B696-00A0C903487A",
      version="1.0", helpstring="ATLFire 1.0 Type Library") ];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Parametro interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di parametro](../windows/parameter-attributes.md)  
[out](../windows/out-cpp.md)  
[retval](../windows/retval.md)  
[in](../windows/in-cpp.md)  
[pointer_default](../windows/pointer-default.md)  
[unique](../windows/unique-cpp.md)  