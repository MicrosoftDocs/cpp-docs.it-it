---
title: Espressioni lambda in C++
ms.date: 05/07/2019
helpviewer_keywords:
- lambda expressions [C++]
- lambda expressions [C++], overview
- lambda expressions [C++], vs. function objects
ms.assetid: 713c7638-92be-4ade-ab22-fa33417073bf
ms.openlocfilehash: c7543b3558da88b41102fa7b790bb9d9f3f18463
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65222379"
---
# <a name="lambda-expressions-in-c"></a>Espressioni lambda in C++

In c++11 e versioni successive, un'espressione lambda, spesso definito un *lambda*, ovvero è un modo pratico di definizione di un oggetto funzione anonima (un *chiusura*) a destra in corrispondenza della posizione in cui viene richiamato o passato come argomento per una funzione. In genere le lambda vengono usate per incapsulare alcune righe di codice passate agli algoritmi o ai metodi asincroni. In questo articolo vengono definite le espressioni lambda confrontandole con altre tecniche di programmazione, vengono illustrati i vantaggi che offrono e viene fornito un esempio di base.

## <a name="related-topics"></a>Argomenti correlati

- [Espressioni lambda e oggetti funzione](lambda-expression-syntax.md)
- [Utilizzo delle espressioni lambda](examples-of-lambda-expressions.md)
- [espressioni lambda constexpr](lambda-expressions-constexpr.md)

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

![Elementi strutturali di un'espressione lambda](../cpp/media/lambdaexpsyntax.png "elementi strutturali di un'espressione lambda")

1. *clausola di acquisizione* (noto anche come i *lambda-introducer* nella specifica C++.)

1. *elenco di parametri* facoltativo. (Noto anche come il *dichiaratore di lambda*)

1. *Specifica modificabile* facoltativo.

1. *Specifica di eccezione* facoltativo.

1. *trailing-return-type* facoltativo.

1. *lambda body*.

### <a name="capture-clause"></a>Clausola di acquisizione

Un'espressione lambda può introdurre nuove variabile nel relativo corpo (in **c++14**) ed è anche possibile accedere, o *capture*, le variabili dall'ambito circostante. Una lambda inizia con la clausola di acquisizione (*lambda-introducer* nella sintassi Standard), che specifica le variabili da acquisire, e se l'acquisizione per valore o per riferimento. le variabili che hanno come prefisso una e commerciale (`&`) sono accessibili per riferimento, mentre le variabili che ne sono prive sono accessibili per valore.

Una clausola di acquisizione vuota, `[ ]`, indica che il corpo dell'espressione lambda non accede a variabili nell'ambito che lo contiene.

È possibile usare la modalità di acquisizione predefinita (*predefiniti di acquisizione* nella sintassi Standard) per indicare come acquisire eventuali variabili esterne a cui vengono fatto riferimento nell'espressione lambda: `[&]` significa che tutte le variabili di cui si fa riferimento vengono acquisite da riferimento, e `[=]` significa che vengono acquisite per valore. È possibile usare una modalità di acquisizione predefinita e quindi specificare esplicitamente la modalità opposta per variabili specifiche. Se ad esempio il corpo di un'espressione lambda accede alla variabile esterna `total` per riferimento e alla variabile esterna `factor` per valore, le seguenti clausole di acquisizione sono equivalenti:

```cpp
[&total, factor]
[factor, &total]
[&, factor]
[factor, &]
[=, &total]
[&total, =]
```

Le sole variabili menzionate nell'espressione lambda vengono acquisite quando viene usata un'impostazione predefinita di acquisizione.

Se una clausola di acquisizione include un valore predefinito di acquisizione `&`, quindi nessun `identifier` in un `capture` di quella clausola potrà avere il formato `& identifier`. Analogamente, se la clausola di acquisizione include un valore predefinito di acquisizione `=`, quindi nessun `capture` di quella clausola potrà avere il formato `= identifier`. Un identificatore oppure **ciò** non può essere specificata più volte in una clausola di acquisizione. Nel frammento di codice seguente vengono illustrati alcuni esempi.

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

Un'acquisizione seguita dai puntini di sospensione è un'espansione di pacchetto, come illustrato in questo [modello variadic](../cpp/ellipses-and-variadic-templates.md) esempio:

```cpp
template<class... Args>
void f(Args... args) {
    auto x = [args...] { return g(args...); };
    x();
}
```

Per usare le espressioni lambda nel corpo di un metodo della classe, passare il **ciò** puntatore alla clausola di acquisizione per fornire l'accesso ai membri dati e i metodi della classe contenitrice.

**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): Il **ciò** puntatore può essere acquisito per valore specificando `*this` nella clausola di acquisizione. Acquisizione per valore significa che l'intera *chiusura*, che è l'oggetto funzione anonima che encapulates l'espressione lambda, viene copiato in ogni sito di chiamata in cui l'espressione lambda viene richiamata. Acquisizione per valore è utile quando l'espressione lambda verrà eseguita in operazioni parallele o asincrone, in particolare su alcune architetture hardware, ad esempio NUMA.

