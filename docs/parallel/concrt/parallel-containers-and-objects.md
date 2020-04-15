---
title: Contenitori e oggetti paralleli
ms.date: 03/27/2019
helpviewer_keywords:
- parallel objects
- parallel containers
- concurrent containers
ms.assetid: 90ab715c-29cd-48eb-8e76-528619aab466
ms.openlocfilehash: f3fb2bb57c8bcf65de0a7f74f2992050d8257429
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363050"
---
# <a name="parallel-containers-and-objects"></a>Contenitori e oggetti paralleli

La libreria PPL (Parallel Patterns Library) include diversi contenitori e oggetti che forniscono l'accesso thread-safe ai relativi elementi.

Un *contenitore simultaneo* fornisce l'accesso sicuro per la concorrenza alle operazioni più importanti. In questo caso, concurrency-safe indica che i puntatori o gli iteratori sono sempre validi. Non è una garanzia di inizializzazione dell'elemento o di un particolare ordine di attraversamento. La funzionalità di questi contenitori è simile a quelle fornite dalla libreria standard di C. Ad esempio, la classe [concurrency::concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) è simile alla classe `concurrent_vector` [std::vector,](../../standard-library/vector-class.md) con la differenza che la classe consente di aggiungere elementi in parallelo. Usare contenitori simultanei quando si dispone di codice parallelo che richiede l'accesso in lettura e scrittura allo stesso contenitore.

Un *oggetto simultaneo* viene condiviso contemporaneamente tra i componenti. Un processo che calcola lo stato di un oggetto simultaneo in parallelo produce lo stesso risultato di un altro processo che calcola lo stesso stato in modo seriale. La classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) è un esempio di tipo di oggetto simultaneo. La `combinable` classe consente di eseguire calcoli in parallelo e quindi combinare tali calcoli in un risultato finale. Utilizzare oggetti simultanei quando si utilizzerebbe in altro modo un meccanismo di sincronizzazione, ad esempio un mutex, per sincronizzare l'accesso a una risorsa o a una variabile condivisa.

## <a name="sections"></a><a name="top"></a>Sezioni

In questo argomento vengono descritti in dettaglio i contenitori e gli oggetti paralleli seguenti.

Contenitori simultanei:

