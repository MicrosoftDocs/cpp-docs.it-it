---
title: Espressioni lambda in C++ | Documenti Microsoft
ms.custom: 
ms.date: 07/19/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- lambda expressions [C++]
- lambda expressions [C++], overview
- lambda expressions [C++], vs. function objects
ms.assetid: 713c7638-92be-4ade-ab22-fa33417073bf
caps.latest.revision: 36
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: eaf06a81979294b20f3b9b2f15cfcaab6be0008b
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="lambda-expressions-in-c"></a>Espressioni lambda in C++
In C++ 11 e versioni successive, un'espressione lambda, spesso chiamato un *lambda*, è utile definire un oggetto funzione anonima (un *chiusura*) nella posizione in cui viene richiamato o passato come argomento a una funzione. In genere le lambda vengono usate per incapsulare alcune righe di codice passate agli algoritmi o ai metodi asincroni. In questo articolo vengono definite le espressioni lambda confrontandole con altre tecniche di programmazione, vengono illustrati i vantaggi che offrono e viene fornito un esempio di base.  

## <a name="related-topics"></a>Argomenti correlati
- [Espressioni lambda e gli oggetti funzione](lambda-expression-syntax.md)
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
  
 ![Elementi strutturali di un'espressione lambda](../cpp/media/lambdaexpsyntax.png "LambdaExpSyntax")  
  
1.  *clausola di acquisizione* (noto anche come il *lambda-introducer* della specifica C++.)  
  
2.  *elenco di parametri* facoltativo. (Noto anche come il *dichiaratore lambda*)  
  
3.  *Specifica modificabile* facoltativo.  
  
4.  *Specifica di eccezione* facoltativo.  
  
5.  *trailing-return-type* facoltativo.  
  
6.  *corpo dell'espressione lambda*)  
  
### <a name="capture-clause"></a>Clausola di acquisizione  
 Un'espressione lambda può introdurre nuove variabile nel corpo (in **C++ 14**) e non può inoltre l'accesso, o *acquisire*, variabili dall'ambito circostante. Un'espressione lambda inizia con la clausola di acquisizione (*lambda-introducer* nella sintassi Standard), che specifica le variabili da acquisire, e se l'acquisizione per valore o riferimento. le variabili che hanno come prefisso una e commerciale (`&`) sono accessibili per riferimento, mentre le variabili che ne sono prive sono accessibili per valore.  
  
 Una clausola di acquisizione vuota, `[ ]`, indica che il corpo dell'espressione lambda non accede a variabili nell'ambito che lo contiene.  
  
 È possibile utilizzare la modalità di acquisizione predefinita (*acquisizione predefinito* nella sintassi Standard) per indicare come acquisire eventuali variabili esterne a cui vengono fatto riferimento nell'espressione lambda: `[&]` significa acquisite da tutte le variabili che si fa riferimento a riferimento, e `[=]` significa che vengono acquisite per valore. È possibile usare una modalità di acquisizione predefinita e quindi specificare esplicitamente la modalità opposta per variabili specifiche. Se ad esempio il corpo di un'espressione lambda accede alla variabile esterna `total` per riferimento e alla variabile esterna `factor` per valore, le seguenti clausole di acquisizione sono equivalenti:  
  
```cpp  
[&total, factor]  
[factor, &total]  
[&, factor]  
[factor, &]  
[=, &total]  
[&total, =]  
```  
  
 Solo le variabili menzionate nell'espressione lambda vengono acquisite quando viene utilizzato un valore predefinito di acquisizione.  
  
 Se una clausola di acquisizione include un valore predefinito di acquisizione `&`, nessun `identifier` in un `capture` di quella clausola potrà avere il formato `& identifier`. Analogamente, se la clausola di acquisizione include un valore predefinito di acquisizione `=`, nessun `capture` di quella clausola potrà avere il formato `= identifier`. Un identificatore o un elemento `this` non può apparire più di una volta in una clausola di acquisizione. Nel frammento di codice seguente vengono illustrati alcuni esempi.  
  
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
  
 Per usare espressioni lambda nel corpo di un metodo della classe, passare il puntatore `this` alla clausola di acquisizione per fornire l'accesso ai metodi e ai membri dati della classe che li contengono. 
 
**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): il `this` puntatore può essere acquisito per valore specificando `*this` nella clausola di acquisizione. Acquisizione per valore significa che l'intera *chiusura*, che rappresenta l'oggetto funzione anonima che encapulates l'espressione lambda, viene copiato in ogni sito di chiamata in cui viene richiamato l'espressione lambda. L'acquisizione per valore è utile quando l'espressione lambda verrà eseguita nelle operazioni parallele o asincrone, soprattutto in alcune architetture hardware, ad esempio NUMA. 