Per un esempio che illustra come usare le espressioni lambda con i metodi della classe, vedere "esempio: Un'espressione Lambda in un metodo di utilizzo"in [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).

Quando si usa la clausola di acquisizione, è consigliabile tenere in considerazione gli aspetti seguenti, in particolare quando si usano le espressioni lambda con il multithreading:

- Le acquisizioni di riferimento possono essere usate per modificare le variabili all'esterno, ma le acquisizioni di valore non possono essere usate a tale scopo (**modificabile** consente la modifica delle copie, ma non degli originali.)

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

Oltre ad acquisire le variabili, una lambda può accettare parametri di input. Un elenco di parametri (*dichiaratore di lambda* nella sintassi Standard) è facoltativo e nella maggior parte degli aspetti è simile all'elenco di parametri per una funzione.

```cpp
auto y = [] (int first, int second)
{
    return first + second;
};
```

Nelle **C++ 14**, se il tipo di parametro è generico, è possibile usare la parola chiave auto come identificatore del tipo. Ciò indica al compilatore di creare l'operatore di chiamata della funzione come modello. Ogni istanza di auto in un elenco di parametri equivale a un parametro di tipo distinto.

```cpp
auto y = [] (auto first, auto second)
{
    return first + second;
};
```

Un'espressione lambda può accettare un'altra espressione lambda come argomento. Per altre informazioni, vedere "Funzioni Lambda di ordine superiore" nell'argomento [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).

Poiché un elenco di parametri è facoltativo, è possibile omettere le parentesi vuote se non si passano argomenti all'espressione lambda e il dichiaratore di lambda neobsahuje *-specifica di eccezione*,  *trailing-return-type*, oppure **modificabile**.

### <a name="mutable-specification"></a>Specifica modificabile

In genere, operatore di chiamata di funzione di un'espressione lambda è const-by-value, ma usa il **modificabile** parola chiave Annulla. Non produce membri dati modificabili. La specifica modificabile consente al corpo di un'espressione lambda di modificare le variabili acquisite per valore. Alcuni degli esempi più avanti in questo articolo mostra come usare **modificabile**.

### <a name="exception-specification"></a>Specifica di eccezione

È possibile usare la specifica di eccezione `noexcept` per indicare che l'espressione lambda non generi alcuna eccezione. Come con le normali funzioni, Microsoft C++ compilatore genera l'avviso [C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md) se un'espressione lambda dichiara la `noexcept` specifica di eccezione e il relativo corpo genera un'eccezione, come illustrato di seguito:

```cpp
// throw_lambda_expression.cpp
// compile with: /W4 /EHsc
int main() // C4297 expected
{
   []() noexcept { throw 5; }();
}
```

Per altre informazioni, vedere [specifiche di eccezioni (generazione)](../cpp/exception-specifications-throw-cpp.md).

### <a name="return-type"></a>Tipo restituito

Il tipo restituito di un'espressione lambda viene dedotto automaticamente. Non è necessario usare il [automatica](../cpp/auto-cpp.md) parola chiave se non si specifica un *trailing-return-type*. Il *trailing-return-type* è simile alla parte del tipo restituito di un metodo o funzione ordinaria. Tuttavia, il tipo restituito deve seguire l'elenco di parametri ed è necessario includere la parola chiave di trailing-return-type `->` prima del tipo restituito.

