---
title: Espressioni lambda in C++
ms.date: 05/07/2019
helpviewer_keywords:
- lambda expressions [C++]
- lambda expressions [C++], overview
- lambda expressions [C++], vs. function objects
ms.assetid: 713c7638-92be-4ade-ab22-fa33417073bf
ms.openlocfilehash: e206ea8d67bb333065bf43f7f9c2dc373a5a5258
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857489"
---
# <a name="lambda-expressions-in-c"></a>Espressioni lambda in C++

In C++ 11 e versioni successive, un'espressione lambda, spesso detta *lambda*, è un modo pratico per definire un oggetto funzione anonima (una *chiusura*) direttamente nella posizione in cui viene richiamato o passato come argomento a una funzione. In genere le lambda vengono usate per incapsulare alcune righe di codice passate agli algoritmi o ai metodi asincroni. In questo articolo vengono definite le espressioni lambda confrontandole con altre tecniche di programmazione, vengono illustrati i vantaggi che offrono e viene fornito un esempio di base.

## <a name="related-topics"></a>Argomenti correlati

- [Espressioni lambda e oggetti funzione](lambda-expression-syntax.md)
- [Utilizzo di espressioni lambda](examples-of-lambda-expressions.md)
- [espressioni lambda constExpr](lambda-expressions-constexpr.md)

## <a name="parts-of-a-lambda-expression"></a>Parti dell'espressione lambda

Lo standard ISO C++ mostra una semplice lambda passata come terzo argomento alla funzione `std::sort()`:

```cpp
#include <algorithm>
#include <cmath>

void abssort(float* x, unsigned n) {
    std::sort(x, x + n,
        // Lambda expression begins
        [](float a, float b) {
            return (std::abs(a) < std::abs(b));
        } // end of lambda expression
    );
}
```

Questa figura illustra le parti della lambda:

![Elementi strutturali di un'espressione lambda](../cpp/media/lambdaexpsyntax.png "Elementi strutturali di un'espressione lambda")

1. *clausola Capture* (anche nota come *lambda-introductor* nella C++ specifica).

1. *elenco di parametri* Opzionale. (Noto anche come *dichiaratore lambda*)

1. *specifica modificabile* Opzionale.

1. *specifica eccezione* Opzionale.

1. *trailing-Return-Type* Opzionale.

1. *corpo dell'espressione lambda*.

### <a name="capture-clause"></a>Clausola di acquisizione

Un'espressione lambda può introdurre nuove variabili nel corpo (in **C++ 14**) e può anche accedere alle variabili dall'ambito circostante o *acquisirle*. Un'espressione lambda inizia con la clausola di acquisizione (*lambda-introductor* nella sintassi standard), che specifica quali variabili vengono acquisite e se l'acquisizione è per valore o per riferimento. le variabili che hanno come prefisso una e commerciale (`&`) sono accessibili per riferimento, mentre le variabili che ne sono prive sono accessibili per valore.

Una clausola di acquisizione vuota, `[ ]`, indica che il corpo dell'espressione lambda non accede a variabili nell'ambito che lo contiene.

È possibile usare la modalità di acquisizione predefinita (*capture-default* nella sintassi standard) per indicare come acquisire eventuali variabili esterne a cui si fa riferimento nell'espressione lambda: `[&]` indica che tutte le variabili a cui si fa riferimento vengono acquisite per riferimento e `[=]` significa che vengono acquisite per valore. È possibile usare una modalità di acquisizione predefinita e quindi specificare esplicitamente la modalità opposta per variabili specifiche. Se ad esempio il corpo di un'espressione lambda accede alla variabile esterna `total` per riferimento e alla variabile esterna `factor` per valore, le seguenti clausole di acquisizione sono equivalenti:

```cpp
[&total, factor]
[factor, &total]
[&, factor]
[factor, &]
[=, &total]
[&total, =]
```

Quando viene utilizzata un'acquisizione predefinita, vengono acquisite solo le variabili indicate nell'espressione lambda.

Se una clausola di acquisizione include un `&`capture-default, nessun `identifier` in un `capture` di tale clausola di acquisizione può avere il formato `& identifier`. Analogamente, se la clausola di acquisizione include un `=`capture-default, nessun `capture` di tale clausola di acquisizione può avere il formato `= identifier`. Un identificatore o **questo** oggetto non può essere visualizzato più di una volta in una clausola di acquisizione. Nel frammento di codice seguente vengono illustrati alcuni esempi.

```cpp
struct S { void f(int i); };

void S::f(int i) {
    [&, i]{};      // OK
    [&, &i]{};     // ERROR: i preceded by & when & is the default
    [=, this]{};   // ERROR: this when = is the default
    [=, *this]{ }; // OK: captures this by value. See below.
    [i, i]{};      // ERROR: i repeated
}
```

Un'acquisizione seguita da un pulsante con i puntini di sospensione è un'espansione del pacchetto, come illustrato in questo esempio di [modello Variadic](../cpp/ellipses-and-variadic-templates.md) :

```cpp
template<class... Args>
void f(Args... args) {
    auto x = [args...] { return g(args...); };
    x();
}
```

Per utilizzare le espressioni lambda nel corpo di un metodo della classe, passare il puntatore **this** alla clausola Capture per fornire l'accesso ai metodi e ai membri dati della classe contenitore.

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): il puntatore **this** può essere acquisito per valore specificando `*this` nella clausola Capture. Acquisisci per valore significa che l'intera *chiusura*, ovvero l'oggetto funzione anonima che encapulates l'espressione lambda, viene copiata in ogni sito di chiamata in cui viene richiamata l'espressione lambda. Acquisisci per valore è utile quando l'espressione lambda viene eseguita in operazioni parallele o asincrone, in particolare in alcune architetture hardware come NUMA.

