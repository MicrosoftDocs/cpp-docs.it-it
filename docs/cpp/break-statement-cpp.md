---
title: Istruzione break (C++)
ms.date: 11/04/2016
f1_keywords:
- break_cpp
helpviewer_keywords:
- break keyword [C++]
ms.assetid: 63739928-8985-4b05-93ce-016322e6da3d
ms.openlocfilehash: 3dda0b19fffaaf725ab363a0c4fe70d2ca54e3f7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662501"
---
# <a name="break-statement-c"></a>Istruzione break (C++)

Il **interruzione** istruzione termina l'esecuzione di inclusione più vicino ciclo o dell'istruzione condizionale in cui è presente. Il controllo passa all'istruzione che segue la fine dell'istruzione, se presente.

## <a name="syntax"></a>Sintassi

```
break;
```

## <a name="remarks"></a>Note

Il **break** istruzione viene usata con il parametro condizionale [passare](../cpp/switch-statement-cpp.md) istruzione e con il [eseguire](../cpp/do-while-statement-cpp.md), [per](../cpp/for-statement-cpp.md), e [durante](../cpp/while-statement-cpp.md) le istruzioni loop.

In un **passa** istruzione, il **interruzione** istruzione fa sì che il programma eseguire l'istruzione successiva di fuori il **passare** istruzione. Senza una **interruzione** , ogni istruzione corrispondente **case** etichetta alla fine della **passare** istruzione, tra cui la **predefinita**clausola, viene eseguita.

Nei cicli, il **break** istruzione termina l'esecuzione di inclusione più vicina **si**, **per**, oppure **mentre** istruzione. Il controllo passa all'istruzione che segue l'istruzione terminata, se presente.

Nelle istruzioni annidate il **break** termina solo l'istruzione il **si**, **per**, **passare**, o **durante**istruzione che la include. È possibile usare una **restituire** oppure **goto** istruzione per trasferire il controllo da più profondamente annidati strutture.

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il **INTERR** istruzione in un **per** ciclo.

```cpp
#include <iostream>
using namespace std;

int main()
{
    // An example of a standard for loop
    for (int i = 1; i < 10; i++)
    {
        if (i == 4) {
            break;
        }
        cout << i << '\n';
    }

    // An example of a range-based for loop
int nums []{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : nums) {
        if (i == 4) {
            break;
        }
        cout << i << '\n';
    }
}
```

```Output
In each case:
1
2
3
```

Il codice seguente viene illustrato come utilizzare **INTERR** in un **mentre** ciclo e un **si** ciclo.

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;

    while (i < 10) {
        if (i == 4) {
            break;
        }
        cout << i << '\n';
        i++;
    }

    i = 0;
    do {
        if (i == 4) {
            break;
        }
        cout << i << '\n';
        i++;
    } while (i < 10);
}
```

```Output
In each case:
0123
```

Il codice seguente viene illustrato come utilizzare **interruzione** in un'istruzione switch. È necessario utilizzare **INTERR** in ogni caso, se si desidera gestire ogni caso separatamente; se non si usa **interruzione**, l'esecuzione del codice passa al caso successivo.

```cpp
#include <iostream>
using namespace std;

enum Suit{ Diamonds, Hearts, Clubs, Spades };

int main() {

    Suit hand;
    . . .
    // Assume that some enum value is set for hand
    // In this example, each case is handled separately
    switch (hand)
    {
    case Diamonds:
        cout << "got Diamonds \n";
        break;
    case Hearts:
        cout << "got Hearts \n";
        break;
    case Clubs:
        cout << "got Clubs \n";
        break;
    case Spades:
        cout << "got Spades \n";
        break;
    default:
          cout << "didn't get card \n";
    }
    // In this example, Diamonds and Hearts are handled one way, and
    // Clubs, Spades, and the default value are handled another way
    switch (hand)
    {
    case Diamonds:
    case Hearts:
        cout << "got a red card \n";
        break;
    case Clubs:
    case Spades:
    default:
        cout << "didn't get a red card \n";
    }
}
```

## <a name="see-also"></a>Vedere anche

[Istruzioni di spostamento](../cpp/jump-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione continue](../cpp/continue-statement-cpp.md)