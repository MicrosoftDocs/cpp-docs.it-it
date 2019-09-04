---
title: modulo, importare, esportare
ms.date: 07/15/2019
f1_keywords:
- module_cpp
- import_cpp
- export_cpp
helpviewer_keywords:
- modules [C++]
- modules [C++], import
- modules [C++], export
description: Usare l'istruzione Import per accedere ai tipi e alle funzioni definiti nel modulo specificato.
ms.openlocfilehash: ee1d50a76a3304359c0771aa0174968439f5faa4
ms.sourcegitcommit: fd0f8839da5c6a3663798a47c6b0bb6e63b518bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2019
ms.locfileid: "70273618"
---
# <a name="module-import-export"></a>modulo, importare, esportare

Le parole chiave **Module**, **Import**ed **Export** sono disponibili in c++ 20 e richiedono l'opzione del compilatore [/Experimental: module](../build/reference/experimental-module.md) insieme a [/std: C + + Latest](../build/reference/std-specify-language-standard-version.md). Per ulteriori informazioni, vedere [Cenni preliminari sui C++moduli in ](modules-cpp.md).

## <a name="module"></a>module

Usare l'istruzione **Module** all'inizio di un file di implementazione del modulo per specificare che il contenuto del file appartiene al modulo denominato. 

```cpp
module ModuleA;
```

## <a name="export"></a>esportazione

Usare l'istruzione **Export Module** per il file di interfaccia principale del modulo, che deve avere estensione **IXX**:

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

La parola chiave **Export** potrebbe non essere visualizzata in un file di implementazione del modulo. Quando il modificatore **Export** viene applicato a un nome di spazio dei nomi, vengono esportati tutti i nomi nello spazio dei nomi.

## <a name="import"></a>importazione

Usare l'istruzione **Import** per rendere visibili i nomi di un modulo nel programma. L'istruzione import deve essere visualizzata dopo l'istruzione Module e dopo le direttive #include, ma prima di qualsiasi dichiarazione nel file.

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

## <a name="see-also"></a>Vedere anche

[Panoramica dei moduli inC++](modules-cpp.md)
