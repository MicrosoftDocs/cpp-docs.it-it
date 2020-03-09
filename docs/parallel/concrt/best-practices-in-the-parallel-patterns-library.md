---
title: Procedure consigliate nella libreria PPL (Parallel Patterns Library)
ms.date: 11/04/2016
helpviewer_keywords:
- Parallel Patterns Library, practices to avoid
- practices to avoid, Parallel Patterns Library
- best practices, Parallel Patterns Library
- Parallel Patterns Library, best practices
ms.assetid: e43e0304-4d54-4bd8-a3b3-b8673559a9d7
ms.openlocfilehash: 641d85b03fca13a6592610d87563e3e701ad3e3e
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78854166"
---
# <a name="best-practices-in-the-parallel-patterns-library"></a>Procedure consigliate nella libreria PPL (Parallel Patterns Library)

In questo documento viene descritto come ottimizzare l'uso della libreria PPL (Parallel Patterns Library). In tale libreria sono disponibili contenitori, oggetti e algoritmi di uso generale che consentono di eseguire un parallelismo accurato.

Per ulteriori informazioni sulla libreria PPL, vedere la [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md).

## <a name="top"></a> Sezioni

Questo documento contiene le seguenti sezioni:

- [Non parallelizzare corpi ciclo piccoli](#small-loops)

- [Parallelismo rapido al massimo livello possibile](#highest)

- [Usare parallel_invoke per risolvere i problemi di divisione e conquista](#divide-and-conquer)

- [Usare l'annullamento o la gestione delle eccezioni per interrompere un ciclo parallelo](#breaking-loops)

- [Informazioni su come l'annullamento e la gestione delle eccezioni influiscono sulla distruzione degli oggetti](#object-destruction)

- [Non bloccare ripetutamente in un ciclo parallelo](#repeated-blocking)

- [Non eseguire operazioni di blocco quando si annulla il lavoro parallelo](#blocking)

- [Non scrivere in dati condivisi in un ciclo parallelo](#shared-writes)

- [Quando possibile, evitare la condivisione falsa](#false-sharing)

- [Verificare che le variabili siano valide per tutta la durata di un'attività](#lifetime)

## <a name="small-loops"></a>Non parallelizzare corpi ciclo piccoli

La parallelizzazione di corpi di ciclo di dimensioni relativamente ridotte può determinare un sovraccarico della pianificazione associata che annulla i vantaggi derivanti dall'elaborazione in parallelo. Si consideri l'esempio seguente, in cui ogni coppia di elementi viene aggiunta in due matrici.

[!code-cpp[concrt-small-loops#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_1.cpp)]

Il volume del carico di lavoro per ogni iterazione del ciclo parallelo è troppo piccolo per poter trarre vantaggio dal sovraccarico dell'elaborazione in parallelo. È possibile migliorare le prestazioni di questo ciclo eseguendo un maggior volume di lavoro nel corpo del ciclo oppure eseguendo il ciclo in modalità seriale.

[[Torna all'inizio](#top)]

## <a name="highest"></a>Parallelismo rapido al massimo livello possibile

Quando il codice viene parallelizzato solo a un livello basso, è possibile introdurre un costrutto fork-join che non viene ridimensionato con l'aumento del numero di processori. Un costrutto *fork-join* è un costrutto in cui un'attività divide il proprio lavoro in sottoattività parallele più piccole e attende il completamento di tali sottoattività. Ciascuna sottoattività può a sua volta essere suddivisa in modo ricorsivo in ulteriori sottoattività.

Sebbene il modello fork-join possa risultare utile per risolvere vari problemi, in alcune situazioni il sovraccarico della sincronizzazione può diminuire la scalabilità. Si consideri, ad esempio, il codice seriale seguente che elabora i dati di immagine.

[!code-cpp[concrt-image-processing-filter#20](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_2.cpp)]

Poiché ogni iterazione del ciclo è indipendente, è possibile parallelizzare gran parte del lavoro, come illustrato nell'esempio seguente. In questo esempio viene utilizzato l'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) per parallelizzare il ciclo esterno.

[!code-cpp[concrt-image-processing-filter#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_3.cpp)]

Nell'esempio seguente viene illustrato un costrutto fork-join mediante la chiamata alla funzione `ProcessImage` in un ciclo. Ogni chiamata a `ProcessImage` non comporta alcuna risposta fino al completamento di ciascuna sottoattività.

[!code-cpp[concrt-image-processing-filter#21](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_4.cpp)]

Se ogni iterazione del ciclo parallelo non esegue quasi alcun lavoro oppure il lavoro eseguito dal ciclo parallelo non è bilanciato, ovvero alcune iterazioni del ciclo richiedono più tempo di altre, il sovraccarico di pianificazione richiesto per eseguire con frequenza le operazioni di fork e join può annullare il vantaggio dell'esecuzione parallela. Questo sovraccarico aumenta con l'aumentare del numero di processori.

Per ridurre la quantità di sovraccarico di pianificazione in questo esempio, è possibile parallelizzare i cicli esterni prima di quelli interni oppure usare un altro costrutto parallelo come pipelining. Nell'esempio seguente viene modificata la funzione `ProcessImages` per utilizzare l'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) per parallelizzare il ciclo esterno.

[!code-cpp[concrt-image-processing-filter#22](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_5.cpp)]

Per un esempio simile che usa una pipeline per eseguire l'elaborazione di immagini in parallelo, vedere [procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md).

[[Torna all'inizio](#top)]

## <a name="divide-and-conquer"></a>Usare parallel_invoke per risolvere i problemi di divisione e conquista

Un problema di *divisione e conquista* è un formato del costrutto fork-join che usa la ricorsione per suddividere un'attività in sottoattività. Oltre alle classi [Concurrency:: task_group](reference/task-group-class.md) e [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) , è anche possibile usare l'algoritmo concurrency [::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) per risolvere i problemi di divisione e conquista. L'algoritmo `parallel_invoke` ha una sintassi più concisa rispetto agli oggetti gruppo di attività ed è utile quando è presente un numero fisso di attività parallele.

Nell'esempio seguente viene illustrato l'uso dell'algoritmo `parallel_invoke` per implementare l'algoritmo di ordinamento bitonico.

[!code-cpp[concrt-parallel-bitonic-sort#12](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_6.cpp)]

Per ridurre il sovraccarico, l'algoritmo `parallel_invoke` esegue l'ultima delle serie di attività nel contesto di chiamata.

Per la versione completa di questo esempio, vedere [procedura: usare parallel_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md). Per ulteriori informazioni sull'algoritmo di `parallel_invoke`, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

[[Torna all'inizio](#top)]

## <a name="breaking-loops"></a>Usare l'annullamento o la gestione delle eccezioni per interrompere un ciclo parallelo

La libreria PPL fornisce due modi per annullare il lavoro parallelo che viene eseguito da un gruppo di attività o da un algoritmo parallelo. Un modo consiste nell'utilizzare il meccanismo di annullamento fornito dalle classi [Concurrency:: task_group](reference/task-group-class.md) e [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) . L'altro consiste nel generare un'eccezione nel corpo di una funzione lavoro dell'attività. Il meccanismo di annullamento è più efficace della gestione delle eccezioni per annullare un albero di lavoro parallelo. Un *albero di lavoro parallelo* è un gruppo di gruppi di attività correlati in cui alcuni gruppi di attività contengono altri gruppi di attività. Il meccanismo di annullamento annulla un gruppo di attività e i relativi gruppi di attività figlio dall'alto verso il basso. La gestione delle eccezioni funziona invece in ordine sequenziale dal basso verso l'alto e deve annullare ogni gruppo di attività figlio in modo indipendente in quanto l'eccezione si propaga verso l'alto.

Quando si lavora direttamente con un oggetto gruppo di attività, utilizzare i metodi [Concurrency:: task_group:: Cancel](reference/task-group-class.md#cancel) o [Concurrency:: structured_task_group:: Cancel](reference/structured-task-group-class.md#cancel) per annullare il lavoro che appartiene a tale gruppo di attività. Per annullare un algoritmo parallelo, ad esempio `parallel_for`, creare un gruppo di attività padre e annullarlo. Si consideri ad esempio la funzione seguente, `parallel_find_any`, che esegue la ricerca di un valore in una matrice in parallelo.

[!code-cpp[concrt-parallel-array-search#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_7.cpp)]

Poiché gli algoritmi paralleli usano i gruppi di attività, quando una delle iterazioni parallele annulla il gruppo di attività padre, viene annullata l'intera attività. Per la versione completa di questo esempio, vedere [procedura: usare l'annullamento per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md).

Anche se il meccanismo di annullamento della gestione delle eccezioni risulta meno efficace per annullare il lavoro parallelo, in alcune situazioni questo sistema è più appropriato. Ad esempio il metodo seguente, `for_all`, esegue in modo ricorsivo una funzione lavoro in ciascun nodo di una struttura `tree`. In questo esempio, il membro dati `_children` è un [elenco std::](../../standard-library/list-class.md) che contiene `tree` oggetti.

[!code-cpp[concrt-task-tree-search#6](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_8.cpp)]

Il chiamante del metodo `tree::for_all` può generare un'eccezione se non richiede che la funzione lavoro venga chiamata per ciascun elemento della struttura ad albero. Nell'esempio seguente viene illustrata la funzione `search_for_value` che cerca un valore nell'oggetto `tree` fornito. La funzione `search_for_value` usa una funzione lavoro che genera un'eccezione quando l'elemento corrente della struttura ad albero corrisponde al valore fornito. La funzione `search_for_value` usa un blocco `try-catch` per acquisire l'eccezione e stampare il risultato nella console.

[!code-cpp[concrt-task-tree-search#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_9.cpp)]

Per la versione completa di questo esempio, vedere [procedura: usare la gestione delle eccezioni per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).

Per informazioni più generali sull'annullamento e sui meccanismi di gestione delle eccezioni forniti dalla libreria PPL, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md) e [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

[[Torna all'inizio](#top)]

## <a name="object-destruction"></a>Informazioni su come l'annullamento e la gestione delle eccezioni influiscono sulla distruzione degli oggetti

In un albero di lavoro parallelo l'annullamento di un'attività impedisce l'esecuzione delle attività figlio. Ciò può comportare problemi se una delle attività figlio esegue un'operazione importante per l'applicazione, ad esempio liberare una risorsa. L'annullamento delle attività può inoltre provocare la propagazione di un'eccezione tramite un distruttore di oggetti e causare un comportamento non definito nell'applicazione.

Nell'esempio seguente la classe `Resource` descrive una risorsa e la classe `Container` descrive un contenitore che include le risorse. Nel rispettivo distruttore la classe `Container` chiama il metodo `cleanup` per due dei rispettivi membri `Resource` in parallelo, quindi chiama il metodo `cleanup` per il rispettivo terzo membro `Resource`.

[!code-cpp[concrt-parallel-resource-destruction#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_10.h)]

Anche se questo modello non presenta problemi di per sé, si consideri il codice seguente, che esegue due attività in parallelo. La prima attività crea un oggetto `Container`, mentre la seconda annulla l'intera attività. Nell'esempio vengono utilizzati due oggetti [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) per garantire che l'annullamento venga eseguito dopo la creazione dell'oggetto `Container` e che l'oggetto `Container` venga eliminato dopo l'operazione di annullamento.

[!code-cpp[concrt-parallel-resource-destruction#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_11.cpp)]

Nell'esempio viene prodotto l'output seguente:

```Output
Container 1: Freeing resources...Exiting program...
```

Nell'esempio di codice sono presenti i problemi seguenti, che possono determinare un comportamento diverso da quello previsto:

- L'annullamento dell'attività padre comporta anche l'annullamento dell'attività figlio, della chiamata a [Concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke). Di conseguenza, queste due risorse non vengono liberate.

- L'annullamento dell'attività padre comporta la generazione di un'eccezione interna da parte dell'attività figlio. Poiché il distruttore `Container` non gestisce questa eccezione, l'eccezione viene propagata verso l'alto e la terza risorsa non viene liberata.

- L'eccezione che viene generata dall'attività figlio si propaga mediante il distruttore `Container`. La generazione da un distruttore imposta l'applicazione su uno stato non definito.

Si consiglia di non eseguire operazioni critiche nelle attività, ad esempio liberare risorse, a meno che non sia possibile garantire che queste attività non verranno annullate. Si consiglia inoltre di non usare la funzionalità di runtime che può generare un'eccezione nel distruttore dei tipi.

[[Torna all'inizio](#top)]

## <a name="repeated-blocking"></a>Non bloccare ripetutamente in un ciclo parallelo

Un ciclo parallelo, ad esempio [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) o [concorrenza::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) dominato dalle operazioni di blocco può causare la creazione di molti thread da parte del runtime in un breve periodo di tempo.

Il runtime di concorrenza esegue lavoro aggiuntivo quando un'attività termina oppure si blocca o cede volontariamente il controllo. Quando un'iterazione del ciclo parallelo si blocca, è possibile che il runtime avvii un'altra iterazione. Quando non sono disponibili thread inattivi, il runtime crea un nuovo thread.

Se il corpo di un ciclo parallelo si blocca occasionalmente, questo meccanismo contribuisce a ottimizzare la velocità dell'intera attività. Quando invece si blocca un numero elevato di iterazioni, il runtime potrebbe creare un numero elevato di thread per eseguire il lavoro aggiuntivo. Ciò può determinare condizioni di memoria insufficiente o di uso non appropriato delle risorse hardware.

Si consideri l'esempio seguente che chiama la funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) in ogni iterazione di un ciclo `parallel_for`. Poiché `send` si blocca in modo cooperativo, il runtime crea un nuovo thread per eseguire il lavoro aggiuntivo ogni volta che viene chiamato il metodo `send`.

[!code-cpp[concrt-repeated-blocking#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_12.cpp)]

È consigliabile effettuare il refactoring del codice per evitare questo modello. In questo esempio è possibile evitare la creazione di thread aggiuntivi chiamando il metodo `send` in un ciclo seriale di `for`.

[[Torna all'inizio](#top)]

## <a name="blocking"></a>Non eseguire operazioni di blocco quando si annulla il lavoro parallelo

Quando possibile, non eseguire operazioni di blocco prima di chiamare il metodo [Concurrency:: task_group:: Cancel](reference/task-group-class.md#cancel) o [Concurrency:: structured_task_group:: Cancel](reference/structured-task-group-class.md#cancel) per annullare il lavoro parallelo.

Quando tramite un'attività viene effettuata un'operazione di blocco, mediante il runtime può essere eseguito altro lavoro mentre la prima attività resta in attesa dei dati. Quando si sblocca, il runtime ripianifica l'attività di attesa. Il runtime generalmente ripianifica prima le ultime attività sbloccate e poi quelle sbloccate meno di recente. Pertanto, il runtime potrebbe pianificare lavoro non necessario durante l'operazione di blocco, determinando una riduzione delle prestazioni. Di conseguenza, quando si esegue un'operazione di blocco prima di annullare lavoro parallelo, l'operazione di blocco può ritardare la chiamata a `cancel`. Ciò comporta l'intervento di altre attività per l'esecuzione del lavoro non necessario.

Si consideri l'esempio seguente che definisce la funzione `parallel_find_answer`. Tale funzione esegue la ricerca di un elemento della matrice fornita che soddisfa la funzione predicato specificata. Quando la funzione predicato restituisce **true**, la funzione lavoro parallelo crea un oggetto `Answer` e Annulla l'attività complessiva.

[!code-cpp[concrt-blocking-cancel#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_13.cpp)]

L'operatore `new` esegue un'allocazione per l'heap, che potrebbe bloccarsi. Il runtime esegue altre operazioni solo quando l'attività esegue una chiamata di blocco cooperativo, ad esempio una chiamata a [Concurrency:: critical_section:: Lock](reference/critical-section-class.md#lock).

Nell'esempio seguente viene mostrato come evitare il lavoro non necessario e migliorare in tal modo le prestazioni. Questo esempio annulla il gruppo di attività prima di allocare lo spazio di archiviazione per l'oggetto `Answer`.

[!code-cpp[concrt-blocking-cancel#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_14.cpp)]

[[Torna all'inizio](#top)]

## <a name="shared-writes"></a>Non scrivere in dati condivisi in un ciclo parallelo

Il runtime di concorrenza fornisce diverse strutture di dati, ad esempio [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md), che sincronizzano l'accesso simultaneo ai dati condivisi. Queste strutture di dati sono utili in molti casi, ad esempio quando più attività richiedono raramente l'accesso condiviso a una risorsa.

Si consideri l'esempio seguente in cui viene utilizzato l'algoritmo [Concurrency::p arallel_for_each](reference/concurrency-namespace-functions.md#parallel_for_each) e un oggetto `critical_section` per calcolare il numero di numeri primi in un oggetto [std:: Array](../../standard-library/array-class-stl.md) . Questo esempio non è scalabile poiché ogni thread deve attendere per accedere alla variabile condivisa `prime_sum`.

[!code-cpp[concrt-parallel-sum-of-primes#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_15.cpp)]

L'esempio può inoltre comportare una riduzione delle prestazioni in quanto l'operazione di blocco frequente serializza il ciclo in modo efficace. Inoltre, quando un oggetto runtime di concorrenza esegue un'operazione di blocco, l'utilità di pianificazione potrebbe creare un thread aggiuntivo per eseguire altro lavoro mentre il primo thread rimane in attesa dei dati. Se il runtime crea numerosi thread perché molte attività sono in attesa dei dati condivisi, è possibile che le prestazioni dell'applicazione si riducano notevolmente o che si passi a uno stato di risorse insufficienti.

La libreria PPL definisce la classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) , che consente di eliminare lo stato condiviso fornendo l'accesso alle risorse condivise in modo senza blocco. La classe `combinable` fornisce l'archiviazione locale dei thread che consente di eseguire calcoli accurati e quindi di unire i calcoli in un risultato finale. È possibile considerare un oggetto `combinable` come una variabile di riduzione.

Nell'esempio seguente si modifica l'esempio precedente mediante l'uso di un oggetto `combinable` anziché un oggetto `critical_section` per calcolare la somma. Questo esempio è scalabile, in quanto ogni thread è responsabile della propria copia locale della somma. In questo esempio viene utilizzato il metodo [Concurrency:: combinable:: combine](reference/combinable-class.md#combine) per unire i calcoli locali nel risultato finale.

[!code-cpp[concrt-parallel-sum-of-primes#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_16.cpp)]

Per la versione completa di questo esempio, vedere [procedura: usare l'oggetto combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md). Per ulteriori informazioni sulla classe `combinable`, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).

[[Torna all'inizio](#top)]

## <a name="false-sharing"></a>Quando possibile, evitare la condivisione falsa

La *falsa condivisione* si verifica quando più attività simultanee in esecuzione su processori distinti scrivono in variabili che si trovano nella stessa riga della cache. Quando una sola attività scrive in una delle variabili, viene invalidata la riga della cache per entrambe le variabili. Ogni processore deve ricaricare la riga della cache ogni volta che questa viene invalidata. Pertanto, la falsa condivisione può compromettere le prestazioni nell'applicazione.

Nell'esempio di base seguente vengono illustrate due attività simultanee, ognuna delle quali incrementa una variabile di contatore condivisa.

[!code-cpp[concrt-false-sharing#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_17.cpp)]

Per eliminare la condivisione dei dati tra le due attività, è possibile modificare l'esempio in modo che vengano usate due variabili di contatore. Questo esempio calcola il valore di contatore finale dopo che le attività sono state completate. L'esempio rappresenta tuttavia un caso di falsa condivisione poiché le variabili `count1` e `count2` possono essere collocate nella stessa riga della cache.

[!code-cpp[concrt-false-sharing#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_18.cpp)]

Un modo per eliminare la falsa condivisione consiste nell'assicurarsi che le variabili di contatore si trovino su righe della cache separate. Nell'esempio seguente le variabili `count1` e `count2` vengono allineate su limiti di 64 byte.

[!code-cpp[concrt-false-sharing#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_19.cpp)]

In questo esempio si presuppone che la dimensione della cache in memoria sia pari o inferiore a 64 byte.

Si consiglia di utilizzare la classe [Concurrency:: combinable](../../parallel/concrt/reference/combinable-class.md) quando è necessario condividere i dati tra le attività. La classe `combinable` consente di creare le variabili di thread locali in modo da ridurre la probabilità che si verifichi la falsa condivisione. Per ulteriori informazioni sulla classe `combinable`, vedere [contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).

[[Torna all'inizio](#top)]

## <a name="lifetime"></a>Verificare che le variabili siano valide per tutta la durata di un'attività

Quando si fornisce un'espressione lambda per un gruppo di attività o un algoritmo parallelo, la clausola di acquisizione specifica se il corpo dell'espressione lambda accede alle variabili nell'ambito di inclusione in base al valore o al riferimento. Quando si passano le variabili a un'espressione lambda in base al riferimento, è necessario garantire che tale variabile duri fino al completamento dell'attività.

Si consideri l'esempio seguente, che definisce la classe `object` e la funzione `perform_action`. La funzione `perform_action` crea una variabile `object` ed esegue una determinata azione su tale variabile in modo asincrono. Dal momento che non è sicuro che l'attività venga completata prima che la funzione `perform_action` restituisca un risultato, il programma si arresterà in modo anomalo o seguirà un comportamento non specificato se la variabile `object` viene eliminata durante l'esecuzione dell'attività.

[!code-cpp[concrt-lambda-lifetime#1](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_20.cpp)]

A seconda dei requisiti dell'applicazione, è possibile usare una delle tecniche seguenti per garantire che le variabili rimangano valide per l'intera durata di ogni attività.

Nell'esempio seguente la variabile `object` viene passata all'attività in base al valore. Pertanto, l'attività agisce sulla propria copia della variabile.

[!code-cpp[concrt-lambda-lifetime#2](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_21.cpp)]

Poiché la variabile `object` viene passata in base al valore, eventuali modifiche di stato apportate a questa variabile non vengono visualizzate nella copia originale.

Nell'esempio seguente viene utilizzato il metodo [Concurrency:: task_group:: wait](reference/task-group-class.md#wait) per assicurarsi che l'attività venga completata prima che la funzione `perform_action` restituisca.

[!code-cpp[concrt-lambda-lifetime#3](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_22.cpp)]

Poiché ora l'attività viene completata prima che la funzione restituisca un risultato, la funzione `perform_action` non si comporta più in modo asincrono.

Nell'esempio seguente la funzione `perform_action` viene modificata in modo da accettare un riferimento alla variabile `object`. Il chiamante deve garantire che la durata della variabile `object` resti valida fino al termine dell'attività.

[!code-cpp[concrt-lambda-lifetime#4](../../parallel/concrt/codesnippet/cpp/best-practices-in-the-parallel-patterns-library_23.cpp)]

È inoltre possibile usare un puntatore per controllare la durata di un oggetto che viene passato a un gruppo di attività o a un algoritmo parallelo.

Per altre informazioni sulle espressioni lambda, vedere [Espressioni lambda in C++](../../cpp/lambda-expressions-in-cpp.md).

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure consigliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)<br/>
[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)<br/>
[Procedura dettagliata: creazione di una rete per l'elaborazione di immagini](../../parallel/concrt/walkthrough-creating-an-image-processing-network.md)<br/>
[Procedura: Usare parallel_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)<br/>
[Procedura: Usare l'annullamento per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)<br/>
[Procedura: Usare la classe combinable per migliorare le prestazioni](../../parallel/concrt/how-to-use-combinable-to-improve-performance.md)<br/>
[Procedure consigliate nella libreria di agenti asincroni](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)<br/>
[Procedure consigliate generali nel runtime di concorrenza](../../parallel/concrt/general-best-practices-in-the-concurrency-runtime.md)
