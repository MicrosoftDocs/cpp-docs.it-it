---
title: Bentornato in C++ - C++ moderno
description: Vengono descritti i nuovi idiomi di programmazione in C++ moderno e la relativa logica.
ms.date: 05/17/2020
ms.topic: conceptual
ms.assetid: 1cb1b849-ed9c-4721-a972-fd8f3dab42e2
ms.openlocfilehash: 05c1fe80086e5b98d3f8a9c66c6759fddab39fa0
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91353051"
---
# <a name="welcome-back-to-c---modern-c"></a>Bentornato in C++ - C++ moderno

Dal momento della creazione, C++ è diventato uno dei linguaggi di programmazione più diffusi nel mondo. I programmi in C++ ben scritti sono veloci ed efficienti. Il linguaggio è più flessibile di altri linguaggi, ovvero può funzionare ai massimi livelli di astrazione e al livello del silicio. C++ fornisce librerie standard altamente ottimizzate. Consente l'accesso a funzionalità hardware di basso livello, per ottimizzare la velocità e ridurre al minimo i requisiti di memoria. Con C++ è possibile creare un'ampia gamma di app. Giochi, driver di dispositivo e software scientifico a elevate prestazioni. Programmi incorporati. App client di Windows. Anche le librerie e i compilatori per altri linguaggi di programmazione vengono scritti in C++.

Uno dei requisiti originali di C++ era la compatibilità con le versioni precedenti del linguaggio C. Di conseguenza, C++ ha sempre consentito la programmazione di tipo C, con puntatori non elaborati, matrici, stringhe di caratteri con terminazione null e altre funzionalità. Possono garantire prestazioni ottimali, ma possono anche generare bug e complessità. L'evoluzione del linguaggio C++ ha enfatizzato le funzionalità che riducono notevolmente la necessità di usare idiomi di tipo C. Le vecchie funzionalità di programmazione C sono disponibili quando sono necessarie, ma con il codice C++ moderno è necessario richiederle meno e meno. Il codice C++ moderno è più semplice, sicuro, più elegante e sempre più veloce.

Le sezioni seguenti forniscono una panoramica delle principali funzionalità del linguaggio C++ moderno. Se non specificato diversamente, le funzionalità elencate di seguito sono disponibili in C++ 11 e versioni successive. Nel compilatore Microsoft C++ è possibile impostare l'opzione del [`/std`](../build/reference/std-specify-language-standard-version.md) compilatore per specificare la versione dello standard da usare per il progetto.

## <a name="resources-and-smart-pointers"></a>Risorse e puntatori intelligenti

Una delle principali classi di bug nella programmazione di tipo C è la *perdita di memoria*. Le perdite spesso sono dovute a un errore di chiamata **`delete`** per la memoria allocata con **`new`** . Il linguaggio C++ moderno enfatizza il principio di *inizializzazione delle risorse* (RAII). L'idea è semplice. Le risorse (memoria heap, handle di file, socket e così via) devono essere di *Proprietà* di un oggetto. Tale oggetto crea, o riceve, la risorsa appena allocata nel costruttore e la Elimina nel distruttore. Il principio di RAII garantisce che tutte le risorse vengano restituite correttamente al sistema operativo quando l'oggetto proprietario esce dall'ambito.

Per supportare agevolmente l'adozione di principi RAII, la libreria standard C++ fornisce tre tipi di puntatore intelligenti: [`std::unique_ptr`](../standard-library/unique-ptr-class.md) , [`std::shared_ptr`](../standard-library/shared-ptr-class.md) e [`std::weak_ptr`](../standard-library/weak-ptr-class.md) . Un puntatore intelligente gestisce l'allocazione e l'eliminazione della memoria di sua proprietà. Nell'esempio seguente viene illustrata una classe con un membro di matrice allocato nell'heap nella chiamata a `make_unique()` . Le chiamate a **`new`** e **`delete`** sono incapsulate dalla `unique_ptr` classe. Quando un `widget` oggetto esce dall'ambito, il distruttore unique_ptr verrà richiamato e rilascerà la memoria allocata per la matrice.  

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

## <a name="stdstring-and-stdstring_view"></a>`std::string` e `std::string_view`

Le stringhe di tipo C sono un'altra fonte principale di bug. Utilizzando [ `std::string` e `std::wstring` ](../standard-library/basic-string-class.md), è possibile eliminare praticamente tutti gli errori associati alle stringhe di tipo C. Puoi anche sfruttare i vantaggi delle funzioni membro per la ricerca, l'accodamento, la presospensione e così via. Entrambi sono altamente ottimizzati per la velocità. Quando si passa una stringa a una funzione che richiede solo l'accesso in sola lettura, in C++ 17 è possibile usare [`std::string_view`](../standard-library/basic-string-view-class.md) per migliorare ulteriormente le prestazioni.

