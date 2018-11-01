---
title: Avviso del compilatore (livelli 1 e 4) C4700
ms.date: 02/21/2018
f1_keywords:
- C4700
helpviewer_keywords:
- C4700
ms.assetid: 2da0deb4-77dd-4b05-98d3-b78d74ac4ca7
ms.openlocfilehash: fa3326bd5ab495dbc4c54130bb168422eb827dce
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50463219"
---
# <a name="compiler-warning-level-1-and-level-4-c4700"></a>Avviso del compilatore (livelli 1 e 4) C4700

> variabile locale non inizializzata '*nome*' usato

La variabile locale *name* è stata *utilizzato*, vale a dire, leggere, prima che venga assegnato un valore. In C e C++, le variabili locali non vengono inizializzate per impostazione predefinita. Le variabili non inizializzate possono contenere qualsiasi valore e il relativo utilizzo conduce a un comportamento indefinito. Avviso C4700 quasi sempre indica un bug che può causare risultati imprevisti o arresti anomali del sistema nel programma.

Per risolvere questo problema, è possibile inizializzare le variabili locali quando vengono dichiarate oppure assegnare un valore a essi prima che vengano utilizzate. Una funzione può essere usata per inizializzare una variabile che viene passato come parametro di riferimento, o quando il relativo indirizzo viene passato come un parametro del puntatore.

## <a name="example"></a>Esempio

In questo esempio genera C4700 quando le variabili t, u e v vengono usati prima che vengono inizializzati e Mostra il tipo di valore garbage che può generare. Le variabili x, y e z non causano l'avviso, in quanto vengono inizializzati prima dell'uso:

```cpp
// c4700.cpp
// compile by using: cl /EHsc /W4 c4700.cpp
#include <iostream>

// function takes an int reference to initialize
void initialize(int& i)
{
    i = 21;
}

int main()
{
    int s, t, u, v;   // Danger, uninitialized variables

    s = t + u + v;    // C4700: t, u, v used before initialization
    std::cout << "Value in s: " << s << std::endl;

    int w, x;         // Danger, uninitialized variables
    initialize(x);    // fix: call function to init x before use
    int y{10};        // fix: initialize y, z when declared
    int z{11};        // This C++11 syntax is recommended over int z = 11;

    w = x + y + z;    // Okay, all values initialized before use
    std::cout << "Value in w: " << w << std::endl;
}
```

Quando questo codice è run, t, u e v sono non inizializzato e l'output per s non è prevedibile:

```Output
Value in s: 37816963
Value in w: 42
```
