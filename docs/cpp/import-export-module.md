---
title: modulo, importare, esportare
ms.date: 12/12/2019
f1_keywords:
- module_cpp
- import_cpp
- export_cpp
helpviewer_keywords:
- modules [C++]
- modules [C++], import
- modules [C++], export
description: Usare le dichiarazioni di importazione ed esportazione per accedere a e per pubblicare i tipi e le funzioni definiti nel modulo specificato.
ms.openlocfilehash: ae28bce8e06840cafa5c92521f6e9a62aa5bfde6
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75301457"
---
# <a name="module-import-export"></a>modulo, importare, esportare

Le dichiarazioni di **modulo**, **importazione**ed **esportazione** sono disponibili in c++ 20 e richiedono l'opzione del compilatore [/Experimental: module](../build/reference/experimental-module.md) insieme a [/std: C + + Latest](../build/reference/std-specify-language-standard-version.md). Per ulteriori informazioni, vedere [Cenni preliminari sui C++moduli in ](modules-cpp.md).

## <a name="module"></a>module

Inserire una dichiarazione di **modulo** all'inizio di un file di implementazione del modulo per specificare che il contenuto del file appartiene al modulo denominato.

```cpp
module ModuleA;
```

## <a name="export"></a>export

Usare una dichiarazione di **modulo Export** per il file di interfaccia principale del modulo, che deve avere estensione **IXX**:

```cpp
export module ModuleA;
```

In un file di interfaccia, usare il modificatore **Export** per i nomi che devono far parte dell'interfaccia pubblica:

```cpp
// ModuleA.ixx

export module ModuleA;

namespace Bar
{
   export int f();
   export double d();
   double internal_f(); // not exported
}
```

I nomi non esportati non sono visibili al codice che importa il modulo:

```cpp
//MyProgram.cpp

import module ModuleA;

void main() {
  Bar::f(); // OK
  Bar::d(); // OK
  Bar::internal_f(); // Ill-formed: error C2065: 'internal_f': undeclared identifier
}
```

La parola chiave **Export** potrebbe non essere visualizzata in un file di implementazione del modulo. Quando l' **esportazione** viene applicata a un nome di spazio dei nomi, vengono esportati tutti i nomi nello spazio dei nomi.

## <a name="import"></a>importare

Usare una dichiarazione di **importazione** per rendere visibili i nomi di un modulo nel programma. La dichiarazione di importazione deve comparire dopo la dichiarazione del modulo e dopo le direttive #include, ma prima di qualsiasi dichiarazione nel file.

```cpp
module ModuleA;

#include "custom-lib.h"
import std.core;
import std.regex;
import ModuleB;

// begin declarations here:
template <class T>
class Baz
{...};
```

## <a name="remarks"></a>Note

Sia **Import** che **Module** vengono trattati come parole chiave solo quando vengono visualizzati all'inizio di una riga logica:

```cpp

// OK:
module ;
module module-name
import :
import <
import "
import module-name
export module ;
export module module-name
export import :
export import <
export import "
export import module-name

// Error:
int i; module ;
```

**Sezione specifica Microsoft**

In Microsoft C++i token **Import** e **Module** sono sempre identificatori e mai parole chiave quando vengono usati come argomenti per una macro.

### <a name="example"></a>Esempio

```cpp
#define foo(…) __VA_ARGS__
foo(
import // Always an identifier, never a keyword
)
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Panoramica dei moduli inC++](modules-cpp.md)