## <a name="stdvector-and-other-standard-library-containers"></a>`std::vector` e altri contenitori della libreria standard

Tutti i contenitori della libreria standard seguono il principio di RAII. Forniscono gli iteratori per l'attraversamento sicuro di elementi. E sono altamente ottimizzati per le prestazioni e sono stati accuratamente testati per correttezza. Usando questi contenitori, è possibile eliminare il rischio di bug o inefficienze che potrebbero essere introdotti in strutture di dati personalizzate. Anziché le matrici non elaborate, usare [`vector`](../standard-library/vector-class.md) come contenitore sequenziale in C++.

```cpp
vector<string> apples;
apples.push_back("Granny Smith");
```

Utilizzare [`map`](../standard-library/map-class.md) (non `unordered_map` ) come contenitore associativo predefinito. Utilizzare [`set`](../standard-library/set-class.md) , [`multimap`](../standard-library/multimap-class.md) e [`multiset`](../standard-library/multiset-class.md) per degenerate e più case.

```cpp
map<string, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";
```

Quando è necessaria l'ottimizzazione delle prestazioni, è consigliabile usare:

- Il [`array`](../standard-library/array-class-stl.md) tipo quando si incorpora è importante, ad esempio, come membro della classe.

- Contenitori associativi non ordinati, ad esempio [`unordered_map`](../standard-library/unordered-map-class.md) . Si tratta di un overhead minore per ogni elemento e di una ricerca a tempo costante, ma possono essere più difficili da usare in modo corretto ed efficiente.

- Ordinato `vector` . Per altre informazioni, vedere [Algoritmi](../standard-library/algorithms.md).

Non usare matrici di tipo C. Per le API precedenti che richiedono l'accesso diretto ai dati, usare i metodi della funzione di accesso, ad esempio `f(vec.data(), vec.size());` . Per ulteriori informazioni sui contenitori, vedere la pagina relativa ai [contenitori della libreria standard C++](../standard-library/stl-containers.md).

## <a name="standard-library-algorithms"></a>Algoritmi della libreria standard

Prima di presupporre che sia necessario scrivere un algoritmo personalizzato per il programma, esaminare prima di tutto gli [algoritmi](../standard-library/algorithm.md)della libreria standard C++. La libreria standard contiene una gamma sempre crescente di algoritmi per molte operazioni comuni, come la ricerca, l'ordinamento, il filtro e la casualità. La libreria matematica è estesa. A partire da C++ 17, vengono fornite versioni parallele di molti algoritmi.

Di seguito sono riportati alcuni esempi importanti:

- `for_each`, l'algoritmo di attraversamento predefinito (insieme ai cicli basati su intervallo `for` ).

- `transform`, per la modifica non sul posto degli elementi del contenitore

- `find_if`, l'algoritmo di ricerca predefinito.

- `sort`, `lower_bound` e gli altri algoritmi di ordinamento e di ricerca predefiniti.

Per scrivere un criterio di confronto, usare Strict **`<`** e usare *espressioni lambda denominate* quando è possibile.

```cpp
auto comp = [](const widget& w1, const widget& w2)
     { return w1.weight() < w2.weight(); }

sort( v.begin(), v.end(), comp );

auto i = lower_bound( v.begin(), v.end(), comp );
```

## <a name="auto-instead-of-explicit-type-names"></a>`auto` anziché nomi di tipi espliciti

In c++ 11 è stata introdotta la [`auto`](auto-cpp.md) parola chiave da utilizzare nelle dichiarazioni di variabili, funzioni e modelli. **`auto`** indica al compilatore di dedurre il tipo dell'oggetto in modo che non sia necessario digitarlo in modo esplicito. **`auto`** è particolarmente utile quando il tipo dedotto è un modello annidato:

```cpp
map<int,list<string>>::iterator i = m.begin(); // C-style
auto i = m.begin(); // modern C++
```

## <a name="range-based-for-loops"></a>Cicli basati su intervallo `for`

L'iterazione in stile C su matrici e contenitori è soggetta a errori di indicizzazione ed è anche noiosa per il tipo. Per eliminare questi errori e rendere il codice più leggibile, usare cicli basati su intervallo **`for`** con i contenitori della libreria standard e le matrici non elaborate. Per altre informazioni, vedere [ `for` istruzione basata sull'intervallo](../cpp/range-based-for-statement-cpp.md).

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

## <a name="constexpr-expressions-instead-of-macros"></a>`constexpr` espressioni anziché macro

Le macro in C e C++ sono token elaborati dal preprocessore prima della compilazione. Ogni istanza di un token di macro viene sostituita con il valore o l'espressione definita prima che il file venga compilato. Le macro sono comunemente usate nella programmazione di tipo C per definire i valori costanti in fase di compilazione. Tuttavia, le macro sono soggette a errori ed è difficile eseguire il debug. Nel linguaggio C++ moderno, è consigliabile preferire le [`constexpr`](constexpr-cpp.md) variabili per le costanti in fase di compilazione:

