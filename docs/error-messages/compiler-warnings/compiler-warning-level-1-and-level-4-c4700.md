---
title: Compilatore avviso (livello 1 e 4) C4700 | Documenti Microsoft
ms.custom: ''
ms.date: 02/21/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4700
dev_langs:
- C++
helpviewer_keywords:
- C4700
ms.assetid: 2da0deb4-77dd-4b05-98d3-b78d74ac4ca7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 876ae98fb2fdea5a9d8bdaecb93b8c229213d329
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33286068"
---
# <a name="compiler-warning-level-1-and-level-4-c4700"></a>Avviso del compilatore (livelli 1 e 4) C4700

> variabile locale non inizializzata '*nome*' utilizzato

La variabile locale *nome* è stata *utilizzato*, vale a dire, leggere, prima che venga assegnato un valore. In C e C++, le variabili locali non vengono inizializzate per impostazione predefinita. Le variabili non inizializzate possono contenere qualsiasi valore e il relativo utilizzo determina un comportamento indefinito. Avviso C4700 quasi sempre indica un bug che può provocare risultati imprevisti o arresti anomali del sistema nel programma.

Per risolvere questo problema, è possibile inizializzare le variabili locali quando vengono dichiarate o assegnarvi un valore prima che vengano utilizzate. Una funzione può essere utilizzata per inizializzare una variabile che viene passato come parametro di riferimento, o quando il relativo indirizzo viene passato come parametro un puntatore.

## <a name="example"></a>Esempio

Questo esempio genera l'errore C4700 quando vengono utilizzate variabili t, u e v prima vengono inizializzate e Mostra il tipo di valore garbage che può generare. Le variabili di x, y e z non causano l'avviso, in quanto vengono inizializzati prima dell'uso:

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

Quando questo codice è l'esecuzione, t, u e v sono non inizializzato, l'output per s è imprevedibile:

```Output
Value in s: 37816963
Value in w: 42
```
