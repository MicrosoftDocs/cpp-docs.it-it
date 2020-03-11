---
title: Funzioni (C++)
ms.date: 11/19/2018
helpviewer_keywords:
- defaults, arguments
- function definitions
- function definitions, about function definitions
- default arguments
- declarators, functions
ms.assetid: 33ba01d5-75b5-48d2-8eab-5483ac7d2274
ms.openlocfilehash: da30d647947e98146cd89f255c2e05991c1be562
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78884158"
---
# <a name="functions-c"></a>Funzioni (C++)

Una funzione è un blocco di codice che esegue un'operazione. Una funzione può facoltativamente definire parametri di input che permettono ai chiamanti di passare argomenti nella funzione e può facoltativamente restituire un valore come output. Le funzioni sono utili per incapsulare operazioni comuni in un singolo blocco riutilizzabile, idealmente con un nome che descrive in modo chiaro ciò che la funzione permette di ottenere. La funzione seguente accetta due Integer da un chiamante e ne restituisce la somma; *a* e *b* sono *parametri* di tipo **int**.

```cpp
int sum(int a, int b)
{
    return a + b;
}
```

La funzione può essere richiamata o *chiamata*da un numero qualsiasi di posizioni nel programma. I valori passati alla funzione sono gli *argomenti*, i cui tipi devono essere compatibili con i tipi di parametro nella definizione della funzione.

```cpp
int main()
{
    int i = sum(10, 32);
    int j = sum(i, 66);
    cout << "The value of j is" << j << endl; // 108
}
```

Non sono previsti limiti pratici per la lunghezza della funzione, ma una progettazione ottimale ha come obiettivo funzioni che eseguono una singola attività ben definita. È consigliabile suddividere gli algoritmi complessi in funzioni più semplici e di facile comprensione, se possibile.

Le funzioni definite a livello di ambito della classe sono chiamate funzioni membro. In C++, a differenza degli altri linguaggi, una funzione può essere definita anche a livello di ambito dello spazio dei nomi, incluso lo spazio dei nomi globale implicito. Tali funzioni sono denominate *funzioni gratuite* o *funzioni non membro*; sono ampiamente usati nella libreria standard.

Le funzioni possono essere *sovraccaricate*, ovvero versioni diverse di una funzione possono condividere lo stesso nome se si differenziano per il numero e/o il tipo di parametri formali. Per ulteriori informazioni, vedere [Overload della funzione](../cpp/function-overloading.md).

## <a name="parts-of-a-function-declaration"></a>Parti della dichiarazione di una funzione

Una *dichiarazione* di funzione minima è costituita dal tipo restituito, dal nome della funzione e dall'elenco di parametri (che potrebbe essere vuoto), insieme a parole chiave facoltative che forniscono istruzioni aggiuntive al compilatore. Nell'esempio seguente viene riportata una dichiarazione di funzione:

```cpp
int sum(int a, int b);
```

Una definizione di funzione è costituita da una dichiarazione, più il *corpo*, che corrisponde a tutto il codice tra parentesi graffe:

```cpp
int sum(int a, int b)
{
    return a + b;
}
```

Una dichiarazione di funzione seguita da punto e virgola può apparire in più posizioni in un programma. Deve essere presente prima di qualsiasi chiamata a tale funzione in ogni unità di conversione. La definizione della funzione deve comparire solo una volta nel programma, in base alla regola ODR (One Definition Rule).

Le parti obbligatorie della dichiarazione di una funzione sono le seguenti:

1. Tipo restituito, che specifica il tipo del valore restituito dalla funzione o **void** se non viene restituito alcun valore. In C++ 11, **auto** è un tipo restituito valido che indica al compilatore di dedurre il tipo dall'istruzione return. In C++14 è consentito anche decltype(auto). Per altre informazioni, vedere Deduzione dei tipi nei tipi restituiti più avanti.

1. Il nome della funzione, che deve iniziare con una lettera o un carattere di sottolineatura e non può contenere spazi. In generale, i caratteri di sottolineatura iniziali nei nomi delle funzioni della libreria standard indicano funzioni membro private o funzioni non membro non destinate all'uso nel codice.

1. L'elenco di parametri, un set di zero o più parametri racchiuso tra parentesi graffe e delimitato da virgole che specificano il tipo e, facoltativamente, un nome locale in base ai quali è possibile accedere ai valori entro il corpo della funzione.