Per un esempio in cui viene illustrato come utilizzare le espressioni lambda con i metodi della classe, vedere "esempio: utilizzo di un'espressione lambda in un metodo" in [esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md).

Quando si usa la clausola di acquisizione, è consigliabile tenere in considerazione gli aspetti seguenti, in particolare quando si usano le espressioni lambda con il multithreading:

- Le acquisizioni di riferimento possono essere usate per modificare le variabili all'esterno, ma le acquisizioni di valore non possono essere usate a tale scopo (**modificabile** consente la modifica delle copie, ma non degli originali).

- Le acquisizioni di riferimento riflettono gli aggiornamenti alle variabili all'esterno, contrariamente alle acquisizioni di valore.

- Le acquisizioni di riferimento introducono una dipendenza dalla durata, contrariamente alle acquisizioni di valore. Ciò è particolarmente importante quando la lambda viene eseguita in modo asincrono. Se si acquisisce una variabile locale per riferimento in una lambda asincrona, tale locale sarà molto probabilmente scomparsa quando viene eseguita la lambda e ciò provoca una violazione di accesso in fase di esecuzione.

### <a name="generalized-capture-c-14"></a>Acquisizione generalizzata (C++ 14)

In C++14 è possibile introdurre e inizializzare nuove variabili nella clausola di acquisizione, senza che queste variabili debbano esistere nell'ambito che racchiude la funzione lambda. L'inizializzazione può essere espressa come espressione arbitraria. Il tipo della nuova variabile viene dedotto dal tipo prodotto dall'espressione. Un vantaggio di questa funzionalità è costituito dal fatto che in C++14 è possibile acquisire variabili di solo spostamento (ad esempio std::unique_ptr) dall'ambito circostante e usarle nella lambda.

```cpp
pNums = make_unique<vector<int>>(nums);
//...
      auto a = [ptr = move(pNums)]()
        {
           // use ptr
        };
```

### <a name="parameter-list"></a>Elenco parametri

Oltre ad acquisire le variabili, una lambda può accettare parametri di input. Un elenco di parametri (*dichiaratore lambda* nella sintassi standard) è facoltativo e nella maggior parte degli aspetti è simile all'elenco di parametri per una funzione.

```cpp
auto y = [] (int first, int second)
{
    return first + second;
};
```

In  **C++ 14**, se il tipo di parametro è generico, è possibile usare la parola chiave auto come identificatore di tipo. Ciò indica al compilatore di creare l'operatore di chiamata della funzione come modello. Ogni istanza di auto in un elenco di parametri equivale a un parametro di tipo distinto.

```cpp
auto y = [] (auto first, auto second)
{
    return first + second;
};
```

Un'espressione lambda può accettare un'altra espressione lambda come argomento. Per ulteriori informazioni, vedere "espressioni lambda di ordine superiore" nell'argomento [esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md).

Poiché un elenco di parametri è facoltativo, è possibile omettere le parentesi vuote se non si passano argomenti all'espressione lambda e il relativo dichiaratore lambda non contiene la *specifica dell'eccezione*, il *tipo restituito finale*o la **modificabile**.

### <a name="mutable-specification"></a>Specifica modificabile

In genere, l'operatore di chiamata di funzione di un'espressione lambda è const-by-value, ma l'uso della parola chiave **mutable** annulla questa impostazione. Non produce membri dati modificabili. La specifica modificabile consente al corpo di un'espressione lambda di modificare le variabili acquisite per valore. Alcuni degli esempi più avanti in questo articolo illustrano come usare la **modificabile**.

