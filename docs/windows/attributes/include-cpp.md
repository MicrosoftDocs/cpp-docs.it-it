---
description: 'Altre informazioni su: Includi (C++)'
title: include (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.include
helpviewer_keywords:
- include attribute
ms.assetid: d23f8b91-fe5b-48fa-9371-8bd73af7b8e3
ms.openlocfilehash: c6d12b9d8826ce84de0c01aaf055f5a4176fea10
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321363"
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

## <a name="remarks"></a>Commenti

L'attributo di **inclusione** C++ fa sì `#include` che un'istruzione venga posizionata sotto l' `import "docobj.idl"` istruzione nel file con estensione IDL generato.

L'attributo di **inclusione** C++ ha la stessa funzionalità dell'attributo MIDL di [inclusione](/windows/win32/Midl/include) .

## <a name="example"></a>Esempio

Il codice seguente illustra un esempio di come usare **include**. Per questo esempio, il file include. h contiene solo un' `#include` istruzione.

```cpp
// cpp_attr_ref_include.cpp
// compile with: /LD
[module(name="MyLib")];
[include(cpp_attr_ref_include.h)];
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|No|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includelib (](includelib-cpp.md)<br/>
[importlib](importlib.md)
