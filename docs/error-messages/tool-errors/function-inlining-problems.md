---
description: 'Altre informazioni su: problemi di incorporamento delle funzioni'
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
ms.openlocfilehash: 3c9c82c8b948acf7a64600c46fe87e17294fa844
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261736"
---
# <a name="function-inlining-problems"></a>Problemi di inline di funzioni

Se si utilizza l'incorporamento della funzione, è necessario:

- Le funzioni inline sono implementate nel file di intestazione incluso.

- È stato attivato l'inline nel file di intestazione.

```cpp
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

```cpp
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

Se si utilizza la `#pragma inline_depth` direttiva del compilatore, verificare che sia impostato un valore pari a 2 o superiore. Un valore pari a zero disabilita l'incorporamento. Assicurarsi anche di usare le opzioni del compilatore **/OB1** o **/Ob2** .

La combinazione di opzioni di compilazione inline e non inline in moduli diversi può a volte causare problemi. Se viene creata una libreria C++ con l'incorporamento della funzione attivata ([/OB1](../../build/reference/ob-inline-function-expansion.md) o [/Ob2](../../build/reference/ob-inline-function-expansion.md)), ma il file di intestazione corrispondente che descrive le funzioni presenta l'inline disattivato (nessuna opzione), si otterrà l'errore LNK2001. Le funzioni non vengono inline nel codice del file di intestazione, ma poiché non sono presenti nel file di libreria, non esiste alcun indirizzo per risolvere il riferimento.

Analogamente, un progetto che usa la funzione inline definisce ancora le funzioni in un file con estensione cpp invece che nel file di intestazione, otterrà anche LNK2019. Il file di intestazione è incluso ovunque considerato appropriato, ma le funzioni sono inline solo quando il file con estensione cpp passa attraverso il compilatore. il linker vede pertanto le funzioni come External non risolte se utilizzate in altri moduli.

```cpp
// LNK2019_FIP.h
struct testclass {
   void PublicStatMemFunc1(void);
};
```

E poi

```cpp
// LNK2019_FIP.cpp
// compile with: /c
#include "LNK2019_FIP.h"
inline void testclass::PublicStatMemFunc1(void) {}
```

E poi

```cpp
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

## <a name="see-also"></a>Vedi anche

[Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)
