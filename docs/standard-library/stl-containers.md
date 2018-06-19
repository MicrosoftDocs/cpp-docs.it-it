---
title: Contenitori della libreria standard C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- C++ Standard Library, template class containers
- containers, C++ Standard Library
ms.assetid: 8e915ca1-19ba-4f0d-93c8-e2c3bfd638eb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fd851ae3cf47ca260b1923d969123b21293d8623
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33862429"
---
# <a name="c-standard-library-containers"></a>Contenitori della libreria standard C++

La libreria standard fornisce vari contenitori indipendenti dai tipi per archiviare le raccolte di oggetti correlati. I contenitori sono modelli di classe. Quando si dichiara una variabile del contenitore, è necessario specificare il tipo degli elementi che saranno inclusi nel contenitore. I contenitori possono essere costruiti con un elenco di inizializzatori. Hanno funzioni membro per l'aggiunta e la rimozione di elementi e l'esecuzione di altre operazioni.

Per scorrere gli elementi di un contenitore e accedere ai singoli elementi vengono usati gli [iteratori](../standard-library/iterators.md). È possibile utilizzare gli iteratori in modo esplicito mediante le funzioni membro e gli operatori, nonché le funzioni globali. È possibile inoltre utilizzarli in modo implicito, ad esempio tramite un ciclo range-for. Gli iteratori per tutti i contenitori della libreria standard C++ sono caratterizzati da un'interfaccia comune, ma ogni contenitore definisce i propri iteratori specializzati.

I contenitori possono essere suddivisi in tre categorie: contenitori sequenza, contenitori associativi e adattatori del contenitore.

## <a name="sequence_containers"></a> Contenitori sequenziali

I contenitori sequenziali mantengono l'ordinamento degli elementi inseriti specificati.

Un contenitore `vector` si comporta come una matrice, ma può automaticamente crescere come richiesto. È ad accesso casuale, viene archiviato in modo contiguo e la lunghezza è estremamente flessibile. Per questi e altri motivi, `vector` è il contenitore sequenziale preferito per la maggior parte delle applicazioni. In caso di dubbi circa il tipo di contenitore sequenziale da usare, iniziare con un vettore. Per altre informazioni, vedere [Classe vector](../standard-library/vector-class.md).

Un contenitore `array` presenta alcuni dei punti di forza del contenitore `vector`, ma la lunghezza non è altrettanto flessibile. Per altre informazioni, vedere [Classe array](../standard-library/array-class-stl.md).

Un contenitore `deque` (coda a doppia terminazione) consente inserimenti ed eliminazioni veloci all'inizio e alla fine del contenitore. Condivide i vantaggi offerti dall'accesso casuale e dalla lunghezza flessibile del contenitore `vector`, ma non è contiguo. Per altre informazioni, vedere [Classe deque](../standard-library/deque-class.md).

Un contenitore `list` è un elenco a doppio collegamento che consente accesso bidirezionale, inserimenti ed eliminazione veloci in un punto qualsiasi del contenitore, ma non è possibile accedere in modo casuale a un elemento del contenitore. Per altre informazioni, vedere [Classe list](../standard-library/list-class.md).

Un contenitore `forward_list` è un elenco collegato singolarmente, la versione con accesso in avanti di `list`. Per altre informazioni, vedere [Classe forward_list](../standard-library/forward-list-class.md).

## <a name="associative-containers"></a>Contenitori associativi

Nei contenitori associativi, gli elementi vengono inseriti in un ordine predefinito, ad esempio in ordinamento crescente. Sono inoltre disponibili contenitori associativi non ordinati. I contenitori associativi possono essere raggruppati in due subset: mappe e set.

Una `map`, talvolta definita dizionario, è costituita da una coppia chiave/valore. La chiave viene utilizzata per ordinare la sequenza e il valore è associato a tale chiave. Ad esempio, una `map` potrebbe contenere le chiavi che rappresentano ogni parola univoca di un testo e i valori corrispondenti che rappresentano il numero di volte in cui ogni parola viene visualizzata nel testo. La versione non ordinata di `map` è `unordered_map`. Per altre informazioni, vedere [Classe map](../standard-library/map-class.md) e [Classe unordered_map](../standard-library/unordered-map-class.md).

