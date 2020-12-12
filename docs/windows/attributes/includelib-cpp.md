---
description: 'Altre informazioni su: INCLUDELIB ((C++)'
title: includelib ((attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.includelib
helpviewer_keywords:
- includelib attribute
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
ms.openlocfilehash: 9a7565a931a865b69f0da95da9e92481b27de3b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97321350"
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

## <a name="remarks"></a>Commenti

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

## <a name="see-also"></a>Vedi anche

[Attributi IDL](idl-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importidl](importidl.md)<br/>
[includere](include-cpp.md)<br/>
[importlib](importlib.md)
