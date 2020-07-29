---
title: Procedure consigliate generali nel runtime di concorrenza
ms.date: 11/04/2016
helpviewer_keywords:
- Concurrency Runtime, general best practices
ms.assetid: ce5c784c-051e-44a6-be84-8b3e1139c18b
ms.openlocfilehash: 77ca8acbd3dedc28aaa6c330c3e91ed09046d162
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228453"
---
# <a name="general-best-practices-in-the-concurrency-runtime"></a>Procedure consigliate generali nel runtime di concorrenza

Questo documento descrive le procedure consigliate che si applicano a più aree del runtime di concorrenza.

## <a name="sections"></a><a name="top"></a>Sezioni

Questo documento contiene le seguenti sezioni:

- [Usare costrutti di sincronizzazione cooperativa quando possibile](#synchronization)

- [Evitare le attività di lunga durata che non producono](#yield)

- [Usare l'oversubscription per eseguire l'offset di operazioni che bloccano o hanno latenza elevata](#oversubscription)

- [Usare le funzioni di gestione della memoria simultanee quando possibile](#memory)

- [Usare RAII per gestire la durata degli oggetti di concorrenza](#raii)

- [Non creare oggetti di concorrenza in ambito globale](#global-scope)

- [Non usare oggetti di concorrenza nei segmenti di dati condivisi](#shared-data)

## <a name="use-cooperative-synchronization-constructs-when-possible"></a><a name="synchronization"></a>Usare costrutti di sincronizzazione cooperativa quando possibile

Il runtime di concorrenza fornisce molti costrutti indipendenti dalla concorrenza che non richiedono un oggetto di sincronizzazione esterno. La classe [Concurrency:: concurrent_vector](../../parallel/concrt/reference/concurrent-vector-class.md) , ad esempio, fornisce operazioni di Accodamento e accesso agli elementi indipendenti dalla concorrenza. In tal caso, i puntatori o gli iteratori sono sempre validi. Non si tratta di una garanzia di inizializzazione di elementi o di un ordine di attraversamento specifico. Tuttavia, per i casi in cui è necessario l'accesso esclusivo a una risorsa, il runtime fornisce le classi Concurrency [:: critical_section](../../parallel/concrt/reference/critical-section-class.md), [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md)e [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) . Questi tipi si comportano in modo cooperativo; l'utilità di pianificazione può pertanto riallocare le risorse di elaborazione a un altro contesto, perché la prima attività resta in attesa di dati. Quando possibile, usare questi tipi di sincronizzazione invece di altri meccanismi di sincronizzazione, ad esempio quelli forniti dall'API Windows, che non si comportano in modo cooperativo. Per ulteriori informazioni su questi tipi di sincronizzazione e un esempio di codice, vedere la pagina relativa alle [strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md) e [confronto tra le strutture di dati di sincronizzazione e l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)

[All'[inizio](#top)]

## <a name="avoid-lengthy-tasks-that-do-not-yield"></a><a name="yield"></a>Evitare le attività di lunga durata che non producono

Poiché l'utilità di pianificazione si comporta in modo cooperativo, non fornisce l'equità tra le attività. Pertanto, un'attività può impedire l'avvio di altre attività. Sebbene questo sia accettabile in alcuni casi, in altri casi ciò può causare un deadlock o una mancanza di risorse.

Nell'esempio seguente vengono eseguite più attività rispetto al numero di risorse di elaborazione allocate. La prima attività non viene restituita all'utilità di pianificazione e pertanto la seconda attività non viene avviata fino al completamento della prima attività.

[!code-cpp[concrt-cooperative-tasks#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_1.cpp)]

Nell'esempio viene prodotto l'output seguente:

1: 250000000 1: 500000000 1: 750000000 1: 1000000000 2: 250000000 2: 500000000 2: 750000000 2: 1000000000

Esistono diversi modi per abilitare la collaborazione tra le due attività. Un modo consiste nel cedere occasionalmente all'utilità di pianificazione in un'attività a esecuzione prolungata. Nell'esempio seguente la funzione viene modificata `task` in modo da chiamare il metodo [Concurrency:: context:: Yield](reference/context-class.md#yield) per restituire l'esecuzione all'utilità di pianificazione in modo che sia possibile eseguire un'altra attività.

[!code-cpp[concrt-cooperative-tasks#2](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_2.cpp)]

Nell'esempio viene prodotto l'output seguente:

```Output
1: 250000000
2: 250000000
1: 500000000
2: 500000000
1: 750000000
2: 750000000
1: 1000000000
2: 1000000000
```

Il `Context::Yield` metodo produce solo un altro thread attivo nell'utilità di pianificazione a cui appartiene il thread corrente, un'attività leggera o un altro thread del sistema operativo. Questo metodo non viene restituito a lavoro pianificato per essere eseguito in un oggetto [Concurrency:: task_group](reference/task-group-class.md) o [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) ma non è ancora stato avviato.

Esistono altri modi per abilitare la collaborazione tra le attività a esecuzione prolungata. È possibile suddividere un'attività di grandi dimensioni in sottoattività più piccole. È anche possibile abilitare l'oversubscription durante un'attività di lunga durata. L'oversubscription consente di creare un numero di thread superiore a quello dei thread hardware disponibili. L'oversubscription è particolarmente utile quando un'attività di lunga durata contiene una quantità elevata di latenza, ad esempio la lettura di dati dal disco o da una connessione di rete. Per ulteriori informazioni sulle attività leggere e sull'oversubscription, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

[All'[inizio](#top)]

## <a name="use-oversubscription-to-offset-operations-that-block-or-have-high-latency"></a><a name="oversubscription"></a>Usare l'oversubscription per eseguire l'offset di operazioni che bloccano o hanno latenza elevata

Il runtime di concorrenza fornisce le primitive di sincronizzazione, ad esempio [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md), che consentono alle attività di bloccarsi e cedere in modo cooperativo. Quando un'attività si blocca o cede in modo cooperativo, l'utilità di pianificazione può riallocare le risorse di elaborazione a un altro contesto, perché la prima attività resta in attesa di dati.

In alcuni casi non è possibile utilizzare il meccanismo di blocco cooperativo fornito dal runtime di concorrenza. Ad esempio, una libreria esterna utilizzata può utilizzare un meccanismo di sincronizzazione diverso. Un altro esempio è quando si esegue un'operazione che potrebbe avere una latenza elevata, ad esempio quando si usa la funzione API Windows `ReadFile` per leggere i dati da una connessione di rete. In questi casi, l'oversubscription può consentire l'esecuzione di altre attività quando un'altra attività è inattiva. L'oversubscription consente di creare un numero di thread superiore a quello dei thread hardware disponibili.

Si consideri la funzione seguente, `download` , che Scarica il file nell'URL specificato. In questo esempio viene utilizzato il metodo [Concurrency:: context:: Oversubscribe](reference/context-class.md#oversubscribe) per aumentare temporaneamente il numero di thread attivi.

[!code-cpp[concrt-download-oversubscription#4](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_3.cpp)]

Poiché la `GetHttpFile` funzione esegue un'operazione potenzialmente latente, l'oversubscription può consentire l'esecuzione di altre attività durante l'attesa dei dati da parte dell'attività corrente. Per la versione completa di questo esempio, vedere [procedura: usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).

[All'[inizio](#top)]

## <a name="use-concurrent-memory-management-functions-when-possible"></a><a name="memory"></a>Usare le funzioni di gestione della memoria simultanee quando possibile

Utilizzare le funzioni di gestione della memoria, [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) e [Concurrency:: Free](reference/concurrency-namespace-functions.md#free), quando si dispone di attività con granularità fine che allocano spesso oggetti piccoli che hanno una durata relativamente breve. Il runtime di concorrenza include una cache di memoria separata per ogni thread in esecuzione. Le `Alloc` `Free` funzioni e allocano e liberano memoria da queste cache senza usare blocchi o barriere di memoria.

Per ulteriori informazioni su queste funzioni di gestione della memoria, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md). Per un esempio che usa queste funzioni, vedere [procedura: usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).

[All'[inizio](#top)]

## <a name="use-raii-to-manage-the-lifetime-of-concurrency-objects"></a><a name="raii"></a>Usare RAII per gestire la durata degli oggetti di concorrenza

Il runtime di concorrenza utilizza la gestione delle eccezioni per implementare funzionalità come l'annullamento. Pertanto, scrivere codice indipendente dalle eccezioni quando si effettua una chiamata al runtime o si chiama un'altra libreria che chiama nel Runtime.

Il modello di *inizializzazione della risorsa* (RAII) è un modo per gestire in modo sicuro la durata di un oggetto di concorrenza in un ambito specifico. Nel modello RAII, viene allocata una struttura di dati nello stack. La struttura dei dati Inizializza o acquisisce una risorsa quando viene creata ed Elimina o rilascia la risorsa quando la struttura dei dati viene distrutta. Il modello RAII garantisce che il distruttore venga chiamato prima che l'ambito di inclusione venga chiuso. Questo modello è utile quando una funzione contiene più **`return`** istruzioni. Questo modello consente inoltre di scrivere codice indipendente dalle eccezioni. Quando un' **`throw`** istruzione causa la rimozione dello stack, viene chiamato il distruttore per l'oggetto RAII, pertanto la risorsa viene sempre eliminata o rilasciata correttamente.

Il runtime definisce diverse classi che usano il modello RAII, ad esempio [Concurrency:: critical_section:: scoped_lock](../../parallel/concrt/reference/critical-section-class.md#critical_section__scoped_lock_class) e [Concurrency:: reader_writer_lock:: scoped_lock](reference/reader-writer-lock-class.md#scoped_lock_class). Queste classi helper sono note come *blocchi con ambito*. Queste classi offrono diversi vantaggi quando si utilizzano gli oggetti [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) o [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) . Il costruttore di queste classi acquisisce l'accesso all' `critical_section` oggetto o fornito `reader_writer_lock` ; il distruttore rilascia l'accesso a tale oggetto. Poiché un blocco con ambito rilascia automaticamente l'accesso all'oggetto di esclusione reciproca quando viene eliminato definitivamente, l'oggetto sottostante non viene sbloccato manualmente.

Si consideri la classe seguente, `account` , che è definita da una libreria esterna e pertanto non può essere modificata.

[!code-cpp[concrt-account-transactions#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_4.h)]

Nell'esempio seguente vengono eseguite più transazioni in un `account` oggetto in parallelo. Nell'esempio viene usato un `critical_section` oggetto per sincronizzare l'accesso all' `account` oggetto perché la `account` classe non è indipendente dalla concorrenza. Ogni operazione parallela utilizza un `critical_section::scoped_lock` oggetto per garantire che l' `critical_section` oggetto venga sbloccato quando l'operazione ha esito positivo o negativo. Quando il saldo dell'account è negativo, l' `withdraw` operazione ha esito negativo generando un'eccezione.

[!code-cpp[concrt-account-transactions#2](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_5.cpp)]

Questo esempio produce l'output di esempio seguente:

```Output
Balance before deposit: 1924
Balance after deposit: 2924
Balance before withdrawal: 2924
Balance after withdrawal: -76
Balance before withdrawal: -76
Error details:
    negative balance: -76
```

Per altri esempi in cui si usa il modello RAII per gestire la durata degli oggetti di concorrenza, vedere [procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md), [procedura: usare la classe Context per implementare un semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)e [procedura: usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md).

[All'[inizio](#top)]

## <a name="do-not-create-concurrency-objects-at-global-scope"></a><a name="global-scope"></a>Non creare oggetti di concorrenza in ambito globale

Quando si crea un oggetto di concorrenza in ambito globale, nell'applicazione si possono verificare problemi come il deadlock o violazioni di accesso alla memoria.

Ad esempio, quando si crea un oggetto runtime di concorrenza, tramite il runtime viene creata un'utilità di pianificazione predefinita, se non è già disponibile. Un oggetto runtime creato durante la costruzione di un oggetto globale comporta la creazione di questa utilità di pianificazione predefinita da parte del runtime. Tuttavia, questo processo prevede un blocco interno, che può interferire con l'inizializzazione di altri oggetti che supportano l'infrastruttura del runtime di concorrenza. Questo blocco interno potrebbe essere richiesto da un altro oggetto dell'infrastruttura che non è ancora stato inizializzato e potrebbe verificarsi un deadlock nell'applicazione.

Nell'esempio seguente viene illustrata la creazione di un oggetto [Concurrency:: Scheduler](../../parallel/concrt/reference/scheduler-class.md) globale. Questo modello viene applicato non solo alla classe `Scheduler`, ma anche a tutti gli altri tipi forniti dal runtime di concorrenza. È consigliabile non seguire questo modello, poiché potrebbe causare un comportamento imprevisto nell'applicazione.

[!code-cpp[concrt-global-scheduler#1](../../parallel/concrt/codesnippet/cpp/general-best-practices-in-the-concurrency-runtime_6.cpp)]

Per esempi del modo corretto per creare `Scheduler` oggetti, vedere [utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).

[All'[inizio](#top)]

## <a name="do-not-use-concurrency-objects-in-shared-data-segments"></a><a name="shared-data"></a>Non usare oggetti di concorrenza nei segmenti di dati condivisi

Il runtime di concorrenza non supporta l'utilizzo di oggetti di concorrenza in una sezione di dati condivisa, ad esempio una sezione di dati creata dalla direttiva [data_seg](../../preprocessor/data-seg.md) `#pragma` . Un oggetto di concorrenza condiviso tra i limiti del processo potrebbe impostare il runtime in uno stato incoerente o non valido.

[All'[inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure consigliate runtime di concorrenza](../../parallel/concrt/concurrency-runtime-best-practices.md)<br/>
[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Strutture dei dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)<br/>
[Confronto tra le strutture di dati di sincronizzazione e l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)<br/>
[Procedura: usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)<br/>
[Procedura: usare l'oversubscription per compensare la latenza](../../parallel/concrt/how-to-use-oversubscription-to-offset-latency.md)<br/>
[Procedura: usare la classe Context per implementare un semaforo cooperativo](../../parallel/concrt/how-to-use-the-context-class-to-implement-a-cooperative-semaphore.md)<br/>
[Procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md)<br/>
[Procedure consigliate nella libreria di modelli paralleli](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md)<br/>
[Procedure consigliate nella libreria di agenti asincroni](../../parallel/concrt/best-practices-in-the-asynchronous-agents-library.md)
