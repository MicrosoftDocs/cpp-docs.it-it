---
title: Contenitori e oggetti paralleli | Documenti Microsoft
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
ms.openlocfilehash: 168705c5d7497a0bcbede505760d49cdb63a3762
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="parallel-containers-and-objects"></a>Contenitori e oggetti paralleli
Parallel Patterns Library (PPL) include diversi contenitori e oggetti che forniscono l'accesso thread-safe ai relativi elementi.  
  
 Oggetto *contenitore simultaneo* fornisce l'accesso indipendente dalla concorrenza per le operazioni più importanti. La funzionalità di questi contenitori è simile a quelle fornite dalla libreria Standard C++. Ad esempio, il [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) classe simile il [std:: Vector](../../standard-library/vector-class.md) classe, con la differenza che la `concurrent_vector` classe consente di accodare gli elementi in parallelo. Utilizzare i contenitori simultanei quando si dispone di codice parallelo che richiede l'accesso in lettura e scrittura al contenitore stesso.  
  
 Oggetto *oggetto simultaneo* viene condiviso contemporaneamente tra i componenti. Un processo che calcola lo stato di un oggetto simultaneo in parallelo produce lo stesso risultato di un altro processo che calcola lo stesso stato in modo seriale. Il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe è un esempio di un tipo di oggetto simultaneo. La `combinable` classe consente di eseguire calcoli in parallelo e quindi unire i calcoli in un risultato finale. Utilizzare gli oggetti simultanei quando in caso contrario, è necessario utilizzare un meccanismo di sincronizzazione, ad esempio, un mutex, per sincronizzare l'accesso a una variabile condivisa o una risorsa.  
  
##  <a name="top"></a> Sezioni  
 Questo argomento descrive i seguenti contenitori e oggetti paralleli in dettaglio.  
  
 Contenitori simultanei:  
  
