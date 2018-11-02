---
title: embedded_idl
ms.date: 10/18/2018
f1_keywords:
- embedded_idl
helpviewer_keywords:
- embedded_idl attribute
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
ms.openlocfilehash: 202d5b23a5e2e8e673e3c220b9618cfe6cd4f0d9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50525606"
---
# <a name="embeddedidl"></a>embedded_idl

**Sezione specifica C++**

Specifica che la libreria dei tipi è scritta nel file con estensione tlh con il codice generato dall'attributo mantenuto.

## <a name="syntax"></a>Sintassi

```
embedded_idl[("param")]
```

### <a name="parameters"></a>Parametri

*param*<br/>
Può essere uno dei due valori:

- **emitidl**: informazioni sui tipi importate dalla libreria dei tipi saranno presenti nel file IDL generato per il progetto con attributi.  Questa è l'impostazione predefinita e avrà effetto se non si specifica un parametro su `embedded_idl`.

- **no_emitidl**: informazioni sui tipi importate dalla libreria dei tipi non saranno presenti nel file IDL generato per il progetto con attributo.

## <a name="example"></a>Esempio

```cpp
// import_embedded_idl.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib2")];
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")
```

## <a name="remarks"></a>Note

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[attributi #import](../preprocessor/hash-import-attributes-cpp.md)<br/>
[#import (direttiva)](../preprocessor/hash-import-directive-cpp.md)