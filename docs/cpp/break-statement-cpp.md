---
title: Istruzione break (C++)
ms.date: 11/04/2016
f1_keywords:
- break_cpp
helpviewer_keywords:
- break keyword [C++]
ms.assetid: 63739928-8985-4b05-93ce-016322e6da3d
ms.openlocfilehash: 23d31e1456106d5f82c4a13079c72c231b8477bd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190482"
---
# <a name="break-statement-c"></a>Istruzione break (C++)

L'istruzione **break** termina l'esecuzione del ciclo di inclusione più vicino o dell'istruzione condizionale in cui viene visualizzato. Il controllo passa all'istruzione che segue la fine dell'istruzione, se presente.

## <a name="syntax"></a>Sintassi

```
break;
```

## <a name="remarks"></a>Osservazioni

L'istruzione **break** viene utilizzata con l'istruzione [Switch](../cpp/switch-statement-cpp.md) condizionale e con le istruzioni del ciclo [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md)e [while](../cpp/while-statement-cpp.md) .

In un'istruzione **Switch** l'istruzione **break** fa sì che il programma esegua l'istruzione successiva al di fuori dell'istruzione **Switch** . Senza un'istruzione **break** , viene eseguita ogni istruzione dall'etichetta **case** corrispondente alla fine dell'istruzione **Switch** , inclusa la clausola **default** .

In cicli l'istruzione **break** termina l'esecuzione dell'istruzione di inclusione **do**, **for**o **while** più vicina. Il controllo passa all'istruzione che segue l'istruzione terminata, se presente.

All'interno di istruzioni nidificate, l'istruzione **break** termina solo l'istruzione **do**, **for**, **Switch**o **while** che la racchiude immediatamente. È possibile utilizzare un'istruzione **return** o **goto** per trasferire il controllo da strutture annidate più profondamente.

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare l'istruzione **break** in un ciclo **for** .

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

Il codice seguente illustra come usare **break** in un ciclo **while** e un ciclo **do** .

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

Il codice seguente illustra come usare **break** in un'istruzione switch. È necessario utilizzare **Interrompi** in ogni caso se si desidera gestire separatamente ogni case. Se non si usa **break**, l'esecuzione del codice passa al caso successivo.

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
