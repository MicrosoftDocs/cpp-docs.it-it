---
description: 'Altre informazioni su: importidl'
title: importidl (attributo COM C++)
ms.date: 10/02/2018
f1_keywords:
- vc-attr.importidl
helpviewer_keywords:
- importidl attribute
ms.assetid: 4b0a4b55-6c57-4e6e-bc7b-a12cc8063941
ms.openlocfilehash: b10caa9f4b1467727c70b6d968ca6aa33b58da0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97329887"
---
# <a name="importidl"></a>importidl

Inserisce il file idl specificato nel file IDL generato.

## <a name="syntax"></a>Sintassi

```cpp
[ importidl(idl_file) ];
```

### <a name="parameters"></a>Parametri

*idl_file*<br/>
Identifica il nome del file con estensione IDL da unire al file IDL che verrà generato per l'applicazione.

## <a name="remarks"></a>Commenti

L'attributo **importidl** di C++ inserisce la sezione all'esterno del blocco di libreria (in *idl_file*) al file IDL generato dal programma e alla sezione Library (in *idl_file*) nella sezione Library del file. IDL generato dal programma.

Si consiglia di utilizzare **importidl**, ad esempio, se si desidera utilizzare un file con estensione IDL codificato manualmente con il file IDL generato.

## <a name="example"></a>Esempio

```cpp
// cpp_attr_ref_importidl.cpp
// compile with: /LD
[module(name="MyLib")];
[importidl("import.idl")];
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

[Attributi del compilatore](compiler-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importlib](importlib.md)<br/>
[includere](include-cpp.md)<br/>
[includelib (](includelib-cpp.md)
