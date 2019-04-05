---
title: includelib (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.includelib
helpviewer_keywords:
- includelib attribute
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
ms.openlocfilehash: 57f039eeae527dd03884b12e7d9eb424d87f597f
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030000"
---
# <a name="includelib-c"></a>includelib (C++)

Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ includelib(name.idl) ];
```

### <a name="parameters"></a>Parametri

*name.idl*<br/>
Il nome del file con estensione idl da inclusi come parte del file IDL generato.

## <a name="remarks"></a>Note

Il **includelib** attributo C++ fa sì che un file con estensione idl o h da includere nel file con estensione IDL generato dopo il `importlib` istruzione.

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
|**Ripetibile**|Yes|
|**Attributi obbligatori**|nessuno|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[importazione](import.md)<br/>
[importidl](importidl.md)<br/>
[include](include-cpp.md)<br/>
[importlib](importlib.md)