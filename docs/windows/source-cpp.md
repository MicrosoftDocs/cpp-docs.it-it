---
title: origine (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.source
dev_langs:
- C++
helpviewer_keywords:
- source attribute
ms.assetid: 1878d05d-7709-4e97-b114-c62f38f5140e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ccd5f5220a49ddb63554b4c3b96533a3066d4d4b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43214593"
---
# <a name="source-c"></a>source (C++)

In una classe specifica le interfacce di origine dell'oggetto COM per i punti di connessione. In una proprietà o metodo, indica che il membro restituisce un oggetto o una variante che rappresenta l'origine degli eventi.

## <a name="syntax"></a>Sintassi

```cpp
[ source(
   interfaces
) ]
```

### <a name="parameters"></a>Parametri

*Interfacce*  
Una o più interfacce di specificare quando si applica l'origine dell'attributo a una classe. Questo parametro non viene utilizzato quando l'origine viene applicata a una proprietà o metodo.

## <a name="remarks"></a>Note

Il **origine** attributi di C++ ha la stessa funzionalità come la [origine](/windows/desktop/Midl/source) attributo MIDL.

È possibile usare la [predefinito](../windows/default-cpp.md) attributo per specificare l'interfaccia di origine predefinita per un oggetto.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_source.cpp
// compile with: /LD
#include "windows.h"
#include "unknwn.h"
[module(name="MyLib")];

[object, uuid(11111111-1111-1111-1111-111111111111)]
__interface b
{
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]
   HRESULT get_I([out, retval]long *i);
};

[object, uuid(11111111-1111-1111-1111-111111111131)]
__interface c
{
   [id(0), propget, bindable, displaybind, defaultbind, requestedit]
   HRESULT et_I([out, retval]long *i);
};

[coclass, default(c), uuid(11111111-1111-1111-1111-111111111132)]
class N : public b
{
};

[coclass, source(c), default(b, c), uuid(11111111-1111-1111-1111-111111111133)]
class NN : public b
{
};
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**, **interfaccia**|
|**Ripetibile**|No|
|**Attributi obbligatori**|`coclass` (quando applicato alla classe o struct)|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)  
[Attributi di classe](../windows/class-attributes.md)  
[Attributi di metodo](../windows/method-attributes.md)  
[coclass](../windows/coclass.md)  