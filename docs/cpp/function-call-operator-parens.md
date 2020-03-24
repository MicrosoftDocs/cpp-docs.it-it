---
title: 'Operatore di chiamata di funzione: ()'
ms.date: 11/04/2016
helpviewer_keywords:
- ( ) function call operator
- function calls, C++ functions
- () function call operator
- postfix operators [C++]
- function calls, operator
- functions [C++], function-call operator
- function call operator ()
ms.assetid: 50c92e59-a4bf-415a-a6ab-d66c679ee80a
ms.openlocfilehash: 08c60ff261e944ed5b54b51a013a6d331f212154
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179770"
---
# <a name="function-call-operator-"></a>Operatore di chiamata di funzione: ()

Un'espressione suffissa seguita dall'operatore di chiamata di funzione, **()** , specifica una chiamata di funzione.

## <a name="syntax"></a>Sintassi

```
postfix-expression
( [argument-expression-list ] )
```

## <a name="remarks"></a>Osservazioni

Gli argomenti nell'operatore di chiamata di funzione sono uguali a zero o a più espressioni separate da virgole, ossia sono gli argomenti effettivi della funzione.

Il *suffisso-espressione* deve restituire un indirizzo di funzione (ad esempio, un identificatore di funzione o il valore di un puntatore a funzione) e *argument-expression-list* è un elenco di espressioni (separate da virgole) i cui valori (gli argomenti) vengono passati alla funzione. L'argomento *argument-expression-list* può essere vuoto.

L' *espressione suffisso* deve essere di uno dei seguenti tipi:

- Funzione che restituisce il tipo `T`. Una dichiarazione di esempio è

    ```cpp
    T func( int i )
    ```

- Puntatore a una funzione che restituisce il tipo `T`. Una dichiarazione di esempio è

    ```cpp
    T (*func)( int i )
    ```

- Riferimento a una funzione che restituisce il tipo `T`. Una dichiarazione di esempio è

    ```cpp
    T (&func)(int i)
    ```

- Deferenziazione della funzione puntatore a membro che restituisce il tipo `T`. Le chiamate di funzione di esempio sono

    ```cpp
    (pObject->*pmf)();
    (Object.*pmf)();
    ```

## <a name="example"></a>Esempio

Nell'esempio seguente viene chiamata la funzione della libreria standard `strcat_s` con tre argomenti:

```cpp
// expre_Function_Call_Operator.cpp
// compile with: /EHsc

#include <iostream>
#include <string>

// C++ Standard Library name space
using namespace std;

int main()
{
    enum
    {
        sizeOfBuffer = 20
    };

    char s1[ sizeOfBuffer ] = "Welcome to ";
    char s2[ ] = "C++";

    strcat_s( s1, sizeOfBuffer, s2 );

    cout << s1 << endl;
}
```

```Output
Welcome to C++
```

## <a name="function-call-results"></a>Risultati della chiamata di funzione

Una chiamata di funzione restituisce un r-value, a meno che la funzione non sia dichiarata come tipo di riferimento. Le funzioni con tipo restituito di riferimento restituiscono l-value e possono essere utilizzate a sinistra di un'istruzione di assegnazione, come indicato di seguito:

```cpp
// expre_Function_Call_Results.cpp
// compile with: /EHsc
#include <iostream>
class Point
{
public:
    // Define "accessor" functions as
    // reference types.
    unsigned& x() { return _x; }
    unsigned& y() { return _y; }
private:
    unsigned _x;
    unsigned _y;
};

using namespace std;
int main()
{
    Point ThePoint;

    ThePoint.x() = 7;           // Use x() as an l-value.
    unsigned y = ThePoint.y();  // Use y() as an r-value.

    // Use x() and y() as r-values.
    cout << "x = " << ThePoint.x() << "\n"
         << "y = " << ThePoint.y() << "\n";
}
```

Il codice precedente definisce una classe denominata `Point`, che contiene oggetti dati privati che rappresentano le coordinate *x* e *y* . È necessario modificare tali oggetti e recuperare i relativi valori. Questo programma rappresenta una delle diverse progettazioni possibili per tale classe. Un'altra progettazione valida consiste nell'utilizzo delle funzioni `GetX` e `SetX` o `GetY` e `SetY`.

Le funzioni che restituiscono tipi di classe, i puntatori ai tipi di classe o i riferimenti ai tipi di classe possono essere utilizzati come operando a sinistra degli operatori di selezione dei membri. Pertanto, il codice seguente è valido:

```cpp
// expre_Function_Results2.cpp
class A {
public:
   A() {}
   A(int i) {}
   int SetA( int i ) {
      return (I = i);
   }

   int GetA() {
      return I;
   }

private:
   int I;
};

A func1() {
   A a = 0;
   return a;
}

A* func2() {
   A *a = new A();
   return a;
}

A& func3() {
   A *a = new A();
   A &b = *a;
   return b;
}

int main() {
   int iResult = func1().GetA();
   func2()->SetA( 3 );
   func3().SetA( 7 );
}
```

Le funzioni possono essere chiamate in modo ricorsivo. Per ulteriori informazioni sulle dichiarazioni di funzione, vedere [funzioni](functions-cpp.md). Il materiale correlato è in [unità di conversione e collegamento](../cpp/program-and-linkage-cpp.md).

## <a name="see-also"></a>Vedere anche

[Espressioni di suffissi](../cpp/postfix-expressions.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Chiamata di funzione](../c-language/function-call-c.md)
