---
title: Annullamento nella libreria PPL
ms.date: 11/04/2016
helpviewer_keywords:
- parallel algorithms, canceling [Concurrency Runtime]
- canceling parallel algorithms [Concurrency Runtime]
- parallel tasks, canceling [Concurrency Runtime]
- cancellation in the PPL
- parallel work trees [Concurrency Runtime]
- canceling parallel tasks [Concurrency Runtime]
ms.assetid: baaef417-b2f9-470e-b8bd-9ed890725b35
ms.openlocfilehash: b1a762f97cf144c39043203dbf68d927b2cbd0e4
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51327421"
---
# <a name="cancellation-in-the-ppl"></a>Annullamento nella libreria PPL

In questo documento viene illustrato il ruolo dell'annullamento nella libreria PPL (Parallel Patterns Library), come annullare un lavoro parallelo e come determinare quando un lavoro parallelo è annullato.

> [!NOTE]
>  Il runtime usa la gestione delle eccezioni per implementare l'annullamento. Non rilevare o gestire queste eccezioni nel codice. Inoltre, si consiglia di scrivere codice indipendente dalle eccezioni nei corpi delle funzioni per le attività. Ad esempio, è possibile usare la *Resource Acquisition Is Initialization* modello (RAII) per garantire che le risorse vengono gestite correttamente quando viene generata un'eccezione nel corpo di un'attività. Per un esempio completo che usa il modello RAII per pulire una risorsa in un'attività annullabile, vedere [procedura dettagliata: rimozione di lavoro da un Thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md).

## <a name="key-points"></a>Punti chiave

- L'annullamento è cooperativo e include un coordinamento tra il codice che richiede l'annullamento e l'attività che risponde all'annullamento.

- Quando possibile, utilizzare i token di annullamento per annullare un lavoro. Il [Concurrency:: cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md) classe definisce un token di annullamento.

