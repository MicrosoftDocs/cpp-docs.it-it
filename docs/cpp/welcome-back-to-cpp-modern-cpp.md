---
title: Bentornato a C .
description: Descrive i nuovi idiomi di programmazione in C , e la relativa logica.
ms.date: 01/10/2020
ms.topic: conceptual
ms.assetid: 1cb1b849-ed9c-4721-a972-fd8f3dab42e2
ms.openlocfilehash: 7d0fcb623162713b845107bbf00669af7ae5ca98
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369498"
---
# <a name="welcome-back-to-c---modern-c"></a>Bentornato a C .

Fin dalla sua creazione, il linguaggio di programmazione è diventato uno dei linguaggi di programmazione più utilizzati al mondo. I programmi in C++ ben scritti sono veloci ed efficienti. La lingua è più flessibile di altre lingue: può funzionare ai più alti livelli di astrazione, e giù a livello del silicio. Il linguaggio Cè fornisce librerie standard altamente ottimizzate. Consente l'accesso a funzionalità hardware di basso livello, per massimizzare la velocità e ridurre al minimo i requisiti di memoria. L'uso di C ' . Giochi, driver di dispositivo e software scientifico ad alte prestazioni. Programmi incorporati. App client di Windows. Anche le librerie e i compilatori per altri linguaggi di programmazione vengono scritti in C.

Uno dei requisiti originali di C++ era la compatibilità con le versioni precedenti del linguaggio C. Di conseguenza, c'è sempre consentita la programmazione di tipo C, con puntatori non elaborati, matrici, stringhe di caratteri con terminazione null e altre funzionalità. Possono consentire grandi prestazioni, ma possono anche generare bug e complessità. L'evoluzione del linguaggio C, ha enfatizzato le caratteristiche che riducono notevolmente la necessità di utilizzare idiomi di tipo C. Le vecchie strutture di programmazione C sono lì quando ne hai bisogno, ma con il moderno codice C . Il codice C'è più semplice, più sicuro, più elegante e ancora più veloce che mai.

Nelle sezioni seguenti viene fornita una panoramica delle principali caratteristiche del linguaggio C. Se non diversamente specificato, le funzionalità elencate di seguito sono disponibili in C . Nel compilatore di Microsoft C, è possibile impostare l'opzione del compilatore [/std](../build/reference/std-specify-language-standard-version.md) per specificare la versione dello standard da utilizzare per il progetto.

## <a name="resources-and-smart-pointers"></a>Risorse e puntatori intelligenti

Una delle principali classi di bug nella programmazione di tipo C è la *perdita*di memoria . Le perdite sono spesso causate da un errore di chiamata di **eliminazione** per la memoria allocata con **new**. Il principio dell'acquisizione delle *risorse è l'inizializzazione* (RAII) moderna. L'idea è semplice. Le risorse (memoria heap, handle di file, socket e così via) devono essere *di proprietà* di un oggetto. Tale oggetto crea, o riceve, la risorsa appena allocata nel relativo costruttore e la elimina nel distruttore. Il principio di RAII garantisce che tutte le risorse vengano restituite correttamente al sistema operativo quando l'oggetto proprietario esce dall'ambito.

Per facilitare l'adozione dei principi RAII, la libreria standard di C' fornisce tre tipi di puntatori intelligenti: [std::unique_ptr](../standard-library/unique-ptr-class.md), [std::shared_ptr](../standard-library/shared-ptr-class.md)e [std::weak_ptr](../standard-library/weak-ptr-class.md). Un puntatore intelligente gestisce l'allocazione e l'eliminazione della memoria di cui è proprietario. Nell'esempio riportato di seguito viene illustrata una classe `make_unique()`con un membro di matrice allocato nell'heap nella chiamata a . Le chiamate a **new** e **delete** sono incapsulate dalla `unique_ptr` classe. Quando `widget` un oggetto esce dall'ambito, verrà richiamato il unique_ptr distruttore e rilascerà la memoria allocata per la matrice.  

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

Quando possibile, utilizzare un puntatore intelligente durante l'allocazione della memoria heap. Se è necessario utilizzare gli operatori new e delete in modo esplicito, seguire il principio di RAII. Per ulteriori informazioni, vedere [Durata degli oggetti e gestione delle risorse (RAII)](object-lifetime-and-resource-management-modern-cpp.md).

## <a name="stdstring-and-stdstring_view"></a>std::string e std::string_view

Le stringhe di tipo C sono un'altra fonte importante di bug. Utilizzando [std::string e std::wstring](../standard-library/basic-string-class.md), è possibile eliminare praticamente tutti gli errori associati alle stringhe di tipo C. È inoltre possibile ottenere il vantaggio delle funzioni membro per la ricerca, l'aggiunta, la preparazione e così via. Entrambi sono altamente ottimizzati per la velocità. Quando si passa una stringa a una funzione che richiede solo l'accesso in sola lettura, in C, 17 è possibile usare [std::string_view](../standard-library/basic-string-view-class.md) per ottenere prestazioni ancora maggiori.

