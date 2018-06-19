---
title: Funzioni (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 01/25/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- defaults, arguments
- function definitions
- function definitions, about function definitions
- default arguments
- declarators, functions
ms.assetid: 33ba01d5-75b5-48d2-8eab-5483ac7d2274
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 720147992540b53c51e731db361cd9946a7a5313
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32418416"
---
# <a name="functions-c"></a>Funzioni (C++)

Una funzione è un blocco di codice che esegue un'operazione. Una funzione può facoltativamente definire parametri di input che permettono ai chiamanti di passare argomenti nella funzione e può facoltativamente restituire un valore come output. Le funzioni sono utili per incapsulare operazioni comuni in un singolo blocco riutilizzabile, idealmente con un nome che descrive in modo chiaro ciò che la funzione permette di ottenere. La funzione seguente accetta due numeri interi da un chiamante e restituisce la somma. `a` e `b` vengono *parametri* di tipo **int**.

```cpp
int sum(int a, int b)
{
    return a + b;
}
```

È possibile richiamare la funzione, o *chiamato*, da un numero qualsiasi di posizioni nel programma. I valori vengono passati alla funzione sono le *argomenti*, i cui tipi devono essere compatibili con i tipi di parametri nella definizione di funzione.

```cpp
int main()
{
    int i = sum(10, 32);
    int j = sum(i, 66);
    cout << "The value of j is" << j << endl; // 108
}
```

Non sono previsti limiti pratici per la lunghezza della funzione, ma una progettazione ottimale ha come obiettivo funzioni che eseguono una singola attività ben definita. È consigliabile suddividere gli algoritmi complessi in funzioni più semplici e di facile comprensione, se possibile.

Le funzioni definite a livello di ambito della classe sono chiamate funzioni membro. In C++, a differenza degli altri linguaggi, una funzione può essere definita anche a livello di ambito dello spazio dei nomi, incluso lo spazio dei nomi globale implicito. Tali funzioni vengono chiamate *funzioni disponibili* o *funzioni non membro*; sono ampiamente usate nella libreria Standard.

Le funzioni possono essere *overload*, ovvero versioni diverse di una funzione può condividere lo stesso nome se si differenziano per il numero e/o il tipo di parametri formali. Per ulteriori informazioni, vedere [overload di funzioni](../cpp/function-overloading.md).

## <a name="parts-of-a-function-declaration"></a>Parti della dichiarazione di una funzione

Una funzione minimo *dichiarazione* include il tipo restituito, nome funzione ed elenco di parametri (che può essere vuoto), insieme a parole chiave facoltative che forniscono istruzioni aggiuntive al compilatore. L'esempio seguente è una dichiarazione di funzione:

```cpp
int sum(int a, int b);
```

Una definizione di funzione è costituito da una dichiarazione, più il *corpo*, ovvero tutto il codice tra parentesi graffe:

```cpp
int sum(int a, int b)
{
    return a + b;
}
```

Una dichiarazione di funzione seguita da punto e virgola può apparire in più posizioni in un programma. Deve essere presente prima di qualsiasi chiamata a tale funzione in ogni unità di conversione. La definizione della funzione deve comparire solo una volta nel programma, in base alla regola ODR (One Definition Rule).

Le parti obbligatorie della dichiarazione di una funzione sono le seguenti:

1. Il tipo restituito, che specifica il tipo del valore restituito dalla funzione, o **void** se viene restituito alcun valore. In c++11 **auto** è un tipo restituito valido che indica al compilatore di dedurre il tipo dall'istruzione return. In C++14 è consentito anche decltype(auto). Per altre informazioni, vedere Deduzione dei tipi nei tipi restituiti più avanti.

1. Il nome della funzione, che deve iniziare con una lettera o un carattere di sottolineatura e non può contenere spazi. In generale, i caratteri di sottolineatura iniziali nei nomi delle funzioni della libreria standard indicano funzioni membro private o funzioni non membro non destinate all'uso nel codice.

1. L'elenco di parametri, un set di zero o più parametri racchiuso tra parentesi graffe e delimitato da virgole che specificano il tipo e, facoltativamente, un nome locale in base ai quali è possibile accedere ai valori entro il corpo della funzione.

Le parti facoltative della dichiarazione di una funzione sono le seguenti:

1. **constexpr**, che indica che il valore restituito della funzione è un valore costante può essere calcolato in fase di compilazione.

    ```cpp
    constexpr float exp(float x, int n)
    {
        return n == 0 ? 1 :
            n % 2 == 0 ? exp(x * x, n / 2) :
            exp(x * x, (n - 1) / 2) * x;
    };
    ```

1. La specifica di collegamento **extern** oppure **statico**.

    ```cpp
    //Declare printf with C linkage.
    extern "C" int printf( const char *fmt, ... );

    ```

     Per ulteriori informazioni, vedere [programma e collegamento](../cpp/program-and-linkage-cpp.md).

1. **inline**, che indica al compilatore di sostituire ogni chiamata alla funzione con il codice della funzione. L'incorporamento può migliorare le prestazioni negli scenari in cui una funzione viene eseguita rapidamente e viene richiamata ripetutamente in una sezione di codice essenziale per le prestazioni.

    ```cpp
    inline double Account::GetBalance()
    {
        return balance;
    }
    ```

     Per ulteriori informazioni, vedere [funzioni Inline](../cpp/inline-functions-cpp.md).

1. Un **noexcept** espressione, che specifica se la funzione può generare un'eccezione. Nell'esempio seguente, la funzione non genera un'eccezione se il `is_pod` espressione viene valutata **true**.

    ```cpp
    #include <type_traits>

    template <typename T>
    T copy_object(T& obj) noexcept(std::is_pod<T>) {...}
    ```

     Per ulteriori informazioni, vedere [noexcept](../cpp/noexcept-cpp.md).

1. (Solo funzioni membro) I qualificatori cv, che specifica se la funzione **const** oppure **volatile**.

1. (Solo funzioni membro) **virtuale**, **override**, o **finale**. **virtuale** specifica che una funzione può essere sottoposta a override in una classe derivata. **eseguire l'override** significa che una funzione in una classe derivata esegue l'override di una funzione virtuale. **finale** indica una funzione non può essere sottoposto a override in qualsiasi ulteriore classe derivata. Per ulteriori informazioni, vedere [funzioni virtuali](../cpp/virtual-functions.md).

1. (solo funzioni membro) **statica** applicato a un membro funzione significa che la funzione non è associata a tutte le istanze di oggetto della classe.

1. (Solo funzioni membro Non statico) Il qualificatore di riferimento, che indica al ricompilatore quale overload di una funzione deve essere scelto quando il parametro dell'oggetto implicito (\*ciò) è un riferimento rvalue e un riferimento lvalue. Per ulteriori informazioni, vedere [overload di funzioni](function-overloading.md#ref-qualifiers).

Nella figura seguente vengono illustrate le parti di una definizione di funzione. L'area ombreggiata costituisce il corpo della funzione.

 ![Parti di una definizione di funzione](../cpp/media/vc38ru1.gif "vc38RU1") parti di una definizione di funzione

## <a name="function-definitions"></a>Definizioni di funzione

Un *definizione di funzione* include la dichiarazione e il corpo della funzione, racchiuso tra parentesi graffe, che contiene le dichiarazioni di variabili, istruzioni ed espressioni. Nell'esempio seguente viene illustrata una definizione di funzione completa:

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

## <a name="const-and-constexpr-functions"></a>funzioni di tipo const e constexpr

È possibile dichiarare una funzione membro come **const** per specificare che la funzione non è consentita modificare i valori dei membri di dati nella classe. Dichiarando come una funzione membro **const**, consente al compilatore di imporre *la correttezza di const*. Se un utente si è erroneamente immesso tenta di modificare l'oggetto tramite una funzione dichiarata come **const**, viene generato un errore del compilatore. Per ulteriori informazioni, vedere [const](const-cpp.md).

Dichiarare una funzione come **constexpr** quando il valore produce eventualmente può essere determinato in fase di compilazione. Una funzione constexpr esegue in genere più veloce rispetto a una funzione normale. Per altre informazioni, vedere [constexpr](constexpr-cpp.md).

## <a name="function-templates"></a>Modelli di funzioni

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

Per impostazione predefinita, gli argomenti vengono passati alla funzione per valore, ovvero la funzione riceve una copia dell'oggetto passato. Per gli oggetti di grandi dimensioni la creazione di una copia può essere dispendiosa e non è sempre necessaria. Per determinare gli argomenti passati per riferimento (in particolare un riferimento lvalue), aggiungere un quantificatore riferimento al parametro:

```cpp
void DoSomething(std::string& input){...}
```

Quando una funzione modifica un argomento passato per riferimento, modifica l'oggetto originale, non una copia locale. Per impedire a una funzione di modificare tale argomento, qualificare il parametro come const&:

```cpp
void DoSomething(const std::string& input){...}
```

 **C++ 11:** per gestire in modo esplicito gli argomenti vengono passati per riferimento rvalue o un riferimento lvalue, usare una e commerciale doppia sul parametro per indicare un riferimento universale:

```cpp
void DoSomething(const std::string&& input){...}
```

Una funzione dichiarata con la singola parola chiave **void** nella dichiarazione del parametro elenco non accetta argomenti, purché la parola chiave **void** è il primo e unico membro di tale elenco. Gli argomenti di tipo **void** in un punto dell'elenco producono errori. Ad esempio:

```cpp

// OK same as GetTickCount()
long GetTickCount( void );
```

Si noti che, sebbene non sia valido specificare un **void** argomento tranne come descritto in questo caso, i tipi derivati da tipo **void** (ad esempio i puntatori a **void** e le matrici di **void**) possono essere visualizzati nell'elenco delle dichiarazioni argomento.

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

Una funzione non può restituire un'altra funzione o una matrice incorporata. ma può restituire puntatori a questi tipi, o un *lambda*, che genera un oggetto funzione. Con la differenza di questi casi, una funzione può restituire un valore di qualsiasi tipo che si trova nell'ambito o non può restituire alcun valore, nel qual caso il tipo restituito è **void**.

### <a name="trailing-return-types"></a>Tipi restituiti finali

Un tipo restituito "normale" si trova sul lato sinistro della firma della funzione. Oggetto *tipo restituito finale* si trova sul lato destro della firma ed è preceduto dall'operatore ->. I tipi restituiti finali sono particolarmente utili nei modelli di funzione, quando il tipo di valore restituito dipende dai parametri del modello.

```cpp
template<typename Lhs, typename Rhs>
auto Add(const Lhs& lhs, const Rhs& rhs) -> decltype(lhs + rhs)
{
    return lhs + rhs;
}
```

Quando si **auto** viene utilizzato in combinazione con un tipo restituito finale, funge semplicemente da segnaposto per qualsiasi espressione decltype produce e non esegue direttamente la deduzione del tipo.


## <a name="function-local-variables"></a>Variabili locali delle funzioni

Una variabile dichiarata all'interno di un corpo della funzione viene chiamata una *variabile locale* o semplicemente *locale*. Le locali non statiche sono visibili solo all'interno del corpo della funzione e, se sono dichiarate nello stack, escono dall'ambito al termine della funzione. Quando si crea una variabile locale e la si restituisce per valore, il compilatore può in genere eseguire l'ottimizzazione del valore restituito per evitare operazioni di copia non necessarie. Se si restituisce una variabile locale per riferimento, il compilatore emetterà un avviso, poiché qualsiasi tentativo da parte del chiamante di usare tale riferimento si verificherà dopo l'eliminazione definitiva della locale.

In C++ una variabile locale può essere dichiarata come statica. La variabile è visibile solo all'interno del corpo della funzione, ma esiste una singola copia della variabile per tutte le istanze della funzione. Gli oggetti statici locali vengono eliminati durante la chiusura specificata da **atexit**. Se un oggetto statico non è stato costruito perché il flusso di controllo del programma ne ha ignorato la dichiarazione, non viene eseguito alcun tentativo di eliminare definitivamente tale oggetto.

##  <a name="type_deduction"></a> Deduzione dei tipi nei tipi restituiti (c++14)

In c++14 è possibile utilizzare **auto** per indicare al compilatore di dedurre il tipo restituito dal corpo della funzione senza dovere fornire un tipo restituito finale. Si noti che **auto** deduce sempre restituito dal valore. Uso **auto & &** per indicare al compilatore di dedurre un riferimento.

In questo esempio, **auto** verrà dedotto come copia un valore non const della somma di lhs e rhs.

```cpp
template<typename Lhs, typename Rhs>
auto Add2(const Lhs& lhs, const Rhs& rhs)
{
    return lhs + rhs; //returns a non-const object by value
}
```

Si noti che **auto** non mantiene la caratteristica const del tipo dedotto. Per inoltrare funzioni il cui valore restituito deve conservare la caratteristica const o ref dei relativi argomenti, è possibile usare il **decltype (Auto)** (parola chiave), che usa il **decltype** regole di inferenza del tipo e Consente di mantenere tutte le informazioni sul tipo. **decltype (Auto)** può essere utilizzato come valore restituito normale sul lato sinistro o come valore restituito finale.

Nell'esempio seguente (basato su codice da [N3493](http://www.open-std.org/JTC1/SC22/WG21/docs/papers/2013/n3493.html)), Mostra **decltype (Auto)** utilizzato per abilitare l'inoltro perfetto degli argomenti della funzione in un tipo restituito non è noto fino a quando non è il modello creare un'istanza.

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
}
```

## <a name="returning-multiple-values-from-a-function"></a>Restituzione di più valori da una funzione

Sono disponibili vari modi per restituire più valori da una funzione:

1. Incapsulare i valori in un oggetto di classe o struct denominato. Richiede la definizione di classe o struct per essere visibile al chiamante:

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
    
1. Restituisce un oggetto std:: tuple o std:: Pair:

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

1. **Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): utilizzare strutturato associazioni. Il vantaggio di associazioni strutturate è allo stesso tempo che vengono dichiarati, vengono inizializzate le variabili che archiviano i valori restituiti che in alcuni casi può essere notevolmente più efficiente. In questa istruzione -`auto[x, y, z] = f();`-le parentesi quadre introdurre e inizializzare i nomi che rientrano nell'ambito per il blocco dell'intera funzione.

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
    
1. Oltre a utilizzare il valore restituito se stesso, è possibile "restituire" valori mediante la definizione di un numero qualsiasi di parametri da utilizzare passata per riferimento in modo che la funzione può modificare o inizializzare i valori di oggetti che consente al chiamante. Per ulteriori informazioni, vedere [gli argomenti della funzione tipo-riferimento](reference-type-function-arguments.md).

## <a name="function-pointers"></a>Puntatori funzione

C++ supporta i puntatori di funzione in modo analogo al linguaggio C. Un'alternativa più indipendente dai tipi consiste in genere nell'usare un oggetto di funzione.

È consigliabile **typedef** utilizzabile per dichiarare un alias per il tipo puntatore a funzione se la dichiarazione di una funzione che restituisce un tipo puntatore a funzione.  Esempio:

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

- [Overload di funzioni](../cpp/function-overloading.md)
- [Funzioni con elenchi di argomenti variabili](../cpp/functions-with-variable-argument-lists-cpp.md)
- [Funzioni impostate come predefinite ed eliminate in modo esplicito](../cpp/explicitly-defaulted-and-deleted-functions.md)
- [Ricerca del nome dipendente dall'argomento nelle funzioni (Koenig)](../cpp/argument-dependent-name-koenig-lookup-on-functions.md)
- [Argomenti predefiniti](../cpp/default-arguments.md)
- [Funzioni inline](../cpp/inline-functions-cpp.md)
