---
description: 'Altre informazioni su: errore del compilatore C2672'
title: Errore del compilatore C2672
ms.date: 10/24/2017
f1_keywords:
- C2672
helpviewer_keywords:
- C2672
ms.assetid: 7e86338a-2d4b-40fe-9dd2-ac6886f3f31a
ms.openlocfilehash: 2de901eaa416f3ee675c7b09c342de74dc7207fe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97282081"
---
# <a name="compiler-error-c2672"></a>Errore del compilatore C2672

> '*Function*': non sono state trovate funzioni in overload corrispondenti

Il compilatore non è riuscito a trovare una funzione in overload che corrisponde alla funzione specificata. Non è stata trovata alcuna funzione che accetta parametri corrispondenti oppure nessuna funzione corrispondente ha l'accessibilità necessaria nel contesto.

Se usati da alcuni contenitori o algoritmi di libreria standard, i tipi devono fornire membri accessibili o funzioni Friend che soddisfino i requisiti del contenitore o dell'algoritmo. Ad esempio, i tipi di iteratore dovrebbero derivare da `std::iterator<>` . Le operazioni di confronto o l'uso di altri operatori sui tipi di elemento contenitore possono richiedere che il tipo venga considerato sia come operando a sinistra che come operando destro. L'uso del tipo come operando destro può richiedere l'implementazione dell'operatore come funzione non membro del tipo.

## <a name="example"></a>Esempio

Le versioni del compilatore precedenti a Visual Studio 2017 non hanno eseguito il controllo dell'accesso per i nomi completi in alcuni contesti di modello. Ciò può interferire con il comportamento previsto per SFINAE in cui la sostituzione deve avere esito negativo a causa della non accessibilità di un nome. Questo potrebbe avere causato un arresto anomalo o un comportamento imprevisto in fase di esecuzione perché il compilatore ha chiamato per errore l'overload dell'operatore non corretto. In Visual Studio 2017 viene generato un errore del compilatore.

Questo esempio viene compilato in Visual Studio 2015 ma genera un errore in Visual Studio 2017. Per risolvere questo problema, rendere accessibile il membro del parametro di modello in cui viene valutato.

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