Un `set` è semplicemente un contenitore crescente di elementi univoci: il valore è anche la chiave. La versione non ordinata di `set` è `unordered_set`. Per altre informazioni, vedere [Classe set](../standard-library/set-class.md) e [Classe unordered_set](../standard-library/unordered-set-class.md).

Sia `map` che `set` consentono l'inserimento nel contenitore solo di un'unica istanza di una chiave o di un elemento. Se vengono richieste più istanze di elementi, utilizzare `multimap` o `multiset`. Le versioni non ordinate sono `unordered_multimap` e `unordered_multiset`. Per altre informazioni, vedere [Classe multimap](../standard-library/multimap-class.md), [Classe unordered_multimap](../standard-library/unordered-multimap-class.md), [Classe multiset](../standard-library/multiset-class.md), e [Classe unordered_multiset](../standard-library/unordered-multiset-class.md).

Le mappe e i set ordinati supportano gli iteratori bidirezionali e le rispettive controparti non ordinate supportano gli iteratori in avanti. Per altre informazioni, vedere [Iteratori](../standard-library/iterators.md).

### <a name="heterogeneous-lookup-in-associative-containers-c14"></a>Ricerca eterogenea nei contenitori associativi (C++14)

I contenitori associativi ordinati (map, multimap, set e multiset) ora supportano la ricerca eterogenea, il che significa che non è più necessario passare lo stesso esatto tipo di oggetto come chiave o elemento nelle funzioni membro, ad esempio `find()` e `lower_bound()`. È invece possibile passare qualsiasi tipo per cui viene definito un `operator<` sottoposto a overload, che consente il confronto con il tipo di chiave.

La ricerca eterogenea è abilitata con consenso esplicito quando si specificano il criterio di confronto "funtore rombo" `std::less<>` o `std::greater<>` nella dichiarazione della variabile del contenitore, come qui illustrato:

```cpp
std::set<BigObject, std::less<>> myNewSet;
```

Se si usa il criterio di confronto predefinito, il contenitore si comporta esattamente come in C++11 e versioni precedenti.

L'esempio seguente mostra come eseguire l'overload di `operator<` per consentire agli utenti di un `std::set` di eseguire ricerche semplicemente passando una stringa ridotta, che può essere confrontata con il membro `BigObject::id` di ogni oggetto.

```cpp
#include <set>
#include <string>
#include <iostream>
#include <functional>

using namespace std;

class BigObject
{
public:
    string id;
    explicit BigObject(const string& s) : id(s) {}
    bool operator< (const BigObject& other) const
    {
        return this->id < other.id;
    }

    // Other members....
};

inline bool operator<(const string& otherId, const BigObject& obj)
{
    return otherId < obj.id;
}

inline bool operator<(const BigObject& obj, const string& otherId)
{
    return obj.id < otherId;
}

int main()
{
    // Use C++14 brace-init syntax to invoke BigObject(string).
    // The s suffix invokes string ctor. It is a C++14 user-defined
    // literal defined in <string>
    BigObject b1{ "42F"s };
    BigObject b2{ "52F"s };
    BigObject b3{ "62F"s };
    set<BigObject, less<>> myNewSet; // C++14
    myNewSet.insert(b1);
    myNewSet.insert(b2);
    myNewSet.insert(b3);
    auto it = myNewSet.find(string("62F"));
    if (it != myNewSet.end())
        cout << "myNewSet element = " << it->id << endl;
    else
        cout << "element not found " << endl;

    // Keep console open in debug mode:
    cout << endl << "Press Enter to exit.";
    string s;
    getline(cin, s);
    return 0;
}

//Output: myNewSet element = 62F

```

Le seguenti funzioni membro in map, multimap, set e multiset sono state sottoposte a overload per supportare la ricerca eterogenea:

1. find

1. count

1. lower_bound

1. upper_bound

1. equal_range

## <a name="container-adapters"></a>Adattatori del contenitore

Gli adattatori del contenitore costituiscono una variante del contenitore sequenza o associativo che limitano l'interfaccia per una maggiore semplicità e chiarezza. Gli adattatori dei contenitori non supportano gli iteratori.

Un contenitore `queue` segue la semantica FIFO (first-in-first-out). Il primo elemento *inserito* nella coda è il primo a essere *prelevato*, ovvero rimosso dalla coda. Per altre informazioni, vedere [Classe queue](../standard-library/queue-class.md).

