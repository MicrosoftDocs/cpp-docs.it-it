---
title: defaultcollelem | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.defaultcollelem
dev_langs:
- C++
helpviewer_keywords:
- defaultcollelem attribute
ms.assetid: 3dbbd293-8b83-4f70-a36b-64cc1d0b6713
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 396043d78ae1b93f7089d1518c26e982d0ad3974
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205112"
---
# <a name="defaultcollelem"></a>defaultcollelem

Utilizzato per l'ottimizzazione del codice Visual Basic.

## <a name="syntax"></a>Sintassi

```cpp
[defaultcollelem]
```

## <a name="remarks"></a>Note

Il **defaultcollelem** attributi di C++ ha la stessa funzionalità come la [defaultcollelem](/windows/desktop/Midl/defaultcollelem) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente illustra un metodo di interfaccia usando il **defaultcollelem** attributo:

```cpp
// cpp_attr_ref_defaultcollelem.cpp
// compile with: /LD
#include <unknwn.h>
[module(name="MyLib")];
[object, uuid("00000000-0000-0000-0000-000000000001")]
__interface IMyForm
{
   [propget, id(1), bindable, defaultcollelem, displaybind,
   defaultbind, requestedit] HRESULT P1([out, retval] long *nSize);
   [propput, id(1), bindable, defaultcollelem, displaybind,
   defaultbind, requestedit] HRESULT P1([in] long nSize);
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Metodo di interfaccia|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  