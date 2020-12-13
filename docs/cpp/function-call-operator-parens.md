---
description: 'Altre informazioni su: operatore di chiamata di funzione: ()'
title: 'Operatore di chiamata di funzione: ()'
ms.date: 06/11/2020
helpviewer_keywords:
- ( ) function call operator
- function calls, C++ functions
- () function call operator
- postfix operators [C++]
- function calls, operator
- functions [C++], function-call operator
- function call operator ()
ms.assetid: 50c92e59-a4bf-415a-a6ab-d66c679ee80a
no-loc:
- opt
ms.openlocfilehash: 351674f345c7213a3c164ff88e9a165775088c68
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344562"
---
# <a name="function-call-operator-"></a>Operatore di chiamata di funzione: ()

Una chiamata di funzione è un tipo di *`postfix-expression`* , formato da un'espressione che restituisce una funzione o un oggetto chiamabile seguito dall'operatore di chiamata di funzione, **`()`** . Un oggetto può dichiarare una `operator ()` funzione, che fornisce la semantica di chiamata di funzione per l'oggetto.

## <a name="syntax"></a>Sintassi

> *`postfix-expression`*:\
> &emsp;*`postfix-expression`* **`(`** *`argument-expression-list`* <sub>opt</sub> **`)`**

## <a name="remarks"></a>Commenti

Gli argomenti dell'operatore di chiamata di funzione provengono da un oggetto *`argument-expression-list`* , un elenco delimitato da virgole di espressioni. I valori di queste espressioni vengono passati alla funzione come argomenti. *Argument-expression-list* può essere vuoto. Prima di C++ 17, l'ordine di valutazione dell'espressione di funzione e le espressioni di argomento non sono specificati e possono verificarsi in qualsiasi ordine. In C++ 17 e versioni successive, l'espressione di funzione viene valutata prima di qualsiasi espressione di argomento o di argomenti predefiniti. Le espressioni di argomento vengono valutate in una sequenza indeterminata.

*`postfix-expression`* Restituisce la funzione da chiamare. Può assumere diverse forme:

- identificatore di funzione, visibile nell'ambito corrente o nell'ambito di uno degli argomenti della funzione forniti.
- espressione che restituisce una funzione, un puntatore a funzione, un oggetto chiamabile o un riferimento a uno,
- funzione membro, esplicita o implicita,
- puntatore dereferenziato a una funzione membro.

*`postfix-expression`* Può essere un identificatore di funzione in overload o una funzione di accesso alla funzione membro di overload. Le regole per la risoluzione dell'overload determinano la funzione effettiva da chiamare. Se la funzione membro è virtuale, la funzione da chiamare viene determinata in fase di esecuzione.

Di seguito sono riportate alcune dichiarazioni di esempio:

- Funzione che restituisce il tipo `T`. Una dichiarazione di esempio è

    ```cpp
    T func( int i );
    ```

- Puntatore a una funzione che restituisce il tipo `T`. Una dichiarazione di esempio è

    ```cpp
    T (*func)( int i );
    ```

- Riferimento a una funzione che restituisce il tipo `T`. Una dichiarazione di esempio è

    ```cpp
    T (&func)(int i);
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

Una chiamata di funzione restituisce un valore rvalue a meno che la funzione non sia dichiarata come tipo di riferimento. Le funzioni con i tipi restituiti di riferimento restituiscono lvalue. Queste funzioni possono essere usate sul lato sinistro di un'istruzione di assegnazione, come illustrato di seguito:

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

Il codice precedente definisce una classe denominata `Point` , che contiene oggetti dati privati che rappresentano le coordinate *x* e *y* . È necessario modificare tali oggetti e recuperare i relativi valori. Questo programma rappresenta una delle diverse progettazioni possibili per tale classe. Un'altra progettazione valida consiste nell'utilizzo delle funzioni `GetX` e `SetX` o `GetY` e `SetY`.

Le funzioni che restituiscono tipi di classe, i puntatori ai tipi di classe o i riferimenti ai tipi di classe possono essere utilizzati come operando a sinistra degli operatori di selezione dei membri. Il codice seguente è valido:

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

## <a name="see-also"></a>Vedi anche

[Espressioni di suffisso](../cpp/postfix-expressions.md)<br/>
[Operatori, precedenza e associatività predefiniti di C++](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Chiamata di funzione](../c-language/function-call-c.md)
