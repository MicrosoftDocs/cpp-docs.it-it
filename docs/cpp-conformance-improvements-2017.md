---
title: "Miglioramenti della conformità del compilatore C++ | Microsoft Docs"
ms.custom: 
ms.date: 11/16/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- vs-ide-general
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 8801dbdb-ca0b-491f-9e33-01618bff5ae9
author: BrianPeek
ms.author: brpeek
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
ms.translationtype: Human Translation
ms.sourcegitcommit: ee7e4f3e09f5b1512182d17fda9033a45ad4aa5b
ms.openlocfilehash: c4bfe76d3b57962fe10df1d55f6ec5b58f70a38a
ms.contentlocale: it-it
ms.lasthandoff: 05/09/2017

---
   
# <a name="c-conformance-improvements-in-includevsdev15mdmiscincludesvsdev15mdmd"></a>Miglioramenti della conformità di C++ in [!INCLUDE[vs_dev15_md](misc/includes/vs_dev15_md.md)]
Per i miglioramenti disponibili nella versione Update 15.3, vedere [Correzioni di bug in Visual Studio Update versione 15.3](#update_153).
## <a name="new-language-features"></a>Nuove funzionalità del linguaggio  
Con il supporto per la parola chiave constexpr generalizzata e NSDMI per le aggregazioni, il compilatore è ora completo per le funzionalità aggiunte nello Standard C++14. Si noti che il compilatore manca ancora di alcune funzionalità relative agli standard C++11 e C++98. Vedere [Visual C++ Language Conformance](visual-cpp-language-conformance.md) (Conformità al linguaggio Visual C++) per una tabella che mostra lo stato corrente del compilatore.

### <a name="c11"></a>C++11:
**Supporto per l'espressione SFINAE in altre librerie** Il compilatore Visual C++ continua a migliorare il supporto per l'espressione SFINAE, che è necessario per la deduzione e la sostituzione dell'argomento del modello dove le espressioni decltype e constexpr possono apparire come parametri del modello. Per altre informazioni, vedere il blog relativo ai [miglioramenti dell'espressione SFINAE in Visual Studio 2017 RC](https://blogs.msdn.microsoft.com/vcblog/2016/06/07/expression-sfinae-improvements-in-vs-2015-update-3). 


### <a name="c-14"></a>C++ 14:
**NSDMI per gli aggregati** Un aggregato è una matrice o una classe che non ha costruttori specificati dall'utente, membri dati non statici privati o protetti, classi di base né funzioni virtuali. A partire da C++14 gli aggregati possono contenere inizializzatori di membro. Per altre informazioni, vedere l'argomento relativo a [inizializzatori di membro e aggregati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3605.html).

**Constexpr estesa** Le espressioni dichiarate come constexpr ora possono contenere determinati tipi di dichiarazioni, istruzioni if e switch, istruzioni loop e modifica di oggetti la cui durata è iniziata all'interno della valutazione dell'espressione constexpr. Inoltre, non è più un requisito che una funzione membro non statica constexpr sia const in modo implicito. Per altre informazioni, vedere l'argomento relativo alla [riduzione dei vincoli per le funzioni constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html). 

### <a name="c17"></a>C++17:
**Forma concisa di static_assert** (disponibile con /std:c++latest) In C++17 il parametro del messaggio per static_assert è facoltativo. Per altre informazioni, vedere il documento relativo all'[estensione di static_assert, v2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf). 

**Attributo [[fallthrough]]** (disponibile con /std:c++latest) L'attributo [[fallthrough]] può essere usato nel contesto di istruzioni switch per suggerire al compilatore che il comportamento del fallthrough è previsto. Ciò impedisce al compilatore di emettere avvisi in tali casi. Per altre informazioni, vedere il documento sulla [definizione per l'attributo [[fallthrough]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r0.pdf). 

**Cicli for generalizzati basati su intervallo** (non sono necessarie opzioni del compilatore) I cicli for basati su intervallo non richiedono più che begin() ed end() restituiscano oggetti dello stesso tipo. Ciò consente a end() di restituire un oggetto sentinel come viene usato dagli intervalli in base alla definizione nella proposta Ranges-V3. Per altre informazioni, vedere il documento relativo alla [generalizzazione del ciclo for basato su intervallo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html) e la [libreria range-v3 su GitHub](https://github.com/ericniebler/range-v3). 


Per l'elenco completo dei miglioramenti apportati alla conformità fino a Visual Studio 2015 Update 3, vedere [Visual C++: novità dalla versione 2003 alla 2015](https://msdn.microsoft.com/en-us/library/mt723604.aspx).

## <a name="bug-fixes"></a>Correzioni di bug
### <a name="copy-list-initialization"></a>Copy-list-initialization
Visual Studio 2017 genera correttamente errori del compilatore relativi alla creazione di oggetti con gli elenchi di inizializzatori che non venivano rilevati in Visual Studio 2015 e potevano causare un arresto anomalo o un comportamento non definito in fase di esecuzione.  In base a N4594 13.3.1.7p1, in copy-list-initialization, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload, ma deve generare un errore se viene scelto tale overload. 

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
Visual Studio 2017 genera correttamente un errore quando l'operando sinistro di un'operazione con valutazione condizionale non è valido in un contesto constexpr. Il codice seguente viene compilato in Visual Studio 2015 ma non in Visual Studio 2017:

```cpp  
template<int N>
struct array 
{
       int size() const { return N; }
};

constexpr bool f(const array<1> &arr)
{
       return arr.size() == 10 || arr.size() == 11; // error starting in Visual Studio 2017
}
```
Per correggere l'errore, dichiarare la funzione array:: size() come constexpr o rimuovere il qualificatore constexpr da f. 

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
                        // as an argument to a variadic function
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
Per correggere l'errore, dichiarare l'operatore int() come const. 

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
Per supportare l'espressione SFINAE, il compilatore ora analizza argomenti decltype quando i modelli vengono dichiarati senza creare un'istanza. Di conseguenza, se viene rilevata una specializzazione non dipendente nell'argomento decltype, non verrà rinviata all'ora di creazione di un'istanza ma verrà elaborata immediatamente e sarà possibile diagnosticare eventuali errori risultanti in quel momento.  

Nell'esempio seguente viene illustrato questo tipo di errore del compilatore che viene generato al momento della dichiarazione:

```cpp  
#include <utility>
template <class T, class ReturnT, class... ArgsT> class IsCallable
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
In base allo standard C++, una classe dichiarata all'interno di uno spazio dei nomi anonimo include un collegamento interno e pertanto non può essere esportata. In Visual Studio 2015 e versioni precedenti questa regola non viene applicata. In Visual Studio 2017 la regola viene applicata parzialmente. L'esempio seguente genera questo errore in Visual Studio 2017: "errore C2201: 'const `anonymous namespace'::S1::`vftable': per l'esportazione e l'importazione è necessario utilizzare il collegamento esterno."

```cpp
struct __declspec(dllexport) S1 { virtual void f() {} }; //C2201
```

### <a name="default-initializers-for-value-class-members-ccli"></a>Inizializzatori predefiniti per i membri della classe di valori (C++/CLI)
In Visual Studio 2015 e versioni precedenti il compilatore consentiva, ma ignorava, un inizializzatore di membro predefinito per un membro di una classe di valori.  L'inizializzazione predefinita di una classe di valori inizializza sempre a zero i membri e un costruttore predefinito non è consentito.  In Visual Studio 2017 gli inizializzatori di membri predefiniti generano un errore del compilatore, come illustra l'esempio seguente:

```cpp  
value struct V
{
       int i = 0; // error C3446: 'V::i': a default member initializer  
                  // is not allowed for a member of a value class
};
```

### <a name="default-indexers-ccli"></a>Indicizzatori predefiniti (C++/CLI)
In Visual Studio 2015 e versioni precedenti il compilatore in alcuni casi identificava erroneamente una proprietà predefinita come indicizzatore predefinito. È stato possibile risolvere il problema usando l'identificatore "default" per accedere alla proprietà. Questa soluzione è diventata problematica dopo che il termine "default" è stato introdotto come parola chiave in C++11. Pertanto, in Visual Studio 2017 sono stati corretti i bug che richiedevano la soluzione e il compilatore genera ora un errore quando si usa "default" per accedere alla proprietà predefinita per una classe.

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

## <a name="update_153"></a> Visual Studio 2017 Update versione 15.3
### <a name="calls-to-deleted-member-templates"></a>Chiamate a modelli di membro eliminati
Nelle versioni precedenti di Visual Studio, in alcuni casi il compilatore non riusciva a generare un errore in caso di chiamate non valide a un modello di membro eliminato che potevano causare arresti anomali in fase di runtime. Il codice seguente genera ora l'errore C2280, "'int S<int>::f<int>(void)': tentativo di fare riferimento a una funzione eliminata":
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
Visual Studio 2017 Update versione 15.3 migliora i controlli sulle precondizioni per i tratti di tipo in modo da attenersi più rigorosamente agli standard. Un controllo di questo tipo verifica ad esempio che il tratto di tipo sia assegnabile. Nella versione Update 15.3, il codice seguente genera l'errore C2139:

```cpp
struct S; 
enum E; 
 
static_assert(!__is_assignable(S, S), "fail"); // this is allowed in VS2017 RTM, but should fail 
static_assert(__is_convertible_to(E, E), "fail"); // this is allowed in VS2017 RTM, but should fail
```

### <a name="new-compiler-warning-and-runtime-checks-on-native-to-managed-marshaling"></a>Nuovi controlli di avviso e di runtime del compilatore sul marshalling da nativo a gestito
Le chiamate da funzioni gestite a funzioni native richiedono il marshalling. CLR esegue il marshalling ma non comprende la semantica di C++. Se si passa un oggetto nativo per valore, CLR chiama il costruttore di copia dell'oggetto o usa BitBlt, da cui può derivare un comportamento non definito in fase di runtime. 
 
Il compilatore genera ora un avviso se riesce a sapere in fase di runtime che tra il limite nativo e quello gestito viene passato per valore un oggetto con costruttore di copia eliminato. Se il compilatore non viene a conoscenza di questo evento in fase di runtime, inserisce un controllo di runtime in modo che il programma chiami immediatamente std::terminate nel momento in cui si verifica un marshalling non valido. Nella versione Update 15.3, il codice seguente genera l'errore C4606 " 'A': per il passaggio dell'argomento per valore tra limite nativo e gestito è necessario un costruttore di copia valido. In caso contrario, il comportamento del runtime risulta non definito".
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
    f(A()); // This call from managed to native requires marshalling. The CLR doesn't understand C++ and uses BitBlt, which will result in a double-free later. 
}
```
Per correggere l'errore, rimuovere la direttiva `#pragma managed` per contrassegnare il chiamante come nativo ed evitare il marshalling. 

### <a name="experimental-api-warning-for-winrt"></a>Avviso di API sperimentale per WinRT
Le API WinRT rilasciate a scopo di sperimentazione e feedback vengono contrassegnate con `Windows.Foundation.Metadata.ExperimentalAttribute`. Nella versione Update 15.3, il compilatore genera l'avviso C4698 quando rileva questo attributo. Alcune API presenti in versioni precedenti di Windows SDK sono già state contrassegnate con questo attributo e le chiamate a queste API attiveranno quindi l'avviso del compilatore. Nelle nuove versioni di Windows SDK l'attributo verrà rimosso da tutti i tipi distribuiti, ma se si usa un SDK precedente sarà necessario eliminare questi avvisi per tutte le chiamate effettuate ai tipi distribuiti.
Il codice seguente genera l'avviso C4698: "'Windows::Storage::IApplicationDataStatics2::GetForUserAsync' viene usato solo a scopo di valutazione e potrebbe essere modificato o rimosso in aggiornamenti futuri":
```cpp
Windows::Storage::IApplicationDataStatics2::GetForUserAsync()
```

Per disabilitare l'avviso, aggiungere #pragma:

```cpp
#pragma warning(push) 
#pragma warning(disable:4698) 
 
Windows::Storage::IApplicationDataStatics2::GetForUserAsync() 
 
#pragma warning(pop)
```
### <a name="out-of-line-definition-of-a-template-member-function"></a>Definizione out-of-line di una funzione membro di modello 
La versione Update 15.3 genera un errore quando rileva una definizione out-of-line di una funzione membro di modello non dichiarata nella classe. Il codice seguente genera ora l'errore C2039: 'f': non è un membro di 'S':

```cpp
struct S {}; 
 
template <typename T> 
void S::f(T t) {}
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
In C++, 'this' è un prvalue di tipo puntatore a X. Non è possibile accettare l'indirizzo di 'this' o associarlo a un riferimento lvalue. Nelle versioni precedenti di Visual Studio, il compilatore consentiva di ignorare questa restrizione eseguendo un cast. Nella versione Update 15.3, il compilatore genera l'errore C2664.

### <a name="conversion-to-an-inaccessible-base-class"></a>Conversione a una classe di base inaccessibile
La versione Update 15.3 genera un errore quando si tenta di convertire un tipo in una classe di base inaccessibile. Il compilatore genera ora  
"errore C2243: 'type cast': conversione da 'D *' a 'B *' esistente ma inaccessibile". Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. Il compilatore genera ora un errore C2243 quando rileva un codice simile al seguente:

```cpp
#include <memory> 
 
class B { }; 
class D : B { }; // should be public B { }; 
 
void f() 
{ 
   std::unique_ptr<B>(new D()); 
}
```
### <a name="default-arguments-are-not-allowed-on-out-of-line-definitions-of-member-functions"></a>Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro
Gli argomenti predefiniti non sono consentiti nelle definizioni out-of-line di funzioni membro presenti in classi modello.  Il compilatore genererà un avviso in /permissive e un errore hardware in /permissive-. Nelle versioni precedenti di Visual Studio, il codice non valido seguente avrebbe potuto causare un arresto anomale in fase di runtime. La versione Update 15.3 genera l'avviso C5034: 'A<T>::f': una definizione out-of-line di un membro di una classe non può contenere argomenti predefiniti:
```cpp
 
template <typename T> 
struct A { 
    T f(T t, bool b = false); 
}; 
 
template <typename T> 
T A<T>::f(T t, bool b = false) 
{ 
... 
}
```
Per correggere l'errore, rimuovere l'argomento predefinito "= false". 

### <a name="use-of-offsetof-with-compound-member-designator"></a>Uso di offsetof con indicatore di membro composto
Nella versione Update 15.3, l'uso di offsetof(T, m) in cui m è un "indicatore di membro composto" risulterà in un avviso se si esegue la compilazione con l'opzione /Wall. Il codice seguente non è valido e può causare un arresto anomalo in fase di runtime. La versione Update 15.3 produce l'avviso C4841: "non-standard extension used: compound member designator in offseto" (utilizzata estensione non standard: indicatore membro composto in offseto):

```cpp
  
struct A { 
int arr[10]; 
}; 
 
// warning C4841: non-standard extension used: compound member designator in offsetof 
constexpr auto off = offsetof(A, arr[2]);
```
Per correggere il codice, disabilitare l'avviso con un pragma o modificare il codice in modo da non usare offsetof: 

```cpp
#pragma warning(push) 
#pragma warning(disable: 4841) 
constexpr auto off = offsetof(A, arr[2]); 
#pragma warning(pop) 
```

### <a name="using-offsetof-with-static-data-member-or-member-function"></a>Uso di offsetof con una funzione membro o un membro dati statici
Nella versione Update 15.3, l'uso di offsetof (T, m) in cui m fa riferimento a un membro dati statici o a una funzione membro determinerà un errore. Il codice seguente produce l'errore C4597: "undefined behavior: offsetof applied to member function 'foo'" (comportamento indefinito: offsetof applicato alla funzione membro 'foo') e l'errore C4597: "undefined behavior: offsetof applied to static data member 'bar'" (comportamento indefinito: offsetof applicato al membro dati statici 'bar'):
```cpp
 
#include <cstddef> 
 
struct A { 
int foo() { return 10; } 
static constexpr int bar = 0; 
}; 
 
constexpr auto off = offsetof(A, foo); 
Constexpr auto off2 = offsetof(A, bar);
```
 
Questo codice non è valido e può causare un arresto anomalo in fase di runtime. Per correggere l'errore, modificare il codice in modo da non richiamare più un comportamento indefinito. Si tratta di codice non portabile non consentito dallo standard C++.

### <a name="new-warning-on-declspec-attributes"></a>Nuovo avviso per attributi declspec
Nella versione Update 15.3, il compilatore non ignora più gli attributi se prima della specifica di collegamento "C" esterna viene applicato l'attributo __declspec(...). In precedenza, il compilatore avrebbe ignorato l'attributo, con possibili implicazioni in fase di runtime. Se è stata impostata l'opzione `/Wall /WX`, il codice seguente produce l'avviso C4768: "__declspec attributes before linkage specification are ignored" (gli attributi __declspec prima della specifica di collegamento sono stati ignorati):

```cpp
 
__declspec(noinline) extern "C" HRESULT __stdcall
```

Per risolvere il problema, inserire prima la specifica "C" esterna:

```cpp
extern "C" __declspec(noinline) HRESULT __stdcall
```

### <a name="decltype-and-calls-to-deleted-destructors"></a>decltype e chiamate a distruttori eliminati
Nelle versioni precedenti di Visual Studio, il compilatore non era in grado di rilevare se si verificava una chiamata a un distruttore eliminato nel contesto dell'espressione associata a 'decltype'. Nella versione Update 15.3, il codice seguente genera "errore C2280: 'A<T>::~A(void)': tentativo di fare riferimento a una funzione eliminata":

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
### <a name="unitialized-const-variables"></a>Variabili const non inizializzate
Visual Studio 2017 RTW conteneva una regressione in cui il compilatore C++ non generava un messaggio di diagnostica se non veniva inizializzata una variabile 'const'. In Visual Studio 2017 Update 1 questa regressione è stata risolta. Il codice seguente produce ora "avviso C4132: 'Value': oggetto const da inizializzare":

```cpp
const int Value;
```
Per correggere l'errore, assegnare un valore a `Value`.

### <a name="empty-declarations"></a>Dichiarazioni vuote
Visual Studio 2017 Update versione 15.3 genera ora un avviso in presenza di dichiarazioni vuote per tutti i tipi, non solo per i tipi predefiniti. Il codice seguente genera ora un avviso C4091 di livello 2 per tutte le quattro dichiarazioni:

```cpp
struct A {};
template <typename> struct B {};
enum C { c1, c2, c3 };
 
int;    // warning C4091 : '' : ignored on left of 'int' when no variable is declared
A;      // warning C4091 : '' : ignored on left of 'main::A' when no variable is declared
B<int>; // warning C4091 : '' : ignored on left of 'B<int>' when no variable is declared
C;      // warning C4091 : '' : ignored on left of 'C' when no variable is declared
```

Per rimuovere gli avvisi, è sufficiente impostare le dichiarazioni vuote come commento o rimuoverle.  Se l'oggetto senza nome deve avere un effetto collaterale (ad esempio, RAII), è opportuno assegnare un nome all'oggetto.
 
L'avviso viene escluso in /Wv:18 ed è attivo per impostazione predefinita nel livello di avviso W2.


## <a name="see-also"></a>Vedere anche  
[Conformità al linguaggio di Visual C++](visual-cpp-language-conformance.md)  

