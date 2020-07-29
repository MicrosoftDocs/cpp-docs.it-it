---
title: Contenitori e oggetti paralleli
ms.date: 03/27/2019
helpviewer_keywords:
- parallel objects
- parallel containers
- concurrent containers
ms.assetid: 90ab715c-29cd-48eb-8e76-528619aab466
ms.openlocfilehash: dffe9b3490f52645414643ebc23ab78553abafff
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213905"
---
# <a name="parallel-containers-and-objects"></a>Contenitori e oggetti paralleli

La libreria PPL (Parallel Patterns Library) include diversi contenitori e oggetti che consentono l'accesso thread-safe ai relativi elementi.

Un *contenitore simultaneo* fornisce accesso sicuro alla concorrenza alle operazioni più importanti. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico. Le funzionalità di questi contenitori sono simili a quelle fornite dalla libreria standard C++. La classe [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) , ad esempio, è simile alla classe [std:: Vector](../../standard-library/vector-class.md) , ad eccezione del fatto che la `concurrent_vector` classe consente di aggiungere elementi in parallelo. Usare i contenitori simultanei quando si dispone di codice parallelo che richiede l'accesso in lettura e scrittura allo stesso contenitore.

Un *oggetto simultaneo* viene condiviso contemporaneamente tra i componenti. Un processo che calcola lo stato di un oggetto simultaneo in parallelo produce lo stesso risultato di un altro processo che calcola lo stesso stato in modo seriale. La classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) è un esempio di tipo di oggetto simultaneo. La `combinable` classe consente di eseguire calcoli in parallelo, quindi combinare tali calcoli in un risultato finale. Utilizzare gli oggetti simultanei quando si utilizzerebbe un meccanismo di sincronizzazione, ad esempio un mutex, per sincronizzare l'accesso a una variabile o a una risorsa condivisa.

## <a name="sections"></a><a name="top"></a>Sezioni

In questo argomento vengono descritti in dettaglio i contenitori e gli oggetti paralleli seguenti.

Contenitori simultanei:

