---
title: "Miglioramenti della conformità C++ | Microsoft Docs"
ms.custom: 
ms.date: 11/16/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- vs-ide-general
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 45f22597944084ecd2d30fe29bf4e8ab3ef80201
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="c-conformance-improvements-in-visual-studio-2017-versions-150-153improvements153-and-155improvements155"></a>Miglioramenti della conformità C++ in Visual Studio 2017 versioni 15.0, [15.3](#improvements_153) e [15.5](#improvements_155)

Con il supporto per constexpr generalizzata e NSDMI per le aggregazioni, il compilatore di Microsoft Visual C++ è ora completo per le funzionalità aggiunte nello standard C++14. Si noti che il compilatore manca ancora di alcune funzionalità relative agli standard C++11 e C++98. Vedere [Visual C++ Language Conformance](visual-cpp-language-conformance.md) (Conformità al linguaggio Visual C++) per una tabella che mostra lo stato corrente del compilatore.

## <a name="c11"></a>C++11

**Supporto di SFINAE per le espressioni in un maggior numero di librerie**  
Viene continuamente migliorato il supporto del compilatore per la regola SFINAE per le espressioni, necessario ai fini della deduzione e della sostituzione degli argomenti del modello in cui le espressioni decltype e constexpr possono apparire come parametri del modello. Per altre informazioni, vedere il blog relativo ai [miglioramenti dell'espressione SFINAE in Visual Studio 2017 RC](https://blogs.msdn.microsoft.com/vcblog/2016/06/07/expression-sfinae-improvements-in-vs-2015-update-3).

## <a name="c-14"></a>C++ 14

**NSDMI per le aggregazioni**  
Un'aggregazione è una matrice o una classe che non ha costruttori specificati dall'utente, membri dati non statici privati o protetti, classi di base e funzioni virtuali. A partire da C++14 gli aggregati possono contenere inizializzatori di membro. Per altre informazioni, vedere l'argomento relativo a [inizializzatori di membro e aggregati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3605.html).

**constexpr estesa**  
Le espressioni dichiarate come constexpr ora possono contenere determinati tipi di dichiarazioni, istruzioni if e switch, istruzioni loop e modifica di oggetti la cui durata è iniziata all'interno della valutazione dell'espressione constexpr. Inoltre, non è più un requisito che una funzione membro non statica constexpr sia const in modo implicito. Per altre informazioni, vedere l'argomento relativo alla [riduzione dei vincoli per le funzioni constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html).

## <a name="c17"></a>C++17

**static_assert concisa**  (disponibile con **/std:c++17**)  
In C++17 il parametro di messaggio per static_assert è facoltativo. Per altre informazioni, vedere il documento relativo all'[estensione di static_assert, v2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf).

**Attributo [[fallthrough]]**  (disponibile con **/std:c++17**)  
L'attributo [[fallthrough]] può essere usato nel contesto di istruzioni switch per suggerire al compilatore che il comportamento del fallthrough è previsto. Ciò impedisce al compilatore di emettere avvisi in tali casi. Per altre informazioni, vedere il documento sulla [definizione per l'attributo [[fallthrough]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r0.pdf).

**Cicli range-based for generalizzati** (senza opzione del compilatore richiesta)  
I cicli range-based for non richiedono più che begin() ed end() restituiscano oggetti dello stesso tipo. Ciò consente a end() di restituire un sentinel usato dagli intervalli in [range-v3](https://github.com/ericniebler/range-v3) e dalla specifica tecnica sugli intervalli, completa, ma non abbastanza pubblicata. Per altre informazioni, vedere [Generalizing the Range-Based For Loop](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html) (Generalizzazione del ciclo for basato su intervallo).

## <a name="improvements_153"></a> Miglioramenti in Visual Studio 2017 versione 15.3

**Espressioni lambda di constexpr**  
È ora possibile usare espressioni lambda nelle espressioni costanti. Per altre informazioni, vedere [Constexpr Lambda](http://open-std.org/JTC1/SC22/WG21/docs/papers/2015/n4487.pdf) (Espressione lambda constexpr).

**if constexpr nei modelli di funzione**  
Un modello di funzione può contenere istruzioni `if constexpr` per abilitare il branching in fase di compilazione. Per altre informazioni, vedere [if constexpr](http://open-std.org/JTC1/SC22/WG21/docs/papers/2016/p0128r1.html).

**Istruzioni di selezione con inizializzatori**  
Un'istruzione `if` può includere un inizializzatore che introduce una variabile nell'ambito del blocco all'interno dell'istruzione stessa. Per altre informazioni, vedere [Selection statements with initializer](http://www.open-std.org/JTC1/SC22/WG21/docs/papers/2016/p0305r1.html) (Istruzioni di selezione con inizializzatore).

**Attributi [[maybe_unused]] e [[nodiscard]]**  
Nuovi attributi per ignorare gli avvisi quando non viene usata un'entità oppure per creare un avviso se il valore restituito di una chiamata di funzione viene rimosso. Per altre informazioni, vedere [Wording for maybe_unused attribute](http://open-std.org/JTC1/SC22/WG21/docs/papers/2016/p0212r0.pdf) (Formulazione per l'attributo maybe_unused) e [Proposal of unused,nodiscard and fallthrough attributes](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0068r0.pdf) (Proposta per gli attributi unused, nodiscard e fallthrough).

**Uso degli spazi dei nomi degli attributi senza ripetizione**  
Nuova sintassi per consentire un solo identificatore dello spazio dei nomi in un elenco di attributi. Per altre informazioni, vedere [Attributes in C++](cpp/attributes2.md) (Attributi in C++).

**Binding strutturati**  
In una singola dichiarazione è ora possibile archiviare un valore con i nomi singoli dei relativi componenti, quando il valore è una matrice, std::tuple o std::pair oppure tutti i membri dati sono non statici e pubblici. Per altre informazioni, vedere [Structured Bindings](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0144r0.pdf) (Binding strutturati).

**Regole di costruzione per i valori di classi di enumerazione**  
È ora disponibile una conversione implicita (non verso un tipo di dati più piccolo) dal tipo sottostante di un'enumerazione con ambito all'enumerazione stessa, quando la definizione dell'enumerazione non introduce alcun enumeratore e l'origine usa la sintassi di inizializzazione elenco. Per altre informazioni, vedere [Construction Rules for enum class Values](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0138r2.pdf) (Regole di costruzione per i valori di classe Enum).

**Acquisizione di *this per valore**  
L'oggetto `*this` in un'espressione lambda può ora essere acquisito per valore. Ciò rende possibili scenari in cui l'espressione lambda viene richiamata in operazioni parallele e asincrone, in particolare nelle architetture di computer più recenti. Per altre informazioni, vedere [Lambda Capture of \*this by Value as [=,\*this]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0018r3.html) (Acquisizione di *this per valore come [=,*this] nelle espressioni lambda).

**Rimozione di operator++ per bool**  
`operator++` non è più supportato nei tipi `bool`. Per altre informazioni, vedere [Remove Deprecated operator++(bool)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0002r1.html) (Rimozione di operator++(bool) deprecato).

**Rimozione della parola chiave "register" deprecata**  
La parola chiave `register`, precedentemente deprecata e ignorata dal compilatore, è stata ora rimossa dal linguaggio. Per altre informazioni, vedere [Remove Deprecated Use of the register Keyword](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0001r1.html) (Rimozione della parola chiave register per uso deprecato).

Per l'elenco completo dei miglioramenti apportati alla conformità fino a Visual Studio 2015 Update 3, vedere [Visual C++: novità dalla versione 2003 alla 2015](https://msdn.microsoft.com/en-us/library/mt723604.aspx).

## <a name="improvements_155"></a> Miglioramenti in Visual Studio 2017 versione 15.5

Le funzionalità contrassegnate con [14] sono disponibili senza condizioni anche nella modalità /std:c++14.

**Nuova opzione del compilatore per constexpr contrassegnata come extern**  
Nelle versioni precedenti di Visual Studio il compilatore assegna sempre un collegamento interno della variabile `constexpr` anche quando la variabile è contrassegnata come `extern`. In Visual Studio 2017 versione 15.5 una nuova opzione del compilatore, [/Zc:externConstexpr](build/reference/zc-externconstexpr.md), abilita il comportamento corretto conforme agli standard. Per altre informazioni, vedere [Collegamento extern constexpr](#extern_linkage).

**Rimozione delle specifiche di eccezione dinamiche**  
[P0003R5](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html) Le specifiche di eccezione dinamiche sono deprecate in C++11. La funzionalità è stata rimossa da C++17, ma la specifica (ancora) deprecata `throw()` viene conservata esclusivamente come alias per `noexcept(true)`. Per altre informazioni, vedere [Dynamic exception specification removal and noexcept](#noexcept_removal) (Rimozione della specifica di eccezione dinamica e noexcept). 

**not_fn()**  
[P0005R4](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0005r4.html) `not_fn` sostituisce `not1` e `not2`.

**Riformulazione di enable_shared_from_this**  
[P0033R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0033r1.html) `enable_shared_from_this` era stato aggiunto in C++11. Lo standard C++17 aggiorna la specifica per gestire meglio determinati casi limite. [14]

**Splicing di mappe e set**  
[P0083R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf) Questa funzionalità consente l'estrazione dei nodi dai contenitori associativi (ad esempio, map, set, unordered\_map, unordered\_set) che possono quindi essere modificati e nuovamente inseriti nello stesso contenitore o in un contenitore diverso che usa lo stesso tipo di nodo. Un caso d'uso comune è l'estrazione di un nodo da `std::map`, la modifica della chiave e il reinserimento.

**Deprecazione di parti superflue della libreria**  
[P0174R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html) Diverse funzionalità della libreria standard C++ sono state sostituite da funzionalità più recenti nel corso degli anni oppure si sono rivelate poco utili o problematiche. Queste funzionalità sono ufficialmente deprecate in C++ 17. 

**Rimozione del supporto dell'allocatore in std::function**  
[P0302R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0302r1.html) Prima di C++17 il modello di classe `std::function` aveva diversi costruttori che accettavano un argomento allocatore. L'uso di allocatori in questo contesto era tuttavia problematico e la semantica non era chiara. Questi costruttori sono stati quindi rimossi.

**Correzioni per not_fn()**  
[P0358R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0358r1.html) La nuova formulazione per `std::not_fn` offre il supporto della propagazione della categoria di valori in caso di chiamata al wrapper.

**shared_ptr\<T[]>, shared_ptr\<T[N]>**  
[P0414R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0414r2.html) Unione delle modifiche di `shared_ptr` da Library Fundamentals a C++17. [14]

**Correzione di shared_ptr per le matrici**  
[P0497R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0497r0.html) Correzioni al supporto di shared_ptr per le matrici. [14]

**Chiarimento per insert_return_type**  
[P0508R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0508r0.html) I contenitori associativi con chiavi univoche e i contenitori non ordinati con chiavi univoche hanno una funzione membro `insert` che restituisce un tipo annidato `insert_return_type`. Tale tipo restituito è ora definito come specializzazione di un tipo con parametri negli elementi Iterator e NodeType del contenitore.

**Variabili inline per STL**  
[P0607R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0607r0.html)

**Funzionalità Annex D deprecate**  
Annex D dello standard C++ contiene tutte le funzionalità deprecate, incluse `shared_ptr::unique()`, `<codecvt>` e `namespace std::tr1`. Quando l'opzione del compilatore **/std:c++17** è impostata, quasi tutte le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate. Per altre informazioni, vedere [Le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate](#annex_d).

Lo spazio dei nomi `std::tr2::sys` in `<experimental/filesystem>` crea un avviso di deprecazione in /std:c++14 per impostazione predefinita e ora viene rimosso in **/std:c++17** per impostazione predefinita.

La conformità negli elementi iostream è stata migliorata evitando un'estensione non standard (specializzazioni esplicite in-class).

La libreria standard ora usa modelli di variabile internamente.

La libreria standard è stata aggiornata in risposta alle modifiche del compilatore C++17, incluse l'aggiunta di noexcept nel sistema dei tipi e la rimozione delle specifiche di eccezione dinamiche.

## <a name="bug-fixes-in-visual-studio-versions-150-153update153-and-155update155"></a>Correzioni di bug in Visual Studio versioni 15.0, [15.3](#update_153) e [15.5](#update_155)

### <a name="copy-list-initialization"></a>Copy-list-initialization

Visual Studio 2017 genera correttamente errori del compilatore relativi alla creazione di oggetti con gli elenchi di inizializzatori che non venivano rilevati in Visual Studio 2015 e potevano causare un arresto anomalo o un comportamento non definito in fase di esecuzione. In base a N4594 13.3.1.7p1, in copy-list-initialization, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload, ma deve generare un errore se viene scelto tale overload.

I seguenti due esempi vengono compilati in Visual Studio 2015 ma non in Visual Studio 2017.

```cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    A a1 = { 1 }; // error C3445: copy-list-initialization of 'A' cannot use an explicit constructor
    const A& a2 = { 1 }; // error C2440: 'initializing': cannot convert from 'int' to 'const A &'

}
```

Per correggere l'errore, usare l'inizializzazione diretta:

```cpp
A a1{ 1 };
const A& a2{ 1 };
```

In Visual Studio 2015 il compilatore tratta erroneamente copy-list-initialization come l'oggetto copy-initialization normale, considerando solo la conversione dei costruttori per la risoluzione dell'overload. Nell'esempio seguente Visual Studio 2015 sceglie MyInt(23) ma Visual Studio 2017 genera correttamente l'errore.

```cpp
// From http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_closed.html#1228
struct MyStore {
    explicit MyStore(int initialCapacity);
};

struct MyInt {
    MyInt(int i);
};

struct Printer {
    void operator()(MyStore const& s);
    void operator()(MyInt const& i);
};

void f() {
    Printer p;
    p({ 23 }); // C3066: there are multiple ways that an object of this type can be called with these arguments
}
```

Questo esempio è simile a quello precedente, ma viene generato un errore diverso. L'esito è positivo in Visual Studio 2015 e negativo in Visual Studio 2017 con C2668.

```cpp
struct A {
    explicit A(int) {}
};

struct B {
    B(int) {}
};

void f(const A&) {}
void f(const B&) {}

int main()
{
    f({ 1 }); // error C2668: 'f': ambiguous call to overloaded function
}
```

### <a name="deprecated-typedefs"></a>Typedef deprecati

Visual Studio 2017 ora genera l'avviso corretto per i typedef deprecati dichiarati in una classe o uno struct. L'esempio seguente viene compilato senza avvisi in Visual Studio 2015, ma genera l'avviso C4996 in Visual Studio 2017.

```cpp
struct A
{
    // also for __declspec(deprecated)
    [[deprecated]] typedef int inttype;
};

int main()
{
    A::inttype a = 0; // C4996 'A::inttype': was declared deprecated
}
```

### <a name="constexpr"></a>constexpr

Visual Studio 2017 genera correttamente un errore quando l'operando sinistro di un'operazione con valutazione condizionale non è valido in un contesto constexpr. Il codice seguente viene compilato in Visual Studio 2015, ma non in Visual Studio 2017 (C3615 la funzione constexpr 'f' non può restituire un'espressione costante):

```cpp
template<int N>
struct array
{
    int size() const { return N; }
};

constexpr bool f(const array<1> &arr)
{
    return arr.size() == 10 || arr.size() == 11; // C3615
}
```
Per correggere l'errore, dichiarare la funzione `array::size()` come `constexpr` o rimuovere il qualificatore `constexpr` da `f`.

### <a name="class-types-passed-to-variadic-functions"></a>Tipi di classe passati alle funzioni variadic

In Visual Studio 2017 le classi o gli struct che vengono passati a una funzione variadic, ad esempio printf, devono essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o distruttore.

```cpp
#include <atomic>
#include <memory>
#include <stdio.h>

int main()
{
    std::atomic<int> i(0);
    printf("%i\n", i); // error C4839: non-standard use of class 'std::atomic<int>'
                        // as an argument to a variadic function.
                        // note: the constructor and destructor will not be called;
                        // a bitwise copy of the class will be passed as the argument
                        // error C2280: 'std::atomic<int>::atomic(const std::atomic<int> &)':
                        // attempting to reference a deleted function

    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);
    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                      // as an argument to a variadic function
}
```

Per correggere l'errore, è possibile chiamare una funzione membro che restituisca un tipo facilmente copiabile 

```cpp
    std::atomic<int> i(0);
    printf("%i\n", i.load());
```

o esegua un cast statico per convertire l'oggetto prima di passarlo:

```cpp
    struct S {/* as before */} s(0);
    printf("%i\n", static_cast<int>(s))
```

Per le stringhe compilate e gestite usando CStringW, `operator LPCWSTR()` specificato deve essere usato per il cast di un oggetto CStringW al puntatore C previsto dalla stringa di formato.

```cpp
CStringW str1;
CStringW str2;
str1.Format(L"%s", static_cast<LPCWSTR>(str2));
```

### <a name="cv-qualifiers-in-class-construction"></a>Qualificatori CV nella costruzione di classi

In Visual Studio 2015 il compilatore a volte ignora erroneamente il qualificatore CV quando genera un oggetto classe usando una chiamata al costruttore. Questo potenzialmente può causare un arresto anomalo o un comportamento imprevisto in fase di esecuzione. L'esempio seguente viene compilato in Visual Studio 2015, ma genera un errore del compilatore in Visual Studio 2017:

```cpp
struct S
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

Per correggere l'errore, dichiarare `operator int()` come `const`.

### <a name="access-checking-on-qualified-names-in-templates"></a>Controllo dell'accesso per i nomi completi nei modelli

Le versioni precedenti del compilatore non eseguivano il controllo dell'accesso per i nomi completi in alcuni contesti di modello. Ciò può interferire con il comportamento previsto per SFINAE in cui la sostituzione deve avere esito negativo a causa della non accessibilità di un nome. Questo potrebbe avere causato un arresto anomalo o un comportamento imprevisto in fase di esecuzione perché il compilatore ha chiamato per errore l'overload dell'operatore non corretto. In Visual Studio 2017 viene generato un errore del compilatore. L'errore specifico può variare, ma in genere è "C2672: non sono state trovate funzioni in overload corrispondenti". Il codice seguente viene compilato in Visual Studio 2015 ma genera un errore in Visual Studio 2017:

```cpp
#include <type_traits>

template <class T> class S {
    typedef typename T type;
};

template <class T, std::enable_if<std::is_integral<typename S<T>::type>::value, T> * = 0>
bool f(T x);

int main()
{
    f(10); // C2672: No matching overloaded function found.
}
```

### <a name="missing-template-argument-lists"></a>Elenchi di argomenti di modello mancanti

In Visual Studio 2015 e versioni precedenti il compilatore non diagnosticava gli elenchi di argomenti di modello mancanti quando il modello era visualizzato in un elenco di parametri di modello, ad esempio come parte di un argomento di modello predefinito o un parametro di modello non di tipo. Ciò può causare un comportamento imprevedibile, compresi arresti anomali del compilatore o il comportamento imprevisto in fase di esecuzione. Il codice seguente viene compilato in Visual Studio 2015 ma genera un errore in Visual Studio 2017.

```cpp
template <class T> class ListNode;
template <class T> using ListNodeMember = ListNode<T> T::*;
template <class T, ListNodeMember M> class ListHead; // C2955: 'ListNodeMember': use of alias 
                                                     // template requires template argument list

// correct:  template <class T, ListNodeMember<T> M> class ListHead;
```

### <a name="expression-sfinae"></a>Espressione SFINAE

Per supportare l'espressione SFINAE, il compilatore ora analizza argomenti decltype quando i modelli vengono dichiarati senza creare un'istanza. Di conseguenza, se viene rilevata una specializzazione non dipendente nell'argomento decltype, non viene rinviata all'ora di creazione di un'istanza ma viene elaborata immediatamente ed è possibile diagnosticare eventuali errori risultanti in quel momento.

Nell'esempio seguente viene illustrato questo tipo di errore del compilatore che viene generato al momento della dichiarazione:

```cpp
#include <utility>
template <class T, class ReturnT, class... ArgsT>
class IsCallable
{
public:
    struct BadType {};

    template <class U>
    static decltype(std::declval<T>()(std::declval<ArgsT>()...)) Test(int); //C2064. Should be declval<U>

    template <class U>
    static BadType Test(...);

    static constexpr bool value = std::is_convertible<decltype(Test<T>(0)), ReturnT>::value;
};

constexpr bool test1 = IsCallable<int(), int>::value;
static_assert(test1, "PASS1");
constexpr bool test2 = !IsCallable<int*, int>::value;
static_assert(test2, "PASS2");
```

### <a name="classes-declared-in-anonymous-namespaces"></a>Classi dichiarate in spazi dei nomi anonimi

In base allo standard C++, una classe dichiarata all'interno di uno spazio dei nomi anonimo include un collegamento interno e pertanto non può essere esportata. In Visual Studio 2015 e versioni precedenti questa regola non viene applicata. In Visual Studio 2017 la regola viene applicata parzialmente. L'esempio seguente genera questo errore in Visual Studio 2017: "errore C2201: const anonymous namespace::S1::vftable: per l'esportazione e l'importazione è necessario utilizzare il collegamento esterno."

```cpp
struct __declspec(dllexport) S1 { virtual void f() {} }; //C2201
```

### <a name="default-initializers-for-value-class-members-ccli"></a>Inizializzatori predefiniti per i membri della classe di valori (C++/CLI)

In Visual Studio 2015 e versioni precedenti il compilatore consentiva, ma ignorava, un inizializzatore di membro predefinito per un membro di una classe di valori. L'inizializzazione predefinita di una classe di valori inizializza sempre a zero i membri e un costruttore predefinito non è consentito. In Visual Studio 2017 gli inizializzatori di membri predefiniti generano un errore del compilatore, come illustra l'esempio seguente:

```cpp
value struct V
{
    int i = 0; // error C3446: 'V::i': a default member initializer
               // is not allowed for a member of a value class
};
```

### <a name="default-indexers-ccli"></a>Indicizzatori predefiniti (C++/CLI)

In Visual Studio 2015 e versioni precedenti il compilatore in alcuni casi identificava erroneamente una proprietà predefinita come indicizzatore predefinito. È stato possibile risolvere il problema usando l'identificatore `default` per accedere alla proprietà. Questa soluzione è diventata problematica dopo che `default` è stato introdotto come parola chiave in C++11. Pertanto, in Visual Studio 2017 sono stati corretti i bug che richiedevano la soluzione e il compilatore genera ora un errore quando si usa `default` per accedere alla proprietà predefinita per una classe.

```cpp
//class1.cs

using System.Reflection;
using System.Runtime.InteropServices;

namespace ClassLibrary1
{
    [DefaultMember("Value")]
    public class Class1
    {
        public int Value
        {
            // using attribute on the return type triggers the compiler bug
            [return: MarshalAs(UnmanagedType.I4)]
            get;
        }
    }
    [DefaultMember("Value")]
    public class Class2
    {
        public int Value
        {
            get;
        }
    }
}

// code.cpp
#using "class1.dll"

void f(ClassLibrary1::Class1 ^r1, ClassLibrary1::Class2 ^r2)
{
       r1->Value; // error
       r1->default;
       r2->Value;
       r2->default; // error
}
```

In Visual Studio 2017 è possibile accedere a entrambe le proprietà Value in base al nome:

```cpp
#using "class1.dll"

void f(ClassLibrary1::Class1 ^r1, ClassLibrary1::Class2 ^r2)
{
       r1->Value;
       r2->Value;
}
```

## <a name="update_153"></a> Correzioni di bug in Visual Studio 2017 versione 15.3

### <a name="calls-to-deleted-member-templates"></a>Chiamate a modelli di membro eliminati

Nelle versioni precedenti di Visual Studio, in alcuni casi il compilatore non riusciva a generare un errore in caso di chiamate non valide a un modello di membro eliminato che potevano causare arresti anomali in fase di runtime. Il codice seguente genera ora l'errore C2280, "'int S\<int>::f\<int>(void)': tentativo di fare riferimento a una funzione eliminata":

```cpp
template<typename T>
struct S {
   template<typename U> static int f() = delete;
};

void g()
{
   decltype(S<int>::f<int>()) i; // this should fail
}
```

Per correggere l'errore, dichiarare i come `int`.

### <a name="pre-condition-checks-for-type-traits"></a>Controlli sulle precondizioni per tratti di tipo

Visual Studio 2017 versione 15.3 migliora i controlli sulle precondizioni per i tratti di tipo in modo da attenersi più rigorosamente agli standard. Un controllo di questo tipo verifica ad esempio che il tratto di tipo sia assegnabile. In Visual Studio 2017 versione 15.3 il codice seguente genera l'errore C2139:

```cpp
struct S;
enum E;

static_assert(!__is_assignable(S, S), "fail"); // C2139 in 15.3
static_assert(__is_convertible_to(E, E), "fail"); // C2139 in 15.3
```

### <a name="new-compiler-warning-and-runtime-checks-on-native-to-managed-marshaling"></a>Nuovi controlli di avviso e di runtime del compilatore sul marshalling da nativo a gestito

Le chiamate da funzioni gestite a funzioni native richiedono il marshalling. CLR esegue il marshalling ma non comprende la semantica di C++. Se si passa un oggetto nativo per valore, CLR chiama il costruttore di copia dell'oggetto o usa BitBlt, da cui può derivare un comportamento non definito in fase di runtime.

Il compilatore genera ora un avviso se riesce a sapere in fase di runtime che tra il limite nativo e quello gestito viene passato per valore un oggetto con costruttore di copia eliminato. Se il compilatore non viene a conoscenza di questo evento in fase di runtime, inserisce un controllo di runtime in modo che il programma chiami immediatamente `std::terminate` nel momento in cui si verifica un marshalling non valido. In Visual Studio 2017 versione 15.3 il codice seguente genera l'avviso C4606 "'A': per il passaggio dell'argomento per valore tra limite nativo e gestito è necessario un costruttore di copia valido. In caso contrario, il comportamento del runtime risulta non definito".

```cpp
class A
{
public:
   A() : p_(new int) {}
   ~A() { delete p_; }

   A(A const &) = delete;
   A(A &&rhs) {
   p_ = rhs.p_;
}

private:
   int *p_;
};

#pragma unmanaged

void f(A a)
{
}

#pragma managed

int main()
{
    f(A()); // This call from managed to native requires marshalling. The CLR doesn't understand C++ and uses BitBlt, which results in a double-free later.
}
```

Per correggere l'errore, rimuovere la direttiva `#pragma managed` per contrassegnare il chiamante come nativo ed evitare il marshalling.

### <a name="experimental-api-warning-for-winrt"></a>Avviso di API sperimentale per WinRT

Le API WinRT rilasciate a scopo di sperimentazione e feedback vengono contrassegnate con `Windows.Foundation.Metadata.ExperimentalAttribute`. In Visual Studio 2017 versione 15.3 il compilatore genera l'avviso C4698 quando rileva questo attributo. Alcune API presenti in versioni precedenti di Windows SDK sono già state contrassegnate con questo attributo e le chiamate a queste API attivano ora l'avviso del compilatore. Nelle nuove versioni di Windows SDK l'attributo è rimosso da tutti i tipi distribuiti, ma se si usa un SDK precedente sarà necessario eliminare questi avvisi per tutte le chiamate effettuate ai tipi distribuiti.

Il codice seguente genera l'avviso C4698: "'Windows::Storage::IApplicationDataStatics2::GetForUserAsync' viene usato solo a scopo di valutazione e potrebbe essere modificato o rimosso in aggiornamenti futuri":

```cpp
Windows::Storage::IApplicationDataStatics2::GetForUserAsync(); //C4698
```

Per disabilitare l'avviso, aggiungere #pragma:

```cpp
#pragma warning(push)
#pragma warning(disable:4698)

Windows::Storage::IApplicationDataStatics2::GetForUserAsync();

#pragma warning(pop)
```

### <a name="out-of-line-definition-of-a-template-member-function"></a>Definizione out-of-line di una funzione membro di modello

Visual Studio 2017 versione 15.3 genera un errore quando rileva una definizione out-of-line di una funzione membro di modello non dichiarata nella classe. Il codice seguente genera ora l'errore C2039: 'f': non è un membro di 'S':

```cpp
struct S {};

template <typename T>
void S::f(T t) {} //C2039: 'f': is not a member of 'S'
```

Per correggere l'errore, aggiungere una dichiarazione alla classe:

```cpp
struct S {
    template <typename T>
    void f(T t);
};
template <typename T>
void S::f(T t) {}
```

### <a name="attempting-to-take-the-address-of-this-pointer"></a>Tentativo di accettare l'indirizzo del puntatore "this"

In C++ `this` è un prvalue di tipo puntatore a X. Non è possibile accettare l'indirizzo di `this` o associarlo a un riferimento lvalue. Nelle versioni precedenti di Visual Studio, il compilatore consentiva di ignorare questa restrizione eseguendo un cast. In Visual Studio 2017 versione 15.3, il compilatore genera l'errore C2664.

### <a name="conversion-to-an-inaccessible-base-class"></a>Conversione a una classe di base inaccessibile

Visual Studio 2017 versione 15.3 genera un errore quando si tenta di convertire un tipo in una classe di base inaccessibile. L'errore ora generato dal compilatore è "errore C2243: 'type cast': conversione da 'D *' a 'B *' esistente ma inaccessibile". Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. Il compilatore genera ora un errore C2243 quando rileva un codice simile al seguente:

```cpp
#include <memory>

class B { };
class D : B { }; // C2243. should be public B { };

void f()
{
   std::unique_ptr<B>(new D());
}
```

### <a name="default-arguments-are-not-allowed-on-out-of-line-definitions-of-member-functions"></a>Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro

Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro presenti in classi modello. Il compilatore genererà un avviso in **/permissive** e un errore grave in **/permissive-**.

Nelle versioni precedenti di Visual Studio, il codice non valido seguente poteva causare potenzialmente un arresto anomalo in fase di runtime. Visual Studio 2017 versione 15.3 genera l'avviso C5034: 'A\<T>::f': una definizione out-of-line di un membro di una classe non può contenere argomenti predefiniti:

```cpp
template <typename T>
struct A {
    T f(T t, bool b = false);
};

template <typename T>
T A<T>::f(T t, bool b = false) // C5034
{
    // ...
}
```

Per correggere l'errore, rimuovere l'argomento predefinito `= false`.

### <a name="use-of-offsetof-with-compound-member-designator"></a>Uso di offsetof con indicatore di membro composto

In Visual Studio 2017 versione 15.3 l'uso di `offsetof(T, m)` dove *m* è un "indicatore di membro composto" genera un avviso se si esegue la compilazione con l'opzione **/Wall**. Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. Visual Studio 2017 versione 15.3 produce l'avviso C4841: "è stata usata un'estensione non standard: indicatore di membro composto usato in offsetof":

```cpp
struct A {
   int arr[10];
};

// warning C4841: non-standard extension used: compound member designator in offsetof
constexpr auto off = offsetof(A, arr[2]);
```

Per correggere il codice, disabilitare l'avviso con un pragma o modificare il codice in modo da non usare `offsetof`:

```cpp
#pragma warning(push)
#pragma warning(disable: 4841)
constexpr auto off = offsetof(A, arr[2]);
#pragma warning(pop)
```

### <a name="using-offsetof-with-static-data-member-or-member-function"></a>Uso di offsetof con una funzione membro o un membro dati statici

In Visual Studio 2017 versione 15.3 l'uso di `offsetof(T, m)` dove *m* fa riferimento a un membro dati statici o a una funzione membro determina un errore. Il codice seguente produce l'errore C4597: "undefined behavior: offsetof applied to member function 'foo'" (comportamento indefinito: offsetof applicato alla funzione membro 'foo') e l'errore C4597: "undefined behavior: offsetof applied to static data member 'bar'" (comportamento indefinito: offsetof applicato al membro dati statici 'bar'):

```cpp
#include <cstddef>

struct A {
   int foo() { return 10; }
   static constexpr int bar = 0;
};

constexpr auto off = offsetof(A, foo);
constexpr auto off2 = offsetof(A, bar);
```

Questo codice non è valido e può causare un arresto anomalo in fase di runtime. Per correggere l'errore, modificare il codice in modo da non richiamare più un comportamento indefinito. Si tratta di codice non portabile non consentito dallo standard C++.

### <a name="declspec"></a> Nuovo avviso per attributi declspec

In Visual Studio 2017 versione 15.3 il compilatore non ignora più gli attributi se prima della specifica di collegamento `extern "C"` viene applicato `__declspec(...)`. In precedenza, il compilatore avrebbe ignorato l'attributo, con possibili implicazioni in fase di runtime. Se sono state impostate le opzioni **/Wall** e **/WX**, il codice seguente produce l'avviso C4768: "gli attributi __declspec prima della specifica del collegamento vengono ignorati":

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall //C4768
```

Per risolvere il problema, inserire prima la specifica "C" esterna:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

Questo avviso è disattivato per impostazione predefinita nella versione 15.3, ma è attivato per impostazione predefinita nella versione 15.5 e influisce solo su codice compilato con **/Wall** **/WX**.

### <a name="decltype-and-calls-to-deleted-destructors"></a>decltype e chiamate a distruttori eliminati

Nelle versioni precedenti di Visual Studio, il compilatore non era in grado di rilevare se si verificava una chiamata a un distruttore eliminato nel contesto dell'espressione associata a 'decltype'. In Visual Studio 2017 versione 15.3 il codice seguente genera "errore C2280: 'A\<T>::~A(void)': tentativo di fare riferimento a una funzione eliminata":

```cpp
template<typename T>
struct A
{
   ~A() = delete;
};

template<typename T>
auto f() -> A<T>;

template<typename T>
auto g(T) -> decltype((f<T>()));

void h()
{
   g(42);
}
```

### <a name="uninitialized-const-variables"></a>Variabili const non inizializzate

Visual Studio 2017 RTW conteneva una regressione in cui il compilatore C++ non generava un messaggio di diagnostica se non veniva inizializzata una variabile 'const'. Questa regressione è stata risolta in Visual Studio 2017 versione 15.3. Il codice seguente produce ora "avviso C4132: 'Value': oggetto const da inizializzare":

```cpp
const int Value; //C4132
```

Per correggere l'errore, assegnare un valore a `Value`.

### <a name="empty-declarations"></a>Dichiarazioni vuote

Visual Studio 2017 versione 15.3 genera ora un avviso in presenza di dichiarazioni vuote per tutti i tipi, non solo per i tipi predefiniti. Il codice seguente genera ora un avviso C4091 di livello 2 per tutte le quattro dichiarazioni:

```cpp
struct A {};
template <typename> struct B {};
enum C { c1, c2, c3 };

int;    // warning C4091 : '' : ignored on left of 'int' when no variable is declared
A;      // warning C4091 : '' : ignored on left of 'main::A' when no variable is declared
B<int>; // warning C4091 : '' : ignored on left of 'B<int>' when no variable is declared
C;      // warning C4091 : '' : ignored on left of 'C' when no variable is declared
```

Per rimuovere gli avvisi, è sufficiente impostare le dichiarazioni vuote come commento o rimuoverle. Se l'oggetto senza nome deve avere un effetto collaterale (ad esempio, RAII), è opportuno assegnare un nome all'oggetto.

L'avviso viene escluso in **/Wv:18** ed è attivo per impostazione predefinita nel livello di avviso W2.

### <a name="stdisconvertible-for-array-types"></a>std::is_convertible per i tipi matrice

Le versioni precedenti del compilatore restituiscono risultati non corretti per [std::is_convertible](standard-library/is-convertible-class.md) per i tipi matrice. Per questo motivo, gli autori delle librerie dovevano gestire come caso speciale il compilatore Microsoft Visual C++ quando veniva usato il tratto di tipo `std::is_convertible<...>`. Nell'esempio seguente le asserzioni statiche hanno esito positivo nelle versioni precedenti di Visual Studio, ma negativo in Visual Studio 2017 versione 15.3:

```cpp
#include <type_traits>

using Array = char[1];

static_assert(std::is_convertible<Array, Array>::value);
static_assert(std::is_convertible<const Array, const Array>::value, "");
static_assert(std::is_convertible<Array&, Array>::value, "");
static_assert(std::is_convertible<Array, Array&>::value, "");
```

`std::is_convertible<From, To>` viene calcolato controllando se una definizione di funzione immaginaria è ben formata:

```cpp 
   To test() { return std::declval<From>(); }
```

### <a name="private-destructors-and-stdisconstructible"></a>Distruttori privati e std::is_constructible

Le versioni precedenti del compilatore ignorano il fatto che un distruttore sia privato al momento di decidere il risultato di [std::is_constructible](standard-library/is-constructible-class.md). Questa condizione viene ora presa in considerazione. Nell'esempio seguente le asserzioni statiche hanno esito positivo nelle versioni precedenti di Visual Studio, ma negativo in Visual Studio 2017 versione 15.3:

```cpp
#include <type_traits>

class PrivateDtor {
   PrivateDtor(int) { }
private:
   ~PrivateDtor() { }
};

// This assertion used to succeed. It now correctly fails.
static_assert(std::is_constructible<PrivateDtor, int>::value);
```

A causa dei distruttori privati un tipo può essere non costruibile. `std::is_constructible<T, Args...>` viene calcolato come se fosse scritta la dichiarazione seguente:

```cpp
   T obj(std::declval<Args>()...)
```

Questa chiamata implica una chiamata al distruttore.

### <a name="c2668-ambiguous-overload-resolution"></a>C2668: risoluzione ambigua dell'overload

Le versioni precedenti del compilatore talvolta non riescono a rilevare ambiguità quando vengono trovati più candidati sia tramite dichiarazioni che ricerche dipendenti dall'argomento. Ciò può portare alla scelta di un overload non corretto e a un comportamento di runtime imprevisto. Nell'esempio seguente Visual Studio 2017 versione 15.3 genera correttamente C2668 'f': chiamata ambigua a funzione in overload:

```cpp
namespace N {
   template<class T>
   void f(T&, T&);

   template<class T>
   void f();
}

template<class T>
void f(T&, T&);

struct S {};
void f()
{
   using N::f; 

   S s1, s2;
   f(s1, s2); // C2668
}
```

Per correggere il codice, rimuovere l'istruzione using `N::f` se l'intenzione era di chiamare `::f()`.

### <a name="c2660-local-function-declarations-and-argument-dependent-lookup"></a>C2660: dichiarazioni di funzione locali e ricerca dipendente dall'argomento

Le dichiarazioni di funzione locali nascondono la dichiarazione di funzione nell'ambito che la contiene e disabilitano la ricerca dipendente dall'argomento. Tuttavia, le versioni precedenti del compilatore eseguono la ricerca dipendente dall'argomento in questo caso, causando potenzialmente la scelta dell'overload non corretto e un comportamento di runtime imprevisto. In genere, l'errore è dovuto a una firma non corretta della dichiarazione di funzione locale. Nell'esempio seguente Visual Studio 2017 versione 15.3 genera correttamente C2660 'f': la funzione non accetta 2 argomenti:

```cpp
struct S {};
void f(S, int);

void g()
{
   void f(S); // C2660 'f': function does not take 2 arguments:
   // or void f(S, int);
   S s;
   f(s, 0);
}
```

Per risolvere il problema, modificare la firma `f(S)` o rimuoverla.

### <a name="c5038-order-of-initialization-in-initializer-lists"></a>C5038: ordine di inizializzazione negli elenchi di inizializzatori

I membri di classe vengono inizializzati nell'ordine in cui sono dichiarati e non l'ordine in cui compaiono negli elenchi di inizializzatori. Le versioni precedenti del compilatore non avvisano quando l'ordine dell'elenco di inizializzatori è diverso dall'ordine di dichiarazione. Ciò può causare un comportamento di runtime indefinito se l'inizializzazione di un membro dipende dal fatto che un altro membro nell'elenco sia già inizializzato. Nell'esempio seguente Visual Studio 2017 versione 15.3 (con **/Wall**) genera l'avviso C5038: "il membro dati 'A::y' verrà inizializzato dopo il membro dati 'A::x'":

```cpp
struct A
{
    A(int a) : y(a), x(y) {} // Initialized in reverse, y reused
    int x;
    int y;
};
```

Per risolvere il problema, disporre l'elenco di inizializzatori nello stesso ordine delle dichiarazioni. Viene generato un avviso analogo quando uno o entrambi gli inizializzatori fanno riferimento a membri della classe di base.

Si noti che l'avviso è disattivato per impostazione predefinita e influisce solo sul codice compilato con **/Wall**.

## <a name="update_155"></a> Correzioni di bug e altre modifiche di comportamento in Visual Studio 2017 versione 15.5

### <a name="partial-ordering-change"></a>Modifica di ordinamento parziale

Il compilatore ora rifiuta correttamente il codice seguente e visualizza il messaggio di errore corretto:

```cpp
template<typename... T>
int f(T* ...)
{
    return 1;
}

template<typename T>
int f(const T&)
{
    return 2;
}

int main()
{
    int i = 0;
    f(&i);    // C2668
}
```

```Output
t161.cpp
t161.cpp(16): error C2668: 'f': ambiguous call to overloaded function
t161.cpp(8): note: could be 'int f<int*>(const T &)'
        with
        [
            T=int*
        ]
t161.cpp(2): note: or       'int f<int>(int*)'
t161.cpp(16): note: while trying to match the argument list '(int*)'
```

Il problema nell'esempio precedente è la presenza di due differenze nei tipi (const rispetto a non-const e pack rispetto a non-pack). Per eliminare l'errore del compilatore, rimuovere una delle differenze. In questo modo il compilatore può ordinare senza ambiguità le funzioni.

```cpp
template<typename... T>
int f(T* ...)
{
    return 1;
}

template<typename T>
int f(T&)
{
    return 2;
}

int main()
{
    int i = 0;
    f(&i);
}
```

### <a name="exception-handlers"></a>Gestori di eccezioni

I gestori del riferimento al tipo di matrice o di funzione non sono mai una corrispondenza per gli oggetti eccezione. Il compilatore ora rispetta correttamente questa regola e genera un avviso di livello 4. Non stabilisce neppure più una corrispondenza tra un gestore di `char*` o `wchar_t*` e un valore letterale stringa quando viene usato **/Zc:strictStrings**.

```cpp
int main()
{
    try {
        throw "";
    }
    catch (int (&)[1]) {} // C4843 (This should always be dead code.)
    catch (void (&)()) {} // C4843 (This should always be dead code.)
    catch (char*) {} // This should not be a match under /Zc:strictStrings
}
```

```Output
warning C4843: 'int (&)[1]': An exception handler of reference to array or function type is unreachable, use 'int*' instead
warning C4843: 'void (__cdecl &)(void)': An exception handler of reference to array or function type is unreachable, use 'void (__cdecl*)(void)' instead
```
Il codice seguente consente di evitare l'errore:

```cpp
catch (int (*)[1]) {}
```

### <a name="tr1"></a>Lo spazio dei nomi std::tr1 è deprecato

Lo spazio dei nomi `std::tr1` non standard è ora contrassegnato come deprecato in entrambe le modalità C++14 e C++17. In Visual Studio 2017 versione 15.5 il codice seguente genera l'errore C4996:

```cpp
#include <functional>
#include <iostream>
using namespace std;

int main() {
    std::tr1::function<int (int, int)> f = std::plus<int>(); //C4996
    cout << f(3, 5) << std::endl;
    f = std::multiplies<int>();
    cout << f(3, 5) << std::endl;
}
```

```Output
warning C4996: 'std::tr1': warning STL4002: The non-Standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to acknowledge that you have received this warning.
```

Per correggere l'errore, rimuovere il riferimento allo spazio dei nomi `tr1`:

```cpp
#include <functional>
#include <iostream>
using namespace std;

int main() {
    std::function<int (int, int)> f = std::plus<int>();
    cout << f(3, 5) << std::endl;
    f = std::multiplies<int>();
    cout << f(3, 5) << std::endl;
}
```

### <a name="annex_d"></a>Funzionalità della libreria standard in Annex D contrassegnate come deprecate

Quando l'opzione del compilatore in modalità **/std:c++17** è impostata, quasi tutte le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate.

In Visual Studio 2017 versione 15.5 il codice seguente genera l'errore C4996:

```cpp
#include <iterator>

class MyIter : public std::iterator<std::random_access_iterator_tag, int> {
public:
    // ... other members ...
};

#include <type_traits>

static_assert(std::is_same<MyIter::pointer, int*>::value, "BOOM");
```

```Output
warning C4996: 'std::iterator<std::random_access_iterator_tag,int,ptrdiff_t,_Ty*,_Ty &>::pointer': warning STL4015: The std::iterator class template (used as a base class to provide typedefs) is deprecated in C++17. (The <iterator> header is NOT deprecated.) The C++ Standard has never required user-defined iterators to derive from std::iterator. To fix this warning, stop deriving from std::iterator and start providing publicly accessible typedefs named iterator_category, value_type, difference_type, pointer, and reference. Note that value_type is required to be non-const, even for constant iterators. You can define _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING or _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS to acknowledge that you have received this warning.
```

Per correggere l'errore, seguire le istruzioni nel testo dell'avviso, come illustrato nel codice seguente:

```cpp
#include <iterator>

class MyIter {
public:
    typedef std::random_access_iterator_tag iterator_category;
    typedef int value_type;
    typedef ptrdiff_t difference_type;
    typedef int* pointer;
    typedef int& reference;

    // ... other members ...
};

#include <type_traits>

static_assert(std::is_same<MyIter::pointer, int*>::value, "BOOM");
```

### <a name="unreferenced-local-variables"></a>Variabili locali senza riferimenti

In Visual Studio 15.5 l'avviso C4189 viene generato in diversi casi, come illustrato nel codice seguente:

```cpp
void f() {
    char s[2] = {0}; // C4189. Either use the variable or remove it.
}

```

```Output
warning C4189: 's': local variable is initialized but not referenced
```

Per correggere l'errore, rimuovere la variabile non usata.

### <a name="single-line-comments"></a>Commenti a riga singola

In Visual Studio 2017 versione 15.5 gli avvisi C4001 e C4179 non vengono più generati dal compilatore C. In precedenza venivano generati solo nell'opzione del compilatore **/Za**.  Gli avvisi non sono più necessari perché i commenti a riga singola fanno parte dello standard C da C99.

```cpp
/* C only */
#pragma warning(disable:4001) //C4619
#pragma warning(disable:4179)
// single line comment
//* single line comment */
```

```Output
warning C4619: #pragma warning: there is no warning number '4001'
```

Se non è necessario che il codice sia compatibile con le versioni precedenti, è possibile evitare l'avviso rimuovendo l'eliminazione di C4001/C4179. Se è necessario che il codice sia compatibile con le versioni precedenti, eliminare solo C4619.

```C
/* C only */

#pragma warning(disable:4619)
#pragma warning(disable:4001)
#pragma warning(disable:4179)

// single line comment
/* single line comment */
```

### <a name="declspec-attributes-with-extern-c-linkage"></a>Attributi __declspec con collegamento extern "C" 

Nelle versioni precedenti di Visual Studio il compilatore ignora gli attributi `__declspec(...)` quando `__declspec(...)` viene applicato prima della specifica del collegamento `extern "C"`. Questo comportamento causa la generazione di codice non desiderato dall'utente, con possibili implicazioni per il runtime. L'avviso è stato aggiunto in Visual Studio versione 15.3, ma è disattivato per impostazione predefinita. In Visual Studio 2017 versione 15.5 l'avviso è abilitato per impostazione predefinita.

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall //C4768
```

```Output
warning C4768: __declspec attributes before linkage specification are ignored
```

Per correggere l'errore, inserire la specifica del collegamento prima dell'attributo __declspec:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

Questo nuovo avviso C4768 viene visualizzato in alcune intestazioni di Windows SDK fornite con Visual Studio 2017 15.3 o versione precedente (ad esempio, la versione 10.0.15063.0, nota anche come RS2 SDK). Le versioni successive di Windows SDK (in particolare, ShlObj.h e ShlObj_core.h) sono state tuttavia corrette in modo che non generino questo avviso. Quando viene visualizzato questo avviso proveniente dalle azioni di Windows SDK, è possibile eseguire queste azioni:

1. Passare alla versione più recente di Windows SDK fornita con Visual Studio 2017 versione 15.5.
2. Disattivare l'avviso prima e dopo l'elemento #include dell'istruzione dell'intestazione di Windows SDK:

   ```cpp
   #pragma warning (push)
   #pragma warning(disable:4768)
   #include <shlobj.h>
   #pragma warning (pop)
   ```

### <a name="extern_linkage"></a>Collegamento Extern constexpr 

Nelle versioni precedenti di Visual Studio il compilatore assegna sempre un collegamento interno della variabile `constexpr` anche quando la variabile è contrassegnata come `extern`. In Visual Studio 2017 versione 15.5 una nuova opzione del compilatore (**/Zc:externConstexpr**) abilita il comportamento corretto conforme agli standard. Questo diventerà infine il comportamento predefinito.

```cpp
extern constexpr int x = 10;
```

```Output
error LNK2005: "int const x" already defined
```

Se un file di intestazione contiene una variabile dichiarata `extern constexpr`, è necessario contrassegnarla come `__declspec(selectany)` per combinarne correttamente le dichiarazioni duplicate:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

### <a name="typeid-cant-be-used-on-incomplete-class-type"></a>typeid non può essere usato nel tipo di classe incompleto

Nelle versioni precedenti di Visual Studio il compilatore consente erroneamente il codice seguente, che restituisce informazioni sul tipo potenzialmente non corrette. In Visual Studio 2017 versione 15.5 il compilatore genera correttamente un errore:

```cpp
#include <typeinfo>

struct S;

void f() { typeid(S); } //C2027 in 15.5
```

```Output
error C2027: use of undefined type 'S'
```

### <a name="stdisconvertible-target-type"></a>Tipo di destinazione std::is_convertible

`std::is_convertible` richiede che il tipo di destinazione sia un tipo restituito valido. Nelle versioni precedenti di Visual Studio il compilatore consente erroneamente i tipi astratti, il che può causare una risoluzione dell'overload non corretta e un comportamento di runtime indesiderato.  Il codice seguente ora genera correttamente l'errore C2338:

```cpp
#include <type_traits>

struct B { virtual ~B() = 0; };
struct D : public B { virtual ~D(); };

static_assert(std::is_convertible<D, B>::value, "fail"); // C2338 in 15.5
```

Per evitare l'errore, quando si usa `is_convertible`, è consigliabile confrontare i tipi di puntatore perché un confronto dei tipi non puntatore potrebbe non riuscire se un tipo è astratto:

```cpp
#include <type_traits>

struct B { virtual ~B() = 0; };
struct D : public B { virtual ~D(); };

static_assert(std::is_convertible<D *, B *>::value, "fail");
```

### <a name="noexcept_removal"></a> Rimozione della specifica di eccezione dinamica e noexcept

In C++17 `throw()` è un alias per `noexcept`, `throw(<type list>)` e `throw(...)` vengono rimossi e alcuni tipi possono includere `noexcept`. Ciò può causare problemi di compatibilità di origine con il codice conforme a C++14 o versione precedente. L'opzione **/Zc:noexceptTypes-** può essere usata per ripristinare la versione C++14 di `noexcept` durante l'uso della modalità C++ 17 in generale. In questo modo è possibile aggiornare il codice sorgente per garantire la conformità a C++17 senza dover riscrivere contemporaneamente tutto il codice `throw()`.

Il compilatore ora diagnostica anche altre specifiche di eccezione non corrispondenti nelle dichiarazioni in modalità C++17 o con **/permissive-** con il nuovo avviso C5043.

Il codice seguente genera C5043 e C5040 in Visual Studio 2017 versione 15.5 quando viene applicata l'opzione **/std:c++17**:

```cpp
void f() throw(); // equivalent to void f() noexcept;
void f() {} // warning C5043
void g() throw(); // warning C5040

struct A {
    virtual void f() throw();
};

struct B : A {
    virtual void f() { } // error C2694
};
```
Per rimuovere gli errori quando si usa ancora **/std:c++17**, aggiungere l'opzione **/Zc:noexceptTypes-** alla riga di comando o aggiornare il codice per usare `noexcept`, come illustrato nell'esempio seguente:

```cpp
void f() noexcept;
void f() noexcept { }
void g() noexcept(false);

struct A {
    virtual void f() noexcept;
};

struct B : A {
    virtual void f() noexcept { }
};
```

### <a name="inline-variables"></a>Variabili inline

I membri dati static constexpr ora sono implicitamente inline, quindi la loro dichiarazione in una classe ora è la loro definizione. L'uso di una definizione out-of-line per un membro dati static constexpr è ridondante e attualmente deprecato. In Visual Studio 2017 versione 15.5 quando viene applicata l'opzione **/std:c++17**, il codice seguente ora genera l'avviso C5041 *'size': la definizione out-of-line per il membro dati statico constexpr non è necessaria ed è deprecata in C++17*:

```cpp
struct X {
    static constexpr int size = 3;
};
const int X::size; // C5041
```

### <a name="extern-c-declspec-warning-c4768-now-on-by-default"></a>Avviso C4768 relativo a extern "C" __declspec(...) attivo per impostazione predefinita

L'avviso è stato aggiunto in Visual Studio 2017 versione 15.3, ma è disattivato per impostazione predefinita. In Visual Studio 2017 versione 15.5 è attivo per impostazione predefinita. Per altre informazioni, vedere [Nuovo avviso per attributi declspec](#declspec).

### <a name="defaulted-functions-and-declspecnothrow"></a>Funzioni impostate come predefinite e __declspec(nothrow)

Il compilatore consentiva la dichiarazione delle funzioni impostate come predefinite con `__declspec(nothrow)` quando le corrispondenti funzioni di base/membro permettevano le eccezioni. Questo comportamento è contrario allo standard C++ e può causare un comportamento non definito in fase di esecuzione. Lo standard richiede che tali funzioni vengano definite come eliminate se è presente una specifica di eccezione non corrispondente.  In **/std:c++17** il codice seguente genera l'errore C2280 *tentativo di fare riferimento a una funzione eliminata. La funzione è stata eliminata in modo implicito perché la specifica dell'eccezione esplicita è incompatibile con quella della dichiarazione implicita.*:


```cpp
struct A {
    A& operator=(const A& other) { // No exception specification; this function may throw.
        ...
    }
};

struct B : public A {
    __declspec(nothrow) B& operator=(const B& other) = default;
};

int main()
{
    B b1, b2;
    b2 = b1; // error C2280
}
```

Per correggere questo codice, rimuovere __declspec(nothrow) dalla funzione impostata come predefinita o rimuovere `= default` e fornire una definizione per la funzione con qualsiasi gestione delle eccezioni obbligatorie:

```cpp
struct A {
    A& operator=(const A& other) {
        // ...
    }
};

struct B : public A {
    B& operator=(const B& other) = default;
};

int main()
{
    B b1, b2;
    b2 = b1;
}
```
### <a name="noexcept-and-partial-specializations"></a>noexcept e specializzazioni parziali
Con noexcept nel sistema dei tipi, le specializzazioni parziali per la corrispondenza di determinati tipi disponibili per la chiamata potrebbero non essere compilate o non scegliere il modello primario a causa di una specializzazione parziale mancante per i puntatori alle funzioni noexcept.

In questi casi potrebbe essere necessario aggiungere altre specializzazioni parziali per gestire i puntatori alle funzioni noexcept e i puntatori noexcept alle funzioni membro. Questi overload sono validi solo nella modalità **/std:c++17**. Se è necessario mantenere la compatibilità con le versioni precedenti di C++14 e si sta scrivendo codice che viene usato da altri, è consigliabile proteggere questi nuovi overload in direttive `#ifdef`. Se si usa un modulo autonomo, invece di usare clausole guard `#ifdef`, è possibile eseguire solo la compilazione con l'opzione **/Zc:noexceptTypes-**.

Il codice seguente esegue la compilazione in **/std:c++14**, ma ha esito negativo in **/std:c++17** con l'errore C2027: "uso del tipo non definito 'A\<T>'":

```cpp
template <typename T> struct A;

template <>
struct A<void(*)()>
{
    static const bool value = true;
};

template <typename T>
bool g(T t)
{
    return A<T>::value;
}

void f() noexcept {}

int main()
{
    return g(&f) ? 0 : 1; // C2027
}
```

Il codice seguente ha esito positivo in **/std:c++17** perché il compilatore sceglie la nuova specializzazione parziale `A<void (*)() noexcept>`:

```cpp
template <typename T> struct A;

template <>
struct A<void(*)()>
{
    static const bool value = true;
};

template <>
struct A<void(*)() noexcept>
{
    static const bool value = true;
};

template <typename T>
bool g(T t)
{
    return A<T>::value;
}

void f() noexcept {}

int main()
{
    return g(&f) ? 0 : 1; // OK
}
```

## <a name="see-also"></a>Vedere anche

[Conformità al linguaggio di Visual C++](visual-cpp-language-conformance.md)  
