---
title: Avviso del compilatore (livello 4) C4840
ms.date: 09/13/2018
f1_keywords:
- C4840
helpviewer_keywords:
- C4840
ms.openlocfilehash: 649083d66d0c7a0ef11c742e56cbfb70e2e9b75f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185204"
---
# <a name="compiler-warning-level-4-c4840"></a>Avviso del compilatore (livello 4) C4840

> uso non portabile della classe '*Type*' come argomento di una funzione Variadic

## <a name="remarks"></a>Osservazioni

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

Per le stringhe compilate e gestite con `CStringW`, è consigliabile usare il `operator LPCWSTR()` fornito per eseguire il cast di un oggetto `CStringW` al puntatore di stringa di tipo C previsto dalla stringa di formato:

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```
