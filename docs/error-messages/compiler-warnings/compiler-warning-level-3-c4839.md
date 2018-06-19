---
title: Compilatore (livello 3) Avviso C4839 | Documenti Microsoft
ms.date: 10/25/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4839
dev_langs:
- C++
helpviewer_keywords:
- C4839
ms.assetid: f4f99066-9258-4330-81a8-f4a75a1d95ee
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b72289eef03c56356865b0b62a999c417da570a6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33291957"
---
# <a name="compiler-warning-level-4-c4839"></a>Compilatore (livello 4) Avviso C4839

> utilizzo non standard ' classe*tipo*' come argomento a una funzione variadic

In Visual Studio 2017, classi o struct che vengono passati a un variadic funzione, ad esempio `printf` deve essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o distruttore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4839:

```cpp
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

    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);
    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                      // as an argument to a variadic function
}
```

Per correggere l'errore, è possibile chiamare una funzione membro che restituisca un tipo facilmente copiabile

```cpp
    std::atomic<int> i(0);
    printf("%i\n", i.load());
```

o esegua un cast statico per convertire l'oggetto prima di passarlo:

```cpp
    struct S {/* as before */} s(0);
    printf("%i\n", static_cast<int>(s))
```

Per le stringhe compilate e gestite tramite `CStringW`, forniti `operator LPCWSTR()` deve essere utilizzato per eseguire il cast un `CStringW` oggetto al puntatore C previsto dalla stringa di formato.

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```