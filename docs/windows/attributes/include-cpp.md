---
title: include (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.include
helpviewer_keywords:
- include attribute
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
ms.openlocfilehash: 6fb385877285602c1eb6649d11e16558d7fb07ec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50544755"
---
# <a name="include-c"></a>include (C++)

Specifica uno o più file di intestazione da includere nel file IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ include(header_file) ];
```

### <a name="parameters"></a>Parametri

*HEADER_FILE*<br/>
Il nome di un file che si desidera incluso nel file con estensione IDL generato.

## <a name="remarks"></a>Note

Il **includono** C++ attributo causa una `#include` istruzione inserita sotto il `import "docobj.idl"` istruzione nel file IDL generato.

Il **includono** attributi di C++ ha la stessa funzionalità come la [includono](/windows/desktop/Midl/include) attributo MIDL.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato un esempio d'uso **includono**. Per questo esempio, il file include.h contiene solo un `#include` istruzione.

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
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includelib](includelib-cpp.md)<br/>
[importlib](importlib.md)