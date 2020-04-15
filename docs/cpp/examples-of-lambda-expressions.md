---
title: Esempi di espressioni lambda
ms.date: 05/07/2019
helpviewer_keywords:
- lambda expressions [C++], examples
ms.assetid: 52506b15-0771-4190-a966-2f302049ca86
ms.openlocfilehash: 106417519d00da1363f214492af9657712487088
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81320346"
---
# <a name="examples-of-lambda-expressions"></a>Esempi di espressioni lambda

In questo articolo viene illustrato come utilizzare le espressioni lambda nei programmi. Per una panoramica delle espressioni lambda, vedere [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md). Per ulteriori informazioni sulla struttura di un'espressione lambda, vedere [Sintassi delle espressioni lambda](../cpp/lambda-expression-syntax.md).

## <a name="declaring-lambda-expressions"></a><a name="declaringLambdaExpressions"></a>Dichiarazione di espressioni lambdaDeclaring Lambda Expressions

### <a name="example-1"></a>Esempio 1

Poiché un'espressione lambda è tipizzata, è possibile assegnarla a una variabile automatica o a un oggetto [funzione,](../standard-library/function-class.md) come illustrato di seguito:Because a lambda expression is typed, you can assign it to an **auto** variable or to a function object, as shown here:

### <a name="code"></a>Codice

```cpp
// declaring_lambda_expressions1.cpp
// compile with: /EHsc /W4
#include <functional>
#include <iostream>

int main()
{

    using namespace std;

    // Assign the lambda expression that adds two numbers to an auto variable.
    auto f1 = [](int x, int y) { return x + y; };

    cout << f1(2, 3) << endl;

    // Assign the same lambda expression to a function object.
    function<int(int, int)> f2 = [](int x, int y) { return x + y; };

    cout << f2(3, 4) << endl;
}
```

### <a name="output"></a>Output

```Output
5
7
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [auto](../cpp/auto-cpp.md), [Function Class](../standard-library/function-class.md)e [Function Call](../cpp/function-call-cpp.md).

Sebbene le espressioni lambda vengano dichiarate soprattutto nel corpo di una funzione, è possibile dichiararle in qualsiasi posizione sia possibile inizializzare una variabile.

### <a name="example-2"></a>Esempio 2

Quando l'espressione viene dichiarata invece di quando viene chiamata l'espressione, il compilatore Microsoft Cè associa un'espressione lambda alle relative variabili acquisite. Nell'esempio seguente viene illustrata un'espressione lambda che acquisisce la variabile locale `i` per valore e la variabile locale `j` per riferimento. Poiché l'espressione lambda acquisisce `i` per valore, la riassegnazione successiva di `i` nel programma non influisce sul risultato dell'espressione. Tuttavia, poiché l'espressione lambda acquisisce `j` per riferimento, la riassegnazione di `j` influisce sul risultato dell'espressione.

### <a name="code"></a>Codice

```cpp
// declaring_lambda_expressions2.cpp
// compile with: /EHsc /W4
#include <functional>
#include <iostream>

int main()
{
   using namespace std;

   int i = 3;
   int j = 5;

   // The following lambda expression captures i by value and
   // j by reference.
   function<int (void)> f = [i, &j] { return i + j; };

   // Change the values of i and j.
   i = 22;
   j = 44;

   // Call f and print its result.
   cout << f() << endl;
}
```

### <a name="output"></a>Output

```Output
47
```

[[In questo articolo](#top)]

## <a name="calling-lambda-expressions"></a><a name="callingLambdaExpressions"></a>Chiamata di espressioni lambdaCalling Lambda Expressions

È possibile chiamare un'espressione lambda immediatamente, come illustrato nel frammento di codice seguente. Nel secondo frammento viene illustrato come passare un'espressione lambda come `find_if`argomento agli algoritmi della libreria standard di C, ad esempio .

### <a name="example-1"></a>Esempio 1

Nell'esempio seguente viene dichiarata un'espressione lambda che restituisce la somma di due interi e chiama l'espressione immediatamente con gli argomenti `5` e `4`:

### <a name="code"></a>Codice

```cpp
// calling_lambda_expressions1.cpp
// compile with: /EHsc
#include <iostream>