Per un esempio che illustra come utilizzare le espressioni lambda con i metodi della classe, vedere "Esempio: uso un espressione Lambda in un metodo" in [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).  
  
 Quando si usa la clausola di acquisizione, è consigliabile tenere in considerazione gli aspetti seguenti, in particolare quando si usano le espressioni lambda con il multithreading:  
  
-   Le acquisizioni di riferimento possono essere usate per modificare le variabili all'esterno, ma le acquisizioni di valore non possono essere usate a tale scopo (`mutable` consente la modifica delle copie, ma non degli originali).  
  
-   Le acquisizioni di riferimento riflettono gli aggiornamenti alle variabili all'esterno, contrariamente alle acquisizioni di valore.  
  
-   Le acquisizioni di riferimento introducono una dipendenza dalla durata, contrariamente alle acquisizioni di valore. Ciò è particolarmente importante quando la lambda viene eseguita in modo asincrono. Se si acquisisce una variabile locale per riferimento in una lambda asincrona, tale locale sarà molto probabilmente scomparsa quando viene eseguita la lambda e ciò provoca una violazione di accesso in fase di esecuzione.  
  
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
 Oltre ad acquisire le variabili, una lambda può accettare parametri di input. Un elenco di parametri (*dichiaratore lambda* nella sintassi Standard) è facoltativo e in molti aspetti simile a elenco di parametri per una funzione.  
  
```cpp  
int y = [] (int first, int second)  
{  
    return first + second;  
};  
  
```  
  
 In **C++ 14**, se il tipo di parametro è generico, è possibile utilizzare la parola chiave auto come identificatore del tipo. Ciò indica al compilatore di creare l'operatore di chiamata della funzione come modello. Ogni istanza di auto in un elenco di parametri equivale a un parametro di tipo distinto.  
  
```cpp  
auto y = [] (auto first, auto second)  
{  
    return first + second;  
};  
```  
  
 Un'espressione lambda può accettare un'altra espressione lambda come argomento. Per ulteriori informazioni, vedere "Espressioni Lambda di ordine superiore" nell'argomento [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).  
  
 Poiché un elenco di parametri è facoltativo, è possibile omettere le parentesi vuote se non si passano argomenti all'espressione lambda e il dichiaratore di espressione lambda non contiene *specifica di eccezione*, * trailing-return-type*, o `mutable`.  
  
### <a name="mutable-specification"></a>Specifica modificabile  
 Generalmente l'operatore di chiamata di funzione di un'espressione lambda è const-by-value, ma questo viene annullato dall'uso della parola chiave `mutable`. Non produce membri dati modificabili. La specifica modificabile consente al corpo di un'espressione lambda di modificare le variabili acquisite per valore. L'uso di `mutable` viene illustrato in alcuni degli esempi riportati più avanti in questo articolo.  
  
### <a name="exception-specification"></a>Specifica di eccezione  
 È possibile usare la specifica di eccezione `noexcept` per indicare che l'espressione lambda non generi alcuna eccezione. Come con le normali funzioni, il compilatore Visual C++ genera l'avviso [C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md) se un'espressione lambda dichiara la `noexcept` specifica di eccezione e il relativo corpo genera un'eccezione, come illustrato di seguito:  
  
```cpp  
// throw_lambda_expression.cpp  
// compile with: /W4 /EHsc   
int main() // C4297 expected  
{  
   []() noexcept { throw 5; }();  
}  
```  
  
 Per ulteriori informazioni, vedere [specifiche di eccezioni (generazione)](../cpp/exception-specifications-throw-cpp.md).  
  
### <a name="return-type"></a>Tipo restituito  
 Il tipo restituito di un'espressione lambda viene dedotto automaticamente. Non è necessario utilizzare il [auto](../cpp/auto-cpp.md) (parola chiave) a meno che non si specifica un *trailing-return-type*. Il *trailing-return-type* è simile a parte il tipo restituito di un metodo o funzione ordinaria. Tuttavia, il tipo restituito deve seguire l'elenco di parametri ed è necessario includere la parola chiave di trailing-return-type `->` prima del tipo restituito.  
  
 È possibile omettere la parte del tipo restituito di un'espressione lambda se il corpo dell'espressione lambda contiene una sola istruzione return o l'espressione non restituisce un valore. Se il corpo dell'espressione lambda contiene un'istruzione return, il compilatore deduce il tipo restituito dal tipo dell'espressione restituita. In caso contrario, il compilatore deduce che il tipo restituito è `void`. Vedere i frammenti di codice di esempio seguenti in cui viene illustrato questo principio.  
  
