---
title: attributo di importazione embedded_idl
ms.date: 08/29/2019
f1_keywords:
- embedded_idl
helpviewer_keywords:
- embedded_idl attribute
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
ms.openlocfilehash: 01948b171b20ad0a3bf3e7a41047f1fe3df185b0
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216321"
---
# <a name="embedded_idl-import-attribute"></a>attributo di importazione embedded_idl

**C++Specifico**

Specifica se la libreria dei tipi viene scritta `.tlh` nel file con il codice generato dall'attributo mantenuto.

## <a name="syntax"></a>Sintassi

> **#import** *libreria di tipi* **embedded_idl** [ **(** { **"emitidl"**  |  **"no_emitidl"** } **)** ]

### <a name="parameters"></a>Parametri

**emitidl**\
Le informazioni sui tipi importate dalla *libreria* dei tipi sono presenti nell'IDL generato per il progetto con attributi. Questo comportamento è quello predefinito ed è attivo se non si specifica un parametro per `embedded_idl`.

**"no_emitidl"** \
Le informazioni sui tipi importate dalla *libreria* dei tipi non sono presenti nell'IDL generato per il progetto con attributi.

## <a name="example"></a>Esempio

```cpp
// import_embedded_idl.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib2")];
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")
```

**Specifico C++ finale**

## <a name="see-also"></a>Vedere anche

[attributi di #import](../preprocessor/hash-import-attributes-cpp.md)\
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)
