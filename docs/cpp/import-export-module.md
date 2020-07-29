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
ms.openlocfilehash: 5be1618d7e64f6887cf78bd863d428d6710eaf7e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87187192"
---
# <a name="module-import-export"></a>modulo, importare, esportare

Il **modulo**, l' **importazione**e le **`export`** dichiarazioni sono disponibili in c++ 20 e richiedono l'opzione del compilatore [/Experimental: module](../build/reference/experimental-module.md) insieme a [/std: C + + Latest](../build/reference/std-specify-language-standard-version.md). Per ulteriori informazioni, vedere [Cenni preliminari sui moduli in C++](modules-cpp.md).

## <a name="module"></a>module

Inserire una dichiarazione di **modulo** all'inizio di un file di implementazione del modulo per specificare che il contenuto del file appartiene al modulo denominato.

```cpp
module ModuleA;
```

## <a name="export"></a>esportare

Usare una dichiarazione di **modulo Export** per il file di interfaccia principale del modulo, che deve avere estensione **IXX**:

```cpp
export module ModuleA;
```

In un file di interfaccia, usare il **`export`** modificatore per i nomi che devono far parte dell'interfaccia pubblica:

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

La **`export`** parola chiave non può essere visualizzata in un file di implementazione del modulo. Quando **`export`** viene applicato a un nome di spazio dei nomi, vengono esportati tutti i nomi nello spazio dei nomi.

## <a name="import"></a>importazione

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

## <a name="remarks"></a>Osservazioni

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

**Specifico di Microsoft**

In Microsoft C++ i token **Import** e **Module** sono sempre identificatori e mai parole chiave quando vengono usati come argomenti per una macro.

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