```cpp
#define SIZE 10 // C-style
constexpr int size = 10; // modern C++
```

### <a name="uniform-initialization"></a>Inizializzazione uniforme

Nel linguaggio C++ moderno, è possibile usare l'inizializzazione con parentesi graffe per qualsiasi tipo. Questa forma di inizializzazione è particolarmente utile quando si inizializzano matrici, vettori o altri contenitori. Nell'esempio seguente `v2` viene inizializzato con tre istanze di `S` . `v3` viene inizializzata con tre istanze di `S` che vengono inizializzate utilizzando le parentesi graffe. Il compilatore deduce il tipo di ogni elemento in base al tipo dichiarato di `v3` .

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

Il linguaggio C++ moderno fornisce la *semantica di spostamento*, che consente di eliminare copie di memoria non necessarie. Nelle versioni precedenti del linguaggio, le copie erano inevitabili in determinate situazioni. Un'operazione di *spostamento* trasferisce la proprietà di una risorsa da un oggetto a quello successivo senza effettuare una copia. Alcune classi possiedono risorse quali memoria heap, handle di file e così via. Quando si implementa una classe proprietaria di risorse, è possibile definire un *costruttore di spostamento* e un operatore di assegnazione di *spostamento* . Il compilatore sceglie questi membri speciali durante la risoluzione dell'overload in situazioni in cui non è necessaria una copia. I tipi di contenitore della libreria standard richiamano il costruttore di spostamento sugli oggetti se ne è stato definito uno. Per altre informazioni, vedere [costruttori di spostamento e operatori di assegnazione di spostamento (C++)](move-constructors-and-move-assignment-operators-cpp.md).

## <a name="lambda-expressions"></a>Espressioni lambda

Nella programmazione di tipo C, una funzione può essere passata a un'altra funzione utilizzando un *puntatore a funzione*. I puntatori a funzione non sono pratici da gestire e comprendere. La funzione a cui si riferisce può essere definita altrove nel codice sorgente, lontano dal punto in cui viene richiamata. Inoltre, non sono indipendenti dai tipi. Il linguaggio C++ moderno fornisce *oggetti funzione*, classi che eseguono l'override dell' [`operator()`](function-call-operator-parens.md) operatore, che ne consente la chiamata come una funzione. Il modo più pratico per creare oggetti funzione consiste nell'usare [espressioni lambda](../cpp/lambda-expressions-in-cpp.md)inline. Nell'esempio seguente viene illustrato come usare un'espressione lambda per passare un oggetto funzione, che `for_each` verrà richiamato dalla funzione su ogni elemento nel vettore:

```cpp
    std::vector<int> v {1,2,3,4,5};
    int x = 2;
    int y = 4;
    auto result = find_if(begin(v), end(v), [=](int i) { return i > x && i < y; });
```

L'espressione lambda `[=](int i) { return i > x && i < y; }` può essere letta come "funzione che accetta un solo argomento di tipo **`int`** e restituisce un valore booleano che indica se l'argomento è maggiore di `x` e minore di `y` ". Si noti che le variabili `x` e `y` dal contesto circostante possono essere utilizzate nell'espressione lambda. `[=]`Specifica che tali variabili vengono *acquisite* in base al valore. in altre parole, l'espressione lambda ha copie proprie di tali valori.

## <a name="exceptions"></a>Eccezioni

Il linguaggio C++ moderno enfatizza le eccezioni anziché i codici di errore come il modo migliore per segnalare e gestire le condizioni di errore. Per ulteriori informazioni, vedere la pagina relativa alle [procedure consigliate C++ moderne per le eccezioni e la gestione degli errori](errors-and-exception-handling-modern-cpp.md).

## `std::atomic`

Usare lo struct della libreria standard C++ [`std::atomic`](../standard-library/atomic-structure.md) e i tipi correlati per i meccanismi di comunicazione tra thread.

## <a name="stdvariant-c17"></a>`std::variant` (C++ 17)

Le unioni vengono comunemente utilizzate nella programmazione di tipo C per conservare la memoria consentendo a membri di tipi diversi di occupare la stessa posizione di memoria. Tuttavia, le unioni non sono indipendenti dai tipi e sono soggette a errori di programmazione. In c++ 17 è stata introdotta la [`std::variant`](../standard-library/variant-class.md) classe come alternativa più affidabile e sicura alle unioni. La [`std::visit`](../standard-library/variant-functions.md#visit) funzione può essere usata per accedere ai membri di un `variant` tipo in modo indipendente dai tipi.

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)\
[Espressioni lambda](../cpp/lambda-expressions-in-cpp.md)\
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)\
[Tabella di conformità al linguaggio C++ di Microsoft](../overview/visual-cpp-language-conformance.md)
