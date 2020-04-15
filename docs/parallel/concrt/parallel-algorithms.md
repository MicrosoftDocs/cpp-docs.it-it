---
title: Algoritmi paralleli
ms.date: 11/19/2018
helpviewer_keywords:
- parallel algorithms [Concurrency Runtime]
ms.assetid: 045dca7b-4d73-4558-a44c-383b88a28473
ms.openlocfilehash: a31787172c89e23e5eb32aa203b9f541584c0f68
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363199"
---
# <a name="parallel-algorithms"></a>Algoritmi paralleli

La libreria PPL (Parallel Patterns Library) fornisce algoritmi che eseguono contemporaneamente operazioni su raccolte di dati. Questi algoritmi sono simili a quelli forniti dalla libreria standard di C.

Gli algoritmi paralleli sono composti da funzionalità esistenti nel runtime di concorrenza. Ad esempio, l'algoritmo [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) utilizza un oggetto [concurrency::structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) per eseguire le iterazioni del ciclo parallelo. Le `parallel_for` partizioni dell'algoritmo funzionano in modo ottimale in base al numero di risorse di elaborazione disponibili.

## <a name="sections"></a><a name="top"></a>Sezioni

- [L'algoritmo parallel_for](#parallel_for)

- [L'algoritmo parallel_for_each](#parallel_for_each)

- [L'algoritmo parallel_invoke](#parallel_invoke)

- [Gli algoritmi parallel_reduce e parallel_transform](#parallel_transform_reduce)

  - [L'algoritmo parallel_transform](#parallel_transform)

  - [L'algoritmo parallel_reduce](#parallel_reduce)

  - [Esempio: esecuzione del mapping e riduzione in parallelo](#map_reduce_example)

- [Suddivisione del lavoro](#partitions)

- [Ordinamento parallelo](#parallel_sorting)

  - [Scelta di un algoritmo di ordinamento](#choose_sort)

## <a name="the-parallel_for-algorithm"></a><a name="parallel_for"></a>Algoritmo parallel_for

L'algoritmo [concurrency::parallel_for](reference/concurrency-namespace-functions.md#parallel_for) esegue ripetutamente la stessa attività in parallelo. Ognuna di queste attività è parametrizzata da un valore di iterazione. Questo algoritmo è utile quando si dispone di un corpo del ciclo che non condivide le risorse tra le iterazioni di tale ciclo.

L'algoritmo `parallel_for` partiziona le attività in modo ottimale per l'esecuzione parallela. Viene utilizzato un algoritmo di acquisizione del lavoro e di acquisizione dell'intervallo per bilanciare le partizioni quando i carichi di lavoro non sono bilanciati. Quando un'iterazione del ciclo si blocca in modo cooperativo, il runtime ridistribuisce l'intervallo di iterazioni assegnato al thread corrente ad altri thread o processori. Analogamente, quando un thread completa un intervallo di iterazioni, il runtime ridistribuisce il lavoro da altri thread a tale thread. L'algoritmo `parallel_for` supporta anche il *parallelismo annidato.* Quando un ciclo parallelo contiene un altro ciclo parallelo, il runtime coordina le risorse di elaborazione tra i corpi del ciclo in modo efficiente per l'esecuzione parallela.

Nell'algoritmo `parallel_for` sono disponibili diverse versioni di overload. La prima versione accetta un valore iniziale, un valore finale e una funzione di lavoro (un'espressione lambda, un oggetto funzione o un puntatore a funzione). La seconda versione accetta un valore iniziale, un valore finale, un valore in base al quale eseguire il passaggio e una funzione lavoro. La prima versione di questa funzione utilizza 1 come valore del passaggio. Le versioni rimanenti accettano oggetti di partizionamento che consentono di specificare il modo in cui gli intervalli devono essere partizionati tra i thread tramite l'algoritmo `parallel_for`. I partitioner sono spiegati in modo più dettagliato nella sezione Lavoro di [partizionamento](#partitions) in questo documento.

È possibile `for` convertire molti `parallel_for`cicli da utilizzare . Tuttavia, `parallel_for` l'algoritmo `for` differisce dall'istruzione nei modi seguenti:However, the algorithm differs from the statement in the following ways:

- L'algoritmo `parallel_for` `parallel_for` non esegue le attività in un ordine predeterminato.

- L'algoritmo `parallel_for` non supporta condizioni di terminazione arbitrarie. L'algoritmo `parallel_for` si arresta quando il valore `last`corrente della variabile di iterazione è minore di uno rispetto a .

- Il `_Index_type` parametro di tipo deve essere un tipo integrale. Questo tipo integrale può essere signed o unsigned.

- L'iterazione del ciclo deve essere in avanti. L'algoritmo `parallel_for` genera un'eccezione di tipo `_Step` [std::invalid_argument](../../standard-library/invalid-argument-class.md) se il parametro è minore di 1.

- Il meccanismo di `parallel_for` gestione delle eccezioni `for` per l'algoritmo è diverso da quello di un ciclo. Se più eccezioni si verificano contemporaneamente in un corpo del ciclo parallelo, il `parallel_for`runtime propaga solo una delle eccezioni al thread che ha chiamato . Inoltre, quando un'iterazione del ciclo genera un'eccezione, il runtime non arresta immediatamente il ciclo complessivo. Al contrario, il ciclo viene inserito nello stato canceled e il runtime elimina tutte le attività che non sono ancora state avviate. Per ulteriori informazioni sulla gestione delle eccezioni e sugli algoritmi paralleli, vedere [Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

Anche `parallel_for` se l'algoritmo non supporta condizioni di terminazione arbitrarie, è possibile utilizzare l'annullamento per arrestare tutte le attività. Per ulteriori informazioni sull'annullamento, vedere [Annullamento nella libreria PPL](cancellation-in-the-ppl.md).

> [!NOTE]
> Il costo di pianificazione risultante dal bilanciamento del carico e dal supporto per funzionalità quali l'annullamento potrebbe non superare i vantaggi dell'esecuzione del corpo del ciclo in parallelo, soprattutto quando il corpo del ciclo è relativamente piccolo. È possibile ridurre al minimo questo sovraccarico utilizzando un partitioner nel ciclo parallelo. Per altre informazioni, vedere [Partizionamento del lavoro](#partitions) più avanti in questo documento.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la struttura di base dell'algoritmo. `parallel_for` In questo esempio viene stampato nella console ogni valore compreso nell'intervallo [1, 5] in parallelo.

[!code-cpp[concrt-parallel-for-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_1.cpp)]

Questo esempio produce l'output di esempio seguente:This example produces the following sample output:

```Output
1 2 4 3 5
```

Poiché `parallel_for` l'algoritmo agisce su ogni elemento in parallelo, l'ordine in cui i valori vengono stampati nella console variano.

Per un esempio completo `parallel_for` che utilizza l'algoritmo, vedere [Procedura: scrivere un parallel_for Loop](../../parallel/concrt/how-to-write-a-parallel-for-loop.md).

[[In alto](#top)]

## <a name="the-parallel_for_each-algorithm"></a><a name="parallel_for_each"></a>L'algoritmo parallel_for_each

L'algoritmo [concurrency::parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) esegue attività su un contenitore iterativo, ad esempio quelle fornite dalla libreria standard di C, in parallelo. Utilizza la stessa logica di `parallel_for` partizionamento utilizzata dall'algoritmo.

L'algoritmo `parallel_for_each` è simile all'algoritmo [std::for_each](../../standard-library/algorithm-functions.md#for_each) `parallel_for_each` della libreria standard di C, con la differenza che l'algoritmo esegue le attività contemporaneamente. Come altri algoritmi `parallel_for_each` paralleli, non esegue le attività in un ordine specifico.

Anche `parallel_for_each` se l'algoritmo funziona sia su iteratori in avanti che su iteratori di accesso casuale, offre prestazioni migliori con gli iteratori di accesso casuale.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la struttura di base dell'algoritmo. `parallel_for_each` In questo esempio viene stampato nella console ogni valore in un oggetto [std::array](../../standard-library/array-class-stl.md) in parallelo.

[!code-cpp[concrt-parallel-for-each-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_2.cpp)]

Questo esempio produce l'output di esempio seguente:This example produces the following sample output:

```Output
4 5 1 2 3
```

Poiché `parallel_for_each` l'algoritmo agisce su ogni elemento in parallelo, l'ordine in cui i valori vengono stampati nella console variano.

Per un esempio completo `parallel_for_each` che utilizza l'algoritmo, vedere [Procedura: scrivere un parallel_for_each Loop](../../parallel/concrt/how-to-write-a-parallel-for-each-loop.md).

[[In alto](#top)]

## <a name="the-parallel_invoke-algorithm"></a><a name="parallel_invoke"></a>L'algoritmo parallel_invoke

L'algoritmo [concurrency::parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) esegue un set di attività in parallelo. Non restituisce fino al completamento di ogni attività. Questo algoritmo è utile quando si dispone di diverse attività indipendenti che si desidera eseguire contemporaneamente.

L'algoritmo `parallel_invoke` accetta come parametri una serie di funzioni di lavoro (funzioni lambda, oggetti funzione o puntatori a funzione). L'algoritmo `parallel_invoke` è sottoposto a overload per accettare da due a dieci parametri. Ogni funzione passata `parallel_invoke` a deve accettare zero parametri.

Come altri algoritmi `parallel_invoke` paralleli, non esegue le attività in un ordine specifico. L'argomento [Parallelismo delle](../../parallel/concrt/task-parallelism-concurrency-runtime.md) attività `parallel_invoke` spiega in che modo l'algoritmo è correlato alle attività e ai gruppi di attività.

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la struttura di base dell'algoritmo. `parallel_invoke` In questo esempio `twice` la funzione viene chiamata contemporaneamente su tre variabili locali e il risultato viene stampato nella console.

[!code-cpp[concrt-parallel-invoke-structure#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_3.cpp)]

Nell'esempio viene prodotto l'output seguente:

```Output
108 11.2 HelloHello
```

Per esempi completi `parallel_invoke` di utilizzo dell'algoritmo, vedere [Procedura: utilizzare parallel_invoke per scrivere una routine](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md) di ordinamento parallelo e [Procedura: utilizzare parallel_invoke per eseguire operazioni parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md).

[[In alto](#top)]

## <a name="the-parallel_transform-and-parallel_reduce-algorithms"></a><a name="parallel_transform_reduce"></a>Gli algoritmi parallel_transform e parallel_reduce

Gli algoritmi [concurrency::parallel_transform](reference/concurrency-namespace-functions.md#parallel_transform) e [concurrency::parallel_reduce](reference/concurrency-namespace-functions.md#parallel_reduce) sono versioni parallele degli algoritmi della libreria standard [std::transform](../../standard-library/algorithm-functions.md#transform) e std::accumulate , rispettivamente di std::transform e [std::accumulate.](../../standard-library/numeric-functions.md#accumulate) Le versioni del runtime di concorrenza si comportano come le versioni della libreria standard di C, ad eccezione del fatto che l'ordine delle operazioni non viene determinato perché vengono eseguite in parallelo. Sfruttare questi algoritmi quando si utilizza un set sufficientemente grande da ottenere vantaggi di scalabilità e di prestazioni dall'esecuzione in parallelo.

> [!IMPORTANT]
> Gli algoritmi `parallel_transform` e `parallel_reduce` supportano solo iteratori di accesso casuale, bidirezionale e di inoltro perché tramite questi iteratori vengono generati indirizzi di memoria stabili. Inoltre, tramite questi iteratori devono essere generati valori l-value non `const`.

### <a name="the-parallel_transform-algorithm"></a><a name="parallel_transform"></a>L'algoritmo parallel_transform

È possibile utilizzare l'algoritmo `parallel transform` per eseguire molte operazioni di parallelizzazione dati. Ad esempio, è possibile:

- Regolare la luminosità di un'immagine ed eseguire altre operazioni di elaborazione immagini.

- Sommare o eseguire il prodotto scalare di due vettori e altri calcoli numerici con i vettori.

- Eseguire il ray tracing 3D in cui per ogni iterazione viene fatto riferimento a un pixel di cui deve essere eseguito il rendering.

Nell'esempio seguente viene mostrata la struttura di base utilizzata per chiamare l'algoritmo `parallel_transform`. Questo esempio nega ogni elemento di un oggetto[vettore](../../standard-library/vector-class.md) std:: in due modi. Nel primo viene utilizzata un'espressione lambda. Nel secondo modo viene utilizzato [std::negate](../../standard-library/negate-struct.md), che deriva da [std::unary_function](../../standard-library/unary-function-struct.md).

[!code-cpp[concrt-basic-parallel-transform#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_4.cpp)]

> [!WARNING]
> In questo esempio viene mostrato l'utilizzo di base di `parallel_transform`. Poiché tramite la funzione di lavoro non viene eseguita una quantità significativa di lavoro, in questo esempio non è previsto un miglioramento significativo delle prestazioni.

Nell'algoritmo `parallel_transform` sono disponibili due overload. Il primo accetta un intervallo di input e una funzione unaria. La funzione unaria può essere un'espressione lambda che accetta un argomento, un oggetto funzione o un tipo che deriva da `unary_function`. Il secondo accetta due intervalli di input e una funzione binaria. La funzione binaria può essere un'espressione lambda che accetta due argomenti, un oggetto funzione o un tipo che deriva da [std::binary_function](../../standard-library/binary-function-struct.md). Nell'esempio seguente vengono illustrate queste differenze.

[!code-cpp[concrt-parallel-transform-vectors#2](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_5.cpp)]

> [!IMPORTANT]
> L'iteratore fornito per l'output di `parallel_transform` deve sovrapporsi completamente all'iteratore di input o non sovrapporsi affatto. Il comportamento di questo algoritmo non è specificato se gli iteratori di input e di output si sovrappongono parzialmente.

### <a name="the-parallel_reduce-algorithm"></a><a name="parallel_reduce"></a>L'algoritmo parallel_reduce

L'algoritmo `parallel_reduce` è utile quando si dispone di una sequenza di operazioni che soddisfano la proprietà associativa; Questo algoritmo non richiede la proprietà commutativa. Di seguito sono riportate alcune `parallel_reduce`delle operazioni che è possibile eseguire con:

- Moltiplicare sequenze di matrici per generare una matrice.

- Moltiplicare un vettore per una sequenza di matrici per generare un vettore.

- Calcolare la lunghezza di una sequenza di stringhe.

- Combinare un elenco di elementi, ad esempio stringhe, in un unico elemento.

Nell'esempio di base seguente viene illustrato come utilizzare l'algoritmo `parallel_reduce` per combinare una sequenza di stringhe in una unica. Come negli esempi di `parallel_transform`, i miglioramenti delle prestazioni non sono previsti in questo esempio di base.

[!code-cpp[concrt-basic-parallel-reduce#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_6.cpp)]

In molti casi, è `parallel_reduce` possibile considerare come abbreviazione per l'utilizzo dell'algoritmo `parallel_for_each` con la classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md) .

### <a name="example-performing-map-and-reduce-in-parallel"></a><a name="map_reduce_example"></a>Esempio: esecuzione di mappe e riduzione in parallelo

Un'operazione *di mappa* applica una funzione a ogni valore in una sequenza. Un'operazione *di riduzione* combina gli elementi di una sequenza in un unico valore. Per eseguire le operazioni di mappa e riduzione, è possibile utilizzare le funzioni [std::transform](../../standard-library/algorithm-functions.md#transform) e [std::accumulate](../../standard-library/numeric-functions.md#accumulate) di C. Tuttavia, per molti problemi, è possibile utilizzare l'algoritmo `parallel_transform` per eseguire l'operazione di mapping in parallelo e l'algoritmo `parallel_reduce` per eseguire l'operazione di riduzione in parallelo.

Nell'esempio seguente viene confrontato il tempo necessario per calcolare la somma dei numeri primi in serie e in parallelo. Nella fase di mapping i valori non primi vengono trasformati in 0, mentre in quella di riduzione i valori vengono sommati.

[!code-cpp[concrt-parallel-map-reduce-sum-of-primes#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_7.cpp)]

Per un altro esempio che esegue una mappa e ridurre l'operazione in parallelo, vedere [Procedura: eseguire operazioni di mapping e riduzione in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md).

[[In alto](#top)]

## <a name="partitioning-work"></a><a name="partitions"></a>Lavoro di partizionamento

Per parallelizzare un'operazione in un'origine dati, un passaggio essenziale consiste nel *partizionare* l'origine in più sezioni a cui è possibile accedere contemporaneamente da più thread. Tramite un partitioner viene specificato il modo in cui gli intervalli devono essere partizionati tra i thread mediante un algoritmo parallelo. Come illustrato in precedenza in questo documento, nella libreria PPL viene utilizzato un meccanismo di partizionamento predefinito tramite cui viene creato un carico di lavoro iniziale e, successivamente, utilizzato un algoritmo di acquisizione del lavoro e uno di acquisizione dell'intervallo per bilanciare queste partizioni quando i carichi di lavoro non lo sono. Ad esempio, quando tramite un'iterazione del ciclo viene completato un intervallo di iterazioni, il lavoro di altri thread viene ridistribuito a questo thread mediante il runtime. Tuttavia, per alcuni scenari, potrebbe essere necessario specificare un meccanismo di partizionamento differente, più adatto al problema.

Tramite gli algoritmi `parallel_for`, `parallel_for_each` e `parallel_transform` vengono fornite le versioni sottoposte a overload che accettano un parametro aggiuntivo, `_Partitioner`. Tramite questo parametro viene definito il tipo di partitioner che consente la divisione del lavoro. Di seguito sono riportati i tipi di partitioner definiti dalla libreria PPL:

[concurrency::affinity_partitioner](../../parallel/concrt/reference/affinity-partitioner-class.md)<br/>
Il lavoro viene diviso in un numero fisso di intervalli (in genere il numero di thread di lavoro disponibili per il ciclo). Questo tipo di partitioner assomiglia a `static_partitioner`, tuttavia l'affinità della cache viene migliorata per quanto riguarda il mapping degli intervalli ai thread di lavoro. Questo tipo di partitioner può consentire il miglioramento delle prestazioni quando un ciclo viene eseguito più volte nello stesso set di dati (ad esempio un ciclo all'interno di un altro) e i dati sono adatti alla cache. Questo partitioner non è coinvolto completamente nell'annullamento. Inoltre non viene utilizzata la semantica di blocco cooperativo e, pertanto, non può essere utilizzato con cicli paralleli che hanno una dipendenza di inoltro.

[concurrency::auto_partitioner](../../parallel/concrt/reference/auto-partitioner-class.md)<br/>
Il lavoro viene diviso in un numero iniziale di intervalli (in genere il numero di thread di lavoro disponibili nel ciclo). Questo tipo viene utilizzato per impostazione predefinita dal runtime quando non viene chiamato un algoritmo parallelo sottoposto a overload che accetta un parametro `_Partitioner`. Ogni intervallo può essere suddiviso in intervalli secondari consentendo il bilanciamento del carico. Al termine di un intervallo di lavoro, gli intervalli di lavoro secondari vengo ridistribuiti da altri thread a questo tramite il runtime. Utilizzare questo partitioner se il carico di lavoro non rientra in una delle altre categorie o se è necessario un supporto completo per l'annullamento o il blocco cooperativo.

[concurrency::simple_partitioner](../../parallel/concrt/reference/simple-partitioner-class.md)<br/>
Il lavoro viene diviso in intervalli in modo che in ogni intervallo sia disponibile almeno il numero di iterazioni specificate dalla dimensione del blocco fornita. Questo tipo di partitioner è coinvolto nel bilanciamento del carico; tuttavia, gli intervalli non vengono suddivisi in intervalli secondari tramite il runtime. Per ogni thread di lavoro, tramite il runtime viene controllato l'annullamento e viene eseguito il bilanciamento del carico al termine delle iterazioni `_Chunk_size`.

[concurrency::static_partitioner](../../parallel/concrt/reference/static-partitioner-class.md)<br/>
Il lavoro viene diviso in un numero fisso di intervalli (in genere il numero di thread di lavoro disponibili per il ciclo). Le prestazioni possono migliorare grazie a questo tipo di partitioner poiché non viene utilizzata l'acquisizione del lavoro e pertanto il sovraccarico è inferiore. Utilizzare questo tipo di partitioner quando tramite ogni iterazione di un ciclo parallelo viene eseguita una quantità di lavoro fissa e uniforme e non è richiesto supporto per l'annullamento o l'inoltro del blocco cooperativo.

> [!WARNING]
> Gli `parallel_for_each` `parallel_transform` algoritmi e supportano solo contenitori che utilizzano iteratori di accesso casuale (ad esempio std::[vector](../../standard-library/vector-class.md)) per i partitioner statici, semplici e affinità. Se si utilizzano contenitori con iteratori bidirezionali e di inoltro viene generato un errore in fase di compilazione. Il partitioner predefinito, `auto_partitioner`, supporta tutti e tre i tipi di iteratore.

In genere, questi partitioner vengono utilizzati nello stesso modo, ad eccezione di `affinity_partitioner`. La maggior parte dei tipi di partitioner non mantiene lo stato e non viene modificata dal runtime. Di conseguenza è possibile creare questi oggetti partitioner a livello del sito di chiamata, come illustrato nell'esempio seguente.

[!code-cpp[concrt-static-partitioner#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_8.cpp)]

Tuttavia, è necessario passare un oggetto `affinity_partitioner` come riferimento di valore l-value non `const` in modo che tramite l'algoritmo sia possibile archiviare lo stato per poterlo riutilizzare nei cicli futuri. Nell'esempio seguente viene mostrata un'applicazione di base tramite cui viene eseguita, più volte, la stessa operazione in un set di dati in parallelo. L'utilizzo di `affinity_partitioner` può migliorare le prestazioni poiché la matrice è probabilmente adatta alla cache.

[!code-cpp[concrt-affinity-partitioner#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_9.cpp)]

> [!CAUTION]
> Prestare attenzione quando si modifica il codice esistente basato sulla semantica di blocco cooperativo per utilizzare `static_partitioner` o `affinity_partitioner`. In questi tipi di partitioner non viene utilizzato il bilanciamento del carico o l'acquisizione dell'intervallo, quindi è possibile che il comportamento dell'applicazione venga modificato.

Il modo migliore per stabilire se è opportuno utilizzare un partitioner in qualsiasi scenario specificato consiste nello sperimentare e misurare il tempo necessario per il completamento delle operazioni con carichi e configurazioni di computer rappresentativi. Il partizionamento statico, ad esempio, potrebbe offrire un considerevole aumento di velocità in un computer con solo pochi core, ma potrebbe comportare rallentamenti nei computer con un numero relativamente elevato di core.

[[In alto](#top)]

## <a name="parallel-sorting"></a><a name="parallel_sorting"></a>Ordinamento parallelo

La libreria PPL fornisce tre algoritmi di ordinamento: [concurrency::parallel_sort](reference/concurrency-namespace-functions.md#parallel_sort), [concurrency::parallel_buffered_sort](reference/concurrency-namespace-functions.md#parallel_buffered_sort)e [concurrency::parallel_radixsort](reference/concurrency-namespace-functions.md#parallel_radixsort). Questi algoritmi sono utili quando si dispone di un set di dati per cui l'ordinamento in parallelo risulta vantaggioso. In particolare, l'ordinamento in parallelo è utile in caso di un set di dati di grandi dimensioni o quando, per ordinare i dati, si utilizza un'operazione di confronto dispendiosa dal punto di vista del calcolo. Ognuno di questi algoritmi consente l'ordinamento degli elementi sul posto.

Gli algoritmi `parallel_sort` e `parallel_buffered_sort` sono entrambi basati sul confronto, cioè gli elementi vengono confrontati in base al valore. L'algoritmo `parallel_sort` non presenta requisiti di memoria aggiuntivi ed è appropriato per un ordinamento di utilizzo generale. L'algoritmo `parallel_buffered_sort` può `parallel_sort`offrire prestazioni migliori rispetto a , ma richiede spazio O(N).

L'algoritmo `parallel_radixsort` è basato sull'hash, cioè vengono utilizzate chiavi di interi per ordinare gli elementi. Utilizzando le chiavi, tramite questo algoritmo può essere calcolata direttamente la destinazione di un elemento anziché ricorrere ai confronti. Come `parallel_buffered_sort`, questo algoritmo richiede spazio O(N).

Nella tabella seguente sono riepilogate le proprietà importanti dei tre algoritmi di ordinamento parallelo.

|Algoritmo|Descrizione|Meccanismo di ordinamento|Stabilità di ordinamento|Requisiti di memoria|Complessità di tempo|Accesso iteratore|
|---------------|-----------------|-----------------------|--------------------|-------------------------|---------------------|---------------------|
|`parallel_sort`|Ordinamento basato sul confronto per utilizzo generale.|Basato sul confronto (crescente)|Instabile|nessuno|O((N/P)log(N/P)|Random (Casuale)|
|`parallel_buffered_sort`|Ordinamento più veloce basato sul confronto per utilizzo generale per cui è richiesto lo spazio O(N).|Basato sul confronto (crescente)|Instabile|Richiede spazio Aggiuntivo O(N)|O((N/P)log(N))|Random (Casuale)|
|`parallel_radixsort`|Ordinamento basato su chiave di interi per cui è richiesto lo spazio O(N).|Basato su hash|Stable|Richiede spazio Aggiuntivo O(N)|O(N/P)|Random (Casuale)|

Nella figura seguente vengono mostrate graficamente le proprietà importanti dei tre algoritmi di ordinamento paralleli.

![Confronto degli algoritmi di ordinamento](../../parallel/concrt/media/concrt_parallel_sorting.png "Confronto degli algoritmi di ordinamento")

Per questi algoritmi di ordinamento parallelo sono valide le regole di gestione dell'annullamento e delle eccezioni. Per ulteriori informazioni sull'annullamento e la gestione delle eccezioni nel runtime di concorrenza, vedere [Annullamento di algoritmi paralleli](../../parallel/concrt/cancellation-in-the-ppl.md#algorithms) e [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

> [!TIP]
> Questi algoritmi di ordinamento parallelo supportano la semantica di spostamento. È possibile definire un operatore di assegnazione di spostamento per migliorare l'efficienza delle operazioni di scambio. Per ulteriori informazioni sulla semantica di spostamento e sull'operatore di assegnazione di spostamento, vedere Dichiaratore di riferimento [Rvalue: &&](../../cpp/rvalue-reference-declarator-amp-amp.md)e [Costruttori di spostamento e operatori](../../cpp/move-constructors-and-move-assignment-operators-cpp.md)di assegnazione di spostamento (C ) . Se non viene fornito un operatore di assegnazione di spostamento o una funzione di scambio, negli algoritmi di ordinamento viene utilizzato il costruttore di copia.

Nell'esempio di base seguente viene illustrato come utilizzare `parallel_sort` per ordinare un `vector` di valori `int`. Per impostazione predefinita, `parallel_sort` utilizza [std::less](../../standard-library/less-struct.md) per confrontare i valori.

[!code-cpp[concrt-basic-parallel-sort#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_10.cpp)]

In questo esempio viene illustrato come fornire una funzione di confronto personalizzata. Utilizza il metodo [std::complex::real](../../standard-library/complex-class.md#real) per ordinare i valori [std::complex\<double>](../../standard-library/complex-double.md) in ordine crescente.

[!code-cpp[concrt-basic-parallel-sort#2](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_11.cpp)]

In questo esempio viene illustrato come fornire una funzione hash all'algoritmo `parallel_radixsort`. In questo esempio vengono ordinati i punti 3D. I punti vengono ordinati in base alla distanza da un punto di riferimento.

[!code-cpp[concrt-parallel-sort-points#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_12.cpp)]

A titolo esemplificativo, in questo esempio viene utilizzato un set di dati relativamente piccolo. È possibile aumentare la dimensione iniziale del vettore per sperimentare miglioramenti delle prestazioni in set di dati di grandi dimensioni.

In questo esempio viene utilizzata un'espressione lambda come funzione hash. È inoltre possibile utilizzare una delle implementazioni predefinite della[classe hash](../../standard-library/hash-class.md) std:: o definire una specializzazione personalizzata. È anche possibile utilizzare un oggetto della funzione hash personalizzato, come illustrato in questo esempio:

[!code-cpp[concrt-parallel-sort-points#2](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_13.cpp)]

[!code-cpp[concrt-parallel-sort-points#3](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_14.cpp)]

La funzione hash deve restituire un tipo integrale ([std::is_integral::value](../../standard-library/is-integral-class.md) deve essere **true**). Questo tipo integrale deve poter essere convertito nel tipo `size_t`.

### <a name="choosing-a-sorting-algorithm"></a><a name="choose_sort"></a>Scelta di un algoritmo di ordinamentoChoosing a Sorting Algorithm

In molti casi, tramite `parallel_sort` viene fornito il migliore bilanciamento delle prestazioni di memoria e velocità. Tuttavia, quando si aumenta la dimensione del set di dati, il numero di processori disponibili o la complessità della funzione di confronto, `parallel_buffered_sort` o `parallel_radixsort` può risultare più efficace. Il modo migliore per stabilire quale algoritmo di ordinamento utilizzare in qualsiasi scenario specificato consiste nello sperimentare e misurare il tempo necessario per ordinare dati tipici con configurazioni di computer rappresentativi. Tenere presenti le linee guida seguenti quando si sceglie una strategia di ordinamento.

- La dimensione del set di dati. In questo documento, un set di dati di *piccole dimensioni* contiene meno di 1.000 elementi, un set di dati di *medie dimensioni* contiene tra 10.000 e 100.000 elementi e un set di dati di grandi *dimensioni* contiene più di 100.000 elementi.

- La quantità di lavoro eseguita dalla funzione di confronto o dalla funzione hash.

- La quantità di risorse di elaborazione disponibili.

- Le caratteristiche del set di dati. Ad esempio, il funzionamento di un algoritmo può essere ottimo per i dati che sono già quasi ordinati, ma non altrettanto valido per i dati che non sono ordinati.

- La dimensione del blocco. Nell'argomento `_Chunk_size` facoltativo viene specificato quando l'algoritmo passa da un'implementazione di ordinamento parallela a una seriale mentre l'ordinamento complessivo viene suddiviso in unità di lavoro più piccole. Ad esempio, se si fornisce 512, l'algoritmo passa a un'implementazione seriale quando in un'unità di lavoro sono contenuti al massimo 512 elementi. Con un'implementazione seriale le prestazioni complessive possono migliorare poiché viene eliminato il sovraccarico richiesto per elaborare i dati in parallelo.

Potrebbe non essere utile effettuare l'ordinamento di un piccolo set di dati in parallelo, anche quando si dispone di molte risorse di elaborazione o quando tramite la funzione hash o di confronto viene eseguita una quantità di lavoro relativamente grande. È possibile utilizzare la funzione [std::sort](../../standard-library/algorithm-functions.md#sort) per ordinare set di dati di piccole dimensioni. (`parallel_sort` `parallel_buffered_sort` e `sort` chiamare quando si specifica una dimensione del `parallel_buffered_sort` blocco che è maggiore del set di dati; tuttavia, sarebbe necessario allocare spazio O(N), che potrebbe richiedere più tempo a causa di conflitti di blocco o allocazione di memoria.)

Se è necessario ridurre l'utilizzo di memoria o se l'allocatore di memoria è soggetto ai conflitti di blocco, utilizzare `parallel_sort` per ordinare un set di dati di medie dimensioni. `parallel_sort`non richiede spazio aggiuntivo; gli altri algoritmi richiedono spazio O(N).

Utilizzare `parallel_buffered_sort` per ordinare set di dati di medie dimensioni e quando l'applicazione soddisfa il requisito di spazio aggiuntivo O(N). `parallel_buffered_sort` può essere particolarmente utile quando si dispone di molte risorse di elaborazione oppure di una funzione hash o di confronto dispendiosa.

Utilizzare `parallel_radixsort` per ordinare set di dati di grandi dimensioni e quando l'applicazione soddisfa il requisito di spazio aggiuntivo O(N). `parallel_radixsort` può essere particolarmente utile quando l'operazione di confronto equivalente è più dispendiosa o quando entrambe le operazioni sono dispendiose.

> [!CAUTION]
> Per l'implementazione di una funzione hash valida è necessario conoscere l'intervallo del set di dati e il modo in cui ogni elemento nel set di dati viene trasformato in un valore unsigned corrispondente. Poiché per l'operazione hash vengono utilizzati valori unsigned, prendere in considerazione una strategia di ordinamento diversa se non è possibile generare valori hash unsigned.

Nell'esempio seguente vengono confrontate le prestazioni di `sort`, `parallel_sort`, `parallel_buffered_sort` e `parallel_radixsort` in set di dati casuali di uguale dimensione.

[!code-cpp[concrt-choosing-parallel-sort#1](../../parallel/concrt/codesnippet/cpp/parallel-algorithms_15.cpp)]

In questo esempio, che presuppone che sia accettabile allocare spazio `parallel_radixsort` O(N) durante l'ordinamento, offre le prestazioni migliori su questo set di dati nella configurazione del computer.

[[In alto](#top)]

## <a name="related-topics"></a>Argomenti correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura: Scrivere un ciclo parallel_for](../../parallel/concrt/how-to-write-a-parallel-for-loop.md)|Viene illustrato come `parallel_for` utilizzare l'algoritmo per eseguire la moltiplicazione della matrice.|
|[Procedura: Scrivere un ciclo parallel_for_each](../../parallel/concrt/how-to-write-a-parallel-for-each-loop.md)|Viene illustrato come `parallel_for_each` utilizzare l'algoritmo per calcolare il conteggio dei numeri primi in un oggetto [std::array](../../standard-library/array-class-stl.md) in parallelo.|
|[Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)|Viene illustrato come usare l'algoritmo `parallel_invoke` per migliorare le prestazioni dell'algoritmo di ordinamento bitonico.|
|[Procedura: utilizzare parallel_invoke per eseguire operazioni paralleleHow to: Use parallel_invoke to Execute Parallel Operations](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md)|Viene illustrato come usare l'algoritmo `parallel_invoke` per migliorare le prestazioni di un programma che esegue più operazioni in un'origine dati condivisa.|
|[Procedura: eseguire operazioni di mapping e riduzione in parallelo](../../parallel/concrt/how-to-perform-map-and-reduce-operations-in-parallel.md)|Viene mostrato come utilizzare gli algoritmi `parallel_transform` e `parallel_reduce` per eseguire un'operazione di mapping e di riduzione tramite cui vengono contate le occorrenze di parole nei file.|
|[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Viene descritta la libreria PPL, che fornisce un modello di programmazione imperativo che promuove la scalabilità e la facilità d'uso per lo sviluppo di applicazioni simultanee.|
|[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)|Viene illustrato il ruolo dell'annullamento nella libreria PPL, come annullare il lavoro parallelo e come determinare quando un gruppo di attività viene annullato.|
|[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Viene illustrato il ruolo della gestione delle eccezioni nel runtime di concorrenza.|

## <a name="reference"></a>Informazioni di riferimento

[Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)

[Funzione parallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each)

[Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)

[Classe affinity_partitioner](../../parallel/concrt/reference/affinity-partitioner-class.md)

[Classe auto_partitioner](../../parallel/concrt/reference/auto-partitioner-class.md)

[Classe simple_partitioner](../../parallel/concrt/reference/simple-partitioner-class.md)

[Classe static_partitioner](../../parallel/concrt/reference/static-partitioner-class.md)

[Funzione parallel_sort](reference/concurrency-namespace-functions.md#parallel_sort)

[Funzione parallel_buffered_sort](reference/concurrency-namespace-functions.md#parallel_buffered_sort)

[Funzione parallel_radixsort](reference/concurrency-namespace-functions.md#parallel_radixsort)
