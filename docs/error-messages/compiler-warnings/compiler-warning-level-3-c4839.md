---
title: Compiler Warning (level 3) C4839
ms.date: 09/13/2018
f1_keywords:
- C4839
helpviewer_keywords:
- C4839
ms.assetid: f4f99066-9258-4330-81a8-f4a75a1d95ee
ms.openlocfilehash: 09b6e5b8dc984b35df7de96f5cf8610f2b0f16af
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62401527"
---
# <a name="compiler-warning-level-3-c4839"></a>Compiler Warning (level 3) C4839

> uso non standard della classe*tipo*' come argomento per una funzione variadic

Classi o struct che vengono passati a una funzione variadic, ad esempio `printf` devono essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o distruttore.

Questo avviso è disponibile a partire da Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4839:

```cpp
// C4839.cpp
// compile by using: cl /EHsc /W3 C4839.cpp
#include <atomic>
#include <memory>
#include <stdio.h>

int main()
{
    std::atomic<int> i(0);
    printf("%i\n", i); // error C4839: non-standard use of class 'std::atomic<int>'
                        // as an argument to a variadic function
                        // note: the constructor and destructor will not be called;
                        // a bitwise copy of the class will be passed as the argument
                        // error C2280: 'std::atomic<int>::atomic(const std::atomic<int> &)':
                        // attempting to reference a deleted function
}
```

Per correggere l'errore, è possibile chiamare una funzione membro che restituisca un tipo facilmente copiabile

```cpp
    std::atomic<int> i(0);
    printf("%i\n", i.load());
```

Per le stringhe compilate e gestite usando `CStringW`, l'oggetto fornito `operator LPCWSTR()` deve essere usato per eseguire il cast un `CStringW` oggetto al puntatore C previsto dalla stringa di formato.

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```