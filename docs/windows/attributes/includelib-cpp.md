---
title: includelib ((C++ attributo com)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.includelib
helpviewer_keywords:
- includelib attribute
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
ms.openlocfilehash: 4022a3f1f2d4ccaabe65c24065be8e1c846d604d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214845"
---
# <a name="includelib-c"></a>includelib (C++)

Comporta l'inclusione di un file IDL o h nel file IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ includelib(name.idl) ];
```

### <a name="parameters"></a>Parametri

*nome. idl*<br/>
Nome del file con estensione IDL che si desidera includere come parte del file IDL generato.

## <a name="remarks"></a>Osservazioni

L'attributo **INCLUDELIB (** C++ fa sì che un file IDL o h venga incluso nel file IDL generato, dopo l'istruzione `importlib`.

## <a name="example"></a>Esempio

Il codice seguente è illustrato in un file con estensione cpp:

```cpp
// cpp_attr_ref_includelib.cpp
// compile with: /LD
[module(name="MyLib")];
[includelib("includelib.idl")];
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|Sì|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[include](include-cpp.md)<br/>
[importlib](importlib.md)
