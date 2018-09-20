---
title: Contenitori e oggetti paralleli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- parallel objects
- parallel containers
- concurrent containers
ms.assetid: 90ab715c-29cd-48eb-8e76-528619aab466
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cb06cf0c4e3e5868a0dadeefb30c2e75158d4e32
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433384"
---
# <a name="parallel-containers-and-objects"></a>Contenitori e oggetti paralleli

Parallel Patterns Library (PPL) include numerosi contenitori e oggetti che forniscono l'accesso thread-safe ai relativi elementi.

Oggetto *contenitore simultaneo* fornisce l'accesso indipendente dalla concorrenza per le operazioni più importanti. La funzionalità dei contenitori è simile a quelle fornite dalla libreria Standard C++. Ad esempio, il [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) classe è simile il [std:: Vector](../../standard-library/vector-class.md) classe, tranne il fatto che il `concurrent_vector` classe consente di accodare gli elementi in parallelo. Usare contenitori simultanei quando si dispone di codice parallelo che richiede l'accesso in lettura e scrittura al contenitore stesso.

Oggetto *oggetto simultanea* condiviso simultaneamente tra componenti. Un processo che consente di calcolare lo stato di un oggetto simultaneo in parallelo produce lo stesso risultato di un altro processo che calcola in modo seriale allo stesso stato. Il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe è un esempio di un tipo di oggetto simultanee. Il `combinable` classe consente di eseguire calcoli in parallelo e quindi combinare i calcoli in un risultato finale. Quando utilizzare un meccanismo di sincronizzazione, ad esempio, un mutex, in caso contrario, per sincronizzare l'accesso a una variabile condivisa o una risorsa, usare gli oggetti simultanei.

##  <a name="top"></a> Sezioni

In questo argomento vengono descritte le seguenti contenitori e oggetti paralleli in modo dettagliato.

Contenitori simultanei:

