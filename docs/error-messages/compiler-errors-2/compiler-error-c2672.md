---
title: Errore del compilatore C2672
ms.date: 10/24/2017
f1_keywords:
- C2672
helpviewer_keywords:
- C2672
ms.assetid: 7e86338a-2d4b-40fe-9dd2-ac6886f3f31a
ms.openlocfilehash: df0f656c9db23739ec62629088b9cc5f7950a92d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50570443"
---
# <a name="compiler-error-c2672"></a>Errore del compilatore C2672

> «*funzione*': non corrisponde ad alcuna funzione in overload trovata

Il compilatore non è stato possibile trovare una funzione in overload che corrisponde alla funzione specificata. È stata trovata alcuna funzione che accetta i parametri o nessuna funzione corrisponda corrispondenti abbia l'accessibilità necessaria nel contesto.

Se utilizzato da alcuni algoritmi o contenitori della libreria standard, è necessario fornire i tipi di funzioni friend che soddisfano i requisiti del contenitore o algoritmo o i membri accessibili. Ad esempio, i tipi di iteratore devono derivare da `std::iterator<>`. Operazioni di confronto o l'uso di altri operatori nei tipi di elemento contenitore potrebbe richiedere il tipo di essere considerato un a sinistra sia un operando destro. Usare il tipo come un operando destro può richiedere l'implementazione dell'operatore come funzione non membro del tipo.

## <a name="example"></a>Esempio

Versioni del compilatore prima di Visual Studio 2017 non eseguivano il controllo dell'accesso per i nomi completi in alcuni contesti di modello. Ciò può interferire con il comportamento previsto per SFINAE in cui la sostituzione deve avere esito negativo a causa della non accessibilità di un nome. Questo potrebbe avere causato un arresto anomalo o un comportamento imprevisto in fase di esecuzione perché il compilatore ha chiamato per errore l'overload dell'operatore non corretto. In Visual Studio 2017 viene generato un errore del compilatore.

In questo esempio viene compilato in Visual Studio 2015 ma genera un errore in Visual Studio 2017. Per risolvere questo problema, rendere accessibile il membro del parametro modello in cui viene valutata.

```cpp
#include <type_traits>

template <class T> class S {
// public:    // Uncomment this line to fix
    typedef typename T type;
};

template <class T, std::enable_if<std::is_integral<typename S<T>::type>::value, T> * = 0>
bool f(T x)
{
    return (x == 0);
}

int main()
{
    f(10); // C2672: No matching overloaded function found.
}
```