Le parti facoltative della dichiarazione di una funzione sono le seguenti:

1. `constexpr`, che indica che il valore restituito della funzione è un valore costante e può essere calcolato in fase di compilazione.

    ```cpp
    constexpr float exp(float x, int n)
    {
        return n == 0 ? 1 :
            n % 2 == 0 ? exp(x * x, n / 2) :
            exp(x * x, (n - 1) / 2) * x;
    };
    ```

1. Specifica del collegamento, **extern** o **static**.

    ```cpp
    //Declare printf with C linkage.
    extern "C" int printf( const char *fmt, ... );

    ```

   Per altre informazioni, vedere [unità di conversione e collegamento](../cpp/program-and-linkage-cpp.md).

1. **inline**, che indica al compilatore di sostituire ogni chiamata alla funzione con il codice della funzione stessa. L'incorporamento può migliorare le prestazioni negli scenari in cui una funzione viene eseguita rapidamente e viene richiamata ripetutamente in una sezione di codice essenziale per le prestazioni.

    ```cpp
    inline double Account::GetBalance()
    {
        return balance;
    }
    ```

   Per ulteriori informazioni, vedere [funzioni inline](../cpp/inline-functions-cpp.md).

1. Espressione `noexcept`, che specifica se la funzione può generare o meno un'eccezione. Nell'esempio seguente la funzione non genera un'eccezione se l'espressione `is_pod` restituisce **true**.

    ```cpp
    #include <type_traits>

    template <typename T>
    T copy_object(T& obj) noexcept(std::is_pod<T>) {...}
    ```

   Per ulteriori informazioni, vedere [noexcept](../cpp/noexcept-cpp.md).

1. (Solo funzioni membro) Qualificatori CV, che specificano se la funzione è **const** o **volatile**.

1. (Solo funzioni membro) **Virtual**, `override`o `final`. **Virtual** specifica che una funzione può essere sottoposta a override in una classe derivata. `override` significa che una funzione in una classe derivata esegue l'override di una funzione virtuale. `final` significa che non è possibile eseguire l'override di una funzione in altre classi derivate. Per ulteriori informazioni, vedere [funzioni virtuali](../cpp/virtual-functions.md).

1. (solo funzioni membro) la funzione **statica** applicata a una funzione membro significa che la funzione non è associata ad alcuna istanza di oggetto della classe.