-   [Classe concurrent_vector](#ctor)  
  
    -   [Vettore e differenze tra concurrent_vector](#ctor)  
  
    -   [Operazioni sicure per concorrenza](#ctor)  
  
    -   [Sicurezza dell'eccezione](#ctor)  
  
-   [Classe concurrent_queue](#queue)  
  
    -   [Coda e le differenze tra concurrent_queue](#queue-differences)  
  
    -   [Operazioni sicure per concorrenza](#queue-safety)  
  
    -   [Supporto degli iteratori](#queue-iterators)  
  
-   [Classe concurrent_unordered_map](#unordered_map)  
  
    -   [Unordered_map e differenze tra concurrent_unordered_map](#map-differences)  
  
    -   [Operazioni sicure per concorrenza](#map-safety)  
  
-   [Classe concurrent_unordered_multimap](#unordered_multimap)  
  
-   [Classe concurrent_unordered_set](#unordered_set)  
  
-   [Classe concurrent_unordered_multiset](#unordered_multiset)  
  
 Oggetti simultanei:  
  
-   [Classe combinable](#combinable)  
  
    -   [Metodi e le funzionalità](#combinable-features)  
  
    -   [Esempi](#combinable-examples)  
  
##  <a name="vector"></a> Classe concurrent_vector  
 Il [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) classe è una classe contenitore di sequenza che, esattamente come il [std:: Vector](../../standard-library/vector-class.md) classe, consente di accedere in modo casuale ai relativi elementi. Il `concurrent_vector` le operazioni di accesso consente di classe aggiungere indipendente dalla concorrenza e di elemento. Aggiungere le operazioni non invalidano i puntatori esistenti o gli iteratori. Inoltre, le operazioni di accesso e attraversamento iteratori sono indipendenti dalla concorrenza.  
  
###  <a name="vector-differences"></a> Vettore e differenze tra concurrent_vector  
 Il `concurrent_vector` classe rispecchia maggiormente la `vector` classe. La complessità di accodamento, accesso agli elementi e operazioni di accesso iteratore un `concurrent_vector` oggetto sono le stesse di un `vector` oggetto. I punti seguenti illustrano dove `concurrent_vector` è diverso da `vector`:  
  
-   Aggiungere l'accesso agli elementi, accesso iteratori e operazioni traversali di iterazione in un `concurrent_vector` oggetto sono indipendenti dalla concorrenza.  
  
-   È possibile aggiungere elementi solo fino alla fine di un `concurrent_vector` oggetto. Il `concurrent_vector` classe non fornisce il `insert` metodo.  
  
-   Oggetto `concurrent_vector` oggetto non utilizza [la semantica di spostamento](../../cpp/rvalue-reference-declarator-amp-amp.md) quando si Accoda a esso.  
  

-   Il `concurrent_vector` classe non fornisce il `erase` o `pop_back` metodi. Come con `vector`, utilizzare il [deselezionare](reference/concurrent-vector-class.md#clear) metodo per rimuovere tutti gli elementi da un `concurrent_vector` oggetto.  
  
-   La `concurrent_vector` classe archivia i relativi elementi in modo contiguo nella memoria. Pertanto, è possibile utilizzare la `concurrent_vector` classe in tutte le modalità che è possibile utilizzare una matrice. Ad esempio, per una variabile denominata `v` di tipo `concurrent_vector`, l'espressione `&v[0]+2` produce un comportamento indefinito.  
  
-   Il `concurrent_vector` classe definisce il [grow_by](reference/concurrent-vector-class.md#grow_by) e [grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least) metodi. Questi metodi sono simili le [ridimensionare](reference/concurrent-vector-class.md#resize) metodo, ad eccezione del fatto che siano indipendenti dalla concorrenza.  
  
-   Oggetto `concurrent_vector` oggetto non consente di spostare gli elementi quando si accodarvi o ridimensionarlo. In questo modo ai puntatori esistenti e gli iteratori rimangono validi durante le operazioni simultanee.  
  
-   Il runtime non definisce una versione specializzata di `concurrent_vector` per tipo `bool`.  
  
###  <a name="vector-safety"></a> Operazioni sicure per concorrenza  
 Tutti i metodi che aggiungere o aumentano le dimensioni di un `concurrent_vector` dell'oggetto o accedere a un elemento in un `concurrent_vector` di oggetto, sono indipendenti dalla concorrenza. L'eccezione a questa regola è la `resize` metodo.  
  
 La tabella seguente illustra il comune `concurrent_vector` metodi e gli operatori che sono indipendenti dalla concorrenza.  
  
||||  
|-|-|-|  

|[al](reference/concurrent-vector-class.md#at)|[fine](reference/concurrent-vector-class.md#end)|[(operatore)&#91;&#93;](reference/concurrent-vector-class.md#operator_at)|  
|[Begin](reference/concurrent-vector-class.md#begin)|[anteriore](reference/concurrent-vector-class.md#front)|[push_back](reference/concurrent-vector-class.md#push_back)|  
|[Torna](reference/concurrent-vector-class.md#back)|[grow_by](reference/concurrent-vector-class.md#grow_by)|[rbegin](reference/concurrent-vector-class.md#rbegin)|  
|[capacità](reference/concurrent-vector-class.md#capacity)|[grow_to_at_least](reference/concurrent-vector-class.md#grow_to_at_least)|[REND)](reference/concurrent-vector-class.md#rend)|  
|[vuoto](reference/concurrent-vector-class.md#empty)|[max_size](reference/concurrent-vector-class.md#max_size)|[dimensioni](reference/concurrent-vector-class.md#size)|  

  
 Le operazioni fornite dal runtime per la compatibilità con la libreria Standard C++, ad esempio, `reserve`, non sono indipendenti dalla concorrenza. La tabella seguente illustra i metodi e operatori che non sono indipendenti dalla concorrenza comuni.  
  
|||  
|-|-|  

|[assegnare](reference/concurrent-vector-class.md#assign)|[riservare](reference/concurrent-vector-class.md#reserve)|  
|[deselezionare](reference/concurrent-vector-class.md#clear)|[ridimensionare](reference/concurrent-vector-class.md#resize)|  
|[operatore =](reference/concurrent-vector-class.md#operator_eq)|[shrink_to_fit](reference/concurrent-vector-class.md#shrink_to_fit)|  
  
 Le operazioni che modificano il valore degli elementi esistenti non sono indipendenti dalla concorrenza. Utilizzare un oggetto di sincronizzazione, ad esempio un [reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) sincronizzare simultaneo in lettura e operazioni di scrittura allo stesso elemento di dati dell'oggetto. Per ulteriori informazioni sugli oggetti di sincronizzazione, vedere [strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md).  
  
 Quando si converte codice esistente che utilizza `vector` utilizzare `concurrent_vector`, le operazioni simultanee possono causare il comportamento dell'applicazione da modificare. Ad esempio, considerare il programma seguente che vengono eseguite contemporaneamente due attività in un `concurrent_vector` oggetto. La prima attività aggiunge ulteriori elementi da un `concurrent_vector` oggetto. La seconda attività calcola la somma di tutti gli elementi nello stesso oggetto.  
  
 [!code-cpp[concrt-vector-safety#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_1.cpp)]  
  

 Sebbene il `end` metodo è indipendente dalla concorrenza, una chiamata simultanea di [push_back](reference/concurrent-vector-class.md#push_back) (metodo), il valore restituito da `end` per modificare. Il numero di elementi che attraversa l'iteratore è indeterminato. Pertanto, il programma può produrre un risultato diverso ogni volta che viene eseguito.  
  
###  <a name="vector-exceptions"></a> Sicurezza dell'eccezione  
 Se un'operazione di aumento delle dimensioni o assegnazione genera un'eccezione, lo stato del `concurrent_vector` oggetto diventa non valido. Il comportamento di un `concurrent_vector` oggetto che è in uno stato non valido è definito se non specificato diversamente. Tuttavia, il distruttore libera sempre la memoria allocata dall'oggetto, anche se l'oggetto è in uno stato non valido.  
  
 Il tipo di dati degli elementi del vettore, `T`, deve soddisfare i requisiti seguenti. In caso contrario, il comportamento del `concurrent_vector` classe è definita.  
  
-   Il distruttore non deve generare.  
  
-   Se genera il costruttore predefinito o di copia, il distruttore non deve essere dichiarato tramite il `virtual` (parola chiave) e deve funzionare correttamente con memoria inizializzate su zero.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="queue"></a> Classe concurrent_queue  
 Il [Concurrency:: concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md) come classe di [std:: Queue](../../standard-library/queue-class.md) classe, consente di accedere ai relativi front e gli elementi di nuovo. Il `concurrent_queue` enqueue indipendente dalla concorrenza consente di classi e le operazioni di rimozione dalla coda. La `concurrent_queue` classe fornisce anche supporto degli iteratori che non è indipendente dalla concorrenza.  
  
###  <a name="queue-differences"></a> Coda e le differenze tra concurrent_queue  
 Il `concurrent_queue` classe rispecchia maggiormente la `queue` classe. I punti seguenti illustrano dove `concurrent_queue` è diverso da `queue`:  
  
-   Enqueue e dequeue operazioni su un `concurrent_queue` oggetto sono indipendenti dalla concorrenza.  
  
-   La `concurrent_queue` classe fornisce il supporto di iteratori che non è indipendente dalla concorrenza.  
  

-   Il `concurrent_queue` classe non fornisce il `front` o `pop` metodi. Il `concurrent_queue` classe sostituisce questi metodi definendo il [try_pop](reference/concurrent-queue-class.md#try_pop) metodo.  
  
-   Il `concurrent_queue` classe non fornisce il `back` metodo. Pertanto, è possibile fare riferimento di fine della coda.  
  
-   Il `concurrent_queue` classe fornisce il [unsafe_size](reference/concurrent-queue-class.md#unsafe_size) anziché il `size` metodo. Il `unsafe_size` metodo non è indipendente dalla concorrenza.  

  
###  <a name="queue-safety"></a> Operazioni sicure per concorrenza  
 Tutti i metodi che accodano a o rimozione dalla coda da un `concurrent_queue` oggetto sono indipendenti dalla concorrenza.  
  
 La tabella seguente illustra il comune `concurrent_queue` metodi e gli operatori che sono indipendenti dalla concorrenza.  
  
|||  
|-|-|  
|[empty](reference/concurrent-queue-class.md#empty)|[push](reference/concurrent-queue-class.md#push)|  
|[get_allocator](reference/concurrent-queue-class.md#get_allocator)|[try_pop](reference/concurrent-queue-class.md#try_pop)|  


  
 Sebbene il `empty` metodo è indipendente dalla concorrenza, un'operazione simultanea potrebbe essere la coda di espansione o riduzione prima il `empty` metodo restituisce.  
  
 La tabella seguente illustra i metodi e operatori che non sono indipendenti dalla concorrenza comuni.  
  
|||  
|-|-|  
|[clear](reference/concurrent-queue-class.md#clear)|[unsafe_end](reference/concurrent-queue-class.md#unsafe_end)|  
|[unsafe_begin](reference/concurrent-queue-class.md#unsafe_begin)|[unsafe_size](reference/concurrent-queue-class.md#unsafe_size)|  


  
###  <a name="queue-iterators"></a> Supporto degli iteratori  
 Il `concurrent_queue` fornisce gli iteratori che non sono indipendenti dalla concorrenza. È consigliabile utilizzare questi iteratori solo per il debug.  
  
 Oggetto `concurrent_queue` iteratore consente di scorrere in avanti solo elementi. Nella tabella seguente illustra gli operatori supportati da ogni iteratore.  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[operator++](http://msdn.microsoft.com/en-us/4cfdd07e-927a-42f8-aaa0-d6881687f413)|Passa all'elemento successivo nella coda. Questo operatore viene sottoposto a overload per fornire la semantica di pre-incremento e post-incremento.|  
|[operator*](http://msdn.microsoft.com/en-us/a0e671fc-76e6-4fb4-b95c-ced4dd2b2017)|Recupera un riferimento all'elemento corrente.|  
|[operator->](http://msdn.microsoft.com/en-us/41fa393d-ae1e-4a38-bb4b-19e8df709ca9)|Recupera un puntatore all'elemento corrente.|  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="unordered_map"></a> Classe concurrent_unordered_map  
 Il [HYPERLINK "file:///C:\\\Users\\\thompet\\\AppData\\\Local\\\Temp\\\DxEditor\\\DduePreview\\\Default \\\798d7037-df37-4310-858b-6f590bbf6ebf\\\HTM\\\html\\\a217b4ac-af2b-4d41-94eb-09a75ee28622 "Concurrency:: concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) classe è un classe contenitore associativo che, esattamente come il [std:: unordered_map](../../standard-library/unordered-map-class.md) classe, che controlla una sequenza di lunghezza variabile di elementi di tipo [std:: Pair\<chiave const, Ty >](../../standard-library/pair-structure.md). Una mappa non ordinata può essere paragonato a un dizionario che è possibile aggiungere una coppia chiave / valore a o cercare un valore dalla chiave. Questa classe è utile quando si dispone di più thread o attività che devono accedere a un contenitore condiviso, inserire al suo interno o l'aggiornamento contemporaneamente.  
  
 L'esempio seguente mostra la struttura di base per l'utilizzo di `concurrent_unordered_map`. In questo esempio inserisce le chiavi di caratteri nell'intervallo ['a', ' i']. Poiché l'ordine delle operazioni è determinata, il valore finale per ogni chiave è indeterminato. Tuttavia, è possibile eseguire inserimenti in parallelo.  
  
 [!code-cpp[concrt-unordered-map-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_2.cpp)]  
  
 Per un esempio che utilizza `concurrent_unordered_map` per eseguire una mappa e ridurre l'operazione in parallelo, vedere [procedura: eseguire mappa e ridurre le operazioni in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).  
  
###  <a name="map-differences"></a> Unordered_map e differenze tra concurrent_unordered_map  
 Il `concurrent_unordered_map` classe rispecchia maggiormente la `unordered_map` classe. I punti seguenti illustrano dove `concurrent_unordered_map` è diverso da `unordered_map`:  
  
-   Il `erase`, `bucket`, `bucket_count`, e `bucket_size` sono denominati metodi `unsafe_erase`, `unsafe_bucket`, `unsafe_bucket_count`, e `unsafe_bucket_size`, rispettivamente. Il `unsafe_` convenzione di denominazione indica che questi metodi non sono indipendenti dalla concorrenza. Per ulteriori informazioni sulla protezione di concorrenza, vedere [operazioni sicure per concorrenza](#map-safety).  
  
-   Le operazioni di inserimento non invalidano i puntatori esistenti o gli iteratori, né modificano l'ordine degli elementi già presenti nella mappa. Inserire e attraversare le operazioni vengano eseguite contemporaneamente.  
  
-   `concurrent_unordered_map` supporta solo l'iterazione in avanti.  
  
-   Inserimento non invalidano né aggiornare gli iteratori restituiti da `equal_range`. Inserimento è possibile aggiungere elementi non uguali alla fine dell'intervallo. L'iteratore begin punta a un elemento uguale.  
  
 Per evitare deadlock, nessun metodo di `concurrent_unordered_map` mantiene un blocco quando viene chiamata l'allocatore di memoria, le funzioni hash o altro codice definito dall'utente. Inoltre, è necessario assicurarsi che la funzione hash valuta sempre uguale chiavi per lo stesso valore. Le funzioni hash migliore distribuiscono le chiavi in modo uniforme tra lo spazio di codice hash.  
  
###  <a name="map-safety"></a> Operazioni sicure per concorrenza  
 La `concurrent_unordered_map` classe consente operazioni di inserimento e l'accesso agli elementi indipendenti dalla concorrenza. Le operazioni di inserimento non invalidano i puntatori esistenti o gli iteratori. Inoltre, le operazioni di accesso e attraversamento iteratori sono indipendenti dalla concorrenza. Nella tabella seguente vengono usati comunemente `concurrent_unordered_map` metodi e gli operatori che sono indipendenti dalla concorrenza.  
  
|||||  
|-|-|-|-|  
|[at](reference/concurrent-unordered-map-class.md#at)|`count`|`find`|[key_eq](reference/concurrent-unordered-map-class.md#key_eq)|  
|`begin`|`empty`|`get_allocator`|`max_size`|  
|`cbegin`|`end`|`hash_function`|[operator&#91;&#93;](reference/concurrent-unordered-map-class.md#operator_at)|  
|`cend`|`equal_range`|[insert](reference/concurrent-unordered-map-class.md#insert)|`size`|  
  
 Sebbene il `count` metodo può essere chiamato in modo sicuro da in esecuzione simultanea di thread, thread diversi possono ottenere risultati diversi se contemporaneamente non viene inserito un nuovo valore nel contenitore.  
  
 La tabella seguente illustra i metodi di usati comune e operatori che non sono indipendenti dalla concorrenza.  
  
||||  
|-|-|-|  
|`clear`|`max_load_factor`|`rehash`|  
|`load_factor`|[operator=](reference/concurrent-unordered-map-class.md#operator_eq) 


  
 Oltre a questi metodi, qualsiasi metodo che inizia con `unsafe_` non è indipendente dalla concorrenza.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="unordered_multimap"></a> Classe concurrent_unordered_multimap  
 Il [concurrency::concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md) classe rispecchia maggiormente la `concurrent_unordered_map` classe ad eccezione del fatto che consente di eseguire il mapping per la stessa chiave di più valori. È inoltre diverso da `concurrent_unordered_map` nei modi seguenti:  
  
-   Il [concurrent_unordered_multimap:: Insert](reference/concurrent-unordered-multimap-class.md#insert) metodo restituisce un iteratore invece di `std::pair<iterator, bool>`.  

  
-   Il `concurrent_unordered_multimap` classe non fornisce `operator[]` né la `at` metodo.  
  
 L'esempio seguente mostra la struttura di base per l'utilizzo di `concurrent_unordered_multimap`. In questo esempio inserisce le chiavi di caratteri nell'intervallo ['a', ' i']. `concurrent_unordered_multimap` consente a una chiave per avere più valori.  
  
 [!code-cpp[concrt-unordered-multimap-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_3.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="unordered_set"></a> Classe concurrent_unordered_set  
 Il [concurrency::concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md) classe rispecchia maggiormente la `concurrent_unordered_map` classe con l'eccezione che gestisce i valori invece di coppie chiave / valore. Il `concurrent_unordered_set` classe non fornisce `operator[]` né la `at` metodo.  
  
 L'esempio seguente mostra la struttura di base per l'utilizzo di `concurrent_unordered_set`. In questo esempio consente di inserire valori di tipo carattere nell'intervallo ['a', ' i']. È possibile eseguire inserimenti in parallelo.  
  
 [!code-cpp[concrt-unordered-set#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_4.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="unordered_multiset"></a> Classe concurrent_unordered_multiset  
 Il [concurrency::concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md) classe rispecchia maggiormente la `concurrent_unordered_set` classe ad eccezione del fatto che consente valori duplicati. È inoltre diverso da `concurrent_unordered_set` nei modi seguenti:  
  

-   Il [concurrent_unordered_multiset:: Insert](reference/concurrent-unordered-multiset-class.md#insert) metodo restituisce un iteratore invece di `std::pair<iterator, bool>`.  

  
-   Il `concurrent_unordered_multiset` classe non fornisce `operator[]` né la `at` metodo.  
  
 L'esempio seguente mostra la struttura di base per l'utilizzo di `concurrent_unordered_multiset`. In questo esempio consente di inserire valori di tipo carattere nell'intervallo ['a', ' i']. `concurrent_unordered_multiset` consente un valore di ricorrere più volte.  
  
 [!code-cpp[concrt-unordered-multiset#1](../../parallel/concrt/codesnippet/cpp/parallel-containers-and-objects_5.cpp)]  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="combinable"></a> combinable (classe)  
 Il [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) classe fornisce l'archiviazione locale di thread e riutilizzabile che consente di eseguire calcoli accurati e quindi unire i calcoli in un risultato finale. È possibile considerare un oggetto `combinable` come una variabile di riduzione.  
  
 La `combinable` classe è utile quando si dispone di una risorsa che viene condiviso tra diversi thread o attività. La `combinable` classe consente di eliminare lo stato condiviso fornendo accesso alle risorse condivise in modo senza blocco. Pertanto, questa classe fornisce un'alternativa all'utilizzo di un meccanismo di sincronizzazione, ad esempio, un mutex, per sincronizzare l'accesso ai dati condivisi da più thread.  
  
###  <a name="combinable-features"></a> Metodi e le funzionalità  
 Nella tabella seguente vengono illustrati alcuni dei metodi importanti della `combinable` classe. Per ulteriori informazioni su tutti i `combinable` metodi della classe, vedere [classe combinable](../../parallel/concrt/reference/combinable-class.md).  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[local](reference/combinable-class.md#local)|Recupera un riferimento alla variabile locale che è associato il contesto del thread corrente.|  
|[clear](reference/combinable-class.md#clear)|Rimuove tutte le variabili locali del thread dal `combinable` oggetto.|  
|[combine](reference/combinable-class.md#combine)<br /><br /> [combine_each](reference/combinable-class.md#combine_each)|Utilizza la funzione combine fornita per generare un valore finale dal set di tutti i calcoli locali del thread.|  
  
 La `combinable` classe è una classe di modello contenente i parametri per il risultato finale unito. Se si chiama il costruttore predefinito, il `T` il tipo di parametro di modello deve avere un costruttore predefinito e un costruttore di copia. Se il `T` il tipo di parametro di modello non dispone di un costruttore predefinito, chiamare la versione di overload del costruttore che accetta una funzione di inizializzazione come parametro.  
  
 È possibile archiviare dati aggiuntivi in un `combinable` oggetto dopo la chiamata di [combinare](reference/combinable-class.md#combine) o [combine_each](reference/combinable-class.md#combine_each) metodi. È inoltre possibile chiamare il `combine` e `combine_each` metodi più volte. Se nessun valore locale in un `combinable` oggetto viene modificato, il `combine` e `combine_each` metodi producono lo stesso risultato ogni volta che vengono chiamati.  
  
###  <a name="combinable-examples"></a> Esempi  
 Per esempi su come usare la `combinable` classe, vedere gli argomenti seguenti:  
  
-   [Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)  
  
-   [Procedura: Usare l'oggetto combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)  
  
 [[Torna all'inizio](#top)]  
  
## <a name="related-topics"></a>Argomenti correlati  
 [Procedura: Usare i contenitori paralleli per aumentare l'efficienza](../../parallel/concrt/how-to-use-parallel-containers-to-increase-efficiency.md)  
 Viene illustrato come utilizzare i contenitori paralleli per archiviare in modo efficiente e accedere ai dati in parallelo.  
  
 [Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)  
 Viene illustrato come utilizzare la `combinable` classe per eliminare lo stato condiviso e migliorare le prestazioni.  
  
 [Procedura: Usare l'oggetto combinable per combinare set](../../parallel/concrt/how-to-use-combinable-to-combine-sets.md)  
 Viene illustrato come utilizzare un `combine` funzione per unire i set di dati locali di thread.  
  
 [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)  
 Descrive la libreria PPL, che fornisce un modello di programmazione imperativa in grado di offrire scalabilità e facilità di utilizzo per lo sviluppo di applicazioni simultanee.  
  
## <a name="reference"></a>Riferimenti  
 [Classe concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md)  
  
 [Classe concurrent_queue](../../parallel/concrt/reference/concurrent-queue-class.md)  
  
 [Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)  
  
 [Classe concurrent_unordered_multimap](../../parallel/concrt/reference/concurrent-unordered-multimap-class.md)  
  
 [Classe concurrent_unordered_set](../../parallel/concrt/reference/concurrent-unordered-set-class.md)  
  
 [Classe concurrent_unordered_multiset](../../parallel/concrt/reference/concurrent-unordered-multiset-class.md)  
  
 [Classe combinable](../../parallel/concrt/reference/combinable-class.md)