- [Classe concurrent_vector](#vector)

  - [Differenze tra concurrent_vector e Vector](#vector-differences)

  - [Operazioni indipendenti dalla concorrenza](#vector-safety)

  - [Sicurezza delle eccezioni](#vector-exceptions)

- [Classe concurrent_queue](#queue)

  - [Differenze tra concurrent_queue e Queue](#queue-differences)

  - [Operazioni indipendenti dalla concorrenza](#queue-safety)

  - [Supporto degli iteratori](#queue-iterators)

- [Classe concurrent_unordered_map](#unordered_map)

  - [Differenze tra concurrent_unordered_map e unordered_map](#map-differences)

  - [Operazioni indipendenti dalla concorrenza](#map-safety)

- [Classe concurrent_unordered_multimap](#unordered_multimap)

- [Classe concurrent_unordered_set](#unordered_set)

- [Classe concurrent_unordered_multiset](#unordered_multiset)

Oggetti simultanei:

- [Classe combinable](#combinable)

  - [Metodi e funzionalità](#combinable-features)

  - [esempi](#combinable-examples)

## <a name="concurrent_vector-class"></a><a name="vector"></a>Classe concurrent_vector

La classe [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) è una classe contenitore di sequenze che, proprio come la classe [std:: Vector](../../standard-library/vector-class.md) , consente di accedere in modo casuale ai relativi elementi. La `concurrent_vector` classe Abilita le operazioni di Accodamento e accesso agli elementi indipendenti dalla concorrenza. Le operazioni di Accodamento non invalidano i puntatori o gli iteratori esistenti. Anche le operazioni di accesso e attraversamento degli iteratori sono sicure per la concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico.

### <a name="differences-between-concurrent_vector-and-vector"></a><a name="vector-differences"></a>Differenze tra concurrent_vector e Vector

La `concurrent_vector` classe è molto simile alla `vector` classe. La complessità delle operazioni di accesso di Accodamento, accesso agli elementi e iteratore su un oggetto corrisponde a quella di `concurrent_vector` un `vector` oggetto. I punti seguenti illustrano dove `concurrent_vector` differisce da `vector` :

- Le operazioni di Accodamento, accesso elementi, accesso iteratori e attraversamento iteratore su un `concurrent_vector` oggetto sono indipendenti dalla concorrenza.

- È possibile aggiungere elementi solo alla fine di un `concurrent_vector` oggetto. La `concurrent_vector` classe non fornisce il `insert` metodo.

- Un `concurrent_vector` oggetto non utilizza la [semantica di spostamento](../../cpp/rvalue-reference-declarator-amp-amp.md) quando viene accodato.

- La `concurrent_vector` classe non fornisce i `erase` metodi o `pop_back` . Come con `vector` , usare il metodo [Clear](reference/concurrent-vector-class.md#clear) per rimuovere tutti gli elementi da un `concurrent_vector` oggetto.

- La `concurrent_vector` classe non archivia gli elementi in modo contiguo nella memoria. Pertanto, non è possibile utilizzare la `concurrent_vector` classe in tutti i modi in cui è possibile utilizzare una matrice. Per una variabile denominata `v` di tipo, ad esempio `concurrent_vector` , l'espressione `&v[0]+2` produce un comportamento non definito.

- La `concurrent_vector` classe definisce i metodi [grow_by](reference/concurrent-vector-class.md#grow_by) e [grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least) . Questi metodi sono simili al metodo [Resize](reference/concurrent-vector-class.md#resize) , ad eccezione del fatto che sono indipendenti dalla concorrenza.

- Un `concurrent_vector` oggetto non riloca i relativi elementi quando viene aggiunto o ridimensionato. Ciò consente ai puntatori e agli iteratori esistenti di rimanere validi durante le operazioni simultanee.

- Il runtime non definisce una versione specializzata di `concurrent_vector` per il tipo **`bool`** .

### <a name="concurrency-safe-operations"></a><a name="vector-safety"></a>Operazioni indipendenti dalla concorrenza

Tutti i metodi che aggiungono o aumentano le dimensioni di un `concurrent_vector` oggetto o accedono a un elemento in un `concurrent_vector` oggetto sono indipendenti dalla concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico. L'eccezione a questa regola è il `resize` metodo.

La tabella seguente illustra i `concurrent_vector` metodi e gli operatori comuni che sono indipendenti dalla concorrenza.

||||
|-|-|-|
|[at](reference/concurrent-vector-class.md#at)|[fine](reference/concurrent-vector-class.md#end)|[operator&#91;&#93;](reference/concurrent-vector-class.md#operator_at)|
|[iniziare](reference/concurrent-vector-class.md#begin)|[fronte](reference/concurrent-vector-class.md#front)|[push_back](reference/concurrent-vector-class.md#push_back)|
|[Indietro](reference/concurrent-vector-class.md#back)|[grow_by](reference/concurrent-vector-class.md#grow_by)|[rbegin](reference/concurrent-vector-class.md#rbegin)|
|[capacità](reference/concurrent-vector-class.md#capacity)|[grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least)|[rend](reference/concurrent-vector-class.md#rend)|
|[empty](reference/concurrent-vector-class.md#empty)|[max_size](reference/concurrent-vector-class.md#max_size)|[size](reference/concurrent-vector-class.md#size)|

Le operazioni fornite dal runtime per la compatibilità con la libreria standard C++, ad esempio, `reserve` non sono indipendenti dalla concorrenza. La tabella seguente illustra i metodi e gli operatori comuni che non sono indipendenti dalla concorrenza.

|||
|-|-|
|[assign](reference/concurrent-vector-class.md#assign)|[riserva](reference/concurrent-vector-class.md#reserve)|
|[deselezionare](reference/concurrent-vector-class.md#clear)|[ridimensionare](reference/concurrent-vector-class.md#resize)|
|[operatore =](reference/concurrent-vector-class.md#operator_eq)|[shrink_to_fit](reference/concurrent-vector-class.md#shrink_to_fit)|

Le operazioni che modificano il valore degli elementi esistenti non sono indipendenti dalla concorrenza. Usare un oggetto di sincronizzazione, ad esempio un oggetto [reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) per sincronizzare le operazioni di lettura e scrittura simultanee per lo stesso elemento dati. Per altre informazioni sugli oggetti di sincronizzazione, vedere [strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md).

Quando si converte il codice esistente che usa `vector` per usare `concurrent_vector` , le operazioni simultanee possono causare la modifica del comportamento dell'applicazione. Si consideri, ad esempio, il programma seguente che esegue contemporaneamente due attività su un `concurrent_vector` oggetto. La prima attività accoda elementi aggiuntivi a un `concurrent_vector` oggetto. La seconda attività calcola la somma di tutti gli elementi nello stesso oggetto.

[!code-cpp[concrt-vector-safety#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_1.cpp)]

Sebbene il `end` metodo sia indipendente dalla concorrenza, una chiamata simultanea al metodo [push_back](reference/concurrent-vector-class.md#push_back) causa la modifica del valore restituito da `end` . Il numero di elementi che l'iteratore attraversa è indeterminato. Pertanto, questo programma può produrre un risultato diverso ogni volta che viene eseguito. Quando il tipo di elemento non è semplice, è possibile che esista un race condition tra `push_back` le chiamate a e `end` . Il `end` metodo può restituire un elemento allocato, ma non completamente inizializzato.

### <a name="exception-safety"></a><a name="vector-exceptions"></a>Sicurezza delle eccezioni

Se un'operazione di crescita o assegnazione genera un'eccezione, lo stato dell' `concurrent_vector` oggetto diventa non valido. Il comportamento di un `concurrent_vector` oggetto che si trova in uno stato non valido è indefinito, a meno che non sia specificato diversamente. Tuttavia, il distruttore libera sempre la memoria allocata dall'oggetto, anche se lo stato dell'oggetto non è valido.

Il tipo di dati degli elementi Vector, `T` , deve soddisfare i requisiti seguenti. In caso contrario, il comportamento della `concurrent_vector` classe non è definito.

- Il distruttore non deve generare.

- Se il costruttore di copia o predefinito genera, il distruttore non deve essere dichiarato tramite la **`virtual`** parola chiave e deve funzionare correttamente con la memoria inizializzata su zero.

[All'[inizio](#top)]

## <a name="concurrent_queue-class"></a><a name="queue"></a>Classe concurrent_queue

La classe [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) , proprio come la classe [std:: Queue](../../standard-library/queue-class.md) , consente di accedere agli elementi front e back. La `concurrent_queue` classe Abilita le operazioni di Accodamento e rimozione dalla coda della concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico. La `concurrent_queue` classe fornisce inoltre supporto per gli iteratori non indipendenti dalla concorrenza.

### <a name="differences-between-concurrent_queue-and-queue"></a><a name="queue-differences"></a>Differenze tra concurrent_queue e Queue

La `concurrent_queue` classe è molto simile alla `queue` classe. I punti seguenti illustrano dove `concurrent_queue` differisce da `queue` :

- Le operazioni di Accodamento e rimozione dalla coda su un `concurrent_queue` oggetto sono indipendenti dalla concorrenza.

- La `concurrent_queue` classe fornisce supporto per gli iteratori non indipendenti dalla concorrenza.

- La `concurrent_queue` classe non fornisce i `front` metodi o `pop` . La `concurrent_queue` classe sostituisce questi metodi definendo il metodo [try_pop](reference/concurrent-queue-class.md#try_pop) .

- La `concurrent_queue` classe non fornisce il `back` metodo. Pertanto, non è possibile fare riferimento alla fine della coda.

- La `concurrent_queue` classe fornisce il metodo [unsafe_size](reference/concurrent-queue-class.md#unsafe_size) anziché il `size` metodo. Il `unsafe_size` metodo non è indipendente dalla concorrenza.

### <a name="concurrency-safe-operations"></a><a name="queue-safety"></a>Operazioni indipendenti dalla concorrenza

Tutti i metodi che accodano o deaccodano da un `concurrent_queue` oggetto sono indipendenti dalla concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico.

La tabella seguente illustra i `concurrent_queue` metodi e gli operatori comuni che sono indipendenti dalla concorrenza.

|||
|-|-|
|[empty](reference/concurrent-queue-class.md#empty)|[push](reference/concurrent-queue-class.md#push)|
|[get_allocator](reference/concurrent-queue-class.md#get_allocator)|[try_pop](reference/concurrent-queue-class.md#try_pop)|

Sebbene il `empty` metodo sia indipendente dalla concorrenza, un'operazione simultanea può causare l'aumento o la riduzione della coda prima che il `empty` metodo venga restituito.

La tabella seguente illustra i metodi e gli operatori comuni che non sono indipendenti dalla concorrenza.

|||
|-|-|
|[deselezionare](reference/concurrent-queue-class.md#clear)|[unsafe_end](reference/concurrent-queue-class.md#unsafe_end)|
|[unsafe_begin](reference/concurrent-queue-class.md#unsafe_begin)|[unsafe_size](reference/concurrent-queue-class.md#unsafe_size)|

### <a name="iterator-support"></a><a name="queue-iterators"></a>Supporto degli iteratori

`concurrent_queue`Fornisce gli iteratori non indipendenti dalla concorrenza. Si consiglia di usare questi iteratori solo per il debug.

Un `concurrent_queue` iteratore attraversa gli elementi solo nella direzione di avanzamento. La tabella seguente illustra gli operatori supportati da ogni iteratore.

|Operatore|Descrizione|
|--------------|-----------------|
|`operator++`|Passa all'elemento successivo nella coda. Questo operatore è sottoposto a overload per fornire la semantica di pre-incremento e post-incremento.|
|`operator*`|Recupera un riferimento all'elemento corrente.|
|`operator->`|Recupera un puntatore all'elemento corrente.|

[All'[inizio](#top)]

## <a name="concurrent_unordered_map-class"></a><a name="unordered_map"></a>Classe concurrent_unordered_map

La classe [Concurrency:: concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) è una classe contenitore associativa che, proprio come la classe [std:: unordered_map](../../standard-library/unordered-map-class.md) , controlla una sequenza di lunghezza variabile di elementi di tipo [std::p Air \<const Key, Ty> ](../../standard-library/pair-structure.md). Si pensi a una mappa non ordinata come a un dizionario in cui è possibile aggiungere una coppia chiave-valore o cercare un valore in base alla chiave. Questa classe è utile quando si dispone di più thread o attività che devono accedere simultaneamente a un contenitore condiviso, inserirlo o aggiornarlo.

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_map` . Questo esempio Mostra come inserire chiavi di caratteri nell'intervallo [' a',' i ']. Poiché l'ordine delle operazioni non è determinato, anche il valore finale per ogni chiave è indeterminato. Tuttavia, è possibile eseguire gli inserimenti in parallelo in modo sicuro.

[!code-cpp[concrt-unordered-map-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_2.cpp)]

Per un esempio che usa `concurrent_unordered_map` per eseguire un'operazione di mapping e riduzione in parallelo, vedere [procedura: eseguire operazioni di mapping e riduzione in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).

### <a name="differences-between-concurrent_unordered_map-and-unordered_map"></a><a name="map-differences"></a>Differenze tra concurrent_unordered_map e unordered_map

La `concurrent_unordered_map` classe è molto simile alla `unordered_map` classe. I punti seguenti illustrano dove `concurrent_unordered_map` differisce da `unordered_map` :

- I `erase` metodi,, `bucket` `bucket_count` e `bucket_size` sono denominati `unsafe_erase` rispettivamente,, `unsafe_bucket` `unsafe_bucket_count` e `unsafe_bucket_size` . La `unsafe_` convenzione di denominazione indica che questi metodi non sono indipendenti dalla concorrenza. Per altre informazioni sulla sicurezza della concorrenza, vedere [operazioni indipendenti dalla concorrenza](#map-safety).

- Le operazioni di inserimento non invalidano i puntatori o gli iteratori esistenti, né modificano l'ordine degli elementi già presenti nella mappa. Le operazioni di inserimento e attraversamento possono verificarsi simultaneamente.

- `concurrent_unordered_map`supporta solo l'iterazione in diretta.

- L'inserimento non invalida o aggiorna gli iteratori restituiti da `equal_range` . L'inserimento può aggiungere elementi diversi alla fine dell'intervallo. L'iteratore Begin punta a un elemento EQUAL.

Per evitare deadlock, nessun metodo di `concurrent_unordered_map` blocca un blocco quando chiama l'allocatore di memoria, le funzioni hash o altro codice definito dall'utente. Inoltre, è necessario assicurarsi che la funzione hash valuti sempre le chiavi uguali allo stesso valore. Le funzioni hash migliori distribuiscono le chiavi in modo uniforme nello spazio di codice hash.

### <a name="concurrency-safe-operations"></a><a name="map-safety"></a>Operazioni indipendenti dalla concorrenza

La `concurrent_unordered_map` classe consente operazioni di inserimento e accesso agli elementi indipendenti dalla concorrenza. Le operazioni di inserimento non invalidano i puntatori o gli iteratori esistenti. Anche le operazioni di accesso e attraversamento degli iteratori sono sicure per la concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico. La tabella seguente illustra i `concurrent_unordered_map` metodi e gli operatori comunemente usati che sono indipendenti dalla concorrenza.

|||||
|-|-|-|-|
|[at](reference/concurrent-unordered-map-class.md#at)|`count`|`find`|[key_eq](reference/concurrent-unordered-map-class.md#key_eq)|
|`begin`|`empty`|`get_allocator`|`max_size`|
|`cbegin`|`end`|`hash_function`|[operator&#91;&#93;](reference/concurrent-unordered-map-class.md#operator_at)|
|`cend`|`equal_range`|[insert](reference/concurrent-unordered-map-class.md#insert)|`size`|

Sebbene il `count` metodo possa essere chiamato in modo sicuro dai thread in esecuzione simultanea, diversi thread possono ricevere risultati diversi se un nuovo valore viene inserito simultaneamente nel contenitore.

La tabella seguente illustra i metodi e gli operatori comunemente usati che non sono indipendenti dalla concorrenza.

||||
|-|-|-|
|`clear`|`max_load_factor`|`rehash`|
|`load_factor`|[operatore =](reference/concurrent-unordered-map-class.md#operator_eq)

Oltre a questi metodi, qualsiasi metodo che inizia con `unsafe_` non è anche indipendente dalla concorrenza.

[All'[inizio](#top)]

## <a name="concurrent_unordered_multimap-class"></a><a name="unordered_multimap"></a>Classe concurrent_unordered_multimap

La classe [Concurrency:: concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md) somiglia strettamente alla `concurrent_unordered_map` classe, ad eccezione del fatto che consente di eseguire il mapping di più valori alla stessa chiave. Si differenzia anche da `concurrent_unordered_map` nei modi seguenti:

- Il metodo [concurrent_unordered_multimap:: Insert](reference/concurrent-unordered-multimap-class.md#insert) restituisce un iteratore anziché `std::pair<iterator, bool>` .

- La `concurrent_unordered_multimap` classe non fornisce `operator[]` né il `at` metodo.

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_multimap` . Questo esempio Mostra come inserire chiavi di caratteri nell'intervallo [' a',' i ']. `concurrent_unordered_multimap`consente a una chiave di avere più valori.

[!code-cpp[concrt-unordered-multimap-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_3.cpp)]

[All'[inizio](#top)]

## <a name="concurrent_unordered_set-class"></a><a name="unordered_set"></a>Classe concurrent_unordered_set

La classe [Concurrency:: concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md) è strettamente simile alla `concurrent_unordered_map` classe, ad eccezione del fatto che gestisce i valori anziché le coppie chiave-valore. La `concurrent_unordered_set` classe non fornisce `operator[]` né il `at` metodo.

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_set` . In questo esempio vengono inseriti i valori di carattere nell'intervallo [' a',' i ']. È possibile eseguire gli inserimenti in parallelo in modo sicuro.

[!code-cpp[concrt-unordered-set#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_4.cpp)]

[All'[inizio](#top)]

## <a name="concurrent_unordered_multiset-class"></a><a name="unordered_multiset"></a>Classe concurrent_unordered_multiset

La classe [Concurrency:: concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md) somiglia strettamente alla `concurrent_unordered_set` classe, ad eccezione del fatto che consente valori duplicati. Si differenzia anche da `concurrent_unordered_set` nei modi seguenti:

- Il metodo [concurrent_unordered_multiset:: Insert](reference/concurrent-unordered-multiset-class.md#insert) restituisce un iteratore anziché `std::pair<iterator, bool>` .

- La `concurrent_unordered_multiset` classe non fornisce `operator[]` né il `at` metodo.

Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_multiset` . In questo esempio vengono inseriti i valori di carattere nell'intervallo [' a',' i ']. `concurrent_unordered_multiset`consente il verificarsi di un valore più volte.

[!code-cpp[concrt-unordered-multiset#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_5.cpp)]

[All'[inizio](#top)]

## <a name="combinable-class"></a><a name="combinable"></a>Classe combinable

La classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) fornisce un archivio locale di thread riutilizzabile che consente di eseguire calcoli con granularità fine, quindi unire tali calcoli in un risultato finale. È possibile considerare un oggetto `combinable` come una variabile di riduzione.

La `combinable` classe è utile quando si dispone di una risorsa condivisa tra più thread o attività. La `combinable` classe consente di eliminare lo stato condiviso fornendo l'accesso alle risorse condivise in modo senza blocco. Questa classe fornisce pertanto un'alternativa all'utilizzo di un meccanismo di sincronizzazione, ad esempio un mutex, per sincronizzare l'accesso ai dati condivisi da più thread.

### <a name="methods-and-features"></a><a name="combinable-features"></a>Metodi e funzionalità

Nella tabella seguente vengono illustrati alcuni dei metodi importanti della `combinable` classe. Per ulteriori informazioni su tutti i `combinable` metodi della classe, vedere [classe combinable](../../parallel/concrt/reference/combinable-class.md).

|Metodo|Descrizione|
|------------|-----------------|
|[locale](reference/combinable-class.md#local)|Recupera un riferimento alla variabile locale associata al contesto del thread corrente.|
|[deselezionare](reference/combinable-class.md#clear)|Rimuove tutte le variabili locali di thread dall' `combinable` oggetto.|
|[combinare](reference/combinable-class.md#combine)<br /><br /> [combine_each](reference/combinable-class.md#combine_each)|Usa la funzione combinata fornita per generare un valore finale dal set di tutti i calcoli locali dei thread.|

La `combinable` classe è una classe modello che è parametrizzata sul risultato finale Unito. Se si chiama il costruttore predefinito, il `T` tipo di parametro del modello deve disporre di un costruttore predefinito e di un costruttore di copia. Se il `T` tipo di parametro di modello non dispone di un costruttore predefinito, chiamare la versione di overload del costruttore che accetta come parametro una funzione di inizializzazione.

È possibile archiviare dati aggiuntivi in un `combinable` oggetto dopo avere chiamato i metodi [combine](reference/combinable-class.md#combine) o [combine_each](reference/combinable-class.md#combine_each) . È anche possibile chiamare `combine` `combine_each` più volte i metodi e. Se non viene modificato alcun valore locale in un `combinable` oggetto, i `combine` `combine_each` metodi e producono lo stesso risultato ogni volta che vengono chiamati.

### <a name="examples"></a><a name="combinable-examples"></a> Esempi

Per esempi su come usare la `combinable` classe, vedere gli argomenti seguenti:

- [Procedura: utilizzare combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)

- [Procedura: utilizzare combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)

[All'[inizio](#top)]

## <a name="related-topics"></a>Argomenti correlati

[Procedura: usare i contenitori paralleli per aumentare l'efficienza](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)<br/>
Mostra come usare i contenitori paralleli per archiviare e accedere in modo efficiente ai dati in parallelo.

[Procedura: utilizzare combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br/>
Viene illustrato come utilizzare la `combinable` classe per eliminare lo stato condiviso e quindi migliorare le prestazioni.

[Procedura: utilizzare combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)<br/>
Viene illustrato come utilizzare una `combine` funzione per unire set di dati locali di thread.

[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Viene descritta la libreria PPL, che fornisce un modello di programmazione imperativo che promuove la scalabilità e la facilità di utilizzo per lo sviluppo di applicazioni simultanee.

## <a name="reference"></a>Informazioni di riferimento

[Classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)

[Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)

[Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)

[Classe concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)

[Classe concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md)

[Classe concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)

[Classe combinable](../../parallel/concrt/reference/combinable-class.md)