```cpp  
auto x1 = [](int i){ return i; }; // OK: return type is int  
auto x2 = []{ return{ 1, 2 }; };  // ERROR: return type is void, deducing   
                                  // return type from braced-init-list is not valid  
```  
  
 Un'espressione lambda può produrre un'altra espressione lambda come relativo valore restituito. Per ulteriori informazioni, vedere "Espressioni Lambda di ordine superiore" in [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).  
  
### <a name="lambda-body"></a>Corpo dell'espressione lambda  
 Il corpo dell'espressione lambda (*compound-statement* nella sintassi Standard) di un'espressione lambda espressione può contenere qualsiasi elemento che può contenere il corpo di un metodo o funzione ordinaria. Il corpo di una funzione ordinaria e quello di una espressione lambda possono entrambi accedere ai seguenti tipi di variabili:  
  
-   Variabili acquisite dall'ambito che le contiene, come illustrato in precedenza.  
  
-   Parametri  
  
-   Variabili dichiarate a livello locale  
  
-   Membri dati classe (quando dichiarati all'interno di classi, con l'acquisizione di `this`)  
  
-   Qualsiasi variabile con durata di archiviazione statica, ad esempio variabili globali  
  
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
  
 Poiché la variabile `n` viene acquisita per valore, il relativo valore rimane `0` dopo la chiamata all'espressione lambda. La specifica `mutable` consente la modifica di `n` all'interno dell'espressione lambda.  
  
 Sebbene un'espressione lambda possa acquisire solo le variabili che hanno una durata dell'archiviazione automatica, nel corpo di questo tipo di espressioni è possibile usare variabili con durata dell'archiviazione statica. Nell'esempio seguente vengono usate la funzione `generate` e un'espressione lambda per assegnare un valore a ogni elemento di un oggetto `vector`. L'espressione lambda modifica la variabile statica per generare il valore dell'elemento successivo.  
  
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
  
 Per ulteriori informazioni, vedere [generare](../standard-library/algorithm-functions.md#generate).  
  
 Esempio di codice seguente viene utilizzata la funzione dell'esempio precedente e viene aggiunto un esempio di un'espressione lambda che usa l'algoritmo della libreria Standard C++ `generate_n`. Questa espressione lambda assegna un elemento di un oggetto `vector` alla somma dei due elementi precedenti. La parola chiave `mutable` viene usata affinché il corpo dell'espressione lambda possa modificare le relative copie delle variabili esterne `x` e `y`, acquisite per valore dall'espressione stessa. Poiché l'espressione lambda acquisisce le variabili originali `x` e `y` per valore, i relativi valori rimangono `1` dopo l'esecuzione dell'espressione lambda.  
  
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

## <a name="constexpr-lambda-expressions"></a>espressioni lambda constexpr
**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): un'espressione lambda può essere dichiarata come `constexpr` o utilizzato in un'espressione costante durante l'inizializzazione di ciascun membro dati che acquisisce o introduce è consentita all'interno di un'espressione costante.  

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
Un'espressione lambda è implicitamente `constexpr` se il risultato soddisfa i requisiti di un `constexpr` funzione:
```cpp
    auto answer = [](int n) 
    {
        return 32 + n; 
    };

    constexpr int response = answer(10);
``` 
Se un'espressione lambda in modo implicito o esplicito `constexpr`, la conversione in un puntatore a funzione produce un `constexpr` funzione:

```cpp
    auto Increment = [](int n)
    {
        return n + 1;
    };

    constexpr int(*inc)(int) = Increment;
```
  
## <a name="microsoft-specific"></a>Specifico di Microsoft  
 Le espressioni lambda non sono supportate nelle entità gestite di Common Language Runtime (CLR) elencate di seguito: `ref class`, `ref struct`, `value class` o `value struct`.  
  
 Se si usa un modificatore specifico Microsoft come [declspec](../cpp/declspec.md), è possibile inserirlo in un'espressione lambda immediatamente dopo il `parameter-declaration-clause`, ad esempio:  
  
```cpp  
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };  
```  
  
 Per determinare se un modificatore è supportato dalle espressioni lambda, vedere l'articolo nella [modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md) sezione della documentazione.  
  
 Oltre a C++ 11 la funzionalità lambda Standard, Visual Studio supporta le espressioni lambda senza state sono convertibili in qualsiasi tipo di puntatori funzione che usano convenzioni di chiamata arbitrarie.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Oggetti funzione nella libreria Standard C++](../standard-library/function-objects-in-the-stl.md)   
 [Chiamata di funzione](../cpp/function-call-cpp.md)   
 [for_each](../standard-library/algorithm-functions.md#for_each)
