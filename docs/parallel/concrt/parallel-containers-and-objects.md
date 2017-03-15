---
title: "Contenitori e oggetti paralleli | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti paralleli"
  - "contenitori paralleli"
  - "contenitori simultanei"
ms.assetid: 90ab715c-29cd-48eb-8e76-528619aab466
caps.latest.revision: 34
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 34
---
# Contenitori e oggetti paralleli
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria PPL (Parallel Patterns Library) include diversi contenitori e oggetti che forniscono l'accesso thread-safe ai relativi elementi.  
  
 Oggetto *contenitore simultaneo* fornisce l'accesso sicuro di concorrenza per le operazioni più importanti. La funzionalità di questi contenitori è simile a quelle fornite dalla libreria di modelli Standard (STL). Ad esempio, il [concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) classe è simile al [std:: Vector](vector%20Class.md) classe, con la differenza che la `concurrent_vector` classe consente di accodare gli elementi in parallelo. Utilizzare i contenitori simultanei quando si dispone di codice parallelo che richiede l'accesso in lettura e scrittura nello stesso contenitore.  
  
 Oggetto *oggetto simultaneo* viene condiviso contemporaneamente tra i componenti. Un processo che calcola lo stato di un oggetto simultaneo in parallelo produce lo stesso risultato di un altro processo che calcola lo stesso stato in modo seriale. Il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe è un esempio di un tipo di oggetto simultaneo. La `combinable` classe consente di eseguire calcoli in parallelo e quindi combinare tali calcoli in un risultato finale. Utilizzare gli oggetti simultanei quando in caso contrario, è necessario utilizzare un meccanismo di sincronizzazione, ad esempio, un mutex, per sincronizzare l'accesso a una variabile condivisa o una risorsa.  
  
##  <a name="a-nametopa-sections"></a><a name="top"></a> Nelle sezioni  
 In questo argomento vengono descritti i seguenti contenitori e oggetti paralleli in dettaglio.  
  
 Contenitori simultanei:  
  
