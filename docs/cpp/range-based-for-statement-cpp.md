---
description: 'Altre informazioni su: istruzione for basata su intervallo (C++)'
title: Istruzione for basata su intervallo (C++)
ms.date: 11/04/2016
ms.assetid: 5750ba1d-ba48-4236-a923-e32de8345c2d
ms.openlocfilehash: 0d32086009190fe69333a2f36ff03bb551396d98
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97319391"
---
# <a name="range-based-for-statement-c"></a>Istruzione for basata su intervallo (C++)

Esegue `statement` ripetutamente e in sequenza per ogni elemento in `expression`.

## <a name="syntax"></a>Sintassi

> **`for (`***per la dichiarazione* **`:`** di intervallo *espressione***`)`**\
&emsp;*istruzione*

## <a name="remarks"></a>Commenti

Usare l'istruzione basata sull'intervallo **`for`** per costruire cicli che devono essere eseguiti tramite un *intervallo*, definito come qualsiasi elemento che è possibile scorrere, ad esempio, `std::vector` o qualsiasi altra sequenza di libreria standard C++ il cui intervallo è definito da `begin()` e `end()` . Il nome dichiarato nella `for-range-declaration` parte è locale per l' **`for`** istruzione e non può essere dichiarato di nuovo in `expression` o `statement` . Si noti che la [`auto`](../cpp/auto-cpp.md) parola chiave è preferibile nella `for-range-declaration` parte dell'istruzione.

**Novità di Visual Studio 2017:**  I cicli basati su intervallo **`for`** non richiedono più che `begin()` e `end()` restituiscano oggetti dello stesso tipo. Questo consente `end()` a di restituire un oggetto Sentinel, ad esempio usato dagli intervalli come definito nella proposta Ranges-V3. Per altre informazioni, vedere [generalizzare il `For` ciclo di Range-Based](https://wg21.link/p0184r0) e la [libreria range-V3 su GitHub](https://github.com/ericniebler/range-v3).

Questo codice illustra come usare i cicli basati su intervalli **`for`** per scorrere una matrice e un vettore:

```cpp
// range-based-for.cpp
// compile by using: cl /EHsc /nologo /W4
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Basic 10-element integer array.
    int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // Range-based for loop to iterate through the array.
    for( int y : x ) { // Access by value using a copy declared as a specific type.
                       // Not preferred.
        cout << y << " ";
    }
    cout << endl;

    // The auto keyword causes type inference to be used. Preferred.

    for( auto y : x ) { // Copy of 'x', almost always undesirable
        cout << y << " ";
    }
    cout << endl;

    for( auto &y : x ) { // Type inference by reference.
        // Observes and/or modifies in-place. Preferred when modify is needed.
        cout << y << " ";
    }
    cout << endl;

    for( const auto &y : x ) { // Type inference by const reference.
        // Observes in-place. Preferred when no modify is needed.
        cout << y << " ";
    }
    cout << endl;
    cout << "end of integer array test" << endl;
    cout << endl;

    // Create a vector object that contains 10 elements.
    vector<double> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i + 0.14159);
    }

    // Range-based for loop to iterate through the vector, observing in-place.
    for( const auto &j : v ) {
        cout << j << " ";
    }
    cout << endl;
    cout << "end of vector test" << endl;
}
```

Ecco l'output:

```Output
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
end of integer array test

0.14159 1.14159 2.14159 3.14159 4.14159 5.14159 6.14159 7.14159 8.14159 9.14159
end of vector test
```

Un ciclo basato su intervallo **`for`** termina quando viene eseguito uno di questi in `statement` : [`break`](../cpp/break-statement-cpp.md) , [`return`](../cpp/return-statement-cpp.md) o [`goto`](../cpp/goto-statement-cpp.md) a un'istruzione con etichetta all'esterno del ciclo basato sull'intervallo **`for`** . Un' [`continue`](../cpp/continue-statement-cpp.md) istruzione in un ciclo basato su intervallo **`for`** termina solo l'iterazione corrente.

Tenere presente queste informazioni sulla base dell'intervallo **`for`** :

- Riconosce automaticamente le matrici.

- Riconosce i contenitori con `.begin()` e `.end()`.

- Utilizzare la ricerca dipendente dall'argomento `begin()` e `end()` per altri scopi.

## <a name="see-also"></a>Vedi anche

[`auto`](../cpp/auto-cpp.md)<br/>
[Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[`while` Istruzione (C++)](../cpp/while-statement-cpp.md)<br/>
[`do-while` Istruzione (C++)](../cpp/do-while-statement-cpp.md)<br/>
[`for` Istruzione (C++)](../cpp/for-statement-cpp.md)
