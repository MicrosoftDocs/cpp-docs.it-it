---
title: C++ (C++ moderno)
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: 1cb1b849-ed9c-4721-a972-fd8f3dab42e2
ms.openlocfilehash: 2739da77fbfa973ca716abc6d8fa4920b81095d9
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74303335"
---
# <a name="welcome-back-to-c-modern-c"></a>C++ (C++ moderno)

Negli ultimi 25 anni, C++ è stato uno dei linguaggi di programmazione più diffusi nel mondo. I programmi in C++ ben scritti sono veloci ed efficienti. Il linguaggio è più flessibile di altri linguaggi perché consente di accedere alle funzionalità hardware di basso livello per ottimizzare la velocità e ridurre al minimo i requisiti di memoria. È possibile usarlo per creare un'ampia gamma di app, da giochi, a software scientifico a elevate prestazioni, driver di dispositivo, programmi incorporati, librerie e compilatori per altri linguaggi di programmazione, app client Windows e molto altro ancora.

Uno dei requisiti originali di C++ era la compatibilità con le versioni precedenti del linguaggio C. Di conseguenza C++ è sempre consentita la programmazione di tipo C con puntatori non elaborati, matrici, stringhe di caratteri con terminazione null, strutture di dati personalizzate e altre funzionalità che consentono di ottenere prestazioni eccezionali, ma possono anche generare bug e complessità. L'evoluzione di C++ ha enfatizzato le funzionalità che riducono notevolmente la necessità di usare idiomi di tipo C. Le vecchie funzionalità di programmazione C sono disponibili quando sono necessarie, ma con il codice C++ moderno è necessario avere un numero minore e minore. Il C++ codice moderno è più semplice, sicuro, più elegante e sempre più veloce.

Le sezioni seguenti forniscono una panoramica delle principali funzionalità di Modern C++. Se non specificato diversamente, le funzionalità elencate di seguito sono disponibili in C++ 11 e versioni successive. Nel compilatore Microsoft C++ è possibile impostare l'opzione del compilatore [/std](../build/reference/std-specify-language-standard-version.md) per specificare la versione dello standard da usare per il progetto.

## <a name="raii-and-smart-pointers"></a>RAII e puntatori intelligenti

Una delle principali classi di bug nella programmazione di tipo C è la *perdita di memoria* a causa dell'impossibilità di chiamare **Delete** per la memoria allocata con **New**. La C++ moderna enfatizza il principio di *acquisizione delle risorse è l'inizializzazione* che indica che qualsiasi risorsa (memoria heap, handle di file, socket e così via) deve essere di *proprietà* di un oggetto che crea, o riceve, la risorsa appena allocata nel costruttore e la Elimina nel distruttore. Aderendo al principio di RAII, si garantisce che tutte le risorse verranno restituite correttamente al sistema operativo quando l'oggetto proprietario esce dall'ambito. Per supportare agevolmente l'adozione di principi RAII C++ , la libreria standard fornisce tre tipi di puntatore intelligente: [std:: unique_ptr](../standard-library/unique-ptr-class.md), [std:: shared_ptr](../standard-library/shared-ptr-class.md)e [std:: weak_ptr](../standard-library/weak-ptr-class.md). Un puntatore intelligente gestisce l'allocazione e l'eliminazione della memoria di sua proprietà. Nell'esempio seguente viene illustrata una classe con un membro di matrice allocato nell'heap della chiamata a `make_unique()`. Le chiamate a **New** e **Delete** sono incapsulate dalla classe `unique_ptr`. Quando un oggetto `widget` esce dall'ambito, il distruttore di unique_ptr verrà richiamato e rilascerà la memoria allocata per la matrice.  

```cpp
#include <memory>
class widget
{
private:
    std::unique_ptr<int> data;
public:
    widget(const int size) { data = std::make_unique<int>(size); }
    void do_something() {}
};

void functionUsingWidget() {
    widget w(1000000);   // lifetime automatically tied to enclosing scope
                // constructs w, including the w.data gadget member
    // ...
    w.do_something();
    // ...
} // automatic destruction and deallocation for w and w.data

```

