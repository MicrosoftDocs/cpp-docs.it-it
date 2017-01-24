---
title: "Espressioni lambda in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "espressioni lambda [C++]"
  - "espressioni lambda [C++], panoramica"
  - "espressioni lambda [C++], e oggetti funzione"
ms.assetid: 713c7638-92be-4ade-ab22-fa33417073bf
caps.latest.revision: 36
caps.handback.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Espressioni lambda in C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In C\+\+11 un'espressione lambda, spesso definita semplicemente *lambda*, costituisce un modo efficace per definire un oggetto funzione anonima nella posizione in cui viene richiamato o passato come argomento a una funzione.  In genere le lambda vengono usate per incapsulare alcune righe di codice passate agli algoritmi o ai metodi asincroni.  Questo articolo definisce le espressioni lambda confrontandole con altre tecniche di programmazione, illustra i vantaggi che offrono e fornisce un esempio di base.  
  
## Parti dell'espressione lambda  
 Lo standard ISO C\+\+ mostra una semplice lambda passata come terzo argomento alla funzione `std::sort()`:  
  
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
  
1.  *Clausola di acquisizione*: nota anche come *lambda\-introducer* nella specifica C\+\+.  
  
2.  *Elenco parametri*: facoltativo.  Noto anche come *lambda declarator*.  
  
3.  *Specifica modificabile*: facoltativa.  
  
4.  *exception\-specification*: facoltativa.  
  
5.  *trailing\-return\-type*: facoltativo.  
  
6.  *Corpo dell'espressione lambda*.  
  
### Clausola di acquisizione  
 Una lambda può introdurre nuove variabile nel relativo corpo \(in **C\+\+14**\) e può accedere a o *acquisire* variabili dall'ambito circostante.  Una lambda inizia con la clausola di acquisizione \(*lambda\-introducer* nella sintassi standard\), che specifica le variabili da acquisire e se l'acquisizione viene effettuata per valore o per riferimento.  Le variabili che hanno come prefisso una e commerciale \(`&`\) sono accessibili per riferimento, mentre le variabili che ne sono prive sono accessibili per valore.  
  
 Una clausola di acquisizione vuota, `[ ]`, indica che il corpo dell'espressione lambda non accede a variabili nell'ambito che lo contiene.  
  
 È possibile usare la modalità di acquisizione predefinita \(`capture-default` nella sintassi standard\) per indicare come acquisire eventuali variabili esterne a cui viene fatto riferimento nella lambda: \[&\] indica che tutte le variabili a cui si fa riferimento vengono acquisite per riferimento e \[\=\] indica che vengono acquisite per valore.  È possibile usare una modalità di acquisizione predefinita e quindi specificare esplicitamente la modalità opposta per variabili specifiche.  Se ad esempio il corpo di un'espressione lambda accede alla variabile esterna `total` per riferimento e alla variabile esterna `factor` per valore, le seguenti clausole di acquisizione sono equivalenti:  
  
```cpp  
  
[&total, factor]  
[factor, &total]  
[&, factor]  
[factor, &]  
[=, &total]  
[&total, =]  
```  
  
 Quando si usa `capture-default`, vengono acquisite le sole variabili menzionate nell'espressione lambda.  
  
 Se la clausola di acquisizione include un elemento `capture-default` `&`, nessun `identifier` in un elemento `capture` di tale clausola di acquisizione potrà avere il formato `& identifier`.  Allo stesso modo, se la clausola di acquisizione include un elemento `capture-default` `=`, nessun `capture` di quella clausola potrà avere il formato `= identifier`.  Un identificatore o un elemento `this` non può apparire più di una volta in una clausola di acquisizione.  Nel frammento di codice seguente vengono illustrati alcuni esempi.  
  
```cpp  
struct S { void f(int i); };  
  
void S::f(int i) {  
    [&, i]{};    // OK  
    [&, &i]{};   // ERROR: i preceded by & when & is the default  
    [=, this]{}; // ERROR: this when = is the default  
    [i, i]{};    // ERROR: i repeated  
}  
```  
  
 Un elemento `capture` seguito dai puntini di sospensione è un'espansione del pacchetto, illustrata nell'esempio di [modello variadic](../cpp/ellipses-and-variadic-templates.md) seguente:  
  
```cpp  
template<class... Args>  
void f(Args... args) {  
    auto x = [args...] { return g(args...); };  
    x();  
}  
```  
  
 Per usare espressioni lambda nel corpo di un metodo della classe, passare il puntatore `this` alla clausola di acquisizione per fornire l'accesso ai metodi e ai membri dati della classe che li contengono.  Per un esempio sull'uso delle espressioni lambda con i metodi della classe, vedere "Uso di un'espressione lambda in un metodo" nell'argomento [Esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md).  
  
 Quando si usa la clausola di acquisizione, è consigliabile tenere in considerazione gli aspetti seguenti, in particolare quando si usano le espressioni lambda con il multithreading:  
  
