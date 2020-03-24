---
title: IncludiC++ (attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.include
helpviewer_keywords:
- include attribute
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
ms.openlocfilehash: 39f991bb036dce1c50a9d2ee800d3fec65af7c55
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80166783"
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

## <a name="remarks"></a>Osservazioni

L'attributo **include** C++ determina la posizione di un'istruzione `#include` sotto l'istruzione `import "docobj.idl"` nel file IDL generato.

L'attributo **include** C++ ha la stessa funzionalità dell'attributo MIDL di [inclusione](/windows/win32/Midl/include) .

## <a name="example"></a>Esempio

Il codice seguente illustra un esempio di come usare **include**. Per questo esempio, il file include. h contiene solo un'istruzione `#include`.

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
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includelib](includelib-cpp.md)<br/>
[importlib](importlib.md)
