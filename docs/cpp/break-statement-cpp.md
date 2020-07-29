---
title: Istruzione break (C++)
ms.date: 11/04/2016
f1_keywords:
- break_cpp
helpviewer_keywords:
- break keyword [C++]
ms.assetid: 63739928-8985-4b05-93ce-016322e6da3d
ms.openlocfilehash: 30ca602ecc65099adff7300f730c500a31fe0ed5
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227608"
---
# <a name="break-statement-c"></a>Istruzione break (C++)

L' **`break`** istruzione termina l'esecuzione del ciclo di inclusione più vicino o dell'istruzione condizionale in cui viene visualizzato. Il controllo passa all'istruzione che segue la fine dell'istruzione, se presente.

## <a name="syntax"></a>Sintassi

```
break;
```

## <a name="remarks"></a>Osservazioni

L' **`break`** istruzione viene utilizzata con l'istruzione [Switch](../cpp/switch-statement-cpp.md) condizionale e con le istruzioni del ciclo [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md)e [while](../cpp/while-statement-cpp.md) .

In un' **`switch`** istruzione, l' **`break`** istruzione fa in modo che il programma esegua l'istruzione successiva al di fuori dell' **`switch`** istruzione. Senza un' **`break`** istruzione, viene eseguita ogni istruzione dall' **`case`** etichetta corrispondente alla fine dell' **`switch`** istruzione, inclusa la **`default`** clausola.

In cicli l' **`break`** istruzione termina l'esecuzione dell' **`do`** istruzione, o di inclusione più vicina **`for`** **`while`** . Il controllo passa all'istruzione che segue l'istruzione terminata, se presente.

All'interno di istruzioni nidificate, l' **`break`** istruzione termina solo l' **`do`** **`for`** istruzione,, **`switch`** o **`while`** che la racchiude immediatamente. È possibile utilizzare un' **`return`** **`goto`** istruzione o per trasferire il controllo da strutture annidate più profondamente.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare l' **`break`** istruzione in un **`for`** ciclo.

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

Nel codice seguente viene illustrato come utilizzare **`break`** in un **`while`** ciclo e un **`do`** ciclo.

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

Nel codice seguente viene illustrato come utilizzare **`break`** in un'istruzione switch. È necessario utilizzare **`break`** in ogni caso se si desidera gestire separatamente ogni case. se non si utilizza **`break`** , l'esecuzione del codice passa al caso successivo.

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

[Istruzioni di salto](../cpp/jump-statements-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Istruzione continue](../cpp/continue-statement-cpp.md)