int main()
{
   using namespace std;
   int n = [] (int x, int y) { return x + y; }(5, 4);
   cout << n << endl;
}
```

### <a name="output"></a>Output

```Output
9
```

### <a name="example-2"></a>Esempio 2

Nell'esempio seguente viene passata un'espressione lambda come argomento alla funzione `find_if`. L'espressione lambda restituisce **true** se il relativo parametro è un numero pari.

### <a name="code"></a>Codice

```cpp
// calling_lambda_expressions2.cpp
// compile with: /EHsc /W4
#include <list>
#include <algorithm>
#include <iostream>

int main()
{
    using namespace std;

    // Create a list of integers with a few initial elements.
    list<int> numbers;
    numbers.push_back(13);
    numbers.push_back(17);
    numbers.push_back(42);
    numbers.push_back(46);
    numbers.push_back(99);

    // Use the find_if function and a lambda expression to find the
    // first even number in the list.
    const list<int>::const_iterator result =
        find_if(numbers.begin(), numbers.end(),[](int n) { return (n % 2) == 0; });

    // Print the result.
    if (result != numbers.end()) {
        cout << "The first even number in the list is " << *result << "." << endl;
    } else {
        cout << "The list contains no even numbers." << endl;
    }
}
```

### <a name="output"></a>Output

```Output
The first even number in the list is 42.
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni `find_if` sulla funzione, vedere [find_if](../standard-library/algorithm-functions.md#find_if). Per ulteriori informazioni sulle funzioni della libreria standard di C, che eseguono algoritmi comuni, vedere [ \<>dell'algoritmo ](../standard-library/algorithm.md).

[[In questo articolo](#top)]

## <a name="nesting-lambda-expressions"></a><a name="nestingLambdaExpressions"></a>Annidamento di espressioni lambdaNesting Lambda Expressions

### <a name="example"></a>Esempio

È possibile annidare un'espressione lambda all'interno di un'altra, come illustrato nell'esempio. L'espressione lambda interna moltiplica il relativo argomento per 2 e restituisce il risultato. L'espressione lambda esterna chiama l'espressione lambda interna con il relativo argomento e aggiunge 3 al risultato.

### <a name="code"></a>Codice

```cpp
// nesting_lambda_expressions.cpp
// compile with: /EHsc /W4
#include <iostream>

int main()
{
    using namespace std;

    // The following lambda expression contains a nested lambda
    // expression.
    int timestwoplusthree = [](int x) { return [](int y) { return y * 2; }(x) + 3; }(5);

    // Print the result.
    cout << timestwoplusthree << endl;
}
```

### <a name="output"></a>Output

```Output
13
```

### <a name="remarks"></a>Osservazioni

In questo esempio `[](int y) { return y * 2; }` è l'espressione lambda annidata.

[[In questo articolo](#top)]

## <a name="higher-order-lambda-functions"></a><a name="higherOrderLambdaExpressions"></a>Funzioni Lambda di ordine superiore

### <a name="example"></a>Esempio

Molti linguaggi di programmazione supportano il concetto di *una funzione di ordine superiore.* Una funzione di ordine superiore è un'espressione lambda che accetta un'altra espressione lambda come argomento o che restituisce un'espressione lambda. È possibile usare la classe di [funzione](../standard-library/function-class.md) per abilitare un'espressione lambda di C, il comportarsi come una funzione di ordine superiore. Nell'esempio seguente viene illustrata un'espressione lambda che restituisce un oggetto `function` e un'espressione lambda che accetta un oggetto `function` come argomento.

### <a name="code"></a>Codice

```cpp
// higher_order_lambda_expression.cpp
// compile with: /EHsc /W4
#include <iostream>
#include <functional>

int main()
{
    using namespace std;

    // The following code declares a lambda expression that returns
    // another lambda expression that adds two numbers.
    // The returned lambda expression captures parameter x by value.
    auto addtwointegers = [](int x) -> function<int(int)> {
        return [=](int y) { return x + y; };
    };

    // The following code declares a lambda expression that takes another
    // lambda expression as its argument.
    // The lambda expression applies the argument z to the function f
    // and multiplies by 2.
    auto higherorder = [](const function<int(int)>& f, int z) {
        return f(z) * 2;
    };

    // Call the lambda expression that is bound to higherorder.
    auto answer = higherorder(addtwointegers(7), 8);

    // Print the result, which is (7+8)*2.
    cout << answer << endl;
}
```

### <a name="output"></a>Output

```Output
30
```

[[In questo articolo](#top)]

## <a name="using-a-lambda-expression-in-a-function"></a><a name="methodLambdaExpressions"></a>Uso di un'espressione lambda in una funzioneUsing a Lambda Expression in a Function

### <a name="example"></a>Esempio

È possibile usare le espressioni lambda nel corpo di una funzione. L'espressione lambda può accedere a qualsiasi funzione o membro dati a cui può accedere la funzione contenitrice. È possibile acquisire in modo esplicito o implicito il puntatore **this** per fornire l'accesso alle funzioni e ai membri dati della classe che lo contiene.
**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std:c'17](../build/reference/std-specify-language-standard-version.md)): **acquisisce questo** valore in base al valore (`[*this]`) quando l'espressione lambda verrà utilizzata in operazioni asincrone o parallele in cui il codice potrebbe essere eseguito dopo che l'oggetto originale esce dall'ambito.

È possibile utilizzare il puntatore this in modo esplicito in una funzione, come illustrato di seguito:You can use the **this** pointer explicitly in a function, as shown here:

```cpp
// capture "this" by reference
void ApplyScale(const vector<int>& v) const
{
   for_each(v.begin(), v.end(),
      [this](int n) { cout << n * _scale << endl; });
}

// capture "this" by value (Visual Studio 2017 version 15.3 and later)
void ApplyScale2(const vector<int>& v) const
{
   for_each(v.begin(), v.end(),
      [*this](int n) { cout << n * _scale << endl; });
}
```

È anche possibile acquisire il puntatore this in modo implicito:You can also capture the **this** pointer implicitly:

```cpp
void ApplyScale(const vector<int>& v) const
{
   for_each(v.begin(), v.end(),
      [=](int n) { cout << n * _scale << endl; });
}
```

Nell'esempio seguente viene illustrata la classe `Scale`, che incapsula un valore di scala.

```cpp
// function_lambda_expression.cpp
// compile with: /EHsc /W4
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Scale
{
public:
    // The constructor.
    explicit Scale(int scale) : _scale(scale) {}

    // Prints the product of each element in a vector object
    // and the scale value to the console.
    void ApplyScale(const vector<int>& v) const
    {
        for_each(v.begin(), v.end(), [=](int n) { cout << n * _scale << endl; });
    }

private:
    int _scale;
};

int main()
{
    vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);

    // Create a Scale object that scales elements by 3 and apply
    // it to the vector object. Does not modify the vector.
    Scale s(3);
    s.ApplyScale(values);
}
```

### <a name="output"></a>Output

```Output
3
6
9
12
```

### <a name="remarks"></a>Osservazioni

La funzione `ApplyScale` usa un'espressione lambda per stampare il prodotto del valore di scala e ogni elemento in un oggetto `vector`. L'espressione lambda acquisisce in modo implicito **this** in modo che possa accedere al `_scale` membro.

[[In questo articolo](#top)]

## <a name="using-lambda-expressions-with-templates"></a><a name="templateLambdaExpressions"></a>Utilizzo di espressioni lambda con i modelliUsing Lambda Expressions with Templates

### <a name="example"></a>Esempio

Poiché le espressioni lambda sono tipizzate, è possibile utilizzarle con i modelli C++. Nell'esempio seguente vengono illustrate le funzioni `negate_all` e `print_all`. La `negate_all` funzione applica **l'operatore unario-** a ogni elemento nell'oggetto. `vector` La funzione `print_all` visualizza ogni elemento nell'oggetto `vector` nella console.

### <a name="code"></a>Codice

```cpp
// template_lambda_expression.cpp
// compile with: /EHsc
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// Negates each element in the vector object. Assumes signed data type.
template <typename T>
void negate_all(vector<T>& v)
{
    for_each(v.begin(), v.end(), [](T& n) { n = -n; });
}

// Prints to the console each element in the vector object.
template <typename T>
void print_all(const vector<T>& v)
{
    for_each(v.begin(), v.end(), [](const T& n) { cout << n << endl; });
}

int main()
{
    // Create a vector of signed integers with a few elements.
    vector<int> v;
    v.push_back(34);
    v.push_back(-43);
    v.push_back(56);

    print_all(v);
    negate_all(v);
    cout << "After negate_all():" << endl;
    print_all(v);
}
```

### <a name="output"></a>Output

```Output
34
-43
56
After negate_all():
-34
43
-56
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sui modelli di C, vedere [Modelli](../cpp/templates-cpp.md).

[[In questo articolo](#top)]

## <a name="handling-exceptions"></a><a name="ehLambdaExpressions"></a>Gestione delle eccezioniHandling Exceptions

### <a name="example"></a>Esempio

Il corpo di un'espressione lambda segue le regole per la gestione delle eccezioni strutturate (SEH) e la gestione delle eccezioni C++. È possibile gestire un'eccezione generata nel corpo di un'espressione lambda o rinviare la gestione delle eccezioni all'ambito contenitore. L'esempio seguente usa la funzione **for_each** `vector` e un'espressione lambda per riempire un oggetto con i valori di un altro oggetto. Usa un blocco**catch** **try**/per gestire l'accesso non valido al primo vettore.

### <a name="code"></a>Codice

```cpp
// eh_lambda_expression.cpp
// compile with: /EHsc /W4
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    // Create a vector that contains 3 elements.
    vector<int> elements(3);

    // Create another vector that contains index values.
    vector<int> indices(3);
    indices[0] = 0;
    indices[1] = -1; // This is not a valid subscript. It will trigger an exception.
    indices[2] = 2;

    // Use the values from the vector of index values to
    // fill the elements vector. This example uses a
    // try/catch block to handle invalid access to the
    // elements vector.
    try
    {
        for_each(indices.begin(), indices.end(), [&](int index) {
            elements.at(index) = index;
        });
    }
    catch (const out_of_range& e)
    {
        cerr << "Caught '" << e.what() << "'." << endl;
    };
}
```

### <a name="output"></a>Output

```Output
Caught 'invalid vector<T> subscript'.
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla gestione delle eccezioni, vedere [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md).

[[In questo articolo](#top)]

## <a name="using-lambda-expressions-with-managed-types-ccli"></a><a name="managedLambdaExpressions"></a>Utilizzo di espressioni lambda con i tipi gestiti (C .

### <a name="example"></a>Esempio

La clausola di acquisizione di un'espressione lambda non può contenere una variabile che dispone di un tipo gestito. È tuttavia possibile passare un argomento che dispone di un tipo gestito all'elenco di parametri di un'espressione lambda. L'esempio seguente contiene un'espressione lambda che acquisisce la variabile locale non gestita `ch` per valore e accetta un oggetto <xref:System.String?displayProperty=fullName> come parametro.

### <a name="code"></a>Codice

```cpp
// managed_lambda_expression.cpp
// compile with: /clr
using namespace System;

int main()
{
    char ch = '!'; // a local unmanaged variable

    // The following lambda expression captures local variables
    // by value and takes a managed String object as its parameter.
    [=](String ^s) {
        Console::WriteLine(s + Convert::ToChar(ch));
    }("Hello");
}
```

### <a name="output"></a>Output

```Output
Hello!
```

### <a name="remarks"></a>Osservazioni

È anche possibile usare espressioni lambda con la libreria STL/CLR. Per ulteriori informazioni, vedere [Riferimenti alla libreria STL/CLR](../dotnet/stl-clr-library-reference.md).

> [!IMPORTANT]
> Le espressioni lambda non sono supportate in queste entità gestite CLR (Common Language Runtime): **ref class**, **ref struct**, value **class**e **value struct**.

[[In questo articolo](#top)]

## <a name="see-also"></a>Vedere anche

[Espressioni lambdaLambda Expressions](../cpp/lambda-expressions-in-cpp.md)<br/>
[Sintassi delle espressioni lambda](../cpp/lambda-expression-syntax.md)<br/>
[Automatico](../cpp/auto-cpp.md)<br/>
[Classe function](../standard-library/function-class.md)<br/>
[find_if](../standard-library/algorithm-functions.md#find_if)<br/>
[\<>dell'algoritmo](../standard-library/algorithm.md)<br/>
[Chiamata di funzione](../cpp/function-call-cpp.md)<br/>
[Modelli](../cpp/templates-cpp.md)<br/>
[Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)<br/>
[Riferimenti della libreria STL/CLR](../dotnet/stl-clr-library-reference.md)