- [Classe concurrent_vector](#ctor)

   - [Vettore e differenze tra concurrent_vector](#ctor)

   - [Operazioni sicure per concorrenza](#ctor)

   - [Protezione dalle eccezioni](#ctor)

- [Classe concurrent_queue](#queue)

   - [Coda e le differenze tra concurrent_queue](#queue-differences)

   - [Operazioni sicure per concorrenza](#queue-safety)

   - [Supporto degli iteratori](#queue-iterators)

- [Classe concurrent_unordered_map](#unordered_map)

   - [Unordered_map e differenze tra concurrent_unordered_map](#map-differences)

   - [Operazioni sicure per concorrenza](#map-safety)

- [Classe concurrent_unordered_multimap](#unordered_multimap)

- [Classe concurrent_unordered_set](#unordered_set)

- [Classe concurrent_unordered_multiset](#unordered_multiset)

Oggetti simultanei:

- [Classe combinable](#combinable)

   - [I metodi e funzionalità](#combinable-features)

   - [Esempi](#combinable-examples)

##  <a name="vector"></a> Classe concurrent_vector

Il [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) classe è una classe di contenitore di sequenza che, esattamente come le [std:: Vector](../../standard-library/vector-class.md) classe, consente di accedere in modo casuale ai relativi elementi. Il `concurrent_vector` le operazioni di accesso consente di classe aggiungere indipendente dalla concorrenza e di elemento. Aggiungere le operazioni non invalidano esistenti i puntatori o iteratori. Operazioni di accesso e attraversamento iteratori sono anche indipendenti dalla concorrenza.

###  <a name="vector-differences"></a> Vettore e differenze tra concurrent_vector

Il `concurrent_vector` classe rispecchia maggiormente il `vector` classe. La complessità di accodamento, accesso agli elementi e operazioni di accesso iteratore in una `concurrent_vector` oggetto sono uguali a quelle per un `vector` oggetto. Quanto riportato di seguito illustra dove `concurrent_vector` differisce da `vector`:

- Accodamento, accesso agli elementi, accesso iteratori e operazioni traversali di iterazione in un `concurrent_vector` oggetto sono indipendenti dalla concorrenza.

- È possibile aggiungere elementi solo fino alla fine di un `concurrent_vector` oggetto. Il `concurrent_vector` classe non fornisce il `insert` (metodo).

- Oggetto `concurrent_vector` oggetto non utilizzi [semantica di spostamento](../../cpp/rvalue-reference-declarator-amp-amp.md) quando accodare al file.

- Il `concurrent_vector` classe non fornisce il `erase` o `pop_back` metodi. Come per gli `vector`, usare il [cancellare](reference/concurrent-vector-class.md#clear) metodo per rimuovere tutti gli elementi da un `concurrent_vector` oggetto.

- Il `concurrent_vector` classe non archivia gli elementi in modo contiguo nella memoria. Pertanto, è possibile utilizzare il `concurrent_vector` classe in tutte le modalità che è possibile usare una matrice. Ad esempio, per una variabile denominata `v` typu `concurrent_vector`, l'espressione `&v[0]+2` produce un comportamento indefinito.

- Il `concurrent_vector` classe definisce i [grow_by](reference/concurrent-vector-class.md#grow_by) e [grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least) metodi. Questi metodi sono simili le [ridimensionare](reference/concurrent-vector-class.md#resize) metodo, ad eccezione del fatto che siano indipendenti dalla concorrenza.

- Oggetto `concurrent_vector` oggetto non consente di spostare gli elementi quando si accodare al file o ridimensionarlo. In questo modo ai puntatori esistenti e gli iteratori rimangono valide durante le operazioni simultanee.

- Il runtime non definisce una versione specializzata della `concurrent_vector` per il tipo `bool`.

###  <a name="vector-safety"></a> Operazioni sicure per concorrenza

Tutti i metodi che aggiungere o aumentano le dimensioni di un `concurrent_vector` dell'oggetto, o accedere a un elemento in un `concurrent_vector` oggetto, sono indipendenti dalla concorrenza. L'eccezione a questa regola è la `resize` (metodo).

La tabella seguente illustra i comuni `concurrent_vector` metodi e operatori che sono indipendenti dalla concorrenza.

||||
|-|-|-|

|[alla](reference/concurrent-vector-class.md#at)|[finali](reference/concurrent-vector-class.md#end)|[operatore&#91;&#93;](reference/concurrent-vector-class.md#operator_at)| |[ iniziano](reference/concurrent-vector-class.md#begin)|[front](reference/concurrent-vector-class.md#front)|[push_back](reference/concurrent-vector-class.md#push_back)| |[ tornare](reference/concurrent-vector-class.md#back)|[grow_by](reference/concurrent-vector-class.md#grow_by)|[rbegin](reference/concurrent-vector-class.md#rbegin)| |[ capacità](reference/concurrent-vector-class.md#capacity)|[grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least)|[rend](reference/concurrent-vector-class.md#rend)| |[ vuoto](reference/concurrent-vector-class.md#empty)|[max_size](reference/concurrent-vector-class.md#max_size)|[dimensioni](reference/concurrent-vector-class.md#size)|

Operazioni offerte dal runtime per la compatibilità con la libreria Standard C++, ad esempio, `reserve`, non sono indipendenti dalla concorrenza. La tabella seguente illustra i metodi e operatori che non sono indipendenti dalla concorrenza comuni.

|||
|-|-|

|[assegnare](reference/concurrent-vector-class.md#assign)|[riservare](reference/concurrent-vector-class.md#reserve)| |[ deselezionare](reference/concurrent-vector-class.md#clear)|[ridimensionare](reference/concurrent-vector-class.md#resize)| |[ operatore =](reference/concurrent-vector-class.md#operator_eq)|[shrink_to_fit](reference/concurrent-vector-class.md#shrink_to_fit)|

Le operazioni che modificano il valore degli elementi esistenti non sono indipendenti dalla concorrenza. Usare un oggetto di sincronizzazione, ad esempio un [reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) oggetto per sincronizzare simultaneo in lettura e operazioni di scrittura allo stesso elemento di dati. Per altre informazioni sugli oggetti di sincronizzazione, vedere [strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md).

Quando si converte codice esistente che usa `vector` da usare `concurrent_vector`, operazioni simultanee possono causare il comportamento dell'applicazione da modificare. Ad esempio, prendere in considerazione il seguente programma che vengono eseguite contemporaneamente due attività in un `concurrent_vector` oggetto. La prima attività aggiunge ulteriori elementi da un `concurrent_vector` oggetto. La seconda attività calcola la somma di tutti gli elementi nello stesso oggetto.

[!code-cpp[concrt-vector-safety#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_1.cpp)]

Anche se il `end` metodo è indipendente dalla concorrenza, una chiamata simultanea per il [push_back](reference/concurrent-vector-class.md#push_back) metodo fa in modo che il valore restituito da `end` modificare. Il numero di elementi che attraversa l'iteratore è indeterminato. Di conseguenza, questo programma può produrre un risultato diverso ogni volta che viene eseguito.

###  <a name="vector-exceptions"></a> Protezione dalle eccezioni

Se un'operazione di aumento delle dimensioni o assegnazione genera un'eccezione, lo stato del `concurrent_vector` oggetto diventa non valido. Il comportamento di un `concurrent_vector` oggetto che si trova in uno stato non valido non è definito se non specificato diversamente. Tuttavia, il distruttore libera sempre la memoria allocata dall'oggetto, anche se l'oggetto è in uno stato non valido.

Il tipo di dati degli elementi di vettore, `T`, deve soddisfare i requisiti seguenti. In caso contrario, il comportamento del `concurrent_vector` classe non è definita.

- Il distruttore non deve generare.

- Se genera il costruttore di copia o predefinito, il distruttore non deve essere dichiarato tramite la `virtual` (parola chiave) e deve funzionare correttamente con la memoria a inizializzazione zero.

[[Torna all'inizio](#top)]

##  <a name="queue"></a> Classe concurrent_queue

Il [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) classe nello stesso modo, il [std:: Queue](../../standard-library/queue-class.md) classe, consente di accedere ai relativi anteriore e gli elementi di nuovo. Il `concurrent_queue` enqueue indipendente dalla concorrenza consente di classi e le operazioni di rimozione dalla coda. Il `concurrent_queue` classe fornisce anche supporto degli iteratori che non è indipendente dalla concorrenza.

###  <a name="queue-differences"></a> Coda e le differenze tra concurrent_queue

Il `concurrent_queue` classe rispecchia maggiormente il `queue` classe. Quanto riportato di seguito illustra dove `concurrent_queue` differisce da `queue`:

- Accodamento e rimozione dalla coda di operazioni su un `concurrent_queue` oggetto sono indipendenti dalla concorrenza.

- Il `concurrent_queue` classe offre supporto degli iteratori che non è indipendente dalla concorrenza.

- Il `concurrent_queue` classe non fornisce il `front` o `pop` metodi. Il `concurrent_queue` classe sostituisce questi metodi definendo le [try_pop](reference/concurrent-queue-class.md#try_pop) (metodo).

- Il `concurrent_queue` classe non fornisce il `back` (metodo). Pertanto, è possibile fare riferimento la fine della coda.

- Il `concurrent_queue` classe fornisce il [unsafe_size](reference/concurrent-queue-class.md#unsafe_size) invece del metodo di `size` (metodo). Il `unsafe_size` metodo non è indipendente dalla concorrenza.

###  <a name="queue-safety"></a> Operazioni sicure per concorrenza

Tutti i metodi che accodano al o rimozione dalla coda da un `concurrent_queue` oggetto sono indipendenti dalla concorrenza.

La tabella seguente illustra i comuni `concurrent_queue` metodi e operatori che sono indipendenti dalla concorrenza.

|||
|-|-|
|[empty](reference/concurrent-queue-class.md#empty)|[push](reference/concurrent-queue-class.md#push)|
|[get_allocator](reference/concurrent-queue-class.md#get_allocator)|[try_pop](reference/concurrent-queue-class.md#try_pop)|

Anche se il `empty` metodo è indipendente dalla concorrenza, un'operazione simultanea potrebbe essere la coda aumentare o ridurre prima il `empty` restituzione del metodo.

La tabella seguente illustra i metodi e operatori che non sono indipendenti dalla concorrenza comuni.

|||
|-|-|
|[clear](reference/concurrent-queue-class.md#clear)|[unsafe_end](reference/concurrent-queue-class.md#unsafe_end)|
|[unsafe_begin](reference/concurrent-queue-class.md#unsafe_begin)|[unsafe_size](reference/concurrent-queue-class.md#unsafe_size)|

###  <a name="queue-iterators"></a> Supporto degli iteratori

Il `concurrent_queue` fornisce iteratori che non sono indipendenti dalla concorrenza. È consigliabile usare questi iteratori solo per il debug.

Oggetto `concurrent_queue` iteratore attraversa gli elementi nella direzione avanti. La tabella seguente illustra gli operatori supportati da ogni iteratore.

|Operatore|Descrizione|
|--------------|-----------------|
|`operator++`|Passa all'elemento successivo nella coda. Questo operatore viene sottoposto a overload per fornire la semantica di pre-incremento e post-incremento.|
|`operator*`|Recupera un riferimento all'elemento corrente.|
|`operator->`|Recupera un puntatore all'elemento corrente.|

[[Torna all'inizio](#top)]

##  <a name="unordered_map"></a> Classe concurrent_unordered_map

Il [Concurrency:: concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) è una classe contenitore associativo da preferire che, esattamente come le [std:: unordered_map](../../standard-library/unordered-map-class.md) di classi, controlla una sequenza di lunghezza variabile di elementi di tipo [std:: Pair\<const Key, Ty >](../../standard-library/pair-structure.md). Pensare a una mappa non ordinata di un dizionario e che è possibile aggiungere una coppia chiave / valore a o cercare un valore dalla chiave. Questa classe è utile quando si dispone di più thread o attività che devono accedere a un contenitore condiviso, inserirvi o eseguirne l'aggiornamento contemporaneamente.

L'esempio seguente mostra la struttura di base per l'uso di `concurrent_unordered_map`. In questo esempio inserisce le chiavi di caratteri nell'intervallo ['a', ' i']. Poiché non è possibile stabilire l'ordine delle operazioni, anche il valore finale per ogni chiave è indeterminato. Tuttavia, è sicuro eseguire le operazioni di inserimento in parallelo.

[!code-cpp[concrt-unordered-map-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_2.cpp)]

Per un esempio che usa `concurrent_unordered_map` per eseguire una mappa e ridurre le operazioni in parallelo, vedere [procedura: eseguire mappa e ridurre le operazioni in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).

###  <a name="map-differences"></a> Unordered_map e differenze tra concurrent_unordered_map

Il `concurrent_unordered_map` classe rispecchia maggiormente il `unordered_map` classe. Quanto riportato di seguito illustra dove `concurrent_unordered_map` differisce da `unordered_map`:

- Il `erase`, `bucket`, `bucket_count`, e `bucket_size` vengono denominati i metodi `unsafe_erase`, `unsafe_bucket`, `unsafe_bucket_count`, e `unsafe_bucket_size`, rispettivamente. Il `unsafe_` convenzione di denominazione indica che questi metodi non sono indipendenti dalla concorrenza. Per altre informazioni sulla sicurezza della concorrenza, vedere [operazioni sicure per concorrenza](#map-safety).

- Operazioni di inserimento non invalidano esistenti i puntatori o iteratori, né si modifichino l'ordine degli elementi già presenti nella mappa. Inserire e attraversare le operazioni vengano eseguite contemporaneamente.

- `concurrent_unordered_map` supporta l'inoltra solo l'iterazione.

- Inserimento non invalidano né aggiornare gli iteratori restituiti da `equal_range`. Inserimento è possibile aggiungere diversi elementi alla fine dell'intervallo. L'iteratore begin punta a un elemento uguale.

Per contribuire a evitare deadlock, alcun metodo di `concurrent_unordered_map` mantiene un blocco quando si chiama l'allocatore di memoria, le funzioni hash o altro codice definito dall'utente. Inoltre, è necessario assicurarsi che la funzione hash valuta sempre uguale chiavi per lo stesso valore. Le funzioni hash migliore di distribuire le chiavi in modo uniforme tra lo spazio di codice hash.

###  <a name="map-safety"></a> Operazioni sicure per concorrenza

Il `concurrent_unordered_map` classe consente operazioni di inserimento e accesso agli elementi indipendenti dalla concorrenza. Operazioni di inserimento non invalidano esistenti i puntatori o iteratori. Operazioni di accesso e attraversamento iteratori sono anche indipendenti dalla concorrenza. Nella tabella seguente vengono usati comunemente `concurrent_unordered_map` metodi e operatori che sono indipendenti dalla concorrenza.

|||||
|-|-|-|-|
|[at](reference/concurrent-unordered-map-class.md#at)|`count`|`find`|[key_eq](reference/concurrent-unordered-map-class.md#key_eq)|
|`begin`|`empty`|`get_allocator`|`max_size`|
|`cbegin`|`end`|`hash_function`|[operator&#91;&#93;](reference/concurrent-unordered-map-class.md#operator_at)|
|`cend`|`equal_range`|[insert](reference/concurrent-unordered-map-class.md#insert)|`size`|

Sebbene il `count` metodo può essere chiamato in modo sicuro dal thread in esecuzione contemporaneamente, thread diversi possono ottenere risultati diversi se un nuovo valore simultaneamente viene inserito nel contenitore.

La tabella seguente illustra i metodi comunemente utilizzati e gli operatori che non sono indipendenti dalla concorrenza.

||||
|-|-|-|
|`clear`|`max_load_factor`|`rehash`|
|`load_factor`|[operator=](reference/concurrent-unordered-map-class.md#operator_eq)

Oltre a questi metodi, qualsiasi metodo che inizia con `unsafe_` inoltre non indipendente dalla concorrenza.

[[Torna all'inizio](#top)]

##  <a name="unordered_multimap"></a> Classe concurrent_unordered_multimap

Il [concurrency::concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md) classe rispecchia maggiormente il `concurrent_unordered_map` classe ad eccezione del fatto che consente di eseguire il mapping alla stessa chiave di più valori. Un'altra differenza rispetto `concurrent_unordered_map` nei modi seguenti:

- Il [concurrent_unordered_multimap:: Insert](reference/concurrent-unordered-multimap-class.md#insert) metodo restituisce un iteratore invece di `std::pair<iterator, bool>`.

- Il `concurrent_unordered_multimap` classe non fornisce `operator[]` né la `at` (metodo).

L'esempio seguente mostra la struttura di base per l'uso di `concurrent_unordered_multimap`. In questo esempio inserisce le chiavi di caratteri nell'intervallo ['a', ' i']. `concurrent_unordered_multimap` consente a una chiave avere più valori.

[!code-cpp[concrt-unordered-multimap-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_3.cpp)]

[[Torna all'inizio](#top)]

##  <a name="unordered_set"></a> Classe concurrent_unordered_set

Il [concurrency::concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md) classe rispecchia maggiormente il `concurrent_unordered_map` classe ad eccezione del fatto che gestisce i valori invece di coppie chiave / valore. Il `concurrent_unordered_set` classe non fornisce `operator[]` né la `at` (metodo).

L'esempio seguente mostra la struttura di base per l'uso di `concurrent_unordered_set`. In questo esempio inserisce i valori di carattere nell'intervallo ['a', ' i']. È possibile eseguire inserimenti in parallelo.

[!code-cpp[concrt-unordered-set#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_4.cpp)]

[[Torna all'inizio](#top)]

##  <a name="unordered_multiset"></a> Classe concurrent_unordered_multiset

Il [concurrency::concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md) classe rispecchia maggiormente il `concurrent_unordered_set` classe ad eccezione del fatto che consente di valori duplicati. Un'altra differenza rispetto `concurrent_unordered_set` nei modi seguenti:

- Il [concurrent_unordered_multiset:: Insert](reference/concurrent-unordered-multiset-class.md#insert) metodo restituisce un iteratore invece di `std::pair<iterator, bool>`.

- Il `concurrent_unordered_multiset` classe non fornisce `operator[]` né la `at` (metodo).

L'esempio seguente mostra la struttura di base per l'uso di `concurrent_unordered_multiset`. In questo esempio inserisce i valori di carattere nell'intervallo ['a', ' i']. `concurrent_unordered_multiset` Attiva verificarsi più volte un valore.

[!code-cpp[concrt-unordered-multiset#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_5.cpp)]

[[Torna all'inizio](#top)]

##  <a name="combinable"></a> combinable (classe)

Il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe fornisce l'archiviazione thread-local e riutilizzabile che consente di eseguire calcoli accurati e quindi unire i calcoli in un risultato finale. È possibile considerare un oggetto `combinable` come una variabile di riduzione.

Il `combinable` classe è utile quando si dispone di una risorsa che viene condiviso tra diversi thread o attività. Il `combinable` classe consente di eliminare lo stato condiviso fornendo accesso alle risorse condivise in modo senza blocco. Pertanto, questa classe fornisce un'alternativa all'utilizzo di un meccanismo di sincronizzazione, ad esempio, un mutex, per sincronizzare l'accesso ai dati condivisi da più thread.

###  <a name="combinable-features"></a> I metodi e funzionalità

Nella tabella seguente vengono illustrati alcuni dei metodi importanti del `combinable` classe. Per ulteriori informazioni su tutti i `combinable` metodi della classe, vedere [combinable (classe)](../../parallel/concrt/reference/combinable-class.md).

|Metodo|Descrizione|
|------------|-----------------|
|[local](reference/combinable-class.md#local)|Recupera un riferimento alla variabile locale che è associato il contesto del thread corrente.|
|[clear](reference/combinable-class.md#clear)|Rimuove tutte le variabili locali del thread dal `combinable` oggetto.|
|[combine](reference/combinable-class.md#combine)<br /><br /> [combine_each](reference/combinable-class.md#combine_each)|Usa la funzione di combinazione specificata per generare un valore finale del set di tutti i calcoli locali del thread.|

Il `combinable` classe è una classe di modello contenente i parametri per il risultato unito finale. Se si chiama il costruttore predefinito, il `T` il tipo di parametro di modello deve avere un costruttore predefinito e un costruttore di copia. Se il `T` il tipo di parametro di modello non dispone di un costruttore predefinito, chiamare la versione di overload del costruttore che accetta una funzione di inizializzazione come relativo parametro.

È possibile archiviare i dati aggiuntivi in un `combinable` dopo la chiamata dell'oggetto di [combinare](reference/combinable-class.md#combine) oppure [combine_each](reference/combinable-class.md#combine_each) metodi. È inoltre possibile chiamare il `combine` e `combine_each` metodi più volte. Se si specifica alcun valore locale in un `combinable` oggetto viene modificato, il `combine` e `combine_each` metodi producono lo stesso risultato ogni volta che vengono chiamati.

###  <a name="combinable-examples"></a> Esempi

Per esempi su come usare il `combinable` classe, vedere gli argomenti seguenti:

- [Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)

- [Procedura: Usare l'oggetto combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)

[[Torna all'inizio](#top)]

## <a name="related-topics"></a>Argomenti correlati

[Procedura: Usare i contenitori paralleli per aumentare l'efficienza](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)<br/>
Viene illustrato come usare i contenitori paralleli in modo efficiente archiviare e accedere ai dati in parallelo.

[Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br/>
Viene illustrato come utilizzare il `combinable` classe per eliminare lo stato condiviso e migliorare le prestazioni.

[Procedura: Usare l'oggetto combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)<br/>
Viene illustrato come utilizzare un `combine` funzione thread-local set di dati di tipo merge.

[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Descrive la libreria PPL, che fornisce un modello di programmazione imperativa in grado di offrire scalabilità e facilità di utilizzo per lo sviluppo di applicazioni simultanee.

## <a name="reference"></a>Riferimenti

[Classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)

[Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)

[Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)

[Classe concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)

[Classe concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md)

[Classe concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)

[Classe combinable](../../parallel/concrt/reference/combinable-class.md)