- Quando si usano i token di annullamento, usare il [concurrency::cancellation_token_source::cancel](reference/cancellation-token-source-class.md#cancel) metodo per avviare l'annullamento e il [Concurrency:: cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) funzione a cui rispondere annullamento. Usare la [concurrency::cancellation_token::is_canceled](reference/cancellation-token-class.md#is_canceled) metodo per verificare se qualsiasi altra attività ha richiesto l'annullamento.

- L'annullamento non si verifica immediatamente. Sebbene un nuovo lavoro non venga avviato se un'attività o un gruppo di attività viene annullato, il lavoro attivo deve controllare e rispondere all'annullamento.

- Una continuazione basata su valori eredita il token di annullamento dell'attività precedente. Una continuazione basata su attività non eredita mai il token dell'attività precedente.

- Usare la [Concurrency:: cancellation_token:: none](reference/cancellation-token-class.md#none) metodo quando si chiama un costruttore o funzione che accetta un `cancellation_token` oggetto ma si desidera che l'operazione sia annullabile. Inoltre, se non si passa un token di annullamento per il [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) costruttore o il [Concurrency:: create_task](reference/concurrency-namespace-functions.md#create_task) (funzione), tale attività non è annullabile.

##  <a name="top"></a> In questo documento

- [Alberi del lavoro parallelo](#trees)

- [Annullamento di attività parallele](#tasks)

    - [Utilizzo di un Token di annullamento per annullare un lavoro parallelo](#tokens)

    - [Usando il metodo cancel per annullare un lavoro parallelo](#cancel)

    - [Uso delle eccezioni per annullare un lavoro parallelo](#exceptions)

- [Annullamento degli algoritmi paralleli](#algorithms)

- [Quando evitare l'uso dell'annullamento](#when)

##  <a name="trees"></a> Alberi del lavoro parallelo

La libreria PPL utilizza attività e gruppi di attività per gestire attività e calcoli in modo accurato. È possibile annidare gruppi di attività al form *alberi* del lavoro parallelo. La figura seguente illustra un albero del lavoro parallelo. In questa illustrazione, `tg1` e `tg2` rappresentano i gruppi di attività; `t1`, `t2`, `t3`, `t4` e `t5` rappresentano il lavoro eseguito dai gruppi di attività.

![Un albero del lavoro parallelo](../../parallel/concrt/media/parallelwork_trees.png "parallelwork_trees")

Nell'esempio seguente viene illustrato il codice necessario per creare l'albero dell'illustrazione. In questo esempio `tg1` e `tg2` vengono [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) di oggetti: `t1`, `t2`, `t3`, `t4`, e `t5` sono [Concurrency:: task_handle](../../parallel/concrt/reference/task-handle-class.md) oggetti.

[!code-cpp[concrt-task-tree#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_1.cpp)]

È anche possibile usare la [Concurrency:: task_group](reference/task-group-class.md) classe per creare un albero di lavoro simili. Il [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) classe supporta anche la nozione di un albero di lavoro. Tuttavia, un albero di `task` è un albero di dipendenza. In un albero di `task`, i lavori futuri vengono completati dopo il lavoro corrente. In un albero del gruppo di attività, il lavoro interno viene completato prima del lavoro esterno. Per altre informazioni sulle differenze tra le attività e i gruppi di attività, vedere [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

[[Torna all'inizio](#top)]

##  <a name="tasks"></a> Annullamento di attività parallele

Sono disponibili più modi per annullare un lavoro parallelo. La modalità consigliata è quella che consiste nell'utilizzo di un token di annullamento. Gruppi di attività anche il supporto di [concurrency::task_group::cancel](reference/task-group-class.md#cancel) metodo e il [Concurrency](reference/structured-task-group-class.md#cancel) (metodo). L'ultimo modo consiste nel generare un'eccezione nel corpo di una funzione lavoro dell'attività. Indipendentemente dal metodo scelto, si tenga presente che l'annullamento non si verifica immediatamente. Sebbene un nuovo lavoro non venga avviato se un'attività o un gruppo di attività viene annullato, il lavoro attivo deve controllare e rispondere all'annullamento.

Per altri esempi di annullare l'attività in parallelo, vedere [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md), [procedura: usare l'annullamento per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md), e [come: utilizzo Eccezioni per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).

###  <a name="tokens"></a> Utilizzo di un Token di annullamento per annullare un lavoro parallelo

Le classi `task`, `task_group` e `structured_task_group` supportano l'annullamento tramite l'utilizzo di token di annullamento. La libreria PPL definisce il [Concurrency:: cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md) e [Concurrency:: cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md) classi per questo scopo. Quando si usa un token di annullamento per annullare il lavoro, il runtime non avvia nuovo lavoro che sottoscrive tale token. Operazioni che sono già attivo è possono usare la [is_canceled](../../parallel/concrt/reference/cancellation-token-class.md#is_canceled) funzione membro per monitorare il token di annullamento e arrestarsi quando possibile.

Per avviare l'annullamento, chiamare il [concurrency::cancellation_token_source::cancel](reference/cancellation-token-source-class.md#cancel) (metodo). È possibile rispondere all'annullamento nei seguenti modi:

- Per la `task` oggetti, usare il [Concurrency:: cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) (funzione). `cancel_current_task` annulla l'attività corrente e tutte le relative continuazioni basate su valori. (Non annulla l'annullamento *token* associato con l'attività o alle relative continuazioni.)

- Per i gruppi di attività e gli algoritmi paralleli, usare il [Concurrency:: is_current_task_group_canceling](reference/concurrency-namespace-functions.md#is_current_task_group_canceling) funzione per rilevare l'annullamento e tornare appena possibile dal corpo dell'attività quando questa funzione restituisce **true** . Non chiamare `cancel_current_task` da un gruppo di attività.

Nell'esempio seguente viene illustrato il primo modello di base per l'annullamento delle attività. Il corpo dell'attività controlla occasionalmente l'annullamento all'interno di un ciclo.

[!code-cpp[concrt-task-basic-cancellation#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_2.cpp)]

La funzione `cancel_current_task` genera un'eccezione, pertanto non è necessario uscire in modo esplicito dal ciclo corrente o dalla funzione.

> [!TIP]
> In alternativa, è possibile chiamare il [Concurrency:: interruption_point](reference/concurrency-namespace-functions.md#interruption_point) funzione anziché `cancel_current_task`.

È importante chiamare `cancel_current_task` quando si risponde all'annullamento perché l'attività possa passare allo stato annullato. Se si esce prima di chiamare `cancel_current_task`, l'operazione passa allo stato completato e tutte le continuazioni basate su valori verranno eseguite.

> [!CAUTION]
> Non generare mai `task_canceled` dal codice. In alternativa, chiamare `cancel_current_task`.

Quando un'attività termina nello stato annullato, il [concurrency::task::get](reference/task-class.md#get) metodo genera un'eccezione [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md). (Al contrario, [concurrency::task::wait](reference/task-class.md#wait) restituisce [task_status:: Canceled](reference/concurrency-namespace-enums.md#task_group_status) e non genera eccezioni.) Nell'esempio seguente viene illustrato questo comportamento per una continuazione basata su attività. Una continuazione basata su attività viene sempre chiamata, anche quando l'attività precedente è stata annullata.

[!code-cpp[concrt-task-canceled#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_3.cpp)]

Poiché le continuazioni basate su valori ereditano il token della relativa attività precedente a meno che non vengano create con un token esplicito, le continuazioni entrano immediatamente nello stato annullato anche quando l'attività precedente è ancora in esecuzione. Pertanto, qualsiasi eccezione generata dall'attività precedente dopo l'annullamento non verrà propagata alle attività di continuazione. Lo stato dell'attività precedente viene sempre sottoposto a override dall'annullamento. L'esempio seguente è simile al precedente, ma illustra il comportamento per una continuazione basata su valori.

[!code-cpp[concrt-task-canceled#2](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_4.cpp)]

> [!CAUTION]
> Se non si passa un token di annullamento per il `task` costruttore o il [Concurrency:: create_task](reference/concurrency-namespace-functions.md#create_task) (funzione), tale attività non è annullabile. Inoltre, è necessario passare lo stesso token di annullamento al costruttore di tutte le attività annidate (ovvero alle attività create nel corpo di un'altra attività) per annullare contemporaneamente tutte le attività.

È possibile eseguire codice arbitrario quando un token di annullamento viene annullato. Ad esempio, se un utente sceglie una **annullare** pulsante nell'interfaccia utente di annullare l'operazione, è possibile disabilitare il pulsante fino a quando l'utente avvia un'altra operazione. Nell'esempio seguente viene illustrato come utilizzare il [concurrency::cancellation_token::register_callback](reference/cancellation-token-class.md#register_callback) metodo per registrare una funzione di callback che viene eseguito quando un token di annullamento viene annullato.

[!code-cpp[concrt-task-cancellation-callback#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_5.cpp)]

Il documento [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md) illustra la differenza tra le continuazioni basate su valore e basato su attività. Se non si fornisce un oggetto `cancellation_token` a un'attività di continuazione, la continuazione eredita il token di annullamento dall'attività precedente nei modi seguenti:

- Una continuazione basata su valori eredita sempre il token di annullamento dell'attività precedente.

- Una continuazione basata su attività non eredita mai il token di annullamento dell'attività precedente. L'unico modo per rendere una continuazione basata su attività annullabile è quello di passarle esplicitamente un token di annullamento.

Questi comportamenti non sono influenzati da un'attività in cui si è verificato un errore (ovvero una che ha generato un'eccezione). In questo caso, una continuazione basata su valori viene annullata e una continuazione basata su attività non viene annullata.

> [!CAUTION]
> Un'attività creata in un'altra attività (ovvero un'attività annidata) non eredita il token di annullamento dell'attività padre. Solo una continuazione basata su valori eredita il token di annullamento dell'attività precedente.

> [!TIP]
> Usare la [Concurrency:: cancellation_token:: none](reference/cancellation-token-class.md#none) metodo quando si chiama un costruttore o funzione che accetta un `cancellation_token` oggetto e si desidera che l'operazione sia annullabile.

È anche possibile fornire un token di annullamento al costruttore di un oggetto `task_group` o `structured_task_group`. Un aspetto importante è che i gruppi di attività figlio ereditano il token di annullamento. Per un esempio che illustra questo concetto utilizzando la [Concurrency:: run_with_cancellation_token](reference/concurrency-namespace-functions.md#run_with_cancellation_token) funzione da eseguire per chiamare `parallel_for`, vedere [annullamento degli algoritmi paralleli](#algorithms) più avanti in questo documento.

[[Torna all'inizio](#top)]

#### <a name="cancellation-tokens-and-task-composition"></a>Token di annullamento e composizione di attività

Il [Concurrency:: when_all](reference/concurrency-namespace-functions.md#when_all) e [Concurrency:: when_any](reference/concurrency-namespace-functions.md#when_all) le funzioni consentono di creare più attività per implementare modelli comuni. In questa sezione viene descritto il funzionamento di queste funzioni con i token di annullamento.

Quando si fornisce un token di annullamento alla funzione `when_all` o a `when_any`, quella funzione si annulla solo quando il token di annullamento viene annullato o quando una delle attività partecipanti termina in uno stato annullato oppure genera un'eccezione.

La funzione `when_all` eredita il token di annullamento da ogni attività che costituisce l'operazione globale quando non viene fornito un token di annullamento per essa. L'attività restituita da `when_all` viene annullata quando uno di questi token viene annullato e almeno una delle attività partecipanti non è ancora stata avviata o è in esecuzione. Un comportamento simile si verifica quando una delle attività genera un'eccezione. l'attività restituita da `when_all` viene immediatamente annullata con tale eccezione.

Il runtime sceglie il token di annullamento per l'attività restituita dalla funzione `when_any` quando l'attività è stata completata. Se nessuna delle attività partecipanti termina in uno stato completato e una o più attività generano un'eccezione, una delle attività che ha generato un'eccezione viene scelta per completare `when_any` e il relativo token viene scelto come il token per l'attività finale. Se più di un'attività termina nello stato completato, l'attività restituita da `when_any` termina in uno stato completato. Il runtime tenta di selezionare un'attività completata il cui token non è stato annullato in caso di completamento così l'attività restituita da `when_any` non verrà immediatamente annullata sebbene altre attività in esecuzione possano essere completate in un momento successivo.

[[Torna all'inizio](#top)]

###  <a name="cancel"></a> Usando il metodo cancel per annullare un lavoro parallelo

Il [concurrency::task_group::cancel](reference/task-group-class.md#cancel) e [Concurrency](reference/structured-task-group-class.md#cancel) metodi impostano un gruppo di attività allo stato di annullamento. Dopo avere chiamato `cancel`, il gruppo di attività non avvia attività successive. I metodi `cancel` possono essere chiamati da più attività figlio. Un'attività annullata determina la [Concurrency:: Canceled](reference/task-group-class.md#wait) e [task_group](reference/structured-task-group-class.md#wait) metodi possono restituire [concurrency::canceled](reference/concurrency-namespace-enums.md#task_group_status).

Se un gruppo di attività viene annullato, le chiamate da ogni attività figlio nel runtime possono attivare un *punto di interruzione*, in modo che il runtime genererà e rileverà un tipo di eccezione interna per annullare le attività attive. Il runtime di concorrenza non definisce punti di interruzione specifici; i punti di interruzione possono verificarsi in qualsiasi chiamata al runtime. Il runtime deve gestire le eccezioni generate per poter eseguire l'annullamento. Pertanto, non gestire le eccezioni sconosciute nel corpo di un'attività.

Se un'attività figlio esegue un'operazione che richiede molto tempo e non viene chiamata nel runtime, deve verificare periodicamente l'annullamento e uscire in modo tempestivo. Nell'esempio seguente viene illustrato un modo per determinare l'annullamento di un lavoro. L'attività `t4` annulla il gruppo di attività padre quando rileva un errore. L'attività `t5` chiama occasionalmente il metodo `structured_task_group::is_canceling` per verificare l'annullamento. Se il gruppo di attività padre è annullato, l'attività `t5` visualizza un messaggio e viene chiusa.

[!code-cpp[concrt-task-tree#6](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_6.cpp)]

Questo esempio viene verificata per l'annullamento su ogni 100<sup>th</sup> iterazione del ciclo dell'attività. La frequenza di verifica dell'annullamento dipende dalla quantità di lavoro eseguita dall'attività e dalla velocità necessaria alle attività per rispondere all'annullamento.

Se non si ha accesso all'oggetto gruppo di attività padre, chiamare il [Concurrency:: is_current_task_group_canceling](reference/concurrency-namespace-functions.md#is_current_task_group_canceling) funzione per determinare se il gruppo di attività padre viene annullato.

Il metodo `cancel` influisce solo sulle attività figlio. Se, ad esempio, si annulla il gruppo di attività `tg1` nell'illustrazione della struttura ad albero del lavoro parallelo, saranno interessate tutte le attività della struttura ad albero (`t1`, `t2`, `t3`, `t4` e `t5`). Se si annulla il gruppo di attività annidato, `tg2`, saranno interessate solo le attività `t4` e `t5` 

Quando si chiama il metodo `cancel`, vengono annullati anche tutti i gruppi di attività figlio. Tuttavia, l'annullamento non influisce sugli elementi padre del gruppo di attività di un albero del lavoro parallelo. Negli esempi seguenti viene illustrata tale condizione in base all'illustrazione della struttura ad albero del lavoro parallelo.

Nel primo di questi esempi viene creata una funzione lavoro per l'attività `t4`, che è un'attività figlio del gruppo di attività `tg2`. La funzione lavoro chiama la funzione `work` in un ciclo. Se una chiamata a `work` non riesce, l'attività annulla il relativo gruppo di attività padre, determinando il passaggio allo stato annullato del gruppo di attività `tg2` ma senza annullare il gruppo di attività `tg1`.

[!code-cpp[concrt-task-tree#2](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_7.cpp)]

Il secondo esempio è simile al primo, ad eccezione del fatto che l'attività annulla il gruppo di attività `tg1`. Questa operazione ha effetto su tutte le attività dell'albero (`t1`, `t2`, `t3`, `t4` e `t5`).

[!code-cpp[concrt-task-tree#3](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_8.cpp)]

La classe `structured_task_group` non è thread-safe. Pertanto, un'attività figlio che chiama un metodo del relativo oggetto `structured_task_group` padre produce un comportamento non specificato. Le eccezioni a questa regola sono il `structured_task_group::cancel` e [concurrency::structured_task_group::is_canceling](reference/structured-task-group-class.md#is_canceling) metodi. Un'attività figlio può chiamare questi metodi per annullare il gruppo di attività padre o verificarne l'annullamento.

> [!CAUTION]
>  Sebbene sia possibile utilizzare un token di annullamento per annullare il lavoro eseguito da un gruppo di attività che viene eseguito come figlio di un oggetto `task`, non è possibile utilizzare i metodi `task_group::cancel` o `structured_task_group::cancel` per annullare gli oggetti `task` eseguiti in un gruppo di attività.

[[Torna all'inizio](#top)]

###  <a name="exceptions"></a> Uso delle eccezioni per annullare un lavoro parallelo

L'utilizzo dei token di annullamento e del metodo `cancel` è più efficace della gestione delle eccezioni per annullare un albero del lavoro parallelo. I token di annullamento e il metodo `cancel` annullano un'attività e tutte le attività figlio dall'alto verso il basso. La gestione delle eccezioni funziona invece in ordine sequenziale dal basso verso l'alto e deve annullare ogni gruppo di attività figlio in modo indipendente in quanto l'eccezione si propaga verso l'alto. L'argomento [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md) illustra come il Runtime di concorrenza Usa le eccezioni per comunicare gli errori. Tuttavia, non tutte le eccezioni indicano un errore. Un algoritmo di ricerca potrebbe, ad esempio, annullare l'attività associata quando viene trovato il risultato. Tuttavia, come indicato in precedenza, la gestione delle eccezioni è meno efficiente dell'uso del metodo `cancel` per annullare un lavoro parallelo.

> [!CAUTION]
>  È consigliabile utilizzare le eccezioni per annullare un lavoro parallelo solo se necessario. I token di annullamento e i metodi `cancel` del gruppo di attività sono più efficienti e meno soggetti ad errori.

Quando si genera un'eccezione nel corpo di una funzione lavoro passata a un gruppo di attività, il runtime archivia l'eccezione e ne esegue il marshalling nel contesto in attesa del completamento del gruppo di attività. Analogamente al metodo `cancel`, il runtime elimina tutte le attività non ancora avviate e non accetta nuove attività.

Il terzo esempio è simile al secondo, ad eccezione del fatto che l'attività `t4` genera un'eccezione per annullare il gruppo di attività `tg2`. Questo esempio Usa un' `try` - `catch` blocco per verificare l'annullamento quando il gruppo di attività `tg2` attende il completamento delle attività figlio. Analogamente al primo esempio, viene determinato il passaggio allo stato annullato del gruppo di attività `tg2` ma senza annullare il gruppo di attività `tg1`.

[!code-cpp[concrt-task-tree#4](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_9.cpp)]

Nel quarto esempio viene usata la gestione delle eccezioni per annullare l'intero albero del lavoro. In questo esempio l'eccezione viene rilevata quando il gruppo di attività `tg1` attende il completamento delle relative attività figlio anziché quando il gruppo di attività `tg2` attende le relative attività figlio. Analogamente al secondo esempio, questa condizione determina il passaggio allo stato annullato di entrambi i gruppi di attività nell'albero, `tg1` e `tg2`.

[!code-cpp[concrt-task-tree#5](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_10.cpp)]

Poiché i metodi `task_group::wait` e `structured_task_group::wait` vengono generati quando un'attività figlio genera un'eccezione, non si riceve alcun valore restituito.

[[Torna all'inizio](#top)]

##  <a name="algorithms"></a> Annullamento degli algoritmi paralleli

Gli algoritmi paralleli nella libreria PPL, ad esempio `parallel_for`, si basano sui gruppi di attività. Pertanto, per annullare un algoritmo parallelo, è possibile usare molte delle stesse tecniche.

Negli esempi seguenti vengono illustrati diversi modi per annullare un algoritmo parallelo.

Nell'esempio riportato di seguito si utilizza la funzione `run_with_cancellation_token` per chiamare l'algoritmo `parallel_for`. La funzione `run_with_cancellation_token` accetta un token di annullamento come argomento e chiama la funzione lavoro fornita in modo sincrono. Poiché gli algoritmi paralleli si basano sulle attività, questi ereditano il token di annullamento dell'attività padre. Pertanto, `parallel_for` può rispondere all'annullamento.

[!code-cpp[concrt-cancel-parallel-for#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_11.cpp)]

L'esempio seguente usa il [concurrency::structured_task_group::run_and_wait](reference/structured-task-group-class.md#run_and_wait) metodo da chiamare il `parallel_for` algoritmo. Il metodo `structured_task_group::run_and_wait` attende il completamento dell'attività fornita. L'oggetto `structured_task_group` consente alla funzione lavoro di annullare l'attività.

[!code-cpp[concrt-task-tree#7](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_12.cpp)]

Questo esempio produce il seguente output:

```Output
The task group status is: canceled.
```

Nell'esempio seguente viene usata la gestione delle eccezioni per annullare un ciclo `parallel_for`. Il runtime effettua il marshalling dell'eccezione nel contesto di chiamata.

[!code-cpp[concrt-task-tree#9](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_13.cpp)]

Questo esempio produce il seguente output:

```Output
Caught 50
```

Nell'esempio seguente viene usato un flag booleano per coordinare l'annullamento in un ciclo `parallel_for`. Viene eseguita ogni attività poiché in questo esempio non viene usato il metodo `cancel` o la gestione delle eccezioni per annullare il set complessivo di attività. Pertanto, questa tecnica può comportare un sovraccarico maggiore nell'elaborazione rispetto a un meccanismo di annullamento.

[!code-cpp[concrt-task-tree#8](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_14.cpp)]

Ogni metodo di annullamento presenta alcuni vantaggi rispetto agli altri. Scegliere il metodo appropriato alle specifiche esigenze.

[[Torna all'inizio](#top)]

##  <a name="when"></a> Quando evitare l'uso dell'annullamento

L'uso dell'annullamento è appropriato quando ogni membro di un gruppo di attività correlate può uscire in modo tempestivo. In alcuni scenari, tuttavia, l'annullamento potrebbe non essere appropriato per l'applicazione. Ad esempio, poiché l'annullamento delle attività è cooperativo, il set complessivo di attività non verrà annullato se un singola attività è bloccata. Se, ad esempio, un'attività non è ancora stata avviata, ma sblocca un'altra attività attiva, non verrà avviata se il gruppo di attività viene annullato. Ciò può causare condizioni di deadlock nell'applicazione. Un altro esempio in cui l'uso dell'annullamento potrebbe non essere appropriato è quello in cui un'attività viene annullata ma la relativa attività figlio esegue un'operazione importante, ad esempio la liberazione di una risorsa. Poiché l'annullamento dell'attività padre determina l'annullamento del set complessivo di attività, tale operazione non verrà eseguita. Per un esempio che illustra questo punto, vedere la [comprendere come annullamento e eccezione la influiscono sull'oggetto eliminazione](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) sezione nelle procedure consigliate nell'argomento Parallel Patterns Library.

[[Torna all'inizio](#top)]

## <a name="related-topics"></a>Argomenti correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura: Usare l'annullamento per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)|Illustra come usare l'annullamento per implementare un algoritmo di ricerca parallelo.|
|[Procedura: Usare la gestione delle eccezion per interrompere un ciclo Parallel](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md)|Viene illustrato come usare la classe `task_group` per scrivere un algoritmo di ricerca per un albero di base.|
|[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Descrive il modo in cui il runtime gestisce le eccezioni generate dai gruppi di attività, dalle attività leggere e dagli agenti asincroni e come rispondere alle eccezioni nelle applicazioni.|
|[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)|Descrive il modo in cui le attività vengono correlate ai gruppi di attività e come usare le attività strutturate e non strutturate nelle applicazioni.|
|[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)|Descrive gli algoritmi paralleli per svolgere simultaneamente il lavoro sulle raccolte di dati.|
|[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Fornisce una panoramica della libreria PPL.|

## <a name="reference"></a>Riferimenti

[Classe task (runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)

[Classe cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md)

[Classe cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md)

[Classe task_group](reference/task-group-class.md)

[Classe structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md)

[parallel_for (funzione)](reference/concurrency-namespace-functions.md#parallel_for)

