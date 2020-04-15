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
description: Utilizzare le dichiarazioni di importazione ed esportazione per accedere e pubblicare tipi e funzioni definiti nel modulo specificato.
ms.openlocfilehash: a765e9a406660d3c945ef3d70754178b0648458c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374106"
---
# <a name="module-import-export"></a>modulo, importare, esportare

Le dichiarazioni del **modulo**, **import**e **export** sono disponibili in C , 20 e richiedono l'opzione del compilatore [/experimental:module](../build/reference/experimental-module.md) insieme a [/std:c.](../build/reference/std-specify-language-standard-version.md) Per ulteriori informazioni, vedere [Panoramica dei moduli in C.](modules-cpp.md)

## <a name="module"></a>modulo

Inserire una dichiarazione di **modulo** all'inizio di un file di implementazione del modulo per specificare che il contenuto del file appartiene al modulo denominato.

```cpp
module ModuleA;
```

## <a name="export"></a>esportare

Utilizzare una dichiarazione del modulo di **esportazione** per il file di interfaccia principale del modulo, che deve avere estensione **.ixx**:

```cpp
export module ModuleA;
```

In un file di interfaccia, utilizzare il modificatore **export** sui nomi che devono far parte dell'interfaccia pubblica:

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

int main() {
  Bar::f(); // OK
  Bar::d(); // OK
  Bar::internal_f(); // Ill-formed: error C2065: 'internal_f': undeclared identifier
}
```

La parola chiave **export** potrebbe non essere visualizzata in un file di implementazione del modulo. Quando **l'esportazione** viene applicata a un nome dello spazio dei nomi, vengono esportati tutti i nomi nello spazio dei nomi.

## <a name="import"></a>import

Utilizzare una dichiarazione di **importazione** per rendere visibili i nomi di un modulo nel programma. La dichiarazione di importazione deve comparire dopo la dichiarazione del modulo e dopo qualsiasi direttiva #include, ma prima di qualsiasi dichiarazione nel file.

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

## <a name="remarks"></a>Osservazioni

Sia **l'importazione** che il **modulo** vengono considerati come parole chiave solo quando appaiono all'inizio di una riga logica:

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

**Specifico di Microsoft**

In Microsoft C, **l'importazione** di token e **il modulo** sono sempre identificatori e mai parole chiave quando vengono utilizzati come argomenti di una macro.

### <a name="example"></a>Esempio

```cpp
#define foo(…) __VA_ARGS__
foo(
import // Always an identifier, never a keyword
)
```

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Panoramica dei moduli in C++](modules-cpp.md)
