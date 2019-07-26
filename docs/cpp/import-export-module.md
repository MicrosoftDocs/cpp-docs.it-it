---
title: modulo, importazione ed esportazione
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
ms.openlocfilehash: fbb9c45ec816c859edb4df38ad67dc7778247e87
ms.sourcegitcommit: 7b039b5f32f6c59be6c6bb1cffafd69c3bfadd35
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/26/2019
ms.locfileid: "68537787"
---
# <a name="module-import-export"></a>modulo, importazione ed esportazione

Le parole chiave **Module**, **Import**ed **Export** sono disponibili in c++ 20 e richiedono l' `/experimental:modules` opzione del compilatore insieme `/std:c++latest`a. Per ulteriori informazioni, vedere [Cenni preliminari sui C++moduli in ](modules-cpp.md).

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
