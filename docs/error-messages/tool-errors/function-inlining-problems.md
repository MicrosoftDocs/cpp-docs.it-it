---
title: Problemi di inline di funzioni
ms.date: 11/04/2016
helpviewer_keywords:
- /Ob1 C++ compiler option
- inline functions, problems
- -Ob1 C++ compiler option
- /Ob2 C++ compiler option
- -Ob2 C++ compiler option
- function inlining problems
ms.assetid: 65d59943-4b3c-4a43-aeb6-dccbf7686740
ms.openlocfilehash: fec3884dff0dda7140f18fa53e493c12996edcf0
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59031524"
---
# <a name="function-inlining-problems"></a>Problemi di inline di funzioni

Se si usa l'inline delle funzioni, è necessario:

- Definire le funzioni inline implementate nel file di intestazione che è includere.

- Dispone l'incorporamento accesi nel file di intestazione.

```
// LNK2019_function_inline.cpp
// compile with: /c
// post-build command: lib LNK2019_function_inline.obj
#include <stdio.h>
struct _load_config_used {
   void Test();
   void Test2() { printf("in Test2\n"); }
};

void _load_config_used::Test() { printf("in Test\n"); }
```

E quindi,

```
// LNK2019_function_inline_2.cpp
// compile with: LNK2019_function_inline.lib
struct _load_config_used {
   void Test();
   void Test2();
};

int main() {
   _load_config_used x;
   x.Test();
   x.Test2();   // LNK2019
}
```

Se si usa il `#pragma inline_depth` compilatore direttiva, assicurarsi di avere un valore superiore o uguale a 2 impostato. Un valore pari a zero per disattivare l'incorporamento. Assicurarsi anche che si usa la **/Ob1** oppure **/Ob2** opzioni del compilatore.

Combinazione di opzioni di compilazione inline e non inline in moduli diversi può talvolta causare problemi. Se si crea una libreria di C++ con attivata l'inline delle funzioni ([/Ob1](../../build/reference/ob-inline-function-expansion.md) oppure [/Ob2](../../build/reference/ob-inline-function-expansion.md)) ma il corrispondente file di intestazione che descrivono le funzioni con l'incorporamento disattivata (nessuna opzione), si otterrà l'errore LNK2001. Le funzioni non inline all'interno del codice dal file di intestazione, ma poiché non si trovano nel file di libreria non è presente alcun indirizzo per risolvere il riferimento.

Analogamente, un progetto che usa l'inline delle funzioni ancora definisce le funzioni in un file con estensione cpp anziché nell'intestazione del file verrà visualizzato anche l'errore LNK2019. Il file di intestazione è incluso ovunque sia appropriato, ma sono solo le funzioni rese inline quando il file con estensione cpp passa attraverso il compilatore. Pertanto, il linker considera le funzioni di riferimenti esterni non risolti quando usate in altri moduli.

```
// LNK2019_FIP.h
struct testclass {
   void PublicStatMemFunc1(void);
};
```

E poi

```
// LNK2019_FIP.cpp
// compile with: /c
#include "LNK2019_FIP.h"
inline void testclass::PublicStatMemFunc1(void) {}
```

E poi

```
// LNK2019_FIP_2.cpp
// compile with: LNK2019_FIP.cpp
// LNK2019 expected
#include "LNK2019_FIP.h"
int main() {
   testclass testclsObject;

   // module cannot see the implementation of PublicStatMemFunc1
   testclsObject.PublicStatMemFunc1();
}
```

## <a name="see-also"></a>Vedere anche

[Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)