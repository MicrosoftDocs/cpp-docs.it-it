---
description: 'Altre informazioni su: avviso del compilatore (livello 3) C4839'
title: Avviso del compilatore (livello 3) C4839
ms.date: 09/13/2018
f1_keywords:
- C4839
helpviewer_keywords:
- C4839
ms.assetid: f4f99066-9258-4330-81a8-f4a75a1d95ee
ms.openlocfilehash: a8ae0d3e3c74c62d05163edd981679e5390fb184
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332068"
---
# <a name="compiler-warning-level-3-c4839"></a>Avviso del compilatore (livello 3) C4839

> uso non standard della classe '*Type*' come argomento di una funzione Variadic

Le classi o gli struct passati a una funzione Variadic, ad esempio, `printf` devono essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o distruttore.

Questo avviso è disponibile a partire da Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4839:

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

Per le stringhe compilate e gestite mediante `CStringW` , `operator LPCWSTR()` è necessario utilizzare l'oggetto fornito per eseguire il cast di un `CStringW` oggetto al puntatore C previsto dalla stringa di formato.

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```