## <a name="stdvector-and-other-standard-library-containers"></a>std::vector e altri contenitori della libreria standard

I contenitori della Biblioteca Standard seguono tutti il principio del RAII. Forniscono iteratori per l'attraversamento sicuro degli elementi. E, sono altamente ottimizzati per le prestazioni e sono stati accuratamente testati per la correttezza. Utilizzando questi contenitori, si elimina il rischio di bug o inefficienze che potrebbero essere introdotte in strutture di dati personalizzate. Invece di matrici non elaborate, utilizzare [vector](../standard-library/vector-class.md) come un contenitore sequenziale in C .

```cpp
vector<string> apples;
apples.push_back("Granny Smith");
```

Utilizzare [map](../standard-library/map-class.md) `unordered_map`(non ) come contenitore associativo predefinito. Utilizzare [set](../standard-library/set-class.md), [multimap](../standard-library/multimap-class.md)e multiset per i casi degenerati e [multiimpostati.](../standard-library/multiset-class.md)

```cpp
map<string, string> apple_color;
// ...
apple_color["Granny Smith"] = "Green";
```

Quando è necessaria l'ottimizzazione delle prestazioni, prendere in considerazione l'uso di:When performance optimization is needed, consider using:

- Il tipo di [matrice](../standard-library/array-class-stl.md) durante l'incorporamento è importante, ad esempio, come membro di classe.

- Contenitori associativi non ordinati, ad esempio [unordered_map](../standard-library/unordered-map-class.md). Questi hanno un overhead per elemento inferiore e una ricerca in tempo costante, ma possono essere più difficili da usare in modo corretto ed efficiente.

- Ordinato `vector`. Per altre informazioni, vedere [Algoritmi](../cpp/algorithms-modern-cpp.md).

Non usare matrici di tipo C.Don't use C-style arrays. Per le API meno recenti che richiedono l'accesso diretto `f(vec.data(), vec.size());` ai dati, usare invece i metodi della funzione di accesso. Per ulteriori informazioni sui contenitori, vedere Contenitori di [librerie standard di C.](../standard-library/stl-containers.md)

## <a name="standard-library-algorithms"></a>Algoritmi di libreria standard

Prima di presupporre che sia necessario scrivere un algoritmo personalizzato per il programma, esaminare prima [gli algoritmi](../standard-library/algorithm.md)della libreria standard di C. La libreria standard contiene un assortimento in continua crescita di algoritmi per molte operazioni comuni come la ricerca, l'ordinamento, il filtro e la randomizzazione. La biblioteca matematica è ampia. A partire da C,17, vengono fornite versioni parallele di molti algoritmi.

Ecco alcuni esempi importanti:

- **for_each**, l'algoritmo di attraversamento predefinito (insieme ai cicli for basati sull'intervallo).

- **transform**, per la modifica non sul posto degli elementi contenitore

- **find_if**, l'algoritmo di ricerca predefinito.

- **sort**, **lower_bound**e gli altri algoritmi di ordinamento e ricerca predefiniti.

Per scrivere un comparatore, usare strict **<** e usare espressioni lambda *denominate* quando è possibile.

```cpp
auto comp = [](const widget& w1, const widget& w2)
     { return w1.weight() < w2.weight(); }

sort( v.begin(), v.end(), comp );

auto i = lower_bound( v.begin(), v.end(), comp );
```

## <a name="auto-instead-of-explicit-type-names"></a>auto invece di nomi di tipi espliciti

La parola chiave [auto è](auto-cpp.md) stata introdotta in un'opzione variabile, una funzione e un modello. **auto** indica al compilatore di dedurre il tipo dell'oggetto in modo che non sia necessario digitarlo in modo esplicito. **auto** è particolarmente utile quando il tipo dedotto è un modello nidificato:

```cpp
map<int,list<string>>::iterator i = m.begin(); // C-style
auto i = m.begin(); // modern C++
```

## <a name="range-based-for-loops"></a>Cicli for basati sull'intervallo

L'iterazione di tipo C su matrici e contenitori è soggetta a errori di indicizzazione ed è anche noiosa per il tipo. Per eliminare questi errori e rendere il codice più leggibile, usare cicli for basati su intervallo con contenitori della libreria standard e matrici non elaborate. Per ulteriori informazioni, vedere [Range-based for statement](../cpp/range-based-for-statement-cpp.md).

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

## <a name="constexpr-expressions-instead-of-macros"></a>Espressioni constexpr invece di macro

Le macro in C e in C, sono token elaborati dal preprocessore prima della compilazione. Ogni istanza di un token macro viene sostituita con il valore o l'espressione definita prima che il file venga compilato. Le macro vengono comunemente utilizzate nella programmazione di tipo C per definire valori costanti in fase di compilazione. Tuttavia, le macro sono soggette a errori e difficili da eseguire il debug. Nel moderno c'è, è necessario preferire le variabili constexpr per le costanti in fase di compilazione:In modern C's, you should prefer [constexpr](constexpr-cpp.md) variables for compile-time constants:

```cpp
#define SIZE 10 // C-style
constexpr int size = 10; // modern C++
```

