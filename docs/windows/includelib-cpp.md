---
title: includelib (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.includelib
dev_langs:
- C++
helpviewer_keywords:
- includelib attribute
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5f15fcefe1a18156e4cbe8180138d7b6c1d944e2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46398586"
---
# <a name="includelib-c"></a>includelib (C++)

Fa sì che un file con estensione idl o con estensione h da includere nel file IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ includelib(
   name.idl
) ];
```

### <a name="parameters"></a>Parametri

*Name.idl*<br/>
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
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni, vedere [Contesti di attributi](../windows/attribute-contexts.md).

## <a name="see-also"></a>Vedere anche

[Attributi IDL](../windows/idl-attributes.md)<br/>
[Attributi autonomi](../windows/stand-alone-attributes.md)<br/>
[import](../windows/import.md)<br/>
[importidl](../windows/importidl.md)<br/>
[include](../windows/include-cpp.md)<br/>
[importlib](../windows/importlib.md)  