### <a name="exception-specification"></a>Specifica di eccezione

È possibile usare la specifica di eccezione `noexcept` per indicare che l'espressione lambda non generi alcuna eccezione. Come per le normali funzioni, il C++ compilatore Microsoft genera l'avviso [C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md) se un'espressione lambda dichiara la specifica di eccezione `noexcept` e il corpo dell'espressione lambda genera un'eccezione, come illustrato di seguito:

```cpp
// throw_lambda_expression.cpp
// compile with: /W4 /EHsc
int main() // C4297 expected
{
   []() noexcept { throw 5; }();
}
```

Per ulteriori informazioni, vedere [specifiche di eccezione (throw)](../cpp/exception-specifications-throw-cpp.md).

### <a name="return-type"></a>Tipo restituito

Il tipo restituito di un'espressione lambda viene dedotto automaticamente. Non è necessario usare la parola chiave [auto](../cpp/auto-cpp.md) a meno che non si specifichi un *tipo finale-return-type*. *Trailing-Return-Type* è simile alla parte del tipo restituito di un metodo o di una funzione ordinaria. Tuttavia, il tipo restituito deve seguire l'elenco di parametri ed è necessario includere la parola chiave di trailing-return-type `->` prima del tipo restituito.

È possibile omettere la parte del tipo restituito di un'espressione lambda se il corpo dell'espressione lambda contiene una sola istruzione return o l'espressione non restituisce un valore. Se il corpo dell'espressione lambda contiene un'istruzione return, il compilatore deduce il tipo restituito dal tipo dell'espressione restituita. In caso contrario, il compilatore deduce che il tipo restituito sia **void**. Vedere i frammenti di codice di esempio seguenti in cui viene illustrato questo principio.

```cpp
auto x1 = [](int i){ return i; }; // OK: return type is int
auto x2 = []{ return{ 1, 2 }; };  // ERROR: return type is void, deducing
                                  // return type from braced-init-list is not valid
```

Un'espressione lambda può produrre un'altra espressione lambda come relativo valore restituito. Per ulteriori informazioni, vedere "espressioni lambda di ordine superiore" in [esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md).

### <a name="lambda-body"></a>Corpo dell'espressione lambda

Il corpo dell'espressione lambda (*compound-statement* nella sintassi standard) di un'espressione lambda può contenere qualsiasi elemento che il corpo di un metodo o di una funzione ordinaria può contenere. Il corpo di una funzione ordinaria e quello di una espressione lambda possono entrambi accedere ai seguenti tipi di variabili:

- Variabili acquisite dall'ambito che le contiene, come illustrato in precedenza.

- Parametri

- Variabili dichiarate a livello locale

- Membri dati della classe, quando vengono dichiarati all'interno di una classe e **questa** viene acquisita

- Qualsiasi variabile con durata di archiviazione statica, ad esempio variabili globali

L'esempio seguente contiene un'espressione lambda che acquisisce in modo esplicito la variabile `n` per valore e acquisisce in modo implicito la variabile `m` per riferimento:

```cpp
// captures_lambda_expression.cpp
// compile with: /W4 /EHsc
#include <iostream>
using namespace std;

int main()
{
   int m = 0;
   int n = 0;
   [&, n] (int a) mutable { m = ++n + a; }(4);
   cout << m << endl << n << endl;
}
```

```Output
5
0
```

Poiché la variabile `n` viene acquisita per valore, il relativo valore rimane `0` dopo la chiamata all'espressione lambda. La specifica **modificabile** consente di modificare `n` all'interno dell'espressione lambda.

Sebbene un'espressione lambda possa acquisire solo le variabili che hanno una durata dell'archiviazione automatica, nel corpo di un'espressione lambda è possibile usare variabili con durata dell'archiviazione statica. Nell'esempio seguente vengono usate la funzione `generate` e un'espressione lambda per assegnare un valore a ogni elemento di un oggetto `vector`. L'espressione lambda modifica la variabile statica per generare il valore dell'elemento successivo.

```cpp
void fillVector(vector<int>& v)
{
    // A local static variable.
    static int nextValue = 1;

    // The lambda expression that appears in the following call to
    // the generate function modifies and uses the local static
    // variable nextValue.
    generate(v.begin(), v.end(), [] { return nextValue++; });
    //WARNING: this is not thread-safe and is shown for illustration only
}
```

