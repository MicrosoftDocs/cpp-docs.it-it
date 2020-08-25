---
title: includelib ((attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.includelib
helpviewer_keywords:
- includelib attribute
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
ms.openlocfilehash: 30e84a6c82ec25e07ca0eb08f64c7aa5b560e9e7
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88830696"
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

L'attributo C++ **INCLUDELIB (** fa sì che un file IDL o h venga incluso nel file con estensione IDL generato dopo l' `importlib` istruzione.

## <a name="example"></a>Esempio

Il codice seguente è illustrato in un file con estensione cpp:

```cpp
// cpp_attr_ref_includelib.cpp
// compile with: /LD
[module(name="MyLib")];
[includelib("includelib.idl")];
```

## <a name="requirements"></a>Requisiti

| Contesto dell'attributo | Valore |
|-|-|
|**Si applica a**|Ovunque|
|**Ripetibile**|Sì|
|**Attributi richiesti**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includere](include-cpp.md)<br/>
[importlib](importlib.md)