Un contenitore `priority_queue` è organizzato in modo tale che l'elemento con il valore più alto è sempre il primo della coda. Per altre informazioni, vedere [Classe priority_queue](../standard-library/priority-queue-class.md).

Un contenitore `stack` segue la semantica LIFO (last in, first out). L'ultimo elemento inserito nello stack è il primo elemento prelevato. Per altre informazioni, vedere [Classe stack](../standard-library/stack-class.md).

Poiché gli adattatori del contenitore non supportano gli iteratori, non possono essere usati con gli algoritmi della libreria standard C++. Per altre informazioni, vedere [Algoritmi](../standard-library/algorithms.md).

## <a name="requirements-for-container-elements"></a>Requisiti per gli elementi contenitore

In genere, gli elementi inseriti in un contenitore della libreria standard C++, se sono copiabili, possono essere di quasi tutti i tipi di oggetto. Gli elementi solo mobili, quali ad esempio `vector<unique_ptr<T>>` creati mediante `unique_ptr<>` funzioneranno purché non vengano chiamate le funzioni membro che tentano di copiarli.

Il distruttore non può generare un'eccezione.

I contenitori associativi ordinati, descritti precedentemente in questo articolo, devono disporre di un operatore di confronto pubblico definito. (Per impostazione predefinita, l'operatore è `operator<`, ma sono supportati anche i tipi che non funzionano con `operator<`.

Alcune operazioni sui contenitori potrebbero anche richiedere un costruttore predefinito pubblico e un operatore di equivalenza pubblico. Ad esempio, i contenitori associativi non ordinati richiedono il supporto per le operazioni di uguaglianza e hashing.

## <a name="accessing-container-elements"></a>Accesso agli elementi contenitore

Agli elementi dei contenitori si accede tramite gli iteratori. Per altre informazioni, vedere [Iteratori](../standard-library/iterators.md).

> [!NOTE]
> È inoltre possibile usare i [cicli for basati sull'intervallo](../cpp/range-based-for-statement-cpp.md) per scorrere le raccolte STL.

## <a name="comparing-containers"></a>Confronto tra contenitori

Tutti i contenitori sottopongono a overload l'operatore == per confrontare due contenitori dello stesso tipo che hanno lo stesso tipo di elemento. È possibile usare == per confrontare un oggetto vector\<string> con un altro oggetto vector\<string>, ma non è possibile usarlo per confrontare un oggetto vector\<string> con un oggetto list\<string> o un oggetto vector\<string> con un oggetto vector\<char*>.  In C++98/03 è possibile usare [std::equal](algorithm-functions.md#equal) o [std::mismatch](algorithm-functions.md#mismatch) per confrontare tipi di contenitori e/o tipi di elemento dissimili. In C++ 11 è anche possibile usare [std::is_permutation](algorithm-functions.md#is_permutation). Ma in tutti questi casi le funzioni presuppongono che i contenitori siano della stessa lunghezza. Se il secondo intervallo è più breve del primo, ne risulta un comportamento indefinito. Se il secondo intervallo è più lungo, i risultati possono ancora risultare errati perché il confronto non va oltre la fine del primo intervallo.

### <a name="comparing-dissimilar-containers-c14"></a>Confronto tra contenitori dissimili (C++14)

In C++14 e versioni successive è possibile confrontare i diversi contenitori e/o tipi di elementi diversi usando uno degli overload delle funzioni **std::equal**, **std::mismatch** o **std::is_permutation** che impiegano due intervalli completi. Questi overload consentono di confrontare i contenitori con lunghezze diverse. Questi overload sono molto meno soggetti a errori e ottimizzati in modo da restituire false in un tempo costante quando vengono confrontati i contenitori di lunghezze diverse. Di conseguenza, è consigliabile usare questi overload a meno che (1) si abbia un motivo molto chiaro per non farlo; (2) si usa un contenitore [std::list](../standard-library/list-class.md), che non trae vantaggio dalle ottimizzazioni a doppio intervallo.

## <a name="see-also"></a>Vedere anche

[Contenitori](../cpp/containers-modern-cpp.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
[\<sample container>](../standard-library/sample-container.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