Per ulteriori informazioni, vedere [generate](../standard-library/algorithm-functions.md#generate).

Nell'esempio di codice seguente viene usata la funzione dell'esempio precedente e viene aggiunto un esempio di espressione lambda che usa l' C++ algoritmo della libreria standard `generate_n`. Questa espressione lambda assegna un elemento di un oggetto `vector` alla somma dei due elementi precedenti. La parola chiave **mutable** viene utilizzata in modo che il corpo dell'espressione lambda possa modificare le proprie copie delle variabili esterne `x` e `y`, che l'espressione lambda acquisisce per valore. Poiché l'espressione lambda acquisisce le variabili originali `x` e `y` per valore, i relativi valori rimangono `1` dopo l'esecuzione dell'espressione lambda.

```cpp
// compile with: /W4 /EHsc
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename C> void print(const string& s, const C& c) {
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

void fillVector(vector<int>& v)
{
    // A local static variable.
    static int nextValue = 1;

    // The lambda expression that appears in the following call to
    // the generate function modifies and uses the local static
    // variable nextValue.
    generate(v.begin(), v.end(), [] { return nextValue++; });
    //WARNING: this is not thread-safe and is shown for illustration only
}

int main()
{
    // The number of elements in the vector.
    const int elementCount = 9;

    // Create a vector object with each element set to 1.
    vector<int> v(elementCount, 1);

    // These variables hold the previous two elements of the vector.
    int x = 1;
    int y = 1;

    // Sets each element in the vector to the sum of the
    // previous two elements.
    generate_n(v.begin() + 2,
        elementCount - 2,
        [=]() mutable throw() -> int { // lambda is the 3rd parameter
        // Generate current value.
        int n = x + y;
        // Update previous two values.
        x = y;
        y = n;
        return n;
    });
    print("vector v after call to generate_n() with lambda: ", v);

    // Print the local variables x and y.
    // The values of x and y hold their initial values because
    // they are captured by value.
    cout << "x: " << x << " y: " << y << endl;

    // Fill the vector with a sequence of numbers
    fillVector(v);
    print("vector v after 1st call to fillVector(): ", v);
    // Fill the vector with the next sequence of numbers
    fillVector(v);
    print("vector v after 2nd call to fillVector(): ", v);
}
```

```Output
vector v after call to generate_n() with lambda: 1 1 2 3 5 8 13 21 34
x: 1 y: 1
vector v after 1st call to fillVector(): 1 2 3 4 5 6 7 8 9
vector v after 2nd call to fillVector(): 10 11 12 13 14 15 16 17 18
```

Per ulteriori informazioni, vedere [generate_n](../standard-library/algorithm-functions.md#generate_n).

## <a name="constexpr-lambda-expressions"></a>Espressioni lambda constexpr

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): un'espressione lambda può essere dichiarata come `constexpr` o usata in un'espressione costante quando l'inizializzazione di ogni membro dati acquisito o introdotto è consentita all'interno di un'espressione costante.

```cpp
    int y = 32;
    auto answer = [y]() constexpr
    {
        int x = 10;
        return y + x;
    };

    constexpr int Increment(int n)
    {
        return [n] { return n + 1; }();
    }
```

Un'espressione lambda viene `constexpr` implicitamente se il risultato soddisfa i requisiti di una funzione `constexpr`:

```cpp
    auto answer = [](int n)
    {
        return 32 + n;
    };

    constexpr int response = answer(10);
```

Se un'espressione lambda è `constexpr`in modo implicito o esplicito, la conversione in un puntatore a funzione produce una funzione `constexpr`:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```

## <a name="microsoft-specific"></a>Specifico di Microsoft

Le espressioni lambda non sono supportate nelle seguenti entità gestite di Common Language Runtime (CLR): **classe di riferimento**, struct di **riferimento**, classe di **valore**o struct di **valore**.

Se si usa un modificatore specifico di Microsoft, ad esempio [__declspec](../cpp/declspec.md), è possibile inserirlo in un'espressione lambda immediatamente dopo l'`parameter-declaration-clause`, ad esempio:

```cpp
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };
```

Per determinare se un modificatore è supportato dalle espressioni lambda, vedere l'articolo relativo nella sezione [modificatori specifici di Microsoft](../cpp/microsoft-specific-modifiers.md) della documentazione.

Oltre alla funzionalità lambda standard C++ 11, Visual Studio supporta le espressioni lambda senza stato, che sono Omni-convertibili in puntatori a funzione che usano convenzioni di chiamata arbitrarie.

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Oggetti funzione della libreria standard C++](../standard-library/function-objects-in-the-stl.md)<br/>
[Chiamata di funzione](../cpp/function-call-cpp.md)<br/>
[for_each](../standard-library/algorithm-functions.md#for_each)