Quando possibile, usare un puntatore intelligente quando si alloca la memoria heap. Se è necessario usare gli operatori new e DELETE in modo esplicito, seguire il principio di RAII. Per ulteriori informazioni, vedere [durata degli oggetti e gestione delle risorse (RAII)](object-lifetime-and-resource-management-modern-cpp.md).

## <a name="stdstring-and-stdstring_view"></a>STD:: String e std:: string_view

Le stringhe di tipo C sono un'altra fonte principale di bug. Usando [std:: String e std:: wstring](../standard-library/basic-string-class.md) è possibile eliminare praticamente tutti gli errori associati alle stringhe di tipo C e ottenere i vantaggi delle funzioni membro per la ricerca, l'accodamento, la presospensione e così via. Entrambi sono altamente ottimizzati per la velocità. Quando si passa una stringa a una funzione che richiede solo l'accesso in sola lettura, in (C++ 17) è possibile usare [std:: string_view](../standard-library/basic-string-view-class.md) per migliorare ulteriormente le prestazioni.

## <a name="stdvector-and-other-standard-library-containers"></a>STD:: Vector e altri contenitori della libreria standard

Tutti i contenitori della libreria standard seguono il principio di RAII, forniscono gli iteratori per l'attraversamento sicuro degli elementi, sono altamente ottimizzati per le prestazioni e sono stati accuratamente testati per correttezza. Usando questi contenitori, quando possibile, si elimina il rischio di bug o inefficienze che potrebbero essere introdotti in strutture di dati personalizzate. Per impostazione predefinita, usare [vector](../standard-library/vector-class.md) come contenitore sequenziale preferito C++in. Questa operazione equivale a `List<T>` nei linguaggi .NET.

```cpp
vector<string> apples;
apples.push_back("Granny Smith");
```

Usare [Map](../standard-library/map-class.md) (non `unordered_map`) come contenitore associativo predefinito. Usare [set](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md)e [multiset](../standard-library/multiset-class.md) per degenerate e multi case.

```cpp
map<string, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";
```

Quando è necessaria l'ottimizzazione delle prestazioni, è consigliabile usare:

- Il tipo di [matrice](../standard-library/array-class-stl.md) quando l'incorporamento è importante, ad esempio, come membro della classe.

- Contenitori associativi non ordinati, ad esempio [unordered_map](../standard-library/unordered-map-class.md). Si tratta di un overhead minore per ogni elemento e di una ricerca a tempo costante, ma possono essere più difficili da usare in modo corretto ed efficiente.

- `vector`ordinata. Per altre informazioni, vedere [Algoritmi](../cpp/algorithms-modern-cpp.md).

Non usare matrici di tipo C. Per le API precedenti che richiedono l'accesso diretto ai dati, usare i metodi della funzione di accesso, ad esempio `f(vec.data(), vec.size());`. Per ulteriori informazioni sui contenitori, vedere [ C++ contenitori di libreria standard](../standard-library/stl-containers.md).

## <a name="standard-library-algorithms"></a>Algoritmi della libreria standard

Prima di presupporre che sia necessario scrivere un algoritmo personalizzato per il programma, esaminare prima di C++ tutto gli [algoritmi](../standard-library/algorithm.md)della libreria standard. La libreria standard contiene una gamma sempre crescente di algoritmi per molte operazioni comuni, come la ricerca, l'ordinamento, il filtro e la casualità. La libreria matematica è estesa. A partire da C++ 17, vengono fornite versioni parallele di molti algoritmi.

Di seguito sono riportati alcuni esempi importanti:

- **for_each**, l'algoritmo di attraversamento predefinito (insieme ai cicli for basati sull'intervallo). 

