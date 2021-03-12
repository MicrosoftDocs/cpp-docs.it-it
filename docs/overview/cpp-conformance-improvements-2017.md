---
title: Miglioramenti della conformità in Visual Studio 2017
description: Microsoft C/C++ in Visual Studio 2017 sta procedendo verso la conformità completa con lo standard del linguaggio C++ 20.
ms.date: 03/10/2021
ms.technology: cpp-language
ms.openlocfilehash: b2f697148c7671dcc56a6fd27a53131d01e3b88f
ms.sourcegitcommit: f8ba5db09d05683b24c58505f0e57c21f85545dc
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2021
ms.locfileid: "103147310"
---
# <a name="c-conformance-improvements-behavior-changes-and-bug-fixes-in-visual-studio-2017"></a>Miglioramenti della conformità di C++, modifiche del comportamento e correzioni di bug in Visual Studio 2017

Microsoft C/C++ in Visual Studio (MSVC) apporta miglioramenti alla conformità e correzioni di bug in ogni versione. Questo articolo elenca i miglioramenti introdotti a livello di versione principale e secondaria. Per passare direttamente alle modifiche per una versione specifica, usare l'elenco riportato **di seguito in questo articolo**.

Questo documento elenca le modifiche apportate a Visual Studio 2017. Per una guida alle modifiche apportate a Visual Studio 2019, vedere [miglioramenti della conformità di C++ in Visual studio 2019](cpp-conformance-improvements.md). Per un elenco completo dei miglioramenti apportati alla conformità precedenti, vedere Visual C++ novità da [2003 a 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## <a name="conformance-improvements-in-visual-studio-2017-rtw-version-150"></a><a name="improvements_150"></a> Miglioramenti della conformità in Visual Studio 2017 RTW (versione 15,0)

Con il supporto per **`constexpr`** l'inizializzazione dei membri dati generalizzata e non statica (NSDMI) per le aggregazioni, il compilatore MSVC in Visual Studio 2017 è ora completo per le funzionalità aggiunte nello standard c++ 14. Nel compilatore, tuttavia, mancano ancora alcune funzionalità relative agli standard C++11 e C++98. Vedere la [tabella di conformità del linguaggio Microsoft C++](./visual-cpp-language-conformance.md) per una tabella che mostra lo stato corrente del compilatore.

### <a name="c11-expression-sfinae-support-in-more-libraries"></a>C++ 11: supporto dell'espressione SFINAE in altre librerie

Il compilatore continua a migliorare il supporto per l'espressione SFINAE. È obbligatorio per la deduzione dell'argomento di modello e la sostituzione, dove **`decltype`** le **`constexpr`** espressioni e possono apparire come parametri di modello. Per altre informazioni, vedere il blog relativo ai [miglioramenti dell'espressione SFINAE in Visual Studio 2017 RC](https://devblogs.microsoft.com/cppblog/expression-sfinae-improvements-in-vs-2015-update-3/).

### <a name="c14-nsdmi-for-aggregates"></a>C++ 14: NSDMI per le aggregazioni

Un' *aggregazione* è una matrice o una classe che ha: nessun costruttore fornito dall'utente, nessun membro dati non statico che è privato o protetto, nessuna classe base e funzioni virtuali. A partire da C++ 14, le aggregazioni possono contenere inizializzatori di membri. Per altre informazioni, vedere l'argomento relativo a [inizializzatori di membro e aggregati](https://wg21.link/n3605).

### <a name="c14-extended-constexpr"></a>C++ 14: esteso `constexpr`

Le espressioni dichiarate come **`constexpr`** ora possono contenere determinati tipi di dichiarazioni, istruzioni If e switch, istruzioni Loop e mutazioni di oggetti la cui durata è iniziata all'interno della **`constexpr`** valutazione dell'espressione. Non è più necessario che una **`constexpr`** funzione membro non statica debba essere implicitamente **`const`** . Per altre informazioni, vedere [vincoli di relax sulle `constexpr` funzioni](https://wg21.link/n3652).

### <a name="c17-terse-static_assert"></a>C++ 17: conciso `static_assert`

il parametro del messaggio per **`static_assert`** è facoltativo. Per ulteriori informazioni, vedere [N3928: extending static_assert, V2](https://wg21.link/n3928).

### <a name="c17-fallthrough-attribute"></a>C++17: Attributo `[[fallthrough]]`

In **`/std:c++17`** modalità, l' `[[fallthrough]]` attributo può essere usato nel contesto di istruzioni switch come hint per il compilatore che è previsto il comportamento di rientri. L'attributo impedisce al compilatore di emettere avvisi in tali casi. Per altre informazioni, vedere [P0188R0-wording for `[[fallthrough]]` attribute](https://wg21.link/p0188r0).

### <a name="generalized-range-based-for-loops"></a>Cicli generalizzati basati su intervallo `for`

I cicli basati su intervallo `for` non richiedono più che `begin()` e `end()` restituiscano oggetti dello stesso tipo. Questa modifica consente `end()` a di restituire una sentinella come utilizzata dagli intervalli in [`range-v3`](https://github.com/ericniebler/range-v3) e la specifica tecnica degli intervalli completati, ma non piuttosto pubblicati. Per altre informazioni, vedere [P0184R0-generalizzando il `for` ciclo Range-Based](https://wg21.link/p0184r0).

### <a name="copy-list-initialization"></a>Copy-list-initialization

Visual Studio 2017 genera correttamente gli errori del compilatore correlati alla creazione di oggetti tramite elenchi di inizializzatori. Questi errori non sono stati rilevati in Visual Studio 2015 e possono causare arresti anomali o un comportamento di runtime non definito. Per quanto riguarda [N4594 13.3.1.7 P1](https://wg21.link/n4594), in *`copy-list-initialization`* è necessario che il compilatore consideri un costruttore esplicito per la risoluzione dell'overload. Tuttavia, deve generare un errore se viene scelto un particolare overload.

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

In Visual Studio 2015, il compilatore ha erroneamente gestito l'inizializzazione dell'elenco di copie nello stesso modo in cui viene eseguita l'inizializzazione di copia normale: è stata considerata solo la conversione di costruttori per la risoluzione dell'overload. Nell'esempio seguente, Visual Studio 2015 sceglie `MyInt(23)` . Visual Studio 2017 genera correttamente l'errore.

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
    p({ 23 }); // C3066: there are multiple ways that an object
        // of this type can be called with these arguments
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

Visual Studio 2017 genera ora l'avviso corretto per i typedef deprecati dichiarati in una classe o uno struct. L'esempio seguente compila senza avvisi in Visual Studio 2015. Produce C4996 in Visual Studio 2017.

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

### `constexpr`

Visual Studio 2017 genera correttamente un errore quando l'operando sinistro di un'operazione di valutazione condizionale non è valido in un `constexpr` contesto. Il codice seguente viene compilato in Visual Studio 2015, ma non in Visual Studio 2017, dove genera C3615:

```cpp
template<int N>
struct array
{
    int size() const { return N; }
};

constexpr bool f(const array<1> &arr)
{
    return arr.size() == 10 || arr.size() == 11; // C3615 constexpr function 'f' cannot result in a constant expression
}
```

Per correggere l'errore, dichiarare la `array::size()` funzione come **`constexpr`** o rimuovere il **`constexpr`** qualificatore da `f` .

### <a name="class-types-passed-to-variadic-functions"></a>Tipi di classe passati alle funzioni variadic

In Visual Studio 2017, le classi o gli struct passati a una funzione Variadic, ad esempio, `printf` devono essere facilmente copiabili. Quando si passano tali oggetti il compilatore si limita a creare una copia bit per bit e non chiama il costruttore o il distruttore.

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

Per le stringhe compilate e gestite mediante `CString` , `operator LPCTSTR()` è necessario utilizzare l'oggetto fornito per eseguire il cast di un `CString` oggetto al puntatore C previsto dalla stringa di formato.

```cpp
CString str1;
CString str2 = _T("hello!");
str1.Format(_T("%s"), static_cast<LPCTSTR>(str2));
```

### <a name="cv-qualifiers-in-class-construction"></a>Qualificatori CV nella costruzione di classi

In Visual Studio 2015 il compilatore a volte ignora erroneamente il qualificatore CV quando genera un oggetto classe usando una chiamata al costruttore. Questo problema può causare un arresto anomalo o un comportamento imprevisto in fase di esecuzione. L'esempio seguente viene compilato in Visual Studio 2015, ma genera un errore del compilatore in Visual Studio 2017:

```cpp
struct S
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

Per correggere l'errore, dichiarare `operator int()` come **`const`** .

### <a name="access-checking-on-qualified-names-in-templates"></a>Controllo dell'accesso per i nomi completi nei modelli

Le versioni precedenti del compilatore non controllavano l'accesso ai nomi completi in alcuni contesti di modello. Questo problema può interferire con il comportamento previsto di SFINAE, in cui la sostituzione dovrebbe avere esito negativo a causa dell'inaccessibilità di un nome. Potrebbe avere potenzialmente causato un arresto anomalo o un comportamento imprevisto in fase di esecuzione, perché il compilatore ha erroneamente chiamato l'overload errato dell'operatore. In Visual Studio 2017 viene generato un errore del compilatore. L'errore specifico può variare, ma un errore tipico è C2672, "non è stata trovata alcuna funzione di overload corrispondente". Il codice seguente viene compilato in Visual Studio 2015 ma genera un errore in Visual Studio 2017:

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

In Visual Studio 2015 e versioni precedenti, il compilatore non ha diagnosticato tutti gli elenchi di argomenti di modello mancanti. Non si nota quando il modello mancante è presente in un elenco di parametri di modello: ad esempio, quando una parte di un argomento di modello predefinito o un parametro di modello non di tipo è mancante. Questo problema può causare un comportamento imprevedibile, compresi arresti anomali del compilatore o il comportamento imprevisto in fase di esecuzione. Il codice seguente viene compilato in Visual Studio 2015, ma genera un errore in Visual Studio 2017.

```cpp
template <class T> class ListNode;
template <class T> using ListNodeMember = ListNode<T> T::*;
template <class T, ListNodeMember M> class ListHead; // C2955: 'ListNodeMember': use of alias
                                                     // template requires template argument list

// correct:  template <class T, ListNodeMember<T> M> class ListHead;
```

### <a name="expression-sfinae"></a>Espressione SFINAE

Per supportare Expression-SFINAE, il compilatore ora analizza gli **`decltype`** argomenti quando vengono dichiarati i modelli anziché creare un'istanza. Quindi, se viene trovata una specializzazione non dipendente nell'argomento decltype, non viene rinviata all'ora di creazione dell'istanza. Viene elaborata immediatamente ed è possibile diagnosticare eventuali errori risultanti in quel momento.

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

In base allo standard C++, una classe dichiarata all'interno di uno spazio dei nomi anonimo include un collegamento interno e pertanto non può essere esportata. In Visual Studio 2015 e versioni precedenti questa regola non viene applicata. In Visual Studio 2017 la regola viene applicata parzialmente. In Visual Studio 2017 l'esempio seguente genera l'errore C2201:

```cpp
struct __declspec(dllexport) S1 { virtual void f() {} };
  // C2201 const anonymous namespace::S1::vftable: must have external linkage
  // in order to be exported/imported.
```

### <a name="default-initializers-for-value-class-members-ccli"></a>Inizializzatori predefiniti per i membri della classe di valori (C++/CLI)

In Visual Studio 2015 e versioni precedenti il compilatore consentiva, ma ignorava, un inizializzatore di membro predefinito per un membro di una classe di valori. L'inizializzazione predefinita di una classe di valori inizializza sempre a zero i membri. Non è consentito un costruttore predefinito. In Visual Studio 2017 gli inizializzatori di membri predefiniti generano un errore del compilatore, come illustra l'esempio seguente:

```cpp
value struct V
{
    int i = 0; // error C3446: 'V::i': a default member initializer
               // isn't allowed for a member of a value class
};
```

### <a name="default-indexers-ccli"></a>Indicizzatori predefiniti (C++/CLI)

In Visual Studio 2015 e versioni precedenti il compilatore in alcuni casi identificava erroneamente una proprietà predefinita come indicizzatore predefinito. È stato possibile aggirare il problema usando l'identificatore **`default`** per accedere alla proprietà. La soluzione alternativa è diventata problematica dopo che **`default`** è stato introdotto come parola chiave in c++ 11. In Visual Studio 2017 i bug che richiedevano la soluzione alternativa erano corretti. Il compilatore genera ora un errore quando **`default`** viene usato per accedere alla proprietà predefinita per una classe.

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

## <a name="conformance-improvements-in-153"></a><a name="improvements_153"></a> Miglioramenti della conformità in 15,3

### <a name="constexpr-lambdas"></a>`constexpr` espressioni lambda

È ora possibile usare espressioni lambda nelle espressioni costanti. Per altre informazioni, vedere [ `constexpr` espressioni lambda in C++](../cpp/lambda-expressions-constexpr.md).

### <a name="if-constexpr-in-function-templates"></a>`if constexpr` nei modelli di funzioni

Un modello di funzione può contenere **`if constexpr`** istruzioni per abilitare la diramazione in fase di compilazione. Per ulteriori informazioni, vedere [ `if constexpr` istruzioni](../cpp/if-else-statement-cpp.md#if_constexpr).

### <a name="selection-statements-with-initializers"></a>Istruzioni di selezione con inizializzatori

Un' **`if`** istruzione può includere un inizializzatore che introduce una variabile nell'ambito del blocco all'interno dell'istruzione stessa. Per ulteriori informazioni, vedere [ `if` istruzioni con inizializzatore](../cpp/if-else-statement-cpp.md#if_with_init).

### <a name="maybe_unused-and-nodiscard-attributes"></a>Attributi `[[maybe_unused]]` e `[[nodiscard]]`

Il nuovo attributo `[[maybe_unused]]` disattiva gli avvisi quando non viene usata un'entità. L'attributo `[[nodiscard]]` crea un avviso se il valore restituito di una chiamata a una funzione viene rimosso. Per altre informazioni, vedere [Attributes in C++](../cpp/attributes.md) (Attributi in C++).

### <a name="using-attribute-namespaces-without-repetition"></a>Uso degli spazi dei nomi degli attributi senza ripetizione

Nuova sintassi per consentire un solo identificatore dello spazio dei nomi in un elenco di attributi. Per altre informazioni, vedere [Attributes in C++](../cpp/attributes.md) (Attributi in C++).

### <a name="structured-bindings"></a>Binding strutturati

In una singola dichiarazione è ora possibile archiviare un valore con i nomi singoli dei relativi componenti, quando il valore è una matrice, `std::tuple` o `std::pair`, oppure tutti i membri dati sono non statici e pubblici. Per altre informazioni, vedere [Binding strutturati con P0144R0](https://wg21.link/p0144r0) e [restituzione di più valori da una funzione](../cpp/functions-cpp.md#multi_val).

### <a name="construction-rules-for-enum-class-values"></a>Regole di costruzione per i valori di `enum class`

È ora disponibile una conversione implicita per le enumerazioni con ambito che non si limitano. Esegue la conversione dal tipo sottostante di un'enumerazione con ambito all'enumerazione stessa. La conversione è disponibile quando la relativa definizione non introduce un enumeratore e quando l'origine utilizza una sintassi di inizializzazione elenco. Per altre informazioni, vedere [P0138R2-costruzioni Rules per `enum class` valori](https://wg21.link/p0138r2) ed [enumerazioni](../cpp/enumerations-cpp.md#no_enumerators).

### <a name="capturing-this-by-value"></a>Acquisizione di `*this` per valore

L' **`*this`** oggetto in un'espressione lambda può ora essere acquisito per valore. Questa modifica rende possibili scenari in cui l'espressione lambda viene richiamata in operazioni parallele e asincrone, in particolare nelle architetture di computer più recenti. Per ulteriori informazioni, vedere la pagina relativa all' [acquisizione P0018R3-lambda di \* questo per valore come \[ =, \* this \] ](https://wg21.link/p0018r3).

### <a name="removing-operator-for-bool"></a>Rimozione di `operator++` per `bool`

`operator++` non è più supportato sui **`bool`** tipi. Per ulteriori informazioni, vedere [P0002R1-Remove deprecated operator + + (bool)](https://wg21.link/p0002r1).

### <a name="removing-deprecated-register-keyword"></a>Rimozione della parola chiave `register` deprecata

La **`register`** parola chiave, precedentemente deprecata (e ignorata dal compilatore), viene ora rimossa dal linguaggio. Per altre informazioni, vedere [P0001R1-rimuovere l'uso deprecato della `register` parola chiave](https://wg21.link/p0001r1).

### <a name="calls-to-deleted-member-templates"></a>Chiamate a modelli di membro eliminati

Nelle versioni precedenti di Visual Studio, in alcuni casi il compilatore non generava un errore per le chiamate in formato non corretto a un modello di membro eliminato. Queste chiamate potrebbero causare arresti anomali in fase di esecuzione. Il codice seguente genera ora C2280:

```cpp
template<typename T>
struct S {
   template<typename U> static int f() = delete;
};

void g()
{
   decltype(S<int>::f<int>()) i; // this should fail with
// C2280: 'int S<int>::f<int>(void)': attempting to reference a deleted function
}
```

Per correggere l'errore, dichiarare `i` come **`int`** .

### <a name="pre-condition-checks-for-type-traits"></a>Controlli sulle precondizioni per tratti di tipo

Visual Studio 2017 versione 15.3 migliora i controlli sulle precondizioni per i tratti di tipo in modo da attenersi più rigorosamente agli standard. Un controllo di questo tipo verifica ad esempio che il tratto di tipo sia assegnabile. In Visual Studio 2017 versione 15.3 il codice seguente genera l'errore C2139:

```cpp
struct S;
enum E;

static_assert(!__is_assignable(S, S), "fail"); // C2139 in 15.3
static_assert(__is_convertible_to(E, E), "fail"); // C2139 in 15.3
```

### <a name="new-compiler-warning-and-runtime-checks-on-native-to-managed-marshaling"></a>Nuovi controlli di avviso e di runtime del compilatore sul marshalling da nativo a gestito

Le chiamate da funzioni gestite a funzioni native richiedono il marshalling. CLR esegue il marshalling ma non comprende la semantica di C++. Se si passa un oggetto nativo per valore, CLR chiama il costruttore di copia dell'oggetto o usa `BitBlt`, da cui può derivare un comportamento non definito in fase di runtime.

A questo punto il compilatore genera un avviso se questo errore viene rilevato in fase di compilazione: un oggetto nativo con la copia ctor eliminata viene passato tra un limite nativo e un limite gestito per valore. Se il compilatore non viene a conoscenza di questo evento in fase di runtime, inserisce un controllo di runtime in modo che il programma chiami immediatamente `std::terminate` nel momento in cui si verifica un marshalling non valido. In Visual Studio 2017 versione 15,3, il codice seguente genera l'avviso C4606:

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
    // This call from managed to native requires marshaling. The CLR doesn't
    // understand C++ and uses BitBlt, which results in a double-free later.
    f(A()); // C4606 'A': passing argument by value across native and managed
    // boundary requires valid copy constructor. Otherwise, the runtime
    // behavior is undefined.`
}
```

Per correggere l'errore, rimuovere la direttiva `#pragma managed` per contrassegnare il chiamante come nativo ed evitare il marshalling.

### <a name="experimental-api-warning-for-winrt"></a>Avviso di API sperimentale per WinRT

Le API WinRT rilasciate a scopo di sperimentazione e feedback vengono contrassegnate con `Windows.Foundation.Metadata.ExperimentalAttribute`. In Visual Studio 2017 versione 15,3, il compilatore genera l'avviso C4698 per questo attributo. Alcune API presenti in versioni precedenti di Windows SDK sono già state contrassegnate con questo attributo e le chiamate a queste API attivano ora l'avviso del compilatore. Gli SDK di Windows più recenti hanno l'attributo rimosso da tutti i tipi spediti. Se si usa un SDK precedente, sarà necessario escludere gli avvisi per tutte le chiamate ai tipi spediti.

Il codice seguente genera l'avviso C4698:

```cpp
Windows::Storage::IApplicationDataStatics2::GetForUserAsync(); // C4698
// 'Windows::Storage::IApplicationDataStatics2::GetForUserAsync' is for
// evaluation purposes only and is subject to change or removal in future updates
```

Per disabilitare l'avviso, aggiungere #pragma:

```cpp
#pragma warning(push)
#pragma warning(disable:4698)

Windows::Storage::IApplicationDataStatics2::GetForUserAsync();

#pragma warning(pop)
```

### <a name="out-of-line-definition-of-a-template-member-function"></a>Definizione out-of-line di una funzione membro di modello

Visual Studio 2017 versione 15,3 genera un errore per una definizione out-of-line di una funzione membro di modello non dichiarata nella classe. Il codice seguente genera ora l'errore C2039:

```cpp
struct S {};

template <typename T>
void S::f(T t) {} // C2039: 'f': is not a member of 'S'
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

### <a name="attempting-to-take-the-address-of-this-pointer"></a>Tentativo di accettare l'indirizzo del puntatore `this`

In C++ **`this`** è un prvalue di tipo puntatore a X. Non è possibile prendere l'indirizzo di **`this`** o associarlo a un riferimento lvalue. Nelle versioni precedenti di Visual Studio, il compilatore consentiva di ignorare questa restrizione usando un cast. In Visual Studio 2017 versione 15.3, il compilatore genera l'errore C2664.

### <a name="conversion-to-an-inaccessible-base-class"></a>Conversione a una classe di base inaccessibile

Visual Studio 2017 versione 15.3 genera un errore quando si prova a convertire un tipo in una classe di base inaccessibile. Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. Il compilatore ora produce C2243 quando Visualizza codice simile al seguente:

```cpp
#include <memory>

class B { };
class D : B { }; // C2243: 'type cast': conversion from 'D *' to 'B *' exists, but is inaccessible

void f()
{
   std::unique_ptr<B>(new D());
}
```

### <a name="default-arguments-arent-allowed-on-out-of-line-definitions-of-member-functions"></a>Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro

Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro presenti in classi modello. Il compilatore emetterà un avviso in **`/permissive`** e un errore hardware sotto [`/permissive-`](../build/reference/permissive-standards-conformance.md) .

Nelle versioni precedenti di Visual Studio, il codice non valido seguente poteva causare potenzialmente un arresto anomalo in fase di runtime. Visual Studio 2017 versione 15.3 produce l'avviso C5034:

```cpp
template <typename T>
struct A {
    T f(T t, bool b = false);
};

template <typename T>
T A<T>::f(T t, bool b = false) // C5034: 'A<T>::f': an out-of-line definition of a member of a class template cannot have default arguments
{
    // ...
}
```

Per correggere l'errore, rimuovere l'argomento predefinito `= false`.

### <a name="use-of-offsetof-with-compound-member-designator"></a>Uso di `offsetof` con indicatore di membro composto

In Visual Studio 2017 versione 15,3, l'uso di `offsetof(T, m)` dove *m* è un "indicatore di membro composto" genera un avviso quando si esegue la compilazione con l' **`/Wall`** opzione. Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. Visual Studio 2017 versione 15,3 genera l'avviso C4841:

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

### <a name="using-offsetof-with-static-data-member-or-member-function"></a>Uso di `offsetof` con una funzione membro o un membro dati statici

In Visual Studio 2017 versione 15.3 l'uso di `offsetof(T, m)` dove *m* fa riferimento a un membro dati statici o a una funzione membro determina un errore. Il codice seguente genera l'errore C4597:

```cpp
#include <cstddef>

struct A {
   int ten() { return 10; }
   static constexpr int two = 2;
};

constexpr auto off = offsetof(A, ten);  // C4597: undefined behavior: offsetof applied to member function 'A::ten'
constexpr auto off2 = offsetof(A, two); // C4597: undefined behavior: offsetof applied to static data member 'A::two'
```

Questo codice non è valido e può causare un arresto anomalo in fase di runtime. Per correggere l'errore, modificare il codice in modo da non richiamare più un comportamento indefinito. Si tratta di codice non portabile non consentito dallo standard C++.

### <a name="new-warning-on-__declspec-attributes"></a><a name="declspec"></a> Nuovo avviso per attributi `__declspec`

In Visual Studio 2017 versione 15.3 il compilatore non ignora più gli attributi se prima della specifica di collegamento `extern "C"` viene applicato `__declspec(...)`. In precedenza, il compilatore avrebbe ignorato l'attributo, con possibili implicazioni in fase di runtime. Quando **`/Wall`** **`/WX`** vengono impostate le opzioni e, il codice seguente genera l'avviso C4768:

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall // C4768: __declspec attributes before linkage specification are ignored
```

Per risolvere il problema, inserire prima `extern "C"`:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

Questo avviso è disattivato per impostazione predefinita in 15,3, ma per impostazione predefinita in 15,5 e influisca solo sul codice compilato con  **`/Wall`** **`/WX`** .

### <a name="decltype-and-calls-to-deleted-destructors"></a>`decltype` e chiamate a distruttori eliminati

Nelle versioni precedenti di Visual Studio il compilatore non ha rilevato quando una chiamata a un distruttore eliminato si è verificata nel contesto dell'espressione associata a **`decltype`** . In Visual Studio 2017 versione 15,3, il codice seguente genera l'errore C2280:

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
   g(42); // C2280: 'A<T>::~A(void)': attempting to reference a deleted function
}
```

### <a name="uninitialized-const-variables"></a>Variabili const non inizializzate

La versione di Visual Studio 2017 RTW presenta una regressione: il compilatore C++ non emetterebbe una diagnostica per una variabile non inizializzata **`const`** . Questa regressione è stata risolta in Visual Studio 2017 versione 15.3. Il codice seguente genera ora l'avviso C4132:

```cpp
const int Value; // C4132: 'Value': const object should be initialized
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

Per rimuovere gli avvisi, impostare le dichiarazioni vuote come commento o rimuoverle. Se l'oggetto senza nome deve avere un effetto collaterale (ad esempio, RAII), è opportuno assegnare un nome all'oggetto.

L'avviso viene escluso in **`/Wv:18`** ed è impostato su on per impostazione predefinita nel livello di avviso W2.

### <a name="stdis_convertible-for-array-types"></a>`std::is_convertible` per i tipi matrice

Le versioni precedenti del compilatore davano risultati non corretti per [`std::is_convertible`](../standard-library/is-convertible-class.md) i tipi di matrice. Per questo motivo, gli autori delle librerie dovevano gestire come caso speciale il compilatore Microsoft C++ quando veniva usato il tratto di tipo `std::is_convertible<...>`. Nell'esempio seguente le asserzioni statiche hanno esito positivo nelle versioni precedenti di Visual Studio, ma negativo in Visual Studio 2017 versione 15.3:

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

### <a name="private-destructors-and-stdis_constructible"></a>Distruttori privati e `std::is_constructible`

Le versioni precedenti del compilatore ignorano se un distruttore era privato durante la decisione del risultato di [`std::is_constructible`](../standard-library/is-constructible-class.md) . Questa condizione viene ora presa in considerazione. Nell'esempio seguente le asserzioni statiche hanno esito positivo nelle versioni precedenti di Visual Studio, ma negativo in Visual Studio 2017 versione 15.3:

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

Le versioni precedenti del compilatore talvolta non riescono a rilevare ambiguità quando vengono trovati più candidati sia tramite dichiarazioni sia con ricerche dipendenti dall'argomento. Ciò può portare alla scelta di un overload non corretto e a un comportamento di runtime imprevisto. Nell'esempio seguente Visual Studio 2017 versione 15,3 genera correttamente C2668:

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
   f(s1, s2); // C2668: 'f': ambiguous call to overloaded function
}
```

Per correggere il codice, rimuovere l'istruzione using `N::f` se l'intenzione era di chiamare `::f()`.

### <a name="c2660-local-function-declarations-and-argument-dependent-lookup"></a>C2660: dichiarazioni di funzione locali e ricerca dipendente dall'argomento

Le dichiarazioni di funzione locali nascondono la dichiarazione di funzione nell'ambito che la contiene e disabilitano la ricerca dipendente dall'argomento. Le versioni precedenti del compilatore facevano sempre la ricerca dipendente dall'argomento in questo caso. Potrebbe causare un comportamento di runtime imprevisto, se il compilatore ha scelto l'overload errato. In genere, l'errore è dovuto a una firma non corretta della dichiarazione di funzione locale. Nell'esempio seguente Visual Studio 2017 versione 15,3 genera correttamente C2660:

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

I membri della classe vengono inizializzati nell'ordine in cui sono dichiarati, non nell'ordine in cui compaiono negli elenchi di inizializzatori. Le versioni precedenti del compilatore non avvisano quando l'ordine dell'elenco di inizializzatori è diverso dall'ordine di dichiarazione. Questo problema può causare un comportamento di runtime non definito se l'inizializzazione di un membro dipende da un altro membro nell'elenco già in fase di inizializzazione. Nell'esempio seguente Visual Studio 2017 versione 15,3 (con **`/Wall`** ) genera l'avviso C5038:

```cpp
struct A
{    // Initialized in reverse, y reused
    A(int a) : y(a), x(y) {} // C5038: data member 'A::y' will be initialized after data member 'A::x'
    int x;
    int y;
};
```

Per risolvere il problema, disporre l'elenco di inizializzatori nello stesso ordine delle dichiarazioni. Viene generato un avviso analogo quando uno o entrambi gli inizializzatori fanno riferimento a membri della classe di base.

Questo avviso è disattivato per impostazione predefinita e influiscono solo sul codice compilato con **`/Wall`** .

## <a name="conformance-improvements-in-155"></a><a name="improvements_155"></a> Miglioramenti della conformità in 15,5

Le funzionalità contrassegnate con \[ 14] sono disponibili in modo incondizionato anche in **`/std:c++14`** modalità.

### <a name="new-compiler-switch-for-extern-constexpr"></a>Nuova opzione del compilatore per `extern constexpr`

Nelle versioni precedenti di Visual Studio, il compilatore assegna sempre un **`constexpr`** collegamento interno a una variabile, anche quando la variabile è contrassegnata come **`extern`** . In Visual Studio 2017 versione 15,5, una nuova opzione del compilatore, [`/Zc:externConstexpr`](../build/reference/zc-externconstexpr.md) , Abilita il comportamento corretto e conforme agli standard. Per ulteriori informazioni, vedere [ `extern constexpr` collegamento](#extern_linkage).

### <a name="removing-dynamic-exception-specifications"></a>Rimozione delle specifiche di eccezione dinamiche

[P0003R5](https://wg21.link/p0003r5) Le specifiche di eccezione dinamiche sono deprecate in C++11. La funzionalità è stata rimossa da C++17, ma la specifica (ancora) deprecata `throw()` viene conservata esclusivamente come alias per `noexcept(true)`. Per ulteriori informazioni, vedere la pagina relativa alla [rimozione `noexcept` della specifica di eccezione dinamica e ](#noexcept_removal).

### `not_fn()`

[P0005R4](https://wg21.link/p0005r4) `not_fn` sostituisce `not1` e `not2`.

### <a name="rewording-enable_shared_from_this"></a>Riformulazione di `enable_shared_from_this`

[P0033R1](https://wg21.link/p0033r1) `enable_shared_from_this` era stato aggiunto in C++11. Lo standard C++17 aggiorna la specifica per gestire meglio determinati casi limite. \[14

### <a name="splicing-maps-and-sets"></a>Splicing di mappe e set

[P0083R3](https://wg21.link/p0083r3) Questa funzionalità consente l'estrazione dei nodi dai contenitori associativi (ovvero,,, `map` `set` `unordered_map` `unordered_set` ) che possono quindi essere modificati e inseriti di nuovo nello stesso contenitore o in un contenitore diverso che usa lo stesso tipo di nodo. Un caso d'uso comune è l'estrazione di un nodo da `std::map`, la modifica della chiave e il reinserimento.

### <a name="deprecating-vestigial-library-parts"></a>Deprecazione di parti superflue della libreria

[P0174R2](https://wg21.link/p0174r2) Diverse funzionalità della libreria standard C++ sono state sostituite da funzionalità più recenti nel corso degli anni oppure si sono rivelate poco utili o problematiche. Queste funzionalità sono ufficialmente deprecate in C++ 17.

### <a name="removing-allocator-support-in-stdfunction"></a>Rimozione del supporto dell'allocatore in `std::function`

[P0302R1](https://wg21.link/p0302r1) Prima di C++ 17, il modello di classe `std::function` aveva diversi costruttori che prendevano un argomento allocatore. L'uso di allocatori in questo contesto era tuttavia problematico e la semantica non era chiara. I costruttori problematici sono stati rimossi.

### <a name="fixes-for-not_fn"></a>Correzioni per `not_fn()`

[P0358R1](https://wg21.link/p0358r1) La nuova formulazione per `std::not_fn` offre il supporto della propagazione della categoria di valori quando è usata nella chiamata al wrapper.

### <a name="shared_ptrt-shared_ptrtn"></a>`shared_ptr<T[]>`, `shared_ptr<T[N]>`

[P0414R2](https://wg21.link/p0414r2) Unione delle modifiche di `shared_ptr` da Library Fundamentals a C++17. \[14

### <a name="fixing-shared_ptr-for-arrays"></a>Correzione di `shared_ptr` per le matrici

[P0497R0](https://wg21.link/p0497r0) Correzioni al supporto di shared_ptr per le matrici. \[14

### <a name="clarifying-insert_return_type"></a>Chiarimento per `insert_return_type`

[P0508R0](https://wg21.link/p0508r0) I contenitori associativi con chiavi univoche e i contenitori non ordinati con chiavi univoche hanno una funzione membro `insert` che restituisce un tipo annidato `insert_return_type`. Tale tipo restituito è ora definito come specializzazione di un tipo con parametri negli elementi Iterator e NodeType del contenitore.

### <a name="inline-variables-for-the-standard-library"></a>Variabili inline per la libreria standard

Per [P0607R0](https://wg21.link/p0607r0), diverse variabili comuni dichiarate nella libreria standard sono ora dichiarate inline.

### <a name="annex-d-features-deprecated"></a>Funzionalità Annex D deprecate

Annex D dello standard C++ contiene tutte le funzionalità deprecate, incluse `shared_ptr::unique()`, `<codecvt>` e `namespace std::tr1`. Quando **`/std:c++17`** viene impostata l'opzione del compilatore, quasi tutte le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate. Per ulteriori informazioni, vedere la pagina relativa alle [funzionalità della libreria standard nell'allegato D contrassegnate come deprecate](#annex_d).

Lo `std::tr2::sys` spazio dei nomi in `<experimental/filesystem>` ora genera un avviso di deprecazione in **`/std:c++14`** per impostazione predefinita ed è ora rimosso in **`/std:c++17`** per impostazione predefinita.

La conformità negli elementi `<iostream>` è stata migliorata evitando un'estensione non standard (specializzazioni esplicite in-class).

La libreria standard ora usa modelli di variabile internamente.

La libreria standard è stata aggiornata in risposta alle modifiche del compilatore C++ 17. Gli aggiornamenti includono l'aggiunta di **`noexcept`** nel sistema dei tipi e la rimozione delle specifiche di eccezione dinamiche.

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

Il problema nell'esempio precedente è la presenza di due differenze nei tipi (const rispetto a non-const e pack rispetto a non-pack). Per eliminare l'errore del compilatore, rimuovere una delle differenze. Il compilatore può quindi ordinare le funzioni in modo non ambiguo.

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

I gestori del riferimento al tipo di matrice o di funzione non sono mai una corrispondenza per gli oggetti eccezione. Il compilatore ora rispetta correttamente questa regola e genera un avviso di livello 4. Non corrisponde più a un gestore di `char*` o `wchar_t*` a un valore letterale stringa quando **`/Zc:strictStrings`** viene usato.

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

### <a name="stdtr1-namespace-is-deprecated"></a> Lo spazio dei nomi <a name="tr1"></a> `std::tr1` è deprecato

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
warning C4996: 'std::tr1': warning STL4002: The non-standard std::tr1 namespace and TR1-only machinery are deprecated and will be REMOVED. You can define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING to acknowledge that you have received this warning.
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

### <a name="standard-library-features-in-annex-d-are-marked-as-deprecated"></a><a name="annex_d"></a> Le funzionalità della libreria standard nell'allegato D sono contrassegnate come deprecate

Quando **`/std:c++17`** viene impostata l'opzione del compilatore Mode, quasi tutte le funzionalità della libreria standard in Annex D vengono contrassegnate come deprecate.

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
warning C4996: 'std::iterator<std::random_access_iterator_tag,int,ptrdiff_t,_Ty*,_Ty &>::pointer': warning STL4015: The std::iterator class template (used as a base class to provide typedefs) is deprecated in C++17. (The <iterator> header is NOT deprecated.) The C++ standard has never required user-defined iterators to derive from std::iterator. To fix this warning, stop deriving from std::iterator and start providing publicly accessible typedefs named iterator_category, value_type, difference_type, pointer, and reference. Note that value_type is required to be non-const, even for constant iterators. You can define _SILENCE_CXX17_ITERATOR_BASE_CLASS_DEPRECATION_WARNING or _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS to acknowledge that you have received this warning.
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

In Visual Studio 2017 versione 15.5 gli avvisi C4001 e C4179 non vengono più generati dal compilatore C. In precedenza, venivano emesse solo con l' **`/Za`** opzione del compilatore.  Gli avvisi non sono più necessari perché i commenti a riga singola fanno parte dello standard C da C99.

```cpp
/* C only */
#pragma warning(disable:4001) // C4619
#pragma warning(disable:4179)
// single line comment
//* single line comment */
```

```Output
warning C4619: #pragma warning: there is no warning number '4001'
```

Quando il codice non deve essere compatibile con le versioni precedenti, evitare l'avviso rimuovendo l'eliminazione di C4001 e C4179. Se è necessario che il codice sia compatibile con le versioni precedenti, eliminare solo C4619.

```C
/* C only */

#pragma warning(disable:4619)
#pragma warning(disable:4001)
#pragma warning(disable:4179)

// single line comment
/* single line comment */
```

### <a name="__declspec-attributes-with-extern-c-linkage"></a>Attributi `__declspec` con collegamento `extern "C"`

Nelle versioni precedenti di Visual Studio il compilatore ignora gli attributi `__declspec(...)` quando `__declspec(...)` viene applicato prima della specifica del collegamento `extern "C"`. Questo comportamento causa la generazione di codice non desiderato dall'utente, con possibili implicazioni per il runtime. L'avviso è stato aggiunto in Visual Studio versione 15.3, ma è disattivato per impostazione predefinita. In Visual Studio 2017 versione 15.5 l'avviso è abilitato per impostazione predefinita.

```cpp
__declspec(noinline) extern "C" HRESULT __stdcall // C4768
```

```Output
warning C4768: __declspec attributes before linkage specification are ignored
```

Per correggere l'errore, inserire la specifica del collegamento prima dell'attributo __declspec:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

Questo nuovo avviso C4768 viene visualizzato in alcune intestazioni di Windows SDK fornite con Visual Studio 2017 15.3 o versione precedente (ad esempio, la versione 10.0.15063.0, nota anche come RS2 SDK). Le versioni successive di Windows SDK (in particolare, ShlObj.h e ShlObj_core.h) sono state tuttavia corrette in modo da non generare questo avviso. Quando viene visualizzato questo avviso proveniente dalle azioni di Windows SDK, è possibile eseguire queste azioni:

1. Passare alla versione più recente di Windows SDK fornita con Visual Studio 2017 versione 15.5.

1. Disattivare l'avviso prima e dopo l'elemento #include dell'istruzione dell'intestazione di Windows SDK:

```cpp
   #pragma warning (push)
   #pragma warning(disable:4768)
   #include <shlobj.h>
   #pragma warning (pop)
   ```

### <a name="extern-constexpr-linkage"></a><a name="extern_linkage"></a>`extern constexpr`collegamento

Nelle versioni precedenti di Visual Studio, il compilatore assegna sempre un **`constexpr`** collegamento interno a una variabile anche quando la variabile è contrassegnata come **`extern`** . In Visual Studio 2017 versione 15,5, una nuova opzione del compilatore ( **`/Zc:externConstexpr`** ) consente un comportamento corretto e conforme agli standard. Questo diventerà in ultima analisi il comportamento predefinito.

```cpp
extern constexpr int x = 10;
```

```Output
error LNK2005: "int const x" already defined
```

Se un file di intestazione contiene una variabile dichiarata **`extern constexpr`** , deve essere contrassegnata in modo che `__declspec(selectany)` le dichiarazioni duplicate vengano combinate correttamente:

```cpp
extern constexpr __declspec(selectany) int x = 10;
```

### <a name="typeid-cant-be-used-on-incomplete-class-type"></a>`typeid` non può essere usato nel tipo di classe incompleto

Nelle versioni precedenti di Visual Studio il compilatore consente erroneamente il codice seguente, che restituisce informazioni sul tipo potenzialmente non corrette. In Visual Studio 2017 versione 15.5 il compilatore genera correttamente un errore:

```cpp
#include <typeinfo>

struct S;

void f() { typeid(S); } //C2027 in 15.5
```

```Output
error C2027: use of undefined type 'S'
```

### <a name="stdis_convertible-target-type"></a>Tipo di destinazione di `std::is_convertible`

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

### <a name="dynamic-exception-specification-removal-and-noexcept"></a><a name="noexcept_removal"></a> Rimozione della specifica di eccezione dinamica e `noexcept`

In C++ 17, `throw()` è un alias per **`noexcept`** , `throw(<type list>)` e `throw(...)` vengono rimossi e alcuni tipi possono includere **`noexcept`** . Questa modifica può causare problemi di compatibilità di origine con il codice conforme a C++14 o versione precedente. L' **`/Zc:noexceptTypes-`** opzione può essere usata per ripristinare la versione c++ 14 di **`noexcept`** durante l'uso della modalità c++ 17 in generale. In questo modo è possibile aggiornare il codice sorgente per garantire la conformità a C++17 senza dover riscrivere contemporaneamente tutto il codice `throw()`.

Il compilatore ora diagnostica anche le specifiche di eccezione più non corrispondenti nelle dichiarazioni in modalità C++ 17 o con [`/permissive-`](../build/reference/permissive-standards-conformance.md) con il nuovo avviso C5043.

Il codice seguente genera C5043 e C5040 in Visual Studio 2017 versione 15,5 quando **`/std:c++17`** viene applicata l'opzione:

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

Per rimuovere gli errori continuando **`/std:c++17`** a usare, aggiungere l' **`/Zc:noexceptTypes-`** opzione alla riga di comando oppure aggiornare il codice per l'uso di **`noexcept`** , come illustrato nell'esempio seguente:

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

**`constexpr`** I membri dati statici sono ora implicitamente **`inline`** , il che significa che la loro dichiarazione all'interno di una classe è ora la relativa definizione. L'utilizzo di una definizione out-of-line per un **`static constexpr`** membro dati è ridondante e ora è deprecato. In Visual Studio 2017 versione 15,5, quando **`/std:c++17`** viene applicata l'opzione, il codice seguente genera ora l'avviso C5041:

```cpp
struct X {
    static constexpr int size = 3;
};
const int X::size; // C5041: 'size': out-of-line definition for constexpr static data member is not needed and is deprecated in C++17
```

### <a name="extern-c-__declspec-warning-c4768-now-on-by-default"></a>Avviso C4768 relativo a `extern "C" __declspec(...)` attivo per impostazione predefinita

L'avviso è stato aggiunto in Visual Studio 2017 versione 15.3, ma è disabilitato per impostazione predefinita. In Visual Studio 2017 versione 15.5 l'avviso è abilitato per impostazione predefinita. Per ulteriori informazioni, vedere [nuovo avviso per `__declspec` gli attributi](#declspec).

### <a name="defaulted-functions-and-__declspecnothrow"></a>Funzioni impostate come predefinite e `__declspec(nothrow)`

Il compilatore consentiva la dichiarazione delle funzioni impostate come predefinite con `__declspec(nothrow)` quando le corrispondenti funzioni di base/membro permettevano le eccezioni. Questo comportamento è contrario allo standard C++ e può causare un comportamento non definito in fase di esecuzione. Lo standard richiede che tali funzioni vengano definite come eliminate se è presente una specifica di eccezione non corrispondente.  In **`/std:c++17`** il codice seguente genera C2280:

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
    b2 = b1; // error C2280: attempting to reference a deleted function.
             // Function was implicitly deleted because the explicit exception
             // specification is incompatible with that of the implicit declaration.
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

### <a name="noexcept-and-partial-specializations"></a>`noexcept` e specializzazioni parziali

Con **`noexcept`** nel sistema di tipi, le specializzazioni parziali per la corrispondenza di particolari tipi "chiamabili" potrebbero non essere compilate o non riuscire a scegliere il modello primario, a causa di una specializzazione parziale mancante per i puntatori a noexcept-Functions.

In questi casi, potrebbe essere necessario aggiungere specializzazioni parziali per gestire i **`noexcept`** puntatori a funzione e i **`noexcept`** puntatori alle funzioni membro. Questi overload sono validi solo in **`/std:c++17`** modalità. Se è necessario mantenere la compatibilità con le versioni precedenti di C++14 e si sta scrivendo codice che viene usato da altri, è consigliabile proteggere questi nuovi overload in direttive `#ifdef`. Se si sta lavorando in un modulo autonomo, invece di usare `#ifdef` le protezioni è sufficiente compilare con l' **`/Zc:noexceptTypes-`** opzione.

Il codice seguente viene compilato in **`/std:c++14`** ma ha esito negativo **`/std:c++17`** con errore C2027:

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
    return g(&f) ? 0 : 1; // C2027: use of undefined type 'A<T>'
}
```

Il codice seguente ha esito positivo **`/std:c++17`** perché il compilatore sceglie la nuova specializzazione parziale `A<void (*)() noexcept>` :

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

## <a name="conformance-improvements-in-156"></a><a name="improvements_156"></a> Miglioramenti della conformità in 15,6

### <a name="c17-library-fundamentals-v1"></a>C++17 Library Fundamentals V1

[P0220R1](https://wg21.link/p0220r1) incorpora la Library Fundamentals Technical Specification per C++17 nello standard. Vengono illustrati gli aggiornamenti di \<experimental/tuple> , \<experimental/optional> , \<experimental/functional> , \<experimental/any> , \<experimental/string_view> , \<experimental/memory> , \<experimental/memory_resource> e \<experimental/algorithm> .

### <a name="c17-improving-class-template-argument-deduction-for-the-standard-library"></a>C++ 17: miglioramento della deduzione dell'argomento del modello di classe per la libreria standard

[P0739R0](https://wg21.link/p0739r0) Spostare `adopt_lock_t` in primo piano nell'elenco dei parametri per `scoped_lock` per abilitare un utilizzo coerente di `scoped_lock`. Consentire al costruttore `std::variant` di partecipare alla risoluzione dell'overload in più casi per abilitare l'assegnazione delle copie.

## <a name="conformance-improvements-in-157"></a><a name="improvements_157"></a> Miglioramenti della conformità in 15,7

### <a name="c17-rewording-inheriting-constructors"></a>C++ 17: riformulazione di costruttori che ereditano

[P0136R1](https://wg21.link/p0136r1) specifica che una **`using`** dichiarazione che assegna un nome a un costruttore ora rende visibili i costruttori della classe base corrispondenti alle inizializzazioni della classe derivata, anziché dichiarare più costruttori di classi derivate. Questa ridefinizione è una modifica rispetto a C++14. In Visual Studio 2017 versione 15,7 e successive, in **`/std:c++17`** modalità, il codice valido in c++ 14 e USA costruttori di ereditarietà potrebbe non essere valido o avere una semantica diversa.

L'esempio seguente illustra il comportamento di C++14:

```cpp
struct A {
    template<typename T>
    A(T, typename T::type = 0);
    A(int);
};

struct B : A {
    using A::A;
    B(int n) = delete; // Error C2280
};

B b(42L); // Calls B<long>(long), which calls A(int)
          //  due to substitution failure in A<long>(long).
```

Nell'esempio seguente viene illustrato il **`/std:c++17`** comportamento in Visual Studio 15,7:

```cpp
struct A {
    template<typename T>
    A(T, typename T::type = 0);
    A(int);
};

struct B : A {
    using A::A;
    B(int n)
    {
        //do something
    }
};

B b(42L); // now calls B(int)
```

Per altre informazioni, vedere [Costruttori](../cpp/constructors-cpp.md#inheriting_constructors).

### <a name="c17-extended-aggregate-initialization"></a>C++ 17: inizializzazione aggregata estesa

[P0017R1](https://wg21.link/p0017r1)

Se il costruttore di una classe di base non è pubblico, ma è accessibile a una classe derivata, **`/std:c++17`** in modalità in Visual Studio 2017 versione 15,7 non è più possibile usare le parentesi graffe vuote per inizializzare un oggetto del tipo derivato.
Nell'esempio seguente viene illustrato il comportamento conforme a C++ 14:

```cpp
struct Derived;
struct Base {
    friend struct Derived;
private:
    Base() {}
};

struct Derived : Base {};
Derived d1; // OK. No aggregate init involved.
Derived d2 {}; // OK in C++14: Calls Derived::Derived()
               // which can call Base ctor.
```

In C++17, `Derived` è ora considerato un tipo di aggregazione. Di conseguenza, l'inizializzazione di `Base` tramite il costruttore predefinito privato si verifica direttamente come parte della regola di inizializzazione delle aggregazioni estesa. In precedenza, il costruttore privato `Base` veniva chiamato tramite il costruttore `Derived` e aveva esito positivo a causa della dichiarazione Friend.
Nell'esempio seguente viene illustrato il comportamento di C++ 17 in Visual Studio versione 15,7 in **`/std:c++17`** modalità:

```cpp
struct Derived;
struct Base {
    friend struct Derived;
private:
    Base() {}
};
struct Derived : Base {
    Derived() {} // add user-defined constructor
                 // to call with {} initialization
};
Derived d1; // OK. No aggregate init involved.
Derived d2 {}; // error C2248: 'Base::Base': cannot access
               // private member declared in class 'Base'
```

### <a name="c17-declaring-non-type-template-parameters-with-auto"></a>C++ 17: dichiarazione di parametri di modello non di tipo con auto

[P0127R2](https://wg21.link/p0127r2)

In **`/std:c++17`** modalità il compilatore può ora dedurre il tipo di un argomento di modello non di tipo dichiarato con **`auto`** :

```cpp
template <auto x> constexpr auto constant = x;

auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
auto v2 = constant<true>;   // v2 == true, decltype(v2) is bool
auto v3 = constant<'a'>;    // v3 == 'a', decltype(v3) is char
```

Uno degli effetti di questa nuova funzionalità è che il codice C++ 14 valido potrebbe non essere valido o avere una semantica diversa. Ad esempio, alcuni overload precedentemente non validi sono ora validi. L'esempio seguente illustra il codice C++14 che esegue la compilazione perché la chiamata a `example(p)` è associata a `example(void*);`. In Visual Studio 2017 versione 15,7, in **`/std:c++17`** modalità, il `example` modello di funzione è la migliore corrispondenza.

```cpp
template <int N> struct A;
template <typename T, T N> int example(A<N>*) = delete;

void example(void *);

void sample(A<0> *p)
{
    example(p); // OK in C++14
}
```

Nell'esempio seguente viene illustrato il codice C++ 17 in Visual Studio 15,7 in **`/std:c++17`** modalità:

```cpp
template <int N> struct A;
template <typename T, T N> int example(A<N>*);

void example(void *);

void sample(A<0> *p)
{
    example(p); // C2280: 'int example<int,0>(A<0>*)': attempting to reference a deleted function
}
```

### <a name="c17-elementary-string-conversions-partial"></a>C++ 17: conversioni di stringhe elementari (parziali)

[P0067R5](https://wg21.link/p0067r5) Funzioni di basso livello indipendenti dalle impostazioni locali per le conversioni tra numeri interi e stringhe e tra numeri a virgola mobile e stringhe.

### <a name="c20-avoiding-unnecessary-decay-partial"></a>C++ 20: evitare decadimenti inutili (parziali)

[P0777R1](https://wg21.link/p0777r1) Aggiunge una differenziazione tra il concetto di "decadimento" e quello di semplice rimozione dei qualificatori const o reference.  In alcuni contesti il nuovo tratto di tipo `remove_reference_t` sostituisce `decay_t`. Il supporto per `remove_cvref_t` è implementato in Visual Studio 2019.

### <a name="c17-parallel-algorithms"></a>C++ 17: algoritmi paralleli

[P0024R2](https://wg21.link/p0024r2) Parallelism TS è incorporato nello standard, con modifiche minori.

### <a name="c17-hypotx-y-z"></a>C++17: `hypot(x, y, z)`

[P0030R1](https://wg21.link/p0030r1) Aggiunge tre nuovi overload a `std::hypot` , per i tipi **`float`** , **`double`** e **`long double`** , ognuno dei quali ha tre parametri di input.

### <a name="c17-filesystem"></a>C++17: \<filesystem>

[P0218R1](https://wg21.link/p0218r1) Adotta File System TS nello standard con alcune modifiche al testo.

### <a name="c17-mathematical-special-functions"></a>C++ 17: funzioni speciali matematiche

[P0226R1](https://wg21.link/p0220r1) Adotta le specifiche tecniche precedenti per le funzioni speciali matematiche nell' \<cmath> intestazione standard.

### <a name="c17-deduction-guides-for-the-standard-library"></a>C++ 17: Guide alla deduzione per la libreria standard

[P0433R2](https://wg21.link/p0433r2) Esegue l'aggiornamento a STL per sfruttare i vantaggi dell'adozione di C++17 di [P0091R3](https://wg21.link/p0091r3) che aggiunge il supporto della deduzione dell'argomento del modello della classe.

### <a name="c17-repairing-elementary-string-conversions"></a>C++ 17: ripristino delle conversioni di stringhe elementari

[P0682R1](https://wg21.link/p0682r1) Spostare le nuove funzioni di conversione di stringhe elementari da P0067R5 in una nuova intestazione \<charconv> e apportare altri miglioramenti, inclusa la modifica della gestione degli errori da usare `std::errc` anziché `std::error_code` .

### <a name="c17-constexpr-for-char_traits-partial"></a>C++17: `constexpr` per `char_traits` (parziale)

[P0426R1](https://wg21.link/p0426r1) Modifiche alle `std::traits_type` funzioni membro `length` , `compare` e `find` per renderle `std::string_view` utilizzabili nelle espressioni costanti. (In Visual Studio 2017 versione 15.6, supportato solo per Clang/LLVM. Nella versione 15.7 Preview 2, il supporto è pressoché completo anche per ClXX).

### <a name="c17-default-argument-in-the-primary-class-template"></a>C++ 17: argomento predefinito nel modello di classe primario

Questa modifica del comportamento è una precondizione per la [deduzione dell'argomento del modello P0091R3 per i modelli di classe](https://wg21.link/p0091r3).

In precedenza il compilatore ignorava l'argomento predefinito nel modello di classe primario:

```cpp
template<typename T>
struct S {
    void f(int = 0);
};

template<typename T>
void S<T>::f(int = 0) {} // Re-definition necessary
```

In **`/std:c++17`** modalità in Visual Studio 2017 versione 15,7, l'argomento predefinito non viene ignorato:

```cpp
template<typename T>
struct S {
    void f(int = 0);
};

template<typename T>
void S<T>::f(int) {} // Default argument is used
```

### <a name="dependent-name-resolution"></a>Risoluzione dei nomi dipendenti

Questa modifica del comportamento è una precondizione per la [deduzione dell'argomento del modello P0091R3 per i modelli di classe](https://wg21.link/p0091r3).

Nell'esempio seguente il compilatore in Visual Studio 15.6 e versioni precedenti risolve `D::type` in `B<T>::type` nel modello di classe primario.

```cpp
template<typename T>
struct B {
    using type = T;
};

template<typename T>
struct D : B<T*> {
    using type = B<T*>::type;
};
```

Visual Studio 2017 versione 15,7, in **`/std:c++17`** modalità, richiede la **`typename`** parola chiave nell' **`using`** istruzione in D. Senza **`typename`** , il compilatore genera l'avviso C4346: `'B<T*>::type': dependent name is not a type` e l'errore C2061: `syntax error: identifier 'type'` :

```cpp
template<typename T>
struct B {
    using type = T;
};

template<typename T>
struct D : B<T*> {
    using type = typename B<T*>::type;
};
```

### <a name="c17-nodiscard-attribute---warning-level-increase"></a>C++17: Attributo `[[nodiscard]]` - incremento del livello di avviso

In Visual Studio 2017 versione 15,7 in **`/std:c++17`** modalità, il livello di avviso di C4834 viene incrementato da W3 a W1. È possibile disabilitare l'avviso con un cast a **`void`** oppure passando **`/wd:4834`** al compilatore

```cpp
[[nodiscard]] int f() { return 0; }

int main() {
    f(); // warning C4834: discarding return value
         // of function with 'nodiscard'
}
```

### <a name="variadic-template-constructor-base-class-initialization-list"></a>Elenco di inizializzazione della classe di base per un costruttore di modello variadic

Nelle edizioni precedenti di Visual Studio, un elenco di inizializzazione della classe di base per un costruttore di modello variadic con argomenti del modello mancanti è erroneamente consentito senza errori. In Visual Studio 2017 versione 15.7 viene generato un errore del compilatore.

L'esempio di codice seguente in Visual Studio 2017 versione 15.7 produce l'errore C2614:

```cpp
template<typename T>
struct B {};

template<typename T>
struct D : B<T>
{

    template<typename ...C>
    D() : B() {} // C2614: D<int>: illegal member initialization: 'B' is not a base or member
};

D<int> d;
```

Per correggere l'errore, modificare l'espressione B () in B \<T> ().

### <a name="constexpr-aggregate-initialization"></a>Inizializzazione aggregata di `constexpr`

Le versioni precedenti del compilatore C++ gestivano erroneamente l' **`constexpr`** inizializzazione aggregata. Il compilatore accettava codice non valido in cui l'aggregazione-init-list aveva troppi elementi e produceva un codice di oggetto errato. Il codice seguente è un esempio:

```cpp
#include <array>
struct X {
    unsigned short a;
    unsigned char b;
};

int main() {
    constexpr std::array<X, 2> xs = { // C2078: too many initializers
        { 1, 2 },
        { 3, 4 }
    };
    return 0;
}
```

In Visual Studio 2017 versione 15,7 Update 3 e versioni successive l'esempio precedente genera ora C2078. L'esempio seguente mostra come correggere il codice. Durante l'inizializzazione di una `std::array` con elenchi di inizializzazione tra parentesi graffe, assegnare alla matrice interna un elenco tra parentesi graffe specifico:

```cpp
#include <array>
struct X {
    unsigned short a;
    unsigned char b;
};

int main() {
    constexpr std::array<X, 2> xs = {{ // note double braces
        { 1, 2 },
        { 3, 4 }
    }}; // note double braces
    return 0;
}
```

## <a name="conformance-improvements-in-158"></a><a name="update_158"></a> Miglioramenti della conformità in 15,8

### <a name="typename-on-unqualified-identifiers"></a>`typename` per identificatori non qualificati

In [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità **`typename`** le parole chiave non corrette per gli identificatori non qualificati nelle definizioni di modello alias non vengono più accettate dal compilatore. Il codice seguente genera ora C7511:

```cpp
template <typename T>
using  X = typename T; // C7511: 'T': 'typename' keyword must be 
                       // followed by a qualified name
```

Per correggere l'errore, modificare la seconda riga in `using  X = T;`.

### <a name="__declspec-on-right-side-of-alias-template-definitions"></a>`__declspec()` sul lato destro di definizioni di modelli di alias

[`__declspec`](../cpp/declspec.md) non è più consentito sul lato destro della definizione di un modello di alias. In precedenza, il compilatore accettava ma ignorava il codice. Non viene mai generato un avviso di deprecazione quando è stato usato l'alias.

[`[[deprecated]]`](../cpp/attributes.md)In alternativa, è possibile usare l'attributo C++ standard e viene rispettato in Visual Studio 2017 versione 15,6. Il codice seguente genera ora C2760:

```cpp
template <typename T>
using X = __declspec(deprecated("msg")) T; // C2760: syntax error:
                                           // unexpected token '__declspec',
                                           // expected 'type specifier'`
```

Per correggere l'errore, modificare il codice come segue (con l'attributo posizionato prima del segno '=' della definizione di alias):

```cpp
template <typename T>
using  X [[deprecated("msg")]] = T;
```

### <a name="two-phase-name-lookup-diagnostics"></a>Diagnostica della ricerca del nome in due fasi

La ricerca del nome in due fasi richiede che i nomi non dipendenti usati nel corpo di modelli siano visibili per il modello in fase di definizione. In precedenza, il compilatore Microsoft C++ non cercava un nome non trovato fino al momento della creazione dell'istanza. È ora necessario che i nomi non dipendenti siano associati al corpo del modello.

Un modo in cui ciò può manifestarsi è con la ricerca in classi di base dipendenti. In precedenza, il compilatore consentiva l'uso di nomi definiti nelle classi base dipendenti. Ciò è dovuto al fatto che verrebbero cercati durante la fase di creazione dell'istanza quando tutti i tipi vengono risolti. Ora il codice di questo tipo viene considerato un errore. In questi casi è possibile forzare la ricerca della variabile in fase di creazione di un'istanza qualificandola con il tipo della classe di base o rendendola dipendente in altro modo, ad esempio aggiungendo un puntatore `this->`.

In [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità il codice seguente genera ora C3861:

```cpp
template <class T>
struct Base {
    int base_value = 42;
};

template <class T>
struct S : Base<T> {
    int f() {
        return base_value; // C3861: 'base_value': identifier not found
    }
};
```

Per correggere l'errore, modificare l' **`return`** istruzione in `return this->base_value;` .

> [!NOTE]
> Nelle versioni della libreria Boost. Python precedenti 1,70, è stata rilasciata una soluzione specifica per MSVC per una dichiarazione di modello in base a [`unwind_type.hpp`](https://github.com/boostorg/python/blame/develop/include/boost/python/detail/unwind_type.hpp) . In [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità a partire da Visual Studio 2017 versione 15,8 ( `_MSC_VER==1915` ), il compilatore MSVC esegue correttamente la ricerca nome dipendente dall'argomento (ADL). È ora coerente con altri compilatori, rendendo non necessaria questa soluzione alternativa. Per evitare l'errore C3861: `'unwind_type': identifier not found` , aggiornare la libreria di Boost. Python.

### <a name="forward-declarations-and-definitions-in-namespace-std"></a>Dichiarazioni e definizioni con prototipo nello spazio dei nomi `std`

Lo standard C++ non consente di aggiungere dichiarazioni o definizioni con prototipo nello spazio dei nomi (namespace) `std`. L'aggiunta di dichiarazioni o definizioni allo spazio dei nomi `std` o a uno spazio dei nomi all'interno dello spazio dei nomi `std` ora risulta in un comportamento indefinito.

In futuro, Microsoft modificherà la posizione di definizione di alcuni tipi della libreria standard. Questa modifica causerà l'interruzione del codice esistente che aggiunge dichiarazioni con prototipo allo spazio dei nomi `std`. Un nuovo avviso, C4643, consente di identificare tali problemi nel codice sorgente. L'avviso è abilitato in **`/default`** modalità ed è disattivato per impostazione predefinita. Influirà sui programmi compilati con **`/Wall`** o **`/WX`** .

Il codice seguente ora attiva l'avviso C4643:

```cpp
namespace std {
    template<typename T> class vector;  // C4643: Forward declaring 'vector'
                                        // in namespace std is not permitted
                                        // by the C++ Standard`
}
```

Per correggere l'errore, usare una **`#include`** direttiva anziché una dichiarazione in diretta:

```cpp
#include <vector>
```

### <a name="constructors-that-delegate-to-themselves"></a>Costruttori con delega a se stessi

Secondo lo standard C++, un compilatore deve generare un messaggio di diagnostica quando un costruttore di delega assegna una delega a se stesso. Il compilatore Microsoft C++ in [`/std:c++17`](../build/reference/std-specify-language-standard-version.md) [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) modalità e genera ora C7535.

Senza questo errore, il programma seguente viene compilato ma genera un ciclo infinito:

```cpp
class X {
public:
    X(int, int);
    X(int v) : X(v){} // C7535: 'X::X': delegating constructor calls itself
};
```

Per evitare il ciclo infinito, delegare un altro costruttore:

```cpp
class X {
public:

    X(int, int);
    X(int v) : X(v, 0) {}
};
```

### <a name="offsetof-with-constant-expressions"></a>`offsetof` con espressioni costanti

[`offsetof`](../c-runtime-library/reference/offsetof-macro.md) è stato tradizionalmente implementato usando una macro che richiede un oggetto [`reinterpret_cast`](../cpp/reinterpret-cast-operator.md) . Questo utilizzo non è valido in contesti che richiedono un'espressione costante, ma tradizionalmente il compilatore Microsoft C++ la consentiva. La `offsetof` macro fornita come parte della libreria standard utilizza correttamente un compilatore intrinseco ( **`__builtin_offsetof`** ), ma molte persone hanno usato la macro Trick per definirne di propri `offsetof` .

In Visual Studio 2017 versione 15,8, il compilatore vincola le aree che questi **`reinterpret_cast`** operatori possono visualizzare nella modalità predefinita, per consentire al codice di essere conforme al comportamento C++ standard. In [`/permissive-`](../build/reference/permissive-standards-conformance.md) i vincoli sono ancora più restrittivi. L'utilizzo del risultato di un `offsetof` in posizioni che richiedono espressioni costanti può causare il codice che genera l'avviso C4644 o C2975.

Il codice seguente genera C4644 in modalità **`/default`** e **`/std:c++17`** e C2975 in [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità:

```cpp
struct Data {
    int x;
};

// Common pattern of user-defined offsetof
#define MY_OFFSET(T, m) (unsigned long long)(&(((T*)nullptr)->m))

int main()

{
    switch (0) {
    case MY_OFFSET(Data, x): return 0; // C4644: usage of the
        // macro-based offsetof pattern in constant expressions
        // is non-standard; use offsetof defined in the C++
        // standard library instead
        // OR
        // C2975: invalid template argument, expected
        // compile-time constant expression

    default: return 1;
    }
}
```

Per correggere l'errore, utilizzare `offsetof` come definito tramite \<cstddef> :

```cpp
#include <cstddef>

struct Data {
    int x;
};

int main()
{
    switch (0) {
    case offsetof(Data, x): return 0;
    default: return 1;
    }
}
```

### <a name="cv-qualifiers-on-base-classes-subject-to-pack-expansion"></a>qualificatori cv per le classi di base soggette all'espansione di pacchetto

Le versioni precedenti del compilatore Microsoft C++ non rilevavano che una classe di base aveva qualificatori cv se era anche soggetta all'espansione di pacchetto.

In Visual Studio 2017 versione 15,8, in [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità il codice seguente genera C3770:

```cpp
template<typename... T>
class X : public T... { };

class S { };

int main()
{
    X<const S> x; // C3770: 'const S': is not a valid base class
}
```

### <a name="template-keyword-and-nested-name-specifiers"></a>Parola chiave `template` e identificatori di nome annidati

In [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità il compilatore ora richiede che la **`template`** parola chiave preceda il nome di un modello quando si trova dopo un identificatore di nome-annidato dipendente.

Il codice seguente in [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità genera ora C7510:

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        Base<T>::example<int>(); // C7510: 'example': use of dependent
            // template name must be prefixed with 'template'
            // note: see reference to class template instantiation
            // 'X<T>' being compiled
    }
};
```

Per correggere l'errore, aggiungere la **`template`** parola chiave all' `Base<T>::example<int>();` istruzione, come illustrato nell'esempio seguente:

```cpp
template<typename T> struct Base
{
    template<class U> void example() {}
};

template<typename T>
struct X : Base<T>
{
    void example()
    {
        // Add template keyword here:
        Base<T>::template example<int>();
    }
};
```

## <a name="conformance-improvements-in-159"></a><a name="improvements_159"></a> Miglioramenti della conformità in 15,9

### <a name="left-to-right-evaluation-order-for-operators-----and-"></a>Ordine di valutazione da sinistra a destra per gli operatori `->*`, `[]`, `>>` e `<<`

A partire da C++17, gli operandi degli operatori `->*`, `[]`, `>>` e `<<` devono essere valutati da sinistra a destra. Esistono due casi in cui il compilatore non è in grado di garantire questo ordine:

- quando una delle espressioni dell'operando è un oggetto passato per valore o contiene un oggetto passato per valore, oppure

- Quando viene compilato usando **`/clr`** , e uno degli operandi è un campo di un oggetto o di un elemento di matrice.

Il compilatore genera l'avviso [C4866](../error-messages/compiler-warnings/c4866.md) quando non è possibile garantire la valutazione da sinistra a destra. Il compilatore genera questo avviso solo se **`/std:c++17`** viene specificato o versione successiva, in quanto il requisito di ordine da sinistra a destra di questi operatori è stato introdotto in c++ 17.

Per risolvere il problema, considerare prima di tutto se è necessaria la valutazione da sinistra a destra degli operandi. Ad esempio, potrebbe essere necessario quando la valutazione degli operandi potrebbe produrre effetti collaterali dipendenti dall'ordine. In molti casi, l'ordine in cui gli operandi vengono valutati non ha alcun effetto osservabile. Se l'ordine di valutazione deve essere da sinistra a destra, stabilire se è invece possibile passare gli operandi per riferimento const. Questa modifica consente di eliminare l'avviso nell'esempio di codice seguente:

```cpp
// C4866.cpp
// compile with: /w14866 /std:c++17

class HasCopyConstructor
{
public:
    int x;

    HasCopyConstructor(int x) : x(x) {}
    HasCopyConstructor(const HasCopyConstructor& h) : x(h.x) { }
};

int operator>>(HasCopyConstructor a, HasCopyConstructor b) { return a.x >> b.x; }

// This version of operator>> does not trigger the warning:
// int operator>>(const HasCopyConstructor& a, const HasCopyConstructor& b) { return a.x >> b.x; }

int main()
{
    HasCopyConstructor a{ 1 };
    HasCopyConstructor b{ 2 };

    a>>b;        // C4866 for call to operator>>
};
```

### <a name="identifiers-in-member-alias-templates"></a>Identificatori nei modelli di membro alias

Un identificatore usato nella definizione del modello di membro alias deve essere dichiarato prima di essere usato.

Nelle versioni precedenti del compilatore era consentito il codice seguente. In Visual Studio 2017 versione 15,9, in [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità, il compilatore genera C3861:

```cpp
template <typename... Ts>
struct A
{
  public:
    template <typename U>
    using from_template_t = decltype(from_template(A<U>{})); // C3861:
        // 'from_template': identifier not found

  private:
    template <template <typename...> typename Type, typename... Args>
    static constexpr A<Args...> from_template(A<Type<Args...>>);
};

A<>::from_template_t<A<int>> a;
```

Per correggere l'errore, dichiarare `from_template` prima di `from_template_t`.

### <a name="modules-changes"></a>Modifiche dei moduli

In Visual Studio 2017 versione 15.9 il compilatore genera l'avviso C5050 ogni volta che le opzioni della riga di comando non sono coerenti sui lati creazione e utilizzo del modulo. Nell'esempio seguente sussistono due problemi:

- Sul lato consumo (Main. cpp), l'opzione **`/EHsc`** non è specificata.

- La versione di C++ si trova **`/std:c++17`** sul lato di creazione e **`/std:c++14`** sul lato consumo.

```cmd
cl /EHsc /std:c++17 m.ixx /experimental:module
cl /experimental:module /module:reference m.ifc main.cpp /std:c++14
```

Il compilatore genera C5050 per entrambi i casi:

```Output
warning C5050: Possible incompatible environment while
importing module 'm': mismatched C++ versions.
Current "201402" module version "201703"`.
```

Il compilatore genera inoltre C7536 ogni volta che il *`.ifc`* file è stato manomesso. L'intestazione dell'interfaccia del modulo contiene un hash SHA2 sotto di essa. Durante l'importazione, *`.ifc`* viene eseguito l'hashing del file, quindi viene eseguito il controllo in base all'hash specificato nell'intestazione. Se non corrispondono, viene generato l'errore C7536:

```Output
error C7536: ifc failed integrity checks.
Expected SHA2: '66d5c8154df0c71d4cab7665bab4a125c7ce5cb9a401a4d8b461b706ddd771c6'
```

### <a name="partial-ordering-involving-aliases-and-non-deduced-contexts"></a>Ordinamento parziale per alias e contesti non dedotti

È presente una divergenza di implementazione delle regole di ordinamento parziale che interessa gli alias nei contesti non dedotti. Nell'esempio seguente GCC e il compilatore Microsoft C++ (in [`/permissive-`](../build/reference/permissive-standards-conformance.md) modalità) generano un errore, mentre Clang accetta il codice.

```cpp
#include <utility>
using size_t = std::size_t;

template <typename T>
struct A {};
template <size_t, size_t>
struct AlignedBuffer {};
template <size_t len>
using AlignedStorage = AlignedBuffer<len, 4>;

template <class T, class Alloc>
int f(Alloc &alloc, const AlignedStorage<T::size> &buffer)
{
    return 1;
}

template <class T, class Alloc>
int f(A<Alloc> &alloc, const AlignedStorage<T::size> &buffer)
{
    return 2;
}

struct Alloc
{
    static constexpr size_t size = 10;
};

int main()
{
    A<void> a;
    AlignedStorage<Alloc::size> buf;
    if (f<Alloc>(a, buf) != 2)
    {
        return 1;
    }

    return 0;
}
```

L'esempio precedente genera l'errore C2668:

```Output
partial_alias.cpp(32): error C2668: 'f': ambiguous call to overloaded function
partial_alias.cpp(18): note: could be 'int f<Alloc,void>(A<void> &,const AlignedBuffer<10,4> &)'
partial_alias.cpp(12): note: or       'int f<Alloc,A<void>>(Alloc &,const AlignedBuffer<10,4> &)'
        with
        [
            Alloc=A<void>
        ]
partial_alias.cpp(32): note: while trying to match the argument list '(A<void>, AlignedBuffer<10,4>)'
```

La divergenza di implementazione è dovuta a una regressione nella formulazione dello standard C++. Per risolvere il problema principale 2235, è stata rimossa parte del testo che avrebbe consentito di ordinare questi overload. Lo standard C++ corrente non offre un meccanismo per un ordinamento parziale di queste funzioni, che quindi vengono considerate ambigue.

Come soluzione alternativa, è consigliabile non affidarsi all'ordinamento parziale per risolvere questo problema. Usare invece SFINAE per rimuovere overload specifici. Nell'esempio seguente viene usata una classe helper `IsA` per rimuovere il primo overload quando `Alloc` è una specializzazione di `A`:

```cpp
#include <utility>
using size_t = std::size_t;

template <typename T>
struct A {};
template <size_t, size_t>
struct AlignedBuffer {};
template <size_t len>
using AlignedStorage = AlignedBuffer<len, 4>;

template <typename T> struct IsA : std::false_type {};
template <typename T> struct IsA<A<T>> : std::true_type {};

template <class T, class Alloc, typename = std::enable_if_t<!IsA<Alloc>::value>>
int f(Alloc &alloc, const AlignedStorage<T::size> &buffer)
{
    return 1;
}

template <class T, class Alloc>
int f(A<Alloc> &alloc, const AlignedStorage<T::size> &buffer)
{
    return 2;
}

struct Alloc
{
    static constexpr size_t size = 10;
};

int main()
{
    A<void> a;
    AlignedStorage<Alloc::size> buf;
    if (f<Alloc>(a, buf) != 2)
    {
        return 1;
    }

    return 0;
}
```

### <a name="illegal-expressions-and-non-literal-types-in-templated-function-definitions"></a>Espressioni non valide o tipi non letterali nelle definizioni di funzioni basate su modelli

Le espressioni non valide e i tipi non letterali ora vengono diagnosticati correttamente nelle definizioni di funzioni basate su modelli specializzate in modo esplicito. In precedenza, tali errori non venivano generati per la definizione della funzione. Tuttavia l'espressione non valida o il tipo non letterale veniva ugualmente diagnosticato se valutato come parte di un'espressione costante.

Nelle versioni precedenti di Visual Studio il codice seguente viene compilato senza avviso:

```cpp
void g();

template<typename T>
struct S
{
    constexpr void f();
};

template<>
constexpr void S<int>::f()
{
    g(); // C3615 in 15.9
}
```

In Visual Studio 2017 versione 15.9 il codice seguente genera questo errore:

```Output
error C3615: constexpr function 'S<int>::f' cannot result in a constant expression.
note: failure was caused by call of undefined function or one not declared 'constexpr'
note: see usage of 'g'.
```

Per evitare l'errore, rimuovere il **`constexpr`** qualificatore dalla creazione di un'istanza esplicita della funzione `f()` .

## <a name="see-also"></a>Vedi anche

[Tabella di conformità al linguaggio C++ di Microsoft](visual-cpp-language-conformance.md)