### <a name="uniform-initialization"></a>Inizializzazione uniforme

Nel linguaggio C, è possibile utilizzare l'inizializzazione delle parentesi graffe per qualsiasi tipo. Questa forma di inizializzazione è particolarmente utile durante l'inizializzazione di matrici, vettori o altri contenitori. Nell'esempio riportato di seguito, `v2` `S`viene inizializzato con tre istanze di . `v3`viene inizializzato con `S` tre istanze di che vengono inizializzate utilizzando le parentesi graffe. Il compilatore deduce il tipo di ogni `v3`elemento in base al tipo dichiarato di .

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

Per ulteriori informazioni, vedere [Inizializzazione parentesi graffe](initializing-classes-and-structs-without-constructors-cpp.md).

## <a name="move-semantics"></a>Semantica di spostamento

La moderna funzionalità *move semantics*di spostamento è disponibile, che consente di eliminare le copie di memoria non necessarie. Nelle versioni precedenti della lingua, le copie erano inevitabili in determinate situazioni. Un'operazione di *spostamento* trasferisce la proprietà di una risorsa da un oggetto a quello successivo senza crearne una copia. Quando si implementa una classe proprietaria di una risorsa, ad esempio memoria heap, handle di file e così via, è possibile definire un *costruttore* di spostamento e un operatore di *assegnazione* di spostamento per tale risorsa. Il compilatore sceglierà questi membri speciali durante la risoluzione dell'overload in situazioni in cui non è necessaria una copia. I tipi di contenitore Libreria standard richiamano il costruttore di spostamento sugli oggetti, se ne è definito uno. Per ulteriori informazioni, vedere [Costruttori di spostamento e operatori](move-constructors-and-move-assignment-operators-cpp.md)di assegnazione di spostamento (C ) .

## <a name="lambda-expressions"></a>Espressioni lambda

Nella programmazione di tipo C, una funzione può essere passata a un'altra funzione utilizzando un *puntatore a funzione*. I puntatori a funzione sono scomodi da mantenere e comprendere. La funzione a cui fanno riferimento può essere definita altrove nel codice sorgente, lontano dal punto in cui viene richiamata. Inoltre, non sono indipendenti dai tipi. Il linguaggio moderno C, *ovvero*il linguaggio C, fornisce classi che eseguono l'override dell'operatore [()](function-call-operator-parens.md) , che ne consente la chiamata come una funzione. Il modo più pratico per creare oggetti funzione è con le [espressioni lambda](../cpp/lambda-expressions-in-cpp.md)inline . Nell'esempio seguente viene illustrato come usare un'espressione `for_each` lambda per passare un oggetto funzione, che la funzione richiamerà su ogni elemento nel vettore:The following example shows how to use a lambda expression to pass a function object, that the function will invoke on each element in the vector:

```cpp
    std::vector<int> v {1,2,3,4,5};
    int x = 2;
    int y = 4;
    auto result = find_if(begin(v), end(v), [=](int i) { return i > x && i < y; });
```

L'espressione `[=](int i) { return i > x && i < y; }` lambda può essere letta come "funzione `int` che accetta un singolo argomento di `x` tipo e `y`restituisce un valore booleano che indica se l'argomento è maggiore e minore di". Si noti `x` `y` che le variabili e dal contesto circostante possono essere utilizzate nell'espressione lambda. L'oggetto `[=]` specifica che tali variabili vengono *acquisite* per valore; in altre parole, l'espressione lambda ha le proprie copie di tali valori.

## <a name="exceptions"></a>Eccezioni

Il linguaggio moderno C, invece dei codici di errore, viene enfatizzato anziché i codici di errore come il modo migliore per segnalare e gestire le condizioni di errore. Per ulteriori informazioni, vedere [Procedure consigliate per la gestione delle eccezioni e](errors-and-exception-handling-modern-cpp.md)degli errori di C.

## <a name="stdatomic"></a>std::atomic

Utilizzare lo struct [std::atomic della](../standard-library/atomic-structure.md) libreria standard di C' e i tipi correlati per i meccanismi di comunicazione tra thread.

## <a name="stdvariant-c17"></a>std::variant (C

Le unioni vengono comunemente utilizzate nella programmazione di tipo C per risparmiare memoria consentendo ai membri di tipi diversi di occupare la stessa posizione di memoria. Tuttavia, le unioni non sono indipendenti dai tipi e sono soggette a errori di programmazione. La classe [std::variant](../standard-library/variant-class.md) è un'alternativa più robusta e sicura alle unioni. La funzione [std::visit](../standard-library/variant-functions.md#visit) può essere utilizzata `variant` per accedere ai membri di un tipo in modo indipendente dai tipi.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento al linguaggio C](../cpp/cpp-language-reference.md)\
[Espressioni lambdaLambda Expressions](../cpp/lambda-expressions-in-cpp.md)\
[Libreria standard di C](../standard-library/cpp-standard-library-reference.md)\
[Tabella di conformità al linguaggio C++ di Microsoft](../overview/visual-cpp-language-conformance.md)