- **trasformazione**, per la modifica non sul posto degli elementi del contenitore

- **find_if**, l'algoritmo di ricerca predefinito.

- **ordinare**, **lower_bound**e gli altri algoritmi di ordinamento e di ricerca predefiniti.

Per scrivere un criterio di confronto, utilizzare strict **<** e utilizzare le *espressioni lambda denominate* quando è possibile.

```cpp
auto comp = [](const widget& w1, const widget& w2)
     { return w1.weight() < w2.weight(); }

sort( v.begin(), v.end(), comp );

auto i = lower_bound( v.begin(), v.end(), comp );
```

## <a name="auto-instead-of-explicit-type-names"></a>auto anziché nomi di tipi espliciti

In c++ 11 è stata introdotta la parola chiave [auto](auto-cpp.md) per l'utilizzo nelle dichiarazioni di variabili, funzioni e modelli. **auto** indica al compilatore di dedurre il tipo dell'oggetto in modo che non sia necessario digitarlo in modo esplicito. **auto** è particolarmente utile quando il tipo dedotto è un modello annidato:

```cpp
map<int,list<string>>::iterator i = m.begin(); // C-style
auto i = m.begin(); // modern C++
```

## <a name="range-based-for-loops"></a>Cicli for basati su intervallo

L'iterazione in stile C su matrici e contenitori è soggetta a errori di indicizzazione ed è anche noiosa per il tipo. Per eliminare questi errori e rendere il codice più leggibile, usare i cicli for basati su intervallo con i contenitori della libreria standard e le matrici non elaborate. Per altre informazioni, vedere [istruzione for basata sull'intervallo](../cpp/range-based-for-statement-cpp.md).

```cpp
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v {1,2,3};

    // C-style
    for(int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i];
    }

    // Modern C++:
    for(auto& num : v)
    {
        std::cout << num;
    }
}
```

## <a name="constexpr-expressions-instead-of-macros"></a>espressioni constExpr anziché macro

Le macro in C C++ e sono token elaborati dal preprocessore prima della compilazione. Ogni istanza di un token di macro viene sostituita con il valore o l'espressione definita prima che il file venga compilato. Le macro sono comunemente usate nella programmazione di tipo C per definire i valori costanti in fase di compilazione. Tuttavia, le macro sono soggette a errori ed è difficile eseguire il debug. In Modern C++è consigliabile preferire le variabili [constExpr](constexpr-cpp.md) per le costanti in fase di compilazione:

```cpp
#define SIZE 10 / C-style
constexpr int size = 10; // modern C++
```

### <a name="uniform-initialization"></a>Inizializzazione uniforme

In Modern C++è possibile utilizzare l'inizializzazione con parentesi graffe per qualsiasi tipo. Questa forma di inizializzazione è particolarmente utile quando si inizializzano matrici, vettori o altri contenitori. Nell'esempio seguente `v2` viene inizializzato con 3 istanze di `S`. `v3` viene inizializzato con 3 istanze di `S` che vengono inizializzate con parentesi graffe. Il compilatore deduce il tipo di ogni elemento in base al tipo dichiarato di `v3`.

```cpp
#include <vector>

struct S
{
    std::string name;
    float num;
    S(std::string s, float f) : name(s), num(f) {}
};

int main()
{
    // C-style initialization
    std::vector<S> v;
    S s1("Norah", 2.7);
    S s2("Frank", 3.5);
    S s3("Jeri", 85.9);

    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);

    // Modern C++:
    std::vector<S> v2 {s1, s2, s3};

    // or...
    std::vector<S> v3{ {"Norah", 2.7}, {"Frank", 3.5}, {"Jeri", 85.9} };

}
```

Per altre informazioni, vedere [inizializzazione di parentesi graffe](initializing-classes-and-structs-without-constructors-cpp.md).

## <a name="move-semantics"></a>Semantica di spostamento