- [classe concurrent_vector](#vector)

  - [Differenze tra concurrent_vector e vettoriali](#vector-differences)

  - [Operazioni indipendenti dalla concorrenzaConcurrency-Safe Operations](#vector-safety)

  - [Sicurezza delle eccezioni](#vector-exceptions)

- [Classe concurrent_queue](#queue)

  - [Differenze tra concurrent_queue e coda](#queue-differences)

  - [Operazioni indipendenti dalla concorrenzaConcurrency-Safe Operations](#queue-safety)

  - [Supporto Iterator](#queue-iterators)

- [Classe concurrent_unordered_map](#unordered_map)

  - [Differenze tra concurrent_unordered_map e unordered_map](#map-differences)

  - [Operazioni indipendenti dalla concorrenzaConcurrency-Safe Operations](#map-safety)

- [Classe concurrent_unordered_multimap](#unordered_multimap)

- [Classe concurrent_unordered_set](#unordered_set)

- [Classe concurrent_unordered_multiset](#unordered_multiset)

Oggetti simultanei:

- [classe combinabile](#combinable)

  - [Metodi e caratteristiche](#combinable-features)

  - [Esempi](#combinable-examples)

## <a name="concurrent_vector-class"></a><a name="vector"></a>classe concurrent_vector

La classe [concurrency::concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) è una classe contenitore di sequenze che, proprio come la classe [std::vector,](../../standard-library/vector-class.md) consente di accedere in modo casuale ai relativi elementi. La `concurrent_vector` classe abilita le operazioni di aggiunta e accesso agli elementi indipendenti dalla concorrenza. Le operazioni di accodamento non invalidano i puntatori o gli iteratori esistenti. Anche le operazioni di accesso e attraversamento dell'iteratore sono indipendenti dalla concorrenza. In questo caso, concurrency-safe indica che i puntatori o gli iteratori sono sempre validi. Non è una garanzia di inizializzazione dell'elemento o di un particolare ordine di attraversamento.

### <a name="differences-between-concurrent_vector-and-vector"></a><a name="vector-differences"></a>Differenze tra concurrent_vector e vettoriali

La `concurrent_vector` classe è `vector` molto simile alla classe. La complessità delle operazioni di accodamento, accesso `concurrent_vector` agli elementi e `vector` accesso iteratore su un oggetto è la stessa di un oggetto. I seguenti punti `concurrent_vector` illustrano `vector`dove differisce da:

- Le operazioni di attraversamento di accodamento, `concurrent_vector` di aggiunta di elementi, di accesso iteratore e di attraversamento dell'iteratore su un oggetto sono indipendenti dalla concorrenza.

- È possibile aggiungere elementi solo `concurrent_vector` alla fine di un oggetto. La `concurrent_vector` classe non `insert` fornisce il metodo.

- Un `concurrent_vector` oggetto non utilizza [la semantica](../../cpp/rvalue-reference-declarator-amp-amp.md) di spostamento quando si aggiunge ad esso.

- La `concurrent_vector` classe non `erase` fornisce `pop_back` i metodi o . Come `vector`per , utilizzare il metodo [clear](reference/concurrent-vector-class.md#clear) per rimuovere tutti gli elementi da un `concurrent_vector` oggetto.

- La `concurrent_vector` classe non archivia i propri elementi in modo contiguo in memoria. Pertanto, è `concurrent_vector` possibile utilizzare la classe in tutti i modi in cui è possibile utilizzare una matrice. Ad esempio, per `v` una `concurrent_vector`variabile denominata di tipo , l'espressione `&v[0]+2` produce un comportamento indefinito.

- La `concurrent_vector` classe definisce i [metodi grow_by](reference/concurrent-vector-class.md#grow_by) e [grow_to_at_least.](reference/concurrent-vector-class.md#grow_to_at_least) Questi metodi sono simili al metodo [resize,](reference/concurrent-vector-class.md#resize) ad eccezione del fatto che sono indipendenti dalla concorrenza.

- Un `concurrent_vector` oggetto non riposiziona i relativi elementi quando viene aggiunto o ridimensionato. Ciò consente ai puntatori e agli iteratori esistenti di rimanere validi durante le operazioni simultanee.

- Il runtime non definisce `concurrent_vector` una `bool`versione specializzata di per il tipo .

### <a name="concurrency-safe-operations"></a><a name="vector-safety"></a>Operazioni indipendenti dalla concorrenzaConcurrency-Safe Operations

Tutti i metodi che aggiungono o `concurrent_vector` aumentano le dimensioni `concurrent_vector` di un oggetto o accedono a un elemento in un oggetto sono indipendenti dalla concorrenza. In questo caso, concurrency-safe indica che i puntatori o gli iteratori sono sempre validi. Non è una garanzia di inizializzazione dell'elemento o di un particolare ordine di attraversamento. L'eccezione a `resize` questa regola è il metodo.

Nella tabella seguente `concurrent_vector` vengono illustrati i metodi e gli operatori comuni indipendenti dalla concorrenza.

||||
|-|-|-|
|[A](reference/concurrent-vector-class.md#at)|[end](reference/concurrent-vector-class.md#end)|[operator&#91;&#93;](reference/concurrent-vector-class.md#operator_at)|
|[Iniziare](reference/concurrent-vector-class.md#begin)|[Fronte](reference/concurrent-vector-class.md#front)|[push_back](reference/concurrent-vector-class.md#push_back)|
|[Indietro](reference/concurrent-vector-class.md#back)|[grow_by](reference/concurrent-vector-class.md#grow_by)|[rbegin](reference/concurrent-vector-class.md#rbegin)|
|[Capacità](reference/concurrent-vector-class.md#capacity)|[grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least)|[rend](reference/concurrent-vector-class.md#rend)|
|[Vuoto](reference/concurrent-vector-class.md#empty)|[max_size](reference/concurrent-vector-class.md#max_size)|[Dimensione](reference/concurrent-vector-class.md#size)|

Le operazioni fornite dal runtime per la compatibilità con `reserve`la libreria standard di C, ad esempio , non sono indipendenti dalla concorrenza. Nella tabella seguente vengono illustrati i metodi e gli operatori comuni non indipendenti dalla concorrenza.

|||
|-|-|
|[Assegnare](reference/concurrent-vector-class.md#assign)|[Riserva](reference/concurrent-vector-class.md#reserve)|
|[Chiaro](reference/concurrent-vector-class.md#clear)|[Ridimensionare](reference/concurrent-vector-class.md#resize)|
|[operatore di comando](reference/concurrent-vector-class.md#operator_eq)|[shrink_to_fit](reference/concurrent-vector-class.md#shrink_to_fit)|

Le operazioni che modificano il valore degli elementi esistenti non sono indipendenti dalla concorrenza. Utilizzare un oggetto di sincronizzazione, ad esempio un [oggetto reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) per sincronizzare le operazioni di lettura e scrittura simultanee nello stesso elemento di dati. Per ulteriori informazioni sugli oggetti di sincronizzazione, vedere Strutture dei dati di [sincronizzazione](../../parallel/concrt/synchronization-data-structures.md).

Quando si converte `vector` codice `concurrent_vector`esistente che utilizza per utilizzare , le operazioni simultanee possono causare la modifica del comportamento dell'applicazione. Si consideri, ad esempio, il programma `concurrent_vector` seguente che esegue contemporaneamente due attività su un oggetto. La prima attività aggiunge elementi `concurrent_vector` aggiuntivi a un oggetto. La seconda attività calcola la somma di tutti gli elementi nello stesso oggetto.

[!code-cpp[concrt-vector-safety#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_1.cpp)]

Anche `end` se il metodo è indipendente dalla concorrenza, una chiamata simultanea al `end` metodo [push_back](reference/concurrent-vector-class.md#push_back) determina la modifica del valore restituito da. Il numero di elementi attraversati dall'iteratore è indeterminato. Pertanto, questo programma può produrre un risultato diverso ogni volta che viene eseguito. Quando il tipo di elemento non è semplice, è possibile `push_back` `end` che esista una race condition tra e le chiamate. Il `end` metodo può restituire un elemento allocato, ma non completamente inizializzato.

### <a name="exception-safety"></a><a name="vector-exceptions"></a>Sicurezza delle eccezioni

Se un'operazione di crescita o assegnazione `concurrent_vector` genera un'eccezione, lo stato dell'oggetto diventa non valido. Il comportamento `concurrent_vector` di un oggetto che si trova in uno stato non valido è definito se non diversamente specificato. Tuttavia, il distruttore libera sempre la memoria allocata dall'oggetto, anche se l'oggetto è in uno stato non valido.

Il tipo di dati `T`degli elementi vettoriali, , deve soddisfare i requisiti seguenti. In caso contrario, il comportamento della `concurrent_vector` classe non è definito.

- Il distruttore non deve generare.

- Se il costruttore predefinito o di copia genera un'eccezione, il distruttore non deve essere dichiarato utilizzando la `virtual` parola chiave e deve funzionare correttamente con memoria inizializzata su zero.

[[In alto](#top)]

## <a name="concurrent_queue-class"></a><a name="queue"></a>Classe concurrent_queue

La classe [concurrency::concurrent_queue,](../../parallel/concrt/reference/concurrent-queue-class.md) proprio come la classe [std::queue,](../../standard-library/queue-class.md) consente di accedere agli elementi front a front. La `concurrent_queue` classe abilita le operazioni di accodamento e rimozione dalla coda indipendenti dalla concorrenza. In questo caso, concurrency-safe indica che i puntatori o gli iteratori sono sempre validi. Non è una garanzia di inizializzazione dell'elemento o di un particolare ordine di attraversamento. La `concurrent_queue` classe fornisce anche il supporto iteratore che non è indipendente dalla concorrenza.

### <a name="differences-between-concurrent_queue-and-queue"></a><a name="queue-differences"></a>Differenze tra concurrent_queue e coda

La `concurrent_queue` classe è `queue` molto simile alla classe. I seguenti punti `concurrent_queue` illustrano `queue`dove differisce da:

- Le operazioni di accodamento `concurrent_queue` e accodamento su un oggetto sono indipendenti dalla concorrenza.

- La `concurrent_queue` classe fornisce il supporto iteratore che non è indipendente dalla concorrenza.

- La `concurrent_queue` classe non `front` fornisce `pop` i metodi o . La `concurrent_queue` classe sostituisce questi metodi definendo il [metodo try_pop.](reference/concurrent-queue-class.md#try_pop)

- La `concurrent_queue` classe non `back` fornisce il metodo. Pertanto, non è possibile fare riferimento alla fine della coda.

- La `concurrent_queue` classe [unsafe_size](reference/concurrent-queue-class.md#unsafe_size) fornisce il metodo `size` unsafe_size anziché il metodo . Il `unsafe_size` metodo non è indipendente dalla concorrenza.

### <a name="concurrency-safe-operations"></a><a name="queue-safety"></a>Operazioni indipendenti dalla concorrenzaConcurrency-Safe Operations

Tutti i metodi che accodano `concurrent_queue` o accodano da un oggetto sono indipendenti dalla concorrenza. In questo caso, concurrency-safe indica che i puntatori o gli iteratori sono sempre validi. Non è una garanzia di inizializzazione dell'elemento o di un particolare ordine di attraversamento.

Nella tabella seguente `concurrent_queue` vengono illustrati i metodi e gli operatori comuni indipendenti dalla concorrenza.

|||
|-|-|
|[Vuoto](reference/concurrent-queue-class.md#empty)|[push](reference/concurrent-queue-class.md#push)|
|[get_allocator](reference/concurrent-queue-class.md#get_allocator)|[try_pop](reference/concurrent-queue-class.md#try_pop)|

Sebbene `empty` il metodo sia indipendente dalla concorrenza, un'operazione simultanea `empty` può causare l'aumento o la riduzione della coda prima che il metodo venga restituito.

Nella tabella seguente vengono illustrati i metodi e gli operatori comuni non indipendenti dalla concorrenza.

|||
|-|-|
|[Chiaro](reference/concurrent-queue-class.md#clear)|[unsafe_end](reference/concurrent-queue-class.md#unsafe_end)|
|[unsafe_begin](reference/concurrent-queue-class.md#unsafe_begin)|[unsafe_size](reference/concurrent-queue-class.md#unsafe_size)|

### <a name="iterator-support"></a><a name="queue-iterators"></a>Supporto Iterator

Fornisce `concurrent_queue` iteratori che non sono indipendenti dalla concorrenza. È consigliabile usare questi iteratori solo per il debug.

Un `concurrent_queue` iteratore attraversa solo gli elementi nella direzione in avanti. Nella tabella seguente vengono illustrati gli operatori supportati da ogni iteratore.

|Operatore|Descrizione|
|--------------|-----------------|
|`operator++`|Passa all'elemento successivo nella coda. Questo operatore viene sottoposto a overload per fornire la semantica di pre-incremento e post-incremento.|
|`operator*`|Recupera un riferimento all'elemento corrente.|
|`operator->`|Recupera un puntatore all'elemento corrente.|

[[In alto](#top)]

## <a name="concurrent_unordered_map-class"></a><a name="unordered_map"></a>Classe concurrent_unordered_map

La classe [concurrency::concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) è una classe contenitore associativa che, proprio come la classe [std::unordered_map](../../standard-library/unordered-map-class.md) , controlla una sequenza di lunghezza variabile di elementi di tipo [std::pair\<const Key, Ty>](../../standard-library/pair-structure.md). Si consideri una mappa non ordinata come un dizionario a cui è possibile aggiungere una coppia chiave/valore o cercare un valore in base alla chiave. Questa classe è utile quando si dispone di più thread o attività che devono accedere contemporaneamente a un contenitore condiviso, inserirlo o aggiornarlo.

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_map`. In questo esempio vengono inseriti tasti di carattere nell'intervallo ['a', 'i']. Poiché l'ordine delle operazioni non è determinato, anche il valore finale per ogni chiave è indeterminato. Tuttavia, è sicuro eseguire gli inserimenti in parallelo.

[!code-cpp[concrt-unordered-map-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_2.cpp)]

Per un esempio `concurrent_unordered_map` che utilizza per eseguire una mappa e ridurre l'operazione in parallelo, vedere [Procedura: eseguire operazioni di mapping e ridurre le operazioni in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).

### <a name="differences-between-concurrent_unordered_map-and-unordered_map"></a><a name="map-differences"></a>Differenze tra concurrent_unordered_map e unordered_map

La `concurrent_unordered_map` classe è `unordered_map` molto simile alla classe. I seguenti punti `concurrent_unordered_map` illustrano `unordered_map`dove differisce da:

- I `erase` `bucket` `bucket_size` metodi `bucket_count`, , e `unsafe_bucket` `unsafe_bucket_count`sono `unsafe_bucket_size`denominati `unsafe_erase`rispettivamente , , e , . La `unsafe_` convenzione di denominazione indica che questi metodi non sono indipendenti dalla concorrenza. Per ulteriori informazioni sulla sicurezza della concorrenza, vedere [Concurrency-Safe Operations](#map-safety).

- Le operazioni di inserimento non invalidano i puntatori o gli iteratori esistenti, né modificano l'ordine degli elementi già esistenti nella mappa. Le operazioni di inserimento e attraversamento possono essere eseguite contemporaneamente.

- `concurrent_unordered_map`supporta solo l'iterazione in avanti.

- L'inserimento non invalida né aggiorna gli `equal_range`iteratori restituiti da . L'inserimento può aggiungere elementi diversi alla fine dell'intervallo. L'iteratore begin punta a un elemento uguale.

Per evitare deadlock, `concurrent_unordered_map` nessun metodo di blocco viene eseguito quando chiama l'allocatore di memoria, le funzioni hash o altro codice definito dall'utente. Inoltre, è necessario assicurarsi che la funzione hash restituisca sempre le chiavi uguali allo stesso valore. Le migliori funzioni hash distribuiscono le chiavi in modo uniforme nello spazio del codice hash.

### <a name="concurrency-safe-operations"></a><a name="map-safety"></a>Operazioni indipendenti dalla concorrenzaConcurrency-Safe Operations

La `concurrent_unordered_map` classe abilita le operazioni di inserimento e accesso agli elementi indipendenti dalla concorrenza. Le operazioni di inserimento non invalidano i puntatori o gli iteratori esistenti. Anche le operazioni di accesso e attraversamento dell'iteratore sono indipendenti dalla concorrenza. In questo caso, concurrency-safe indica che i puntatori o gli iteratori sono sempre validi. Non è una garanzia di inizializzazione dell'elemento o di un particolare ordine di attraversamento. Nella tabella seguente vengono `concurrent_unordered_map` illustrati i metodi e gli operatori comunemente utilizzati che sono indipendenti dalla concorrenza.

|||||
|-|-|-|-|
|[A](reference/concurrent-unordered-map-class.md#at)|`count`|`find`|[key_eq](reference/concurrent-unordered-map-class.md#key_eq)|
|`begin`|`empty`|`get_allocator`|`max_size`|
|`cbegin`|`end`|`hash_function`|[operator&#91;&#93;](reference/concurrent-unordered-map-class.md#operator_at)|
|`cend`|`equal_range`|[Inserire](reference/concurrent-unordered-map-class.md#insert)|`size`|

Sebbene `count` il metodo possa essere chiamato in modo sicuro da thread in esecuzione contemporaneamente, thread diversi possono ricevere risultati diversi se un nuovo valore viene inserito contemporaneamente nel contenitore.

Nella tabella seguente vengono illustrati i metodi e gli operatori comunemente utilizzati che non sono indipendenti dalla concorrenza.

||||
|-|-|-|
|`clear`|`max_load_factor`|`rehash`|
|`load_factor`|[operatore di comando](reference/concurrent-unordered-map-class.md#operator_eq)

Oltre a questi metodi, qualsiasi `unsafe_` metodo che inizia con non è indipendente dalla concorrenza.

[[In alto](#top)]

## <a name="concurrent_unordered_multimap-class"></a><a name="unordered_multimap"></a>Classe concurrent_unordered_multimap

La classe [concurrency::concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md) è `concurrent_unordered_map` simile a questa proprietà della classe, ad eccezione del fatto che consente il mapping di più valori alla stessa chiave. Si differenzia anche `concurrent_unordered_map` dai seguenti modi:

- Il metodo [concurrent_unordered_multimap::insert](reference/concurrent-unordered-multimap-class.md#insert) restituisce `std::pair<iterator, bool>`un iteratore anziché .

- La `concurrent_unordered_multimap` classe non `operator[]` fornisce `at` né il metodo .

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_multimap`. In questo esempio vengono inseriti tasti di carattere nell'intervallo ['a', 'i']. `concurrent_unordered_multimap`consente a una chiave di avere più valori.

[!code-cpp[concrt-unordered-multimap-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_3.cpp)]

[[In alto](#top)]

## <a name="concurrent_unordered_set-class"></a><a name="unordered_set"></a>concurrent_unordered_set classe

La classe [concurrency::concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md) è `concurrent_unordered_map` simile a questa proprietà della classe, ad eccezione del fatto che gestisce i valori anziché le coppie chiave e valore. La `concurrent_unordered_set` classe non `operator[]` fornisce `at` né il metodo .

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_set`. In questo esempio vengono inseriti valori di carattere nell'intervallo ['a', 'i']. È sicuro eseguire gli inserimenti in parallelo.

[!code-cpp[concrt-unordered-set#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_4.cpp)]

[[In alto](#top)]

## <a name="concurrent_unordered_multiset-class"></a><a name="unordered_multiset"></a>Classe concurrent_unordered_multiset

La classe [concurrency::concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md) è `concurrent_unordered_set` simile molto alla classe, ad eccezione del fatto che consente valori duplicati. Si differenzia anche `concurrent_unordered_set` dai seguenti modi:

- Il metodo [concurrent_unordered_multiset::insert](reference/concurrent-unordered-multiset-class.md#insert) restituisce `std::pair<iterator, bool>`un iteratore anziché .

- La `concurrent_unordered_multiset` classe non `operator[]` fornisce `at` né il metodo .

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_multiset`. In questo esempio vengono inseriti valori di carattere nell'intervallo ['a', 'i']. `concurrent_unordered_multiset`consente a un valore di verificarsi più volte.

[!code-cpp[concrt-unordered-multiset#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_5.cpp)]

[[In alto](#top)]

## <a name="combinable-class"></a><a name="combinable"></a>classe combinabile

La classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) fornisce un'archiviazione locale di thread riutilizzabile che consente di eseguire calcoli con granularità fine e quindi di unire tali calcoli in un risultato finale. È possibile considerare un oggetto `combinable` come una variabile di riduzione.

La `combinable` classe è utile quando si dispone di una risorsa condivisa tra più thread o attività. La `combinable` classe consente di eliminare lo stato condiviso fornendo l'accesso alle risorse condivise in modo semplice. Pertanto, questa classe fornisce un'alternativa all'utilizzo di un meccanismo di sincronizzazione, ad esempio un mutex, per sincronizzare l'accesso ai dati condivisi da più thread.

### <a name="methods-and-features"></a><a name="combinable-features"></a>Metodi e caratteristiche

Nella tabella seguente vengono illustrati alcuni `combinable` dei metodi importanti della classe. Per ulteriori informazioni `combinable` su tutti i metodi della classe , vedere [classe combinabile](../../parallel/concrt/reference/combinable-class.md).

|Metodo|Descrizione|
|------------|-----------------|
|[Locale](reference/combinable-class.md#local)|Recupera un riferimento alla variabile locale associata al contesto del thread corrente.|
|[Chiaro](reference/combinable-class.md#clear)|Rimuove tutte le variabili `combinable` locali di thread dall'oggetto.|
|[Combinare](reference/combinable-class.md#combine)<br /><br /> [combine_each](reference/combinable-class.md#combine_each)|Utilizza la funzione combine fornita per generare un valore finale dal set di tutti i calcoli locali del thread.|

La `combinable` classe è una classe modello con parametri sul risultato finale unito. Se si chiama il `T` costruttore predefinito, il tipo di parametro di modello deve avere un costruttore predefinito e un costruttore di copia. Se `T` il tipo di parametro di modello non dispone di un costruttore predefinito, chiamare la versione di overload del costruttore che accetta una funzione di inizializzazione come parametro.

È possibile archiviare `combinable` dati aggiuntivi in un oggetto dopo aver chiamato i metodi [combine](reference/combinable-class.md#combine) o [combine_each.](reference/combinable-class.md#combine_each) È inoltre possibile `combine` `combine_each` chiamare i metodi e più volte. Se nessun valore `combinable` locale in `combine` un `combine_each` oggetto viene modificato, i metodi e producono lo stesso risultato ogni volta che vengono chiamati.

### <a name="examples"></a><a name="combinable-examples"></a>Esempi

Per esempi su come `combinable` usare la classe, vedere gli argomenti seguenti:For examples about how to use the class, see the following topics:

- [Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)

- [Procedura: Usare l'oggetto combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)

[[In alto](#top)]

## <a name="related-topics"></a>Argomenti correlati

[Procedura: Usare i contenitori paralleli per aumentare l'efficienza](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)<br/>
Viene illustrato come utilizzare i contenitori paralleli per archiviare e accedere ai dati in modo efficiente in parallelo.

[Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br/>
Viene illustrato come `combinable` utilizzare la classe per eliminare lo stato condiviso e quindi migliorare le prestazioni.

[Procedura: Usare l'oggetto combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)<br/>
Viene illustrato come `combine` utilizzare una funzione per unire set di dati locali a thread.

[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Viene descritta la libreria PPL, che fornisce un modello di programmazione imperativo che promuove la scalabilità e la facilità d'uso per lo sviluppo di applicazioni simultanee.

## <a name="reference"></a>Informazioni di riferimento

[classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)

[Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)

[Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)

[Classe concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)

[Classe concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md)

[Classe concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)

[classe combinabile](../../parallel/concrt/reference/combinable-class.md)
