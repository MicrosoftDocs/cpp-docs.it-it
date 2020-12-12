---
description: 'Altre informazioni su: embedded_idl attributo Import'
title: embedded_idl attributo Import
ms.date: 08/29/2019
f1_keywords:
- embedded_idl
helpviewer_keywords:
- embedded_idl attribute
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
ms.openlocfilehash: a56c6e664c082db4b6eac078b7133a1ead947d3d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97300593"
---
# <a name="embedded_idl-import-attribute"></a>embedded_idl attributo Import

**Sezione specifica C++**

Specifica se la libreria dei tipi viene scritta nel `.tlh` file con il codice generato dall'attributo mantenuto.

## <a name="syntax"></a>Sintassi

> **#import** *Type-Library* **embedded_idl** [ **(** { **"emitidl"**  |  **"no_emitidl"** } **)** ]

### <a name="parameters"></a>Parametri

**emitidl**\
Le informazioni sui tipi importate dalla *libreria* dei tipi sono presenti nell'IDL generato per il progetto con attributi. Questo comportamento è quello predefinito ed è attivo se non si specifica un parametro per `embedded_idl` .

**"no_emitidl"**\
Le informazioni sui tipi importate dalla *libreria* dei tipi non sono presenti nell'IDL generato per il progetto con attributi.

## <a name="example"></a>Esempio

```cpp
// import_embedded_idl.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib2")];
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")
```

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
