---
title: Istruzione for basata su intervallo (C++)
ms.date: 11/04/2016
ms.assetid: 5750ba1d-ba48-4236-a923-e32de8345c2d
ms.openlocfilehash: af9811fd707d4dbc28158dba3b6b3fbfcc43e4fe
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077189"
---
# <a name="range-based-for-statement-c"></a>Istruzione for basata su intervallo (C++)

Esegue `statement` ripetutamente e in sequenza per ogni elemento in `expression`.

## <a name="syntax"></a>Sintassi

```
for ( for-range-declaration : expression )
   statement
```

## <a name="remarks"></a>Osservazioni

Usare l'istruzione **for** basata su intervallo per costruire cicli che devono essere eseguiti tramite un "intervallo", definito come qualsiasi elemento che è possibile scorrere, ad esempio `std::vector`o qualsiasi altra C++ sequenza di libreria standard il cui intervallo è definito da una `begin()` e `end()`. Il nome dichiarato nella parte `for-range-declaration` è locale per l'istruzione **for** e non può essere dichiarato di nuovo in `expression` o `statement`. Si noti che la parola chiave [auto](../cpp/auto-cpp.md) è preferibile nella parte `for-range-declaration` dell'istruzione.

**Novità di Visual Studio 2017:**  I cicli for basati su intervallo non richiedono più che Begin () e end () restituiscano oggetti dello stesso tipo. Ciò consente a end() di restituire un oggetto sentinel come viene usato dagli intervalli in base alla definizione nella proposta Ranges-V3. Per altre informazioni, vedere il documento relativo alla [generalizzazione del ciclo for basato su intervallo](https://wg21.link/p0184r0) e la [libreria range-v3 su GitHub](https://github.com/ericniebler/range-v3).

Questo codice Mostra come usare **i cicli for** basati sull'intervallo per scorrere una matrice e un vettore:

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

Un ciclo **for** basato su intervallo termina quando viene eseguita una di queste `statement`: [break](../cpp/break-statement-cpp.md), [return](../cpp/return-statement-cpp.md)o [goto](../cpp/goto-statement-cpp.md) in un'istruzione con etichetta al di fuori del ciclo **for** basato su intervallo. Un'istruzione [continue](../cpp/continue-statement-cpp.md) in un ciclo **for** basato su intervallo termina solo l'iterazione corrente.

Tenere presente queste informazioni sulla base **dell'intervallo per**:

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