È possibile omettere la parte del tipo restituito di un'espressione lambda se il corpo dell'espressione lambda contiene una sola istruzione return o l'espressione non restituisce un valore. Se il corpo dell'espressione lambda contiene un'istruzione return, il compilatore deduce il tipo restituito dal tipo dell'espressione restituita. In caso contrario, il compilatore deduce il tipo restituito è **void**. Vedere i frammenti di codice di esempio seguenti in cui viene illustrato questo principio.

```cpp
auto x1 = [](int i){ return i; }; // OK: return type is int
auto x2 = []{ return{ 1, 2 }; };  // ERROR: return type is void, deducing
                                  // return type from braced-init-list is not valid
```

Un'espressione lambda può produrre un'altra espressione lambda come relativo valore restituito. Per altre informazioni, vedere "Funzioni Lambda di ordine superiore" nella [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).

### <a name="lambda-body"></a>Corpo dell'espressione lambda

Il corpo dell'espressione lambda (*compound-statement* nella sintassi Standard) di un'espressione lambda espressione può contenere qualsiasi elemento che può contenere il corpo di un metodo o funzione ordinaria. Il corpo di una funzione ordinaria e quello di una espressione lambda possono entrambi accedere ai seguenti tipi di variabili:

- Variabili acquisite dall'ambito che le contiene, come illustrato in precedenza.

- Parametri

- Variabili dichiarate a livello locale

- Membri dati delle classi quando dichiarati all'interno di una classe e **ciò** viene acquisita

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

Poiché la variabile `n` viene acquisita per valore, il relativo valore rimane `0` dopo la chiamata all'espressione lambda. Il **modificabile** specifica consente `n` da modificare all'interno di lambda.

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

Per altre informazioni, vedere [generare](../standard-library/algorithm-functions.md#generate).

Esempio di codice seguente viene utilizzata la funzione dell'esempio precedente e aggiunge un esempio di un'espressione lambda che utilizza l'algoritmo della libreria Standard C++ `generate_n`. Questa espressione lambda assegna un elemento di un oggetto `vector` alla somma dei due elementi precedenti. Il **modificabile** parola chiave viene usata in modo che il corpo dell'espressione lambda possa modificare le proprie copie delle variabili esterne `x` e `y`, quali l'espressione lambda acquisisce per valore. Poiché l'espressione lambda acquisisce le variabili originali `x` e `y` per valore, i relativi valori rimangono `1` dopo l'esecuzione dell'espressione lambda.

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

Per altre informazioni, vedere [generate_n](../standard-library/algorithm-functions.md#generate_n).

## <a name="constexpr-lambda-expressions"></a>espressioni lambda constexpr

**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): Un'espressione lambda può essere dichiarata come `constexpr` o usato in un'espressione costante durante l'inizializzazione di ogni membro di dati che consente di acquisire o introduce è consentita all'interno di un'espressione costante.

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

Un'espressione lambda è implicitamente `constexpr` se il relativo risultato soddisfa i requisiti di un `constexpr` funzione:

```cpp
    auto answer = [](int n)
    {
        return 32 + n;
    };

    constexpr int response = answer(10);
```

Se un'espressione lambda è implicitamente o esplicitamente `constexpr`, la conversione in un puntatore a funzione produce un `constexpr` funzione:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```

## <a name="microsoft-specific"></a>Specifico di Microsoft

Le espressioni lambda non sono supportate nelle seguenti entità di common language runtime (CLR) gestiti: **classe di riferimento**, **ref struct**, **classe di valori**, o **struct di valore** .

Se si usa un modificatore specifico Microsoft, ad esempio [declspec](../cpp/declspec.md), è possibile inserirlo in un'espressione lambda immediatamente dopo il `parameter-declaration-clause`, ad esempio:

```cpp
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };
```

Per determinare se un modificatore è supportato dalle espressioni lambda, vedere l'articolo informazioni, vedere la [modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md) sezione della documentazione.

Oltre a C++11 funzionalità lambda Standard c++11, Visual Studio supporta le espressioni lambda senza state sono omni-convertibili in puntatori funzione che usano convenzioni di chiamata arbitrarie.

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Oggetti funzione della libreria standard C++](../standard-library/function-objects-in-the-stl.md)<br/>
[Chiamata di funzione](../cpp/function-call-cpp.md)<br/>
[for_each](../standard-library/algorithm-functions.md#for_each)