Il C++ moderno fornisce la *semantica di spostamento* che consente di eliminare le copie di memoria superflue che nelle versioni precedenti del linguaggio erano inevitabili in determinate situazioni. Un'operazione di *spostamento* trasferisce la proprietà di una risorsa da un oggetto a quello successivo senza effettuare una copia. Quando si implementa una classe proprietaria di una risorsa, ad esempio memoria heap, handle di file e così via, è possibile definire un *costruttore di spostamento* e un operatore di *assegnazione di spostamento* . Il compilatore sceglierà questi membri speciali durante la risoluzione dell'overload in situazioni in cui non è necessaria una copia. I tipi di contenitore della libreria standard richiamano il costruttore di spostamento sugli oggetti se ne è stato definito uno. Per ulteriori informazioni, vedere [costruttori di spostamento e operatori di assegnazione diC++spostamento ()](move-constructors-and-move-assignment-operators-cpp.md).

## <a name="lambda-expressions"></a>Espressioni lambda

Nella programmazione di tipo C è possibile passare una funzione a un'altra funzione per mezzo di un *puntatore a funzione*. I puntatori a funzione non sono pratici per la manutenzione e la comprensione perché la funzione a cui fanno riferimento possono essere definiti altrove nel codice sorgente, lontano dal punto in cui viene richiamato. Inoltre, non sono indipendenti dai tipi. Modern C++ fornisce oggetti funzione, classi che eseguono l'override dell'operatore [()](function-call-operator-parens.md) che ne consente la chiamata come una funzione. Il modo più pratico per creare oggetti funzione consiste nell'usare [espressioni lambda](../cpp/lambda-expressions-in-cpp.md)inline. Nell'esempio seguente viene illustrato come utilizzare un'espressione lambda per passare un oggetto funzione, che la funzione `for_each` richiamerà su ogni elemento nel vettore:

```cpp
    std::vector<int> v {1,2,3,4,5};
    int x = 2;
    int y = 4;
    auto result = find_if(begin(v), end(v), [=](int i) { return i > x && i < y; });
```

L'espressione lambda `[=](int i) { return i > x && i < y; }` può essere letta come "funzione che accetta un singolo argomento di tipo `int` e restituisce un valore booleano che indica se l'espressione è true. Si noti che le variabili `x` e `y` dal contesto circostante possono essere utilizzate nell'espressione lambda. Il `[=]` specifica che tali variabili vengono *acquisite* per valore. in altre parole, l'espressione lambda ha copie proprie di tali valori.

## <a name="exceptions"></a>Eccezioni

Come regola generale, la moderna C++ enfatizza le eccezioni anziché i codici di errore come il modo migliore per segnalare e gestire le condizioni di errore. Per ulteriori informazioni, vedere [procedure C++ consigliate moderne per le eccezioni e la gestione degli errori](errors-and-exception-handling-modern-cpp.md).

## <a name="stdatomic"></a>STD:: Atomic

Usare lo C++ struct [std:: Atomic](../standard-library/atomic-structure.md) della libreria standard e i tipi correlati per i meccanismi di comunicazione tra thread.

## <a name="stdvariant-c17"></a>STD:: Variant (C++ 17)

Le unioni vengono comunemente utilizzate nella programmazione di tipo C per conservare la memoria consentendo a membri di tipi diversi di occupare la stessa posizione di memoria. Tuttavia, le unioni non sono indipendenti dai tipi e sono soggette a errori di programmazione. In c++ 17 è stata introdotta la classe [std:: Variant](../standard-library/variant-class.md) come alternativa più affidabile e sicura alle unioni. La funzione [std:: Visit](../standard-library/variant-functions.md#visit) può essere usata per accedere ai membri di un tipo di `variant` in modo indipendente dai tipi.

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Espressioni lambda](../cpp/lambda-expressions-in-cpp.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
[Tabella C++ di conformità del linguaggio Microsoft](../overview/visual-cpp-language-conformance.md)