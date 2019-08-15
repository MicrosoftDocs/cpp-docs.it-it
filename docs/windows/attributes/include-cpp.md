---
title: IncludiC++ (attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.include
helpviewer_keywords:
- include attribute
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
ms.openlocfilehash: ece88ebd7b5d9d81beb871427b58a72b2cf02022
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514558"
---
# <a name="include-c"></a>include (C++)

Specifica uno o più file di intestazione da includere nel file con estensione IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ include(header_file) ];
```

### <a name="parameters"></a>Parametri

*header_file*<br/>
Nome di un file che si desidera includere nel file con estensione IDL generato.

## <a name="remarks"></a>Note

L'attributo **include** C++ fa sì `#include` che un'istruzione venga posizionata `import "docobj.idl"` sotto l'istruzione nel file con estensione IDL generato.

L'attributo **include** C++ ha la stessa funzionalità dell'attributo MIDL di [inclusione](/windows/win32/Midl/include) .

## <a name="example"></a>Esempio

Il codice seguente illustra un esempio di come usare **include**. Per questo esempio, il file include. h contiene solo un' `#include` istruzione.

```cpp
// cpp_attr_ref_include.cpp
// compile with: /LD
[module(name="MyLib")];
[include(cpp_attr_ref_include.h)];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|Nessuna|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includelib](includelib-cpp.md)<br/>
[importlib](importlib.md)