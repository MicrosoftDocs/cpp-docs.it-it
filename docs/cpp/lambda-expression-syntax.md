---
title: Sintassi delle espressioni lambda
ms.date: 05/07/2019
helpviewer_keywords:
- lambda expressions [C++], syntax
ms.assetid: 5d6154a4-f34d-4a15-970d-7e7de45f54e9
ms.openlocfilehash: 8db094dd14e63c08fbe8514f245c1777922224cf
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91352713"
---
# <a name="lambda-expression-syntax"></a>Sintassi delle espressioni lambda

In questo argomento vengono descritti la sintassi e gli elementi strutturali delle espressioni lambda. Per una descrizione delle espressioni lambda, vedere [espressioni lambda](../cpp/lambda-expressions-in-cpp.md).

## <a name="function-objects-vs-lambdas"></a>Oggetti funzione ed espressioni lambda

Quando si scrive il codice, è probabile che si usino i puntatori a funzione e gli oggetti funzione per risolvere i problemi ed eseguire calcoli, soprattutto quando si usano gli [algoritmi della libreria standard C++](../standard-library/algorithms.md). I puntatori a funzione e gli oggetti funzione presentano vantaggi e svantaggi: i puntatori a funzione, ad esempio, presentano un sovraccarico sintattico minimo, ma non mantengono lo stato interno a un ambito, mentre gli oggetti funzione possono mantenere lo stato, ma richiedono il sovraccarico sintattico di una definizione di classe.

Un'espressione lambda combina i vantaggi dei puntatori a funzione e degli oggetti funzione, ma non gli svantaggi. Analogamente a un oggetto funzione, un'espressione lambda è flessibile e può mantenere lo stato, ma a differenza di un oggetto funzione, la sua sintassi compressa non richiede una definizione di classe esplicita. Utilizzando le espressioni lambda, è possibile scrivere codice meno complesso e meno soggetto agli errori del codice per un oggetto funzione equivalente.

Negli esempi seguenti viene confrontato l'utilizzo di un'espressione lambda all'utilizzo di un oggetto funzione. Nel primo esempio viene usata un'espressione lambda per mostrare sulla console se ogni elemento di un oggetto `vector` è pari o dispari. Nel secondo esempio viene usato un oggetto funzione per eseguire la stessa attività.

## <a name="example-1-using-a-lambda"></a>Esempio 1: Utilizzo di un'espressione lambda

Questo esempio passa un'espressione lambda alla funzione **for_each** . L'espressione lambda stampa un risultato che indica se ogni elemento in un oggetto `vector` è pari o dispari.

### <a name="code"></a>Codice

```cpp
// even_lambda.cpp
// compile with: cl /EHsc /nologo /W4 /MTd
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   // Create a vector object that contains 9 elements.
   vector<int> v;
   for (int i = 1; i < 10; ++i) {
      v.push_back(i);
   }

   // Count the number of even numbers in the vector by
   // using the for_each function and a lambda.
   int evenCount = 0;
   for_each(v.begin(), v.end(), [&evenCount] (int n) {
      cout << n;
      if (n % 2 == 0) {
         cout << " is even " << endl;
         ++evenCount;
      } else {
         cout << " is odd " << endl;
      }
   });

   // Print the count of even numbers to the console.
   cout << "There are " << evenCount
        << " even numbers in the vector." << endl;
}
```

```Output
1 is odd
2 is even
3 is odd
4 is even
5 is odd
6 is even
7 is odd
8 is even
9 is odd
There are 4 even numbers in the vector.
```

### <a name="comments"></a>Commenti

Nell'esempio, il terzo argomento della funzione **for_each** è un'espressione lambda. La parte `[&evenCount]` specifica la clausola di acquisizione dell'espressione, `(int n)` specifica l'elenco di parametri, mentre la parte rimanente specifica il corpo dell'espressione.

## <a name="example-2-using-a-function-object"></a>Esempio 2: Utilizzo di un oggetto funzione

Talvolta un'espressione lambda potrebbe risultare troppo complessa da gestire per ampliare l'esempio precedente. Nell'esempio seguente viene usato un oggetto funzione anziché un'espressione lambda, insieme alla funzione **for_each** , per produrre gli stessi risultati dell'esempio 1. In entrambi gli esempi viene memorizzato il conteggio dei numeri pari in un oggetto `vector`. Per mantenere lo stato dell'operazione, la classe `FunctorClass` archivia la variabile `m_evenCount` per riferimento come variabile membro. Per eseguire l'operazione, `FunctorClass` implementa l'operatore di chiamata di funzione, **operator ()**. Il compilatore Microsoft C++ genera codice paragonabile a dimensioni e prestazioni al codice lambda nell'esempio 1. Per un problema di base simile a quello presentato in questo articolo, la progettazione più semplice delle espressioni lambda è probabilmente preferibile alla progettazione dell'oggetto funzione. Se tuttavia si prevede che la funzionalità possa richiedere un'espansione significativa in futuro, usare la progettazione dell'oggetto funzione in modo che la manutenzione del codice risulti più facile.

Per ulteriori informazioni sull' **operatore ()**, vedere [chiamata di funzione](../cpp/function-call-cpp.md). Per ulteriori informazioni sulla funzione **for_each** , vedere [for_each](../standard-library/algorithm-functions.md#for_each).

### <a name="code"></a>Codice

```cpp
// even_functor.cpp
// compile with: /EHsc
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class FunctorClass
{
public:
    // The required constructor for this example.
    explicit FunctorClass(int& evenCount)
        : m_evenCount(evenCount) { }

    // The function-call operator prints whether the number is
    // even or odd. If the number is even, this method updates
    // the counter.
    void operator()(int n) const {
        cout << n;

        if (n % 2 == 0) {
            cout << " is even " << endl;
            ++m_evenCount;
        } else {
            cout << " is odd " << endl;
        }
    }

private:
    // Default assignment operator to silence warning C4512.
    FunctorClass& operator=(const FunctorClass&);

    int& m_evenCount; // the number of even variables in the vector.
};

int main()
{
    // Create a vector object that contains 9 elements.
    vector<int> v;
    for (int i = 1; i < 10; ++i) {
        v.push_back(i);
    }

    // Count the number of even numbers in the vector by
    // using the for_each function and a function object.
    int evenCount = 0;
    for_each(v.begin(), v.end(), FunctorClass(evenCount));

    // Print the count of even numbers to the console.
    cout << "There are " << evenCount
        << " even numbers in the vector." << endl;
}
```

```Output
1 is odd
2 is even
3 is odd
4 is even
5 is odd
6 is even
7 is odd
8 is even
9 is odd
There are 4 even numbers in the vector.
```

## <a name="see-also"></a>Vedere anche

[Espressioni lambda](../cpp/lambda-expressions-in-cpp.md)<br/>
[Esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md)<br/>
[generare](../standard-library/algorithm-functions.md#generate)<br/>
[generate_n](../standard-library/algorithm-functions.md#generate_n)<br/>
[for_each](../standard-library/algorithm-functions.md#for_each)<br/>
[Specifiche di eccezione (throw)](../cpp/exception-specifications-throw-cpp.md)<br/>
[Avviso del compilatore (livello 1) C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md)<br/>
[Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)