-   Le acquisizioni di riferimento possono essere usate per modificare le variabili all'esterno, ma le acquisizioni di valore non possono essere usate a tale scopo  \(`mutable` consente la modifica delle copie, ma non degli originali\).  
  
-   Le acquisizioni di riferimento riflettono gli aggiornamenti alle variabili all'esterno, contrariamente alle acquisizioni di valore.  
  
-   Le acquisizioni di riferimento introducono una dipendenza dalla durata, contrariamente alle acquisizioni di valore.  Ciò è particolarmente importante quando la lambda viene eseguita in modo asincrono.  Se si acquisisce una variabile locale per riferimento in una lambda asincrona, tale locale sarà molto probabilmente scomparsa quando viene eseguita la lambda e ciò provoca una violazione di accesso in fase di esecuzione.  
  
 **Acquisizione generalizzata \(C\+\+ 14\)**  
  
 In C\+\+14 è possibile introdurre e inizializzare nuove variabili nella clausola di acquisizione, senza che queste variabili debbano esistere nell'ambito che racchiude la funzione lambda.  L'inizializzazione può essere espressa come espressione arbitraria. Il tipo della nuova variabile viene dedotto dal tipo prodotto dall'espressione.  Un vantaggio di questa funzionalità è costituito dal fatto che in C\+\+14 è possibile acquisire variabili di solo spostamento \(ad esempio std::unique\_ptr\) dall'ambito circostante e usarle nella lambda.  
  
```  
pNums = make_unique<vector<int>>(nums);  
//...  
      auto a = [ptr = move(pNums)]()  
        {  
           // use ptr  
        };  
```  
  
### Elenco parametri  
 Oltre ad acquisire le variabili, una lambda può accettare parametri di input.  L'elenco di parametri \(*lambda declarator* nella sintassi standard\) è facoltativo e da molti punti di vista è simile all'elenco di parametri per una funzione.  
  
```  
int y = [] (int first, int second)  
{  
    return first + second;  
};  
  
```  
  
 In **C\+\+ 14**, se il tipo di parametro è generico, è possibile usare la parola chiave auto come identificatore del tipo.  Ciò indica al compilatore di creare l'operatore di chiamata della funzione come modello.  Ogni istanza di auto in un elenco di parametri equivale a un parametro di tipo distinto.  
  
```  
auto y = [] (auto first, auto second)  
{  
    return first + second;  
};  
```  
  
 Un'espressione lambda può accettare un'altra espressione lambda come argomento.  Per altre informazioni, vedere la sezione "Funzioni lambda di ordine superiore" nell'argomento [Esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md).  
  
 Poiché un elenco di parametri è facoltativo, è possibile omettere le parentesi vuote se non si passano argomenti all'espressione lambda e il relativo `lambda-declarator:` non contiene *exception\-specification*, *trailing\-return\-type* o `mutable`.  
  
### Specifica modificabile  
 Generalmente l'operatore di chiamata di funzione di un'espressione lambda è const\-by\-value, ma questo viene annullato dall'uso della parola chiave `mutable`.  Non produce membri dati modificabili.  La specifica modificabile consente al corpo di un'espressione lambda di modificare le variabili acquisite per valore.  L'uso di `mutable` viene illustrato in alcuni degli esempi riportati più avanti in questo articolo.  
  
### Specifica di eccezione  
 È possibile usare la specifica di eccezione `throw()` per indicare che l'espressione lambda non generi alcuna eccezione.  Come con le normali funzioni, il compilatore di Visual C\+\+ genera l'avviso [C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md) se un'espressione lambda dichiara la specifica di eccezione `throw()` e il relativo corpo genera un'eccezione, come illustrato nell'esempio seguente:  
  
```cpp  
// throw_lambda_expression.cpp  
// compile with: /W4 /EHsc   
int main() // C4297 expected  
{  
   []() throw() { throw 5; }();  
}  
```  
  
 Per altre informazioni, vedere [Specifiche di eccezioni \(generazione\)](../cpp/exception-specifications-throw-cpp.md).  
  
### Tipo restituito  
 Il tipo restituito di un'espressione lambda viene dedotto automaticamente.  Non è necessario usare la parola chiave [auto](../cpp/auto-cpp.md) a meno che non venga specificato un *trailing\-return\-type*.  *trailing\-return\-type* è simile alla parte del tipo restituito di un metodo o funzione ordinaria.  Tuttavia, il tipo restituito deve seguire l'elenco di parametri ed è necessario includere la parola chiave di trailing\-return\-type `->` prima del tipo restituito.  
  
 È possibile omettere la parte del tipo restituito di un'espressione lambda se il corpo dell'espressione lambda contiene una sola istruzione return o l'espressione non restituisce un valore.  Se il corpo dell'espressione lambda contiene un'istruzione return, il compilatore deduce il tipo restituito dal tipo dell'espressione restituita.  In caso contrario, il compilatore deduce che il tipo restituito è `void`.  Vedere i frammenti di codice di esempio seguenti in cui viene illustrato questo principio.  
  
