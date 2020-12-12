---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4840'
title: Avviso del compilatore (livello 4) C4840
ms.date: 09/13/2018
f1_keywords:
- C4840
helpviewer_keywords:
- C4840
ms.openlocfilehash: a365dc38aff1ab9811407924f7f6e554d91c6f1e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330472"
---
# <a name="compiler-warning-level-4-c4840"></a>Avviso del compilatore (livello 4) C4840

> uso non portabile della classe '*Type*' come argomento di una funzione Variadic

## <a name="remarks"></a>Commenti

Le classi o gli struct passati a una funzione Variadic devono essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o distruttore.

Questo avviso è disponibile a partire da Visual Studio 2017.

## <a name="example"></a>Esempio

L'esempio seguente genera C4840 e Mostra come risolverlo:

```cpp
// C4840.cpp
// compile by using: cl /EHsc /W4 C4840.cpp
#include <stdio.h>

int main()
{
    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);

    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                       // as an argument to a variadic function
    // To correct the error, you can perform a static cast
    // to convert the object before passing it:
    printf("%i\n", static_cast<int>(s));
}
```

Per le stringhe compilate e gestite mediante `CStringW` , `operator LPCWSTR()` è necessario utilizzare l'oggetto fornito per eseguire il cast di un `CStringW` oggetto al puntatore di stringa di tipo C previsto dalla stringa di formato:

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```