-   [Classe concurrent_vector](#vector)  
  
    -   [Differenze tra concurrent_vector e Vector](#vector-differences)  
  
    -   [Operazioni indipendenti dalla concorrenza](#vector-safety)  
  
    -   [Sicurezza dell'eccezione](#vector-exceptions)  
  
-   [Classe concurrent_queue](#queue)  
  
    -   [Differenze tra concurrent_queue e coda](#queue-differences)  
  
    -   [Operazioni indipendenti dalla concorrenza](#queue-safety)  
  
    -   [Supporto degli iteratori](#queue-iterators)  
  
-   [Classe concurrent_unordered_map](#unordered_map)  
  
    -   [Unordered_map e differenze tra concurrent_unordered_map](#map-differences)  
  
    -   [Operazioni indipendenti dalla concorrenza](#map-safety)  
  
-   [Classe concurrent_unordered_multimap](#unordered_multimap)  
  
-   [Classe concurrent_unordered_set](#unordered_set)  
  
-   [Classe concurrent_unordered_multiset](#unordered_multiset)  
  
 Oggetti simultanei:  
  
-   [combinable (classe)](#combinable)  
  
    -   [Metodi e funzionalità](#combinable-features)  
  
    -   [Esempi](#combinable-examples)  
  
##  <a name="a-namevectora-concurrentvector-class"></a><a name="vector"></a> Classe concurrent_vector  
 Il [concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) classe è una classe contenitore di sequenza che, come il [std:: Vector](vector%20Class.md) classe, consente di accedere in modo casuale ai relativi elementi. La `concurrent_vector` classe consente di aggiungere indipendenti dalla concorrenza e di elemento di accedere alle operazioni. Aggiungere le operazioni non invalidano i puntatori esistenti o gli iteratori. Le operazioni di accesso e l'attraversamento di iteratore sono indipendenti dalla concorrenza.  
  
###  <a name="a-namevector-differencesa-differences-between-concurrentvector-and-vector"></a><a name="vector-differences"></a> Differenze tra concurrent_vector e Vector  
 La `concurrent_vector` classe rispecchia maggiormente la `vector` classe. La complessità di accodamento, l'accesso agli elementi e operazioni di accesso iteratore un `concurrent_vector` oggetto sono le stesse di una `vector` oggetto. I punti seguenti illustrano dove `concurrent_vector` è diverso da `vector`:  
  
-   Aggiungere l'accesso agli elementi, iteratori e le operazioni di attraversamento di iteratore in un `concurrent_vector` oggetto sono indipendenti dalla concorrenza.  
  
-   È possibile aggiungere elementi solo fino alla fine di un `concurrent_vector` oggetto. La `concurrent_vector` classe non fornisce il `insert` metodo.  
  
-   Oggetto `concurrent_vector` non utilizza l'oggetto [la semantica di spostamento](../../cpp/rvalue-reference-declarator-amp-amp.md) quando si aggiunge a esso.  
  
-   La `concurrent_vector` classe non fornisce il `erase` o `pop_back` metodi. Come con `vector`, utilizzare il [deselezionare](../Topic/concurrent_vector::clear%20Method.md) metodo per rimuovere tutti gli elementi da un `concurrent_vector` oggetto.  
  
-   La `concurrent_vector` classe archivia i relativi elementi in modo contiguo nella memoria. Pertanto, è possibile utilizzare il `concurrent_vector` (classe) in tutte le modalità che è possibile utilizzare una matrice. Ad esempio, per una variabile denominata `v` di tipo `concurrent_vector`, l'espressione `&v[0]+2` produce un comportamento indefinito.  
  
-   La `concurrent_vector` classe definisce il [grow_by](../Topic/concurrent_vector::grow_by%20Method.md) e [grow_to_at_least](../Topic/concurrent_vector::grow_to_at_least%20Method.md) metodi. Questi metodi sono simili di [ridimensionare](../Topic/concurrent_vector::resize%20Method.md) metodo, ad eccezione del fatto che siano indipendenti dalla concorrenza.  
  
-   Oggetto `concurrent_vector` oggetto non consente di spostare gli elementi quando si aggiungervi o ridimensionarlo. In questo modo ai puntatori esistenti e gli iteratori rimangono validi durante le operazioni simultanee.  
  
-   Il runtime non definisce una versione specializzata di `concurrent_vector` per tipo `bool`.  
  
###  <a name="a-namevector-safetya-concurrency-safe-operations"></a><a name="vector-safety"></a> Operazioni indipendenti dalla concorrenza  
 Tutti i metodi che aggiungere o aumentano le dimensioni di un `concurrent_vector` dell'oggetto o accedere a un elemento in un `concurrent_vector` di oggetto, sono indipendenti dalla concorrenza. L'eccezione a questa regola è il `resize` metodo.  
  
 La tabella seguente illustra i comuni `concurrent_vector` metodi e gli operatori che sono indipendenti dalla concorrenza.  
  
||||  
|-|-|-|  
|[in](../Topic/concurrent_vector::at%20Method.md)|[fine](../Topic/concurrent_vector::end%20Method.md)|[operatore &#91; &#93;](../Topic/concurrent_vector::operatorOperator.md)|  
|[iniziare](../Topic/concurrent_vector::begin%20Method.md)|[primo piano](../Topic/concurrent_vector::front%20Method.md)|[push_back](../Topic/concurrent_vector::push_back%20Method.md)|  
|[Indietro](../Topic/concurrent_vector::back%20Method.md)|[grow_by](../Topic/concurrent_vector::grow_by%20Method.md)|[rbegin](../Topic/concurrent_vector::rbegin%20Method.md)|  
|[capacità](../Topic/concurrent_vector::capacity%20Method.md)|[grow_to_at_least](../Topic/concurrent_vector::grow_to_at_least%20Method.md)|[REND)](../Topic/concurrent_vector::rend%20Method.md)|  
|[vuoto](../Topic/concurrent_vector::empty%20Method.md)|[max_size](../Topic/concurrent_vector::max_size%20Method.md)|[dimensioni](../Topic/concurrent_vector::size%20Method.md)|  
  
 Operazioni offerte dal runtime per la compatibilità con la libreria STL, ad esempio, `reserve`, non sono indipendenti dalla concorrenza. La tabella seguente illustra i metodi e operatori che non sono indipendenti dalla concorrenza comuni.  
  
|||  
|-|-|  
|[assegnare](../Topic/concurrent_vector::assign%20Method.md)|[riserva](../Topic/concurrent_vector::reserve%20Method.md)|  
|[deselezionare](../Topic/concurrent_vector::clear%20Method.md)|[ridimensionamento](../Topic/concurrent_vector::resize%20Method.md)|  
|[operatore =](../Topic/concurrent_vector::operator=%20Operator.md)|[shrink_to_fit](../Topic/concurrent_vector::shrink_to_fit%20Method.md)|  
  
 Le operazioni che modificano il valore degli elementi esistenti non sono indipendenti dalla concorrenza. Utilizzare un oggetto di sincronizzazione, ad esempio un [reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) oggetto di sincronizzazione simultanee di lettura e operazioni di scrittura allo stesso elemento di dati. Per ulteriori informazioni sugli oggetti di sincronizzazione, vedere [strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md).  
  
 Quando si converte codice esistente che utilizza `vector` utilizzare `concurrent_vector`, operazioni simultanee possono causare il comportamento dell'applicazione di modifica. Si consideri ad esempio il programma seguente che vengono eseguite contemporaneamente due attività in un `concurrent_vector` oggetto. La prima attività accoda elementi aggiuntivi a un `concurrent_vector` oggetto. La seconda attività calcola la somma di tutti gli elementi nello stesso oggetto.  
  
 [!code-cpp[concrt-vector-safety#1](../../parallel/concrt/codesnippet/CPP/parallel-containers-and-objects_1.cpp)]  
  
 Anche se il `end` metodo sia indipendente dalla concorrenza, una chiamata simultanea di [push_back](../Topic/concurrent_vector::push_back%20Method.md) (metodo), il valore restituito da `end` per modificare. Il numero di elementi che attraversa l'iteratore è indeterminato. Pertanto, questo programma può produrre un risultato diverso ogni volta che viene eseguito.  
  
###  <a name="a-namevector-exceptionsa-exception-safety"></a><a name="vector-exceptions"></a> Sicurezza dell'eccezione  
 Se un'operazione di aumento delle dimensioni o assegnazione genera un'eccezione, lo stato di `concurrent_vector` oggetto diventa non valido. Il comportamento di un `concurrent_vector` oggetto in uno stato non valido è definito se non specificato diversamente. Tuttavia, il distruttore libera sempre la memoria allocata dall'oggetto, anche se l'oggetto è in uno stato non valido.  
  
 Il tipo di dati degli elementi del vettore, `T`, deve soddisfare i requisiti seguenti. In caso contrario, il comportamento della `concurrent_vector` classe è definita.  
  
-   Il distruttore non deve generare.  
  
-   Se il costruttore predefinito o di copia genera, il distruttore non deve essere dichiarato tramite il `virtual` (parola chiave) e deve funzionare correttamente con memoria inizializzate su zero.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namequeuea-concurrentqueue-class"></a><a name="queue"></a> Classe concurrent_queue  
 Il [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) classe, come il [std:: Queue](../../standard-library/queue-class.md) classe, consente di accedere il primo piano e il backup di elementi. Il `concurrent_queue` enqueue indipendenti dalla concorrenza consente di classe e le operazioni di rimozione dalla coda. La `concurrent_queue` classe fornisce inoltre il supporto iteratori non indipendenti dalla concorrenza.  
  
###  <a name="a-namequeue-differencesa-differences-between-concurrentqueue-and-queue"></a><a name="queue-differences"></a> Differenze tra concurrent_queue e coda  
 La `concurrent_queue` classe rispecchia maggiormente la `queue` classe. I punti seguenti illustrano dove `concurrent_queue` è diverso da `queue`:  
  
-   Enqueue e dequeue operazioni su un `concurrent_queue` oggetto sono indipendenti dalla concorrenza.  
  
-   La `concurrent_queue` classe fornisce il supporto iteratori non indipendenti dalla concorrenza.  
  
-   La `concurrent_queue` classe non fornisce il `front` o `pop` metodi. La `concurrent_queue` classe sostituisce questi metodi definendo il [try_pop](../Topic/concurrent_queue::try_pop%20Method.md) metodo.  
  
-   La `concurrent_queue` classe non fornisce il `back` metodo. Pertanto, è possibile fare riferimento la fine della coda.  
  
-   La `concurrent_queue` classe fornisce il [unsafe_size](../Topic/concurrent_queue::unsafe_size%20Method.md) metodo invece di `size` (metodo). Il `unsafe_size` metodo non è indipendente dalla concorrenza.  
  
###  <a name="a-namequeue-safetya-concurrency-safe-operations"></a><a name="queue-safety"></a> Operazioni indipendenti dalla concorrenza  
 Tutti i metodi che accodano dati a o rimuovere dalla coda da un `concurrent_queue` oggetto sono indipendenti dalla concorrenza.  
  
 La tabella seguente illustra i comuni `concurrent_queue` metodi e gli operatori che sono indipendenti dalla concorrenza.  
  
|||  
|-|-|  
|[vuoto](../Topic/concurrent_queue::empty%20Method.md)|[push](../Topic/concurrent_queue::push%20Method.md)|  
|[get_allocator](../Topic/concurrent_queue::get_allocator%20Method.md)|[try_pop](../Topic/concurrent_queue::try_pop%20Method.md)|  
  
 Sebbene il `empty` metodo sia indipendente dalla concorrenza, un'operazione simultanea potrebbe determinare la coda aumentare o ridurre la prima di `empty` restituzione del metodo.  
  
 La tabella seguente illustra i metodi e operatori che non sono indipendenti dalla concorrenza comuni.  
  
|||  
|-|-|  
|[deselezionare](../Topic/concurrent_queue::clear%20Method.md)|[unsafe_end](../Topic/concurrent_queue::unsafe_end%20Method.md)|  
|[unsafe_begin](../Topic/concurrent_queue::unsafe_begin%20Method.md)|[unsafe_size](../Topic/concurrent_queue::unsafe_size%20Method.md)|  
  
###  <a name="a-namequeue-iteratorsa-iterator-support"></a><a name="queue-iterators"></a> Supporto degli iteratori  
 Il `concurrent_queue` fornisce gli iteratori che non sono indipendenti dalla concorrenza. È consigliabile utilizzare questi iteratori solo per il debug.  
  
 Oggetto `concurrent_queue` iteratore consente di scorrere gli elementi nella direzione dell'inoltro. La tabella seguente illustra gli operatori supportati da ciascuno di essi.  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[operator + +](http://msdn.microsoft.com/it-it/4cfdd07e-927a-42f8-aaa0-d6881687f413)|Avanza all'elemento successivo nella coda. Questo operatore viene sottoposto a overload per fornire la semantica di pre-incremento e post-incremento.|  
|[operatore *](http://msdn.microsoft.com/it-it/a0e671fc-76e6-4fb4-b95c-ced4dd2b2017)|Recupera un riferimento all'elemento corrente.|  
|[operator ->](http://msdn.microsoft.com/it-it/41fa393d-ae1e-4a38-bb4b-19e8df709ca9)|Recupera un puntatore all'elemento corrente.|  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameunorderedmapa-concurrentunorderedmap-class"></a><a name="unordered_map"></a> Classe concurrent_unordered_map  
 Il [HYPERLINK "file:///C:\\\Users\\\thompet\\\AppData\\\Local\\\Temp\\\DxEditor\\\DduePreview\\\Default\\\798d7037-df37-4310-858b-6f590bbf6ebf\\\HTM\\\html\\\a217b4ac-af2b-4d41-94eb-09a75ee28622" concurrency::concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) è una classe contenitore associativo che, come il [std:: unordered_map](../../standard-library/unordered-map-class.md) classe, controlla una sequenza di lunghezza variabile di elementi di tipo [std:: Pair \< chiave const, Ty >](../../standard-library/pair-structure.md). Una mappa non ordinata può essere paragonato a un dizionario che è possibile aggiungere una coppia chiave / valore a o cercare un valore dalla chiave. Questa classe è utile quando si dispone di più thread o attività che devono accedere a un contenitore condiviso, inserire al suo interno o aggiornarlo contemporaneamente.  
  
 Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_map`. In questo esempio inserisce le chiavi di caratteri nell'intervallo ['a', ' i']. Poiché non è possibile stabilire l'ordine delle operazioni, il valore finale per ogni chiave è indeterminato. Tuttavia, è consigliabile eseguire inserimenti in parallelo.  
  
 [!code-cpp[concrt-unordered-map-structure#1](../../parallel/concrt/codesnippet/CPP/parallel-containers-and-objects_2.cpp)]  
  
 Per un esempio che utilizza `concurrent_unordered_map` per eseguire una mappa e ridurre l'operazione in parallelo, vedere [procedura: eseguire mappa e ridurre le operazioni in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).  
  
###  <a name="a-namemap-differencesa-differences-between-concurrentunorderedmap-and-unorderedmap"></a><a name="map-differences"></a> Unordered_map e differenze tra concurrent_unordered_map  
 La `concurrent_unordered_map` classe rispecchia maggiormente la `unordered_map` classe. I punti seguenti illustrano dove `concurrent_unordered_map` è diverso da `unordered_map`:  
  
-   Il `erase`, `bucket`, `bucket_count`, e `bucket_size` sono denominati metodi `unsafe_erase`, `unsafe_bucket`, `unsafe_bucket_count`, e `unsafe_bucket_size`, rispettivamente. Il `unsafe_` convenzione di denominazione indica che questi metodi non sono indipendenti dalla concorrenza. Per ulteriori informazioni sulla protezione di concorrenza, vedere [operazioni indipendenti dalla concorrenza](#map-safety).  
  
-   Le operazioni di inserimento non invalidano i puntatori esistenti o gli iteratori, né modificano l'ordine degli elementi già presenti nella mappa. Inserire e attraversare le operazioni possono venire generati contemporaneamente.  
  
-   `concurrent_unordered_map` supporta inoltra solo l'iterazione.  
  
-   Inserimento non invalidano né aggiornare gli iteratori che sono restituiti da `equal_range`. Inserimento è possibile aggiungere diversi elementi alla fine dell'intervallo. L'iteratore begin punta a un elemento uguale.  
  
 Per evitare deadlock, alcun metodo di `concurrent_unordered_map` quando chiama l'allocatore di memoria, le funzioni hash o altro codice definito dall'utente è responsabile del blocco. Inoltre, è necessario verificare che la funzione hash valuta sempre uguale chiavi per lo stesso valore. Le funzioni hash migliore di distribuire le chiavi in modo uniforme tra lo spazio di codice hash.  
  
###  <a name="a-namemap-safetya-concurrency-safe-operations"></a><a name="map-safety"></a> Operazioni indipendenti dalla concorrenza  
 La `concurrent_unordered_map` classe consente di eseguire operazioni insert e accesso agli elementi indipendenti dalla concorrenza. Le operazioni di inserimento non invalidano i puntatori esistenti o gli iteratori. Le operazioni di accesso e l'attraversamento di iteratore sono indipendenti dalla concorrenza. Nella tabella seguente vengono usati comunemente `concurrent_unordered_map` metodi e gli operatori che sono indipendenti dalla concorrenza.  
  
|||||  
|-|-|-|-|  
|[in](../Topic/concurrent_unordered_map::at%20Method.md)|`count`|`find`|[key_eq](../Topic/concurrent_unordered_map::key_eq%20Method.md)|  
|`begin`|`empty`|`get_allocator`|`max_size`|  
|`cbegin`|`end`|`hash_function`|[operatore &#91; &#93;](../Topic/concurrent_unordered_map::operatorOperator.md)|  
|`cend`|`equal_range`|[inserimento](../Topic/concurrent_unordered_map::insert%20Method.md)|`size`|  
  
 Sebbene il `count` metodo può essere chiamato in modo sicuro dall'esecuzione simultanea di thread, thread diversi possono ottenere risultati diversi se un nuovo valore contemporaneamente è inserito nel contenitore.  
  
 La tabella seguente illustra i metodi comunemente utilizzati e gli operatori che non sono indipendenti dalla concorrenza.  
  
||||  
|-|-|-|  
|`clear`|`max_load_factor`|`rehash`|  
|`load_factor`|[operatore =](../Topic/concurrent_unordered_map::operator=%20Operator.md)|[swap](../Topic/concurrent_unordered_map::swap%20Method.md)|  
  
 Oltre a questi metodi, qualsiasi metodo che inizia con `unsafe_` non è inoltre indipendenti dalla concorrenza.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameunorderedmultimapa-concurrentunorderedmultimap-class"></a><a name="unordered_multimap"></a> Classe concurrent_unordered_multimap  
 Il [concurrency::concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md) classe simile di `concurrent_unordered_map` ad eccezione del fatto che consente di eseguire il mapping alla stessa chiave di più valori. È inoltre diverso da `concurrent_unordered_map` nei modi seguenti:  
  
-   Il [concurrent_unordered_multimap:: Insert](../Topic/concurrent_unordered_multimap::insert%20Method.md) metodo restituisce un iteratore invece di `std::pair<iterator, bool>`.  
  
-   La `concurrent_unordered_multimap` classe non fornisce `operator[]` né `at` metodo.  
  
 Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_multimap`. In questo esempio inserisce le chiavi di caratteri nell'intervallo ['a', ' i']. `concurrent_unordered_multimap` consente a una chiave per avere più valori.  
  
 [!code-cpp[concrt-unordered-multimap-structure#1](../../parallel/concrt/codesnippet/CPP/parallel-containers-and-objects_3.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameunorderedseta-concurrentunorderedset-class"></a><a name="unordered_set"></a> Classe concurrent_unordered_set  
 Il [concurrency::concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md) classe ricorda la `concurrent_unordered_map` classe con la differenza che gestisce i valori invece di coppie chiave / valore. La `concurrent_unordered_set` classe non fornisce `operator[]` né `at` metodo.  
  
 Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_set`. In questo esempio inserisce i valori di carattere nell'intervallo ['a', ' i']. È consigliabile eseguire inserimenti in parallelo.  
  
 [!code-cpp[concrt-unordered-set#1](../../parallel/concrt/codesnippet/CPP/parallel-containers-and-objects_4.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-nameunorderedmultiseta-concurrentunorderedmultiset-class"></a><a name="unordered_multiset"></a> Classe concurrent_unordered_multiset  
 Il [concurrency::concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md) classe simile di `concurrent_unordered_set` ad eccezione del fatto che consente valori duplicati. È inoltre diverso da `concurrent_unordered_set` nei modi seguenti:  
  
-   Il [concurrent_unordered_multiset:: Insert](../Topic/concurrent_unordered_multiset::insert%20Method.md) metodo restituisce un iteratore invece di `std::pair<iterator, bool>`.  
  
-   La `concurrent_unordered_multiset` classe non fornisce `operator[]` né `at` metodo.  
  
 Nell'esempio seguente viene illustrata la struttura di base per l'utilizzo di `concurrent_unordered_multiset`. In questo esempio inserisce i valori di carattere nell'intervallo ['a', ' i']. `concurrent_unordered_multiset` consente un valore di ricorrere più volte.  
  
 [!code-cpp[concrt-unordered-multiset#1](../../parallel/concrt/codesnippet/CPP/parallel-containers-and-objects_5.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="a-namecombinablea-combinable-class"></a><a name="combinable"></a> combinable (classe)  
 Il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe fornisce l'archiviazione locale di thread e riutilizzabile che consente di eseguire calcoli con granularità fine e quindi unire tali calcoli in un risultato finale. È possibile considerare un oggetto `combinable` come una variabile di riduzione.  
  
 La `combinable` classe è utile quando si dispone di una risorsa che viene condiviso tra diversi thread o attività. La `combinable` classe consente di eliminare lo stato condiviso fornendo accesso alle risorse condivise in una modalità senza blocchi. Pertanto, questa classe fornisce un'alternativa all'utilizzo di un meccanismo di sincronizzazione, ad esempio, un mutex, per sincronizzare l'accesso ai dati condivisi da più thread.  
  
###  <a name="a-namecombinable-featuresa-methods-and-features"></a><a name="combinable-features"></a> Metodi e funzionalità  
 Nella tabella seguente vengono illustrati alcuni dei metodi importanti della `combinable` classe. Per ulteriori informazioni su tutti i `combinable` metodi della classe, vedere [classe combinable](../../parallel/concrt/reference/combinable-class.md).  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[locale](../Topic/combinable::local%20Method.md)|Recupera un riferimento alla variabile locale associata al contesto del thread corrente.|  
|[deselezionare](../Topic/combinable::clear%20Method.md)|Rimuove tutte le variabili locali del thread dal `combinable` oggetto.|  
|[combinare](../Topic/combinable::combine%20Method.md)<br /><br /> [combine_each](../Topic/combinable::combine_each%20Method.md)|Utilizza la funzione combine fornita per generare un valore finale dal set di tutti i calcoli locali del thread.|  
  
 La `combinable` classe è una classe di modello contenente i parametri per il risultato finale unito. Se si chiama il costruttore predefinito, il `T` il tipo di parametro di modello deve avere un costruttore predefinito e un costruttore di copia. Se il `T` il tipo di parametro di modello non dispone di un costruttore predefinito, chiamare la versione di overload del costruttore che accetta una funzione di inizializzazione come parametro.  
  
 È possibile archiviare dati aggiuntivi in un `combinable` dell'oggetto dopo la chiamata di [combinare](../Topic/combinable::combine%20Method.md) o [combine_each](../Topic/combinable::combine_each%20Method.md) metodi. È inoltre possibile chiamare il `combine` e `combine_each` metodi più volte. Se nessun valore locale in un `combinable` oggetto viene modificato, il `combine` e `combine_each` metodi producono lo stesso risultato ogni volta che vengono chiamati.  
  
###  <a name="a-namecombinable-examplesa-examples"></a><a name="combinable-examples"></a> Esempi  
 Per esempi su come utilizzare la `combinable` classe, vedere gli argomenti seguenti:  
  
-   [Procedura: utilizzare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)  
  
-   [Procedura: utilizzare la classe combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)  
  
 [[Torna all'inizio](#top)]  
  
## <a name="related-topics"></a>Argomenti correlati  
 [Procedura: utilizzare i contenitori paralleli per aumentare l'efficienza](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)  
 Viene illustrato come utilizzare i contenitori paralleli per archiviare in modo efficiente e accedere ai dati in parallelo.  
  
 [Procedura: utilizzare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)  
 Viene illustrato come utilizzare la `combinable` classe per eliminare lo stato condiviso e migliorare le prestazioni.  
  
 [Procedura: utilizzare la classe combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)  
 Viene illustrato come utilizzare un `combine` funzione per set di dati locali di thread di tipo merge.  
  
 [Parallel Patterns Library (PPL)](../../parallel/concrt/parallel-patterns-library-ppl.md)  
 Viene descritta la libreria PPL, che fornisce un modello di programmazione imperativa in grado di offrire scalabilità e facilità di utilizzo per lo sviluppo di applicazioni simultanee.  
  
## <a name="reference"></a>Riferimento  
 [Classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)  
  
 [Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)  
  
 [Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)  
  
 [Classe concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)  
  
 [Classe concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md)  
  
 [Classe concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)  
  
 [combinable (classe)](../../parallel/concrt/reference/combinable-class.md)