```cpp  
auto x1 = [](int i){ return i; }; // OK: return type is int  
auto x2 = []{ return{ 1, 2 }; };  // ERROR: return type is void, deducing   
                                  // return type from braced-init-list is not valid  
  
```  
  
 Un'espressione lambda può produrre un'altra espressione lambda come relativo valore restituito.  Per altre informazioni, vedere la sezione "Funzioni lambda di ordine superiore" in [Esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md).  
  
### Corpo dell'espressione lambda  
 Il corpo di un'espressione lambda \(*compound\-statement* nella sintassi standard\) può contenere qualsiasi elemento che può essere contenuto nel corpo di un metodo o di una funzione ordinaria.  Il corpo di una funzione ordinaria e quello di una funzione lambda possono entrambi accedere ai seguenti tipi di variabili:  
  
-   Variabili acquisite dall'ambito che le contiene, come illustrato in precedenza.  
  
-   Parametri  
  
-   Variabili dichiarate a livello locale  
  
-   Membri dati classe \(quando dichiarati all'interno di classi, con l'acquisizione di `this`\)  
  
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
  
 **Output:**  
  
  **5**  
**0** Poiché la variabile `n` viene acquisita per valore, il relativo valore rimane `0` dopo la chiamata all'espressione lambda.  La specifica `mutable` consente la modifica di `n` all'interno dell'espressione lambda.  
  
 Sebbene un'espressione lambda possa acquisire solo le variabili che hanno una durata dell'archiviazione automatica, nel corpo di questo tipo di espressioni è possibile usare variabili con durata dell'archiviazione statica.  L'esempio seguente usa la funzione `generate` e un'espressione lambda per assegnare un valore a ogni elemento di un oggetto `vector`.  L'espressione lambda modifica la variabile statica per generare il valore dell'elemento successivo.  
  
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
  
 Per altre informazioni, vedere [generare](../Topic/generate.md).  
  
 L'esempio di codice seguente usa la funzione dell'esempio precedente e aggiunge un esempio di espressione lambda con l'algoritmo STL `generate_n`.  Questa espressione lambda assegna un elemento di un oggetto `vector` alla somma dei due elementi precedenti.  La parola chiave `mutable` viene usata affinché il corpo dell'espressione lambda possa modificare le relative copie delle variabili esterne `x` e `y`, acquisite per valore dall'espressione stessa.  Poiché l'espressione lambda acquisisce le variabili originali `x` e `y` per valore, i relativi valori rimangono `1` dopo l'esecuzione dell'espressione lambda.  
  
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
  
 **Output:**  
  
  **vector v after call to generate\_n\(\) with lambda: 1 1 2 3 5 8 13 21 34**  
**x: 1 y: 1**  
**vector v after 1st call to fillVector\(\): 1 2 3 4 5 6 7 8 9**  
**vector v after 2nd call to fillVector\(\): 10 11 12 13 14 15 16 17 18** Per altre informazioni, vedere [generate\_n](../Topic/generate_n.md).  
  
## Specifico di Microsoft  
 Le espressioni lambda non sono supportate nelle entità gestite di Common Language Runtime \(CLR\) elencate di seguito: `ref class`, `ref struct`, `value class` o `value struct`.  
  
 Se si usa un modificatore specifico Microsoft come [\_\_declspec](../cpp/declspec.md), è possibile inserirlo in un'espressione lambda immediatamente dopo `parameter-declaration-clause`, ad esempio:  
  
```cpp  
auto Sqr = [](int t) __declspec(code_seg("PagedMem")) -> int { return t*t; };  
  
```  
  
 Per determinare se un modificatore è supportato dalle espressioni lambda, vedere l'articolo nella sezione relativa ai [modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md) della documentazione.  
  
 Visual Studio supporta la sintassi e la funzionalità per le espressioni lambda dello standard C\+\+11, con le eccezioni seguenti:  
  
-   Le espressioni lambda, come tutte le altre classi, non ottengono operatori di assegnazione di spostamento e costruttori di spostamento generati automaticamente.  Per altre informazioni sul supporto per i comportamenti dei riferimenti rvalue, vedere la sezione "Riferimenti rvalue" in [Supporto delle funzionalità C\+\+11\/14\/17](../cpp/support-for-cpp11-14-17-features-modern-cpp.md).  
  
-   L'elemento *attribute\-specifier\-seq* facoltativo non è supportato in questa versione.  
  
 Visual Studio aggiunge le funzionalità seguenti alla funzionalità lambda dello standard C\+\+11:  
  
-   Le espressioni lambda senza stato sono convertibili in qualsiasi tipo di puntatori funzione che usano convenzioni di chiamata arbitrarie.  
  
-   I tipi restituiti vengono automaticamente dedotti per i corpi delle espressioni lambda più complessi di `{ return expression; }`, purché tutte le istruzioni return presentino lo stesso tipo.  Questa funzionalità fa parte dello standard C\+\+14 proposto.  
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Oggetti funzione nella libreria STL](../standard-library/function-objects-in-the-stl.md)   
 [Chiamata di funzione](../cpp/function-call-cpp.md)   
 [for\_each](../Topic/for_each.md)