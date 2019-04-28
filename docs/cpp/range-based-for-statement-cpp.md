---
title: Istruzione for basata su intervallo (C++)
ms.date: 11/04/2016
ms.assetid: 5750ba1d-ba48-4236-a923-e32de8345c2d
ms.openlocfilehash: 1cbdb4e1636f471c26f6742b9e8686a332ed845f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62244143"
---
# <a name="range-based-for-statement-c"></a>Istruzione for basata su intervallo (C++)

Esegue `statement` ripetutamente e in sequenza per ogni elemento in `expression`.

## <a name="syntax"></a>Sintassi

```
for ( for-range-declaration : expression )
   statement
```

## <a name="remarks"></a>Note

Usare basato su intervallo **per** istruzione per costruire cicli che devono essere eseguite tramite un "range", che è definita come tutto ciò che è possibile eseguire l'iterazione attraverso, ad esempio, `std::vector`, o qualsiasi altra libreria C++ Standard con un intervallo di sequenza è definito da una `begin()` e `end()`. Il nome dichiarato nel `for-range-declaration` parte è locale per il **per** istruzione e non può essere dichiarato nuovamente in `expression` o `statement`. Si noti che il [automatica](../cpp/auto-cpp.md) parola chiave è preferito nel `for-range-declaration` parte dell'istruzione.

**New in Visual Studio 2017:**  I cicli range-based for non richiedono più che begin() ed end() restituiscano oggetti dello stesso tipo. Ciò consente a end() di restituire un oggetto sentinel come viene usato dagli intervalli in base alla definizione nella proposta Ranges-V3. Per altre informazioni, vedere il documento relativo alla [generalizzazione del ciclo for basato su intervallo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html) e la [libreria range-v3 su GitHub](https://github.com/ericniebler/range-v3).

Questo codice viene illustrato come utilizzare in base a intervallo **per** cicli di iterazione per scorrere una matrice e un vettore:

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

L'output è il seguente:

```Output
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
end of integer array test

0.14159 1.14159 2.14159 3.14159 4.14159 5.14159 6.14159 7.14159 8.14159 9.14159
end of vector test
```

Una basata su intervallo **per** ciclo termina quando una di queste condizioni `statement` viene eseguito: una [interruzione](../cpp/break-statement-cpp.md), [restituiscono](../cpp/return-statement-cpp.md), o [goto](../cpp/goto-statement-cpp.md) a un'etichetta istruzione all'esterno basato su intervallo **per** ciclo. Oggetto [continuare](../cpp/continue-statement-cpp.md) istruzione in un intervallo basato **per** ciclo termina solo l'iterazione corrente.

Tenere presente questi fatti su basati su intervallo **per**:

- Riconosce automaticamente le matrici.

- Riconosce i contenitori con `.begin()` e `.end()`.

- Utilizzare la ricerca dipendente dall'argomento `begin()` e `end()` per altri scopi.

## <a name="see-also"></a>Vedere anche

[auto](../cpp/auto-cpp.md)<br/>
[Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione while (C++)](../cpp/while-statement-cpp.md)<br/>
[Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)<br/>
[Istruzione for (C++)](../cpp/for-statement-cpp.md)