1. (Solo funzioni membro non statiche) Il qualificatore di riferimento, che specifica al compilatore l'overload di una funzione da scegliere quando il parametro dell'oggetto implicito (\*) è un riferimento rvalue rispetto a un riferimento lvalue. Per ulteriori informazioni, vedere [Overload della funzione](function-overloading.md#ref-qualifiers).

Nella figura seguente vengono illustrate le parti di una definizione di funzione. L'area ombreggiata costituisce il corpo della funzione.

![Parti di una definizione di funzione](../cpp/media/vc38ru1.gif "Parti di una definizione di funzione") <br/>
Parti di una definizione di funzione

## <a name="function-definitions"></a>Definizioni di funzione

Una *definizione di funzione* è costituita dalla dichiarazione e dal corpo della funzione, racchiusi tra parentesi graffe, che contengono dichiarazioni di variabili, istruzioni ed espressioni. Nell'esempio seguente viene illustrata una definizione di funzione completa:

```cpp
    int foo(int i, std::string s)
    {
       int value {i};
       MyClass mc;
       if(strcmp(s, "default") != 0)
       {
            value = mc.do_something(i);
       }
       return value;
    }
```

Le variabili dichiarate all'interno del corpo sono definite variabili locali o locali. Escono dall'ambito al termine di una funzione. È quindi necessario che una funzione non restituisca mai un riferimento a una locale.

```cpp
    MyClass& boom(int i, std::string s)
    {
       int value {i};
       MyClass mc;
       mc.Initialize(i,s);
       return mc;
    }
```

## <a name="const-and-constexpr-functions"></a>funzioni const e constExpr

È possibile dichiarare una funzione membro come **const** per specificare che la funzione non è consentita per modificare i valori di tutti i membri dati nella classe. Dichiarando una funzione membro come **const**, è possibile consentire al compilatore di applicare *const-correttezza*. Se un utente tenta erroneamente di modificare l'oggetto usando una funzione dichiarata come **const**, viene generato un errore del compilatore. Per ulteriori informazioni, vedere [const](const-cpp.md).

Dichiarare una funzione come `constexpr` quando il valore che produce può essere determinato in fase di compilazione. Una funzione constExpr viene in genere eseguita più velocemente rispetto a una funzione normale. Per ulteriori informazioni, vedere [constExpr](constexpr-cpp.md).

## <a name="function-templates"></a>Modelli di funzione

Un modello di funzione è analogo a un modello di classe. Genera funzioni concrete in base agli argomenti del modello. In molti casi, il modello è in grado di dedurre gli argomenti tipo e non è quindi necessario specificarli in modo esplicito.

```cpp
template<typename Lhs, typename Rhs>
auto Add2(const Lhs& lhs, const Rhs& rhs)
{
    return lhs + rhs;
}

auto a = Add2(3.13, 2.895); // a is a double
auto b = Add2(string{ "Hello" }, string{ " World" }); // b is a std::string
```

Per altre informazioni, vedere [modelli di funzione](../cpp/function-templates.md)

## <a name="function-parameters-and-arguments"></a>Parametri e argomenti delle funzioni

Una funzione ha un elenco di parametri delimitato da virgole che include zero o più tipi, ognuno dei quali ha un nome che ne permette l'accesso all'interno della funzione. Un modello di funzione può specificare un tipo aggiuntivo o parametri aggiuntivi di valore. Il chiamante passa gli argomenti, che sono valori concreti i cui tipi sono compatibili con l'elenco di parametri.

Per impostazione predefinita, gli argomenti vengono passati alla funzione per valore, ovvero la funzione riceve una copia dell'oggetto passato. Per gli oggetti di grandi dimensioni la creazione di una copia può essere dispendiosa e non è sempre necessaria. Per far sì che gli argomenti vengano passati per riferimento (in particolare riferimento a lvalue), aggiungere un quantificatore di riferimento al parametro:

```cpp
void DoSomething(std::string& input){...}
```

Quando una funzione modifica un argomento passato per riferimento, modifica l'oggetto originale, non una copia locale. Per evitare che una funzione modifichi tale argomento, qualificare il parametro come const &:

```cpp
void DoSomething(const std::string& input){...}
```

**C++ 11:**  Per gestire in modo esplicito gli argomenti passati per riferimento rvalue o lvalue-Reference, usare una doppia e commerciale sul parametro per indicare un riferimento universale:

```cpp
void DoSomething(const std::string&& input){...}
```

Una funzione dichiarata con la parola chiave Single **void** nell'elenco di dichiarazioni dei parametri non accetta argomenti, purché la parola chiave **void** sia il primo e unico membro dell'elenco di dichiarazioni di argomenti. Gli argomenti di tipo **void** altrove nell'elenco producono errori. Ad esempio:

```cpp

// OK same as GetTickCount()
long GetTickCount( void );
```

Si noti che, sebbene non sia consentito specificare un argomento **void** ad eccezione di quanto descritto qui, i tipi derivati dal tipo **void** (ad esempio i puntatori a **void** e le matrici di **void**) possono trovarsi in qualsiasi punto dell'elenco di dichiarazioni di argomenti.

### <a name="default-arguments"></a>Argomenti predefiniti

È possibile assegnare un argomento predefinito agli ultimi parametri nella firma di una funzione, per indicare che il chiamante può tralasciare l'argomento quando chiama la funzione, a meno che non voglia specificare un altro valore.

```cpp
int DoSomething(int num,
    string str,
    Allocator& alloc = defaultAllocator)
{ ... }

// OK both parameters are at end
int DoSomethingElse(int num,
    string str = string{ "Working" },
    Allocator& alloc = defaultAllocator)
{ ... }

// C2548: 'DoMore': missing default parameter for parameter 2
int DoMore(int num = 5, // Not a trailing parameter!
    string str,
    Allocator& = defaultAllocator)
{...}
```

Per ulteriori informazioni, vedere [argomenti predefiniti](../cpp/default-arguments.md).

## <a name="function-return-types"></a>Tipi restituiti di funzione

Una funzione non può restituire un'altra funzione o una matrice incorporata; Tuttavia, può restituire puntatori a questi tipi o a un' *espressione lambda*che produce un oggetto funzione. Ad eccezione di questi casi, una funzione può restituire un valore di qualsiasi tipo nell'ambito o potrebbe non restituire alcun valore, nel qual caso il tipo restituito è **void**.

### <a name="trailing-return-types"></a>Tipi restituiti finali

Un tipo restituito "normale" si trova sul lato sinistro della firma della funzione. Un *tipo restituito finale* si trova sul lato destro della firma ed è preceduto dall'operatore->. I tipi restituiti finali sono particolarmente utili nei modelli di funzione, quando il tipo di valore restituito dipende dai parametri del modello.

```cpp
template<typename Lhs, typename Rhs>
auto Add(const Lhs& lhs, const Rhs& rhs) -> decltype(lhs + rhs)
{
    return lhs + rhs;
}
```

Quando **auto** viene usato in combinazione con un tipo restituito finale, funge solo da segnaposto per qualsiasi valore generato dall'espressione decltype e non esegue a sua volta la deduzione del tipo.

## <a name="function-local-variables"></a>Variabili locali delle funzioni

Una variabile dichiarata all'interno di un corpo della funzione viene chiamata *variabile locale* o semplicemente un oggetto *locale*. Le locali non statiche sono visibili solo all'interno del corpo della funzione e, se sono dichiarate nello stack, escono dall'ambito al termine della funzione. Quando si costruisce una variabile locale e la si restituisce per valore, il compilatore può in genere eseguire l' *ottimizzazione del valore restituito denominato* per evitare operazioni di copia non necessarie. Se si restituisce una variabile locale per riferimento, il compilatore emetterà un avviso, poiché qualsiasi tentativo da parte del chiamante di usare tale riferimento si verificherà dopo l'eliminazione della locale.

In C++ una variabile locale può essere dichiarata come statica. La variabile è visibile solo all'interno del corpo della funzione, ma esiste una singola copia della variabile per tutte le istanze della funzione. Gli oggetti statici locali vengono eliminati definitivamente durante la chiusura specificata da `atexit`. Se un oggetto statico non è stato costruito perché il flusso di controllo del programma ne ha ignorato la dichiarazione, non viene eseguito alcun tentativo di eliminare tale oggetto.

##  <a name="type_deduction"></a>Deduzione del tipo nei tipi restituiti (C++ 14)

In C++ 14 è possibile usare **auto** per indicare al compilatore di dedurre il tipo restituito dal corpo della funzione senza dover fornire un tipo restituito finale. Si noti che **auto** deduce sempre un valore restituito per valore. Usare `auto&&` per indicare al compilatore di dedurre un riferimento.

In questo esempio, **auto** verrà dedotto come copia del valore non const della somma di LHS e RHS.

```cpp
template<typename Lhs, typename Rhs>
auto Add2(const Lhs& lhs, const Rhs& rhs)
{
    return lhs + rhs; //returns a non-const object by value
}
```

Si noti che **auto** non mantiene la const del tipo che deduce. Per le funzioni di invio il cui valore restituito deve conservare la const-ness o la Ref-Ness degli argomenti, è possibile usare la parola chiave **decltype (auto)** , che usa le regole di inferenza del tipo **decltype** e mantiene tutte le informazioni sul tipo. **decltype (auto)** può essere utilizzato come valore restituito normale sul lato sinistro o come valore restituito finale.

Nell'esempio seguente, basato sul codice di [N3493](http://www.open-std.org/JTC1/SC22/WG21/docs/papers/2013/n3493.html), viene mostrato **decltype (auto)** usato per abilitare l'invio perfetto degli argomenti della funzione in un tipo restituito che non è noto fino a quando non viene creata un'istanza del modello.

```cpp
template<typename F, typename Tuple = tuple<T...>, int... I>
decltype(auto) apply_(F&& f, Tuple&& args, index_sequence<I...>)
{
    return std::forward<F>(f)(std::get<I>(std::forward<Tuple>(args))...);
}

template<typename F, typename Tuple = tuple<T...>,
    typename Indices = make_index_sequence<tuple_size<Tuple>::value >>
   decltype( auto)
    apply(F&& f, Tuple&& args)
{
    return apply_(std::forward<F>(f), std::forward<Tuple>(args), Indices());
}
```

## <a name="multi_val"></a>Restituzione di più valori da una funzione

Esistono diversi modi per restituire più di un valore da una funzione:

1. Incapsula i valori in un oggetto struct o classe denominata. Richiede che la definizione della classe o dello struct sia visibile al chiamante:

    ```cpp
    #include <string>
    #include <iostream>

    using namespace std;

    struct S
    {
        string name;
        int num;
    };

    S g()
    {
        string t{ "hello" };
        int u{ 42 };
        return { t, u };
    }

    int main()
    {
        S s = g();
        cout << s.name << " " << s.num << endl;
        return 0;
    }
    ```

1. Restituisce un oggetto aria std:: tuple o std::p:

    ```cpp
    #include <tuple>
    #include <string>
    #include <iostream>

    using namespace std;

    tuple<int, string, double> f()
    {
        int i{ 108 };
        string s{ "Some text" };
        double d{ .01 };
        return { i,s,d };
    }

    int main()
    {
        auto t = f();
        cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

        // --or--

        int myval;
        string myname;
        double mydecimal;
        tie(myval, myname, mydecimal) = f();
        cout << myval << " " << myname << " " << mydecimal << endl;

        return 0;
    }
    ```

1. **Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): usare binding strutturati. Il vantaggio dei binding strutturati consiste nel fatto che le variabili che archiviano i valori restituiti vengono inizializzate nello stesso momento in cui vengono dichiarate, che in alcuni casi può essere significativamente più efficiente. In questa istruzione--`auto[x, y, z] = f();`--le parentesi quadre introducono e inizializzano i nomi inclusi nell'ambito per l'intero blocco di funzioni.

    ```cpp
    #include <tuple>
    #include <string>
    #include <iostream>

    using namespace std;

    tuple<int, string, double> f()
    {
        int i{ 108 };
        string s{ "Some text" };
        double d{ .01 };
        return { i,s,d };
    }
    struct S
    {
        string name;
        int num;
    };

    S g()
    {
        string t{ "hello" };
        int u{ 42 };
        return { t, u };
    }

    int main()
    {
        auto[x, y, z] = f(); // init from tuple
        cout << x << " " << y << " " << z << endl;

        auto[a, b] = g(); // init from POD struct
        cout << a << " " << b << endl;
        return 0;
    }
    ```

