---
description: 'Altre informazioni su: Source (C++)'
title: Source (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.source
helpviewer_keywords:
- source attribute
ms.assetid: 1878d05d-7709-4e97-b114-c62f38f5140e
ms.openlocfilehash: 493795f41571fd9c940147eda3b8dd6dd543f18a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327286"
---
# <a name="source-c"></a>source (C++)

In una classe, specifica le interfacce di origine dell'oggetto COM per i punti di connessione. In una proprietà o un metodo indica che il membro restituisce un oggetto o una variante che è un'origine di eventi.

## <a name="syntax"></a>Sintassi

```cpp
[ source(interfaces) ]
```

### <a name="parameters"></a>Parametri

*interfaces*<br/>
Una o più interfacce specificate quando si applica l'attributo di origine a una classe. Questo parametro non viene utilizzato quando l'origine viene applicata a una proprietà o a un metodo.

## <a name="remarks"></a>Commenti

L'attributo di **origine** C++ ha la stessa funzionalità dell'attributo MIDL di [origine](/windows/win32/Midl/source) .

È possibile utilizzare l'attributo [default](default-cpp.md) per specificare l'interfaccia di origine predefinita per un oggetto.

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

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|**`class`**, **`struct`** , **interfaccia**|
|**Ripetibile**|No|
|**Attributi richiesti**|`coclass` (quando applicato alla classe o allo struct)|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi di classe](class-attributes.md)<br/>
[Attributi di metodo](method-attributes.md)<br/>
[coclass](coclass.md)
