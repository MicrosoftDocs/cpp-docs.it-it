---
description: 'Altre informazioni su: avviso del compilatore (livello 1 e livello 4) C4700'
title: Avviso del compilatore (livelli 1 e 4) C4700
ms.date: 02/21/2018
f1_keywords:
- C4700
helpviewer_keywords:
- C4700
ms.assetid: 2da0deb4-77dd-4b05-98d3-b78d74ac4ca7
ms.openlocfilehash: 7ba19bdd6d8e25e095f796adc8cdb60b5cc8d325
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97241599"
---
# <a name="compiler-warning-level-1-and-level-4-c4700"></a>Avviso del compilatore (livelli 1 e 4) C4700

> utilizzata variabile locale '*Name*' non inizializzata

Il *nome* della variabile locale è stato *usato*, ovvero letto da, prima che sia stato assegnato un valore. In C e C++, le variabili locali non sono inizializzate per impostazione predefinita. Le variabili non inizializzate possono contenere qualsiasi valore e il loro utilizzo comporta un comportamento non definito. Avviso C4700 indica quasi sempre un bug che può causare risultati imprevedibili o arresti anomali del programma.

Per risolvere questo problema, è possibile inizializzare le variabili locali quando vengono dichiarate oppure assegnare loro un valore prima che vengano usate. Una funzione può essere usata per inizializzare una variabile passata come parametro di riferimento o quando l'indirizzo viene passato come parametro del puntatore.

## <a name="example"></a>Esempio

Questo esempio genera C4700 quando vengono usate le variabili t, u e v prima che vengano inizializzate e viene visualizzato il tipo di valore di Garbage Collection che può risultare. Le variabili x, y e z non causano l'avviso perché vengono inizializzate prima dell'utilizzo:

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

Quando viene eseguito questo codice, t, u e v non sono inizializzati e l'output per s è imprevedibile:

```Output
Value in s: 37816963
Value in w: 42
```