1. Oltre a utilizzare il valore restituito, è possibile "restituire" i valori definendo un numero qualsiasi di parametri per l'utilizzo di pass-by-reference, in modo che la funzione possa modificare o inizializzare i valori degli oggetti forniti dal chiamante. Per altre informazioni, vedere [argomenti della funzione di tipo riferimento](reference-type-function-arguments.md).

## <a name="function-pointers"></a>Puntatori funzione

C++ supporta i puntatori di funzione in modo analogo al linguaggio C. Un'alternativa più indipendente dai tipi consiste in genere nell'usare un oggetto di funzione.

È consigliabile usare **typedef** per dichiarare un alias per il tipo di puntatore a funzione se si dichiara una funzione che restituisce un tipo di puntatore a funzione.  Ad esempio:

```cpp
typedef int (*fp)(int);
fp myFunction(char* s); // function returning function pointer
```

Se questa operazione non viene eseguita, la sintassi corretta per la dichiarazione di funzione può essere dedotta dalla sintassi del dichiaratore per il puntatore a funzione sostituendo l'identificatore (`fp` nell'esempio precedente) con il nome e l'elenco di argomenti delle funzioni, come illustrato di seguito:

```cpp
int (*myFunction(char* s))(int);
```

La dichiarazione precedente equivale alla dichiarazione effettuata mediante l'elemento typedef precedente.

## <a name="see-also"></a>Vedere anche

[Overload di funzioni](../cpp/function-overloading.md)<br/>
[Funzioni con elenchi di argomenti variabili](../cpp/functions-with-variable-argument-lists-cpp.md)<br/>
[Funzioni impostate come predefinite ed eliminate in modo esplicito](../cpp/explicitly-defaulted-and-deleted-functions.md)<br/>
[Ricerca del nome dipendente dall'argomento nelle funzioni (Koenig)](../cpp/argument-dependent-name-koenig-lookup-on-functions.md)<br/>
[Argomenti predefiniti](../cpp/default-arguments.md)<br/>
[Funzioni inline](../cpp/inline-functions-cpp.md)
