---
title: Annullamento nella libreria PPL
ms.date: 11/19/2018
helpviewer_keywords:
- parallel algorithms, canceling [Concurrency Runtime]
- canceling parallel algorithms [Concurrency Runtime]
- parallel tasks, canceling [Concurrency Runtime]
- cancellation in the PPL
- parallel work trees [Concurrency Runtime]
- canceling parallel tasks [Concurrency Runtime]
ms.assetid: baaef417-b2f9-470e-b8bd-9ed890725b35
ms.openlocfilehash: e85de9a07b625030976e6f03c9e965d34c3134d4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220977"
---
# <a name="cancellation-in-the-ppl"></a>Annullamento nella libreria PPL

In questo documento viene illustrato il ruolo dell'annullamento nella libreria PPL (Parallel Patterns Library), come annullare un lavoro parallelo e come determinare quando un lavoro parallelo è annullato.

> [!NOTE]
> Il runtime usa la gestione delle eccezioni per implementare l'annullamento. Non rilevare o gestire queste eccezioni nel codice. Inoltre, si consiglia di scrivere codice indipendente dalle eccezioni nei corpi delle funzioni per le attività. È ad esempio possibile utilizzare il modello di *inizializzazione della risorsa* (RAII) per garantire che le risorse vengano gestite correttamente quando viene generata un'eccezione nel corpo di un'attività. Per un esempio completo in cui si usa il modello RAII per pulire una risorsa in un'attività annullabile, vedere [procedura dettagliata: rimozione di lavoro da un thread dell'interfaccia utente](../../parallel/concrt/walkthrough-removing-work-from-a-user-interface-thread.md).

## <a name="key-points"></a>Punti chiave

- L'annullamento è cooperativo e include un coordinamento tra il codice che richiede l'annullamento e l'attività che risponde all'annullamento.

- Quando possibile, utilizzare i token di annullamento per annullare un lavoro. La classe [Concurrency:: cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md) definisce un token di annullamento.

- Quando si usano i token di annullamento, usare il metodo [Concurrency:: cancellation_token_source:: Cancel](reference/cancellation-token-source-class.md#cancel) per avviare l'annullamento e la funzione [Concurrency:: cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) per rispondere all'annullamento. Utilizzare il metodo [Concurrency:: cancellation_token:: is_canceled](reference/cancellation-token-class.md#is_canceled) per verificare se un'altra attività ha richiesto l'annullamento.

- L'annullamento non si verifica immediatamente. Sebbene il nuovo lavoro non venga avviato se un'attività o un gruppo di attività viene annullato, il lavoro attivo deve verificare e rispondere all'annullamento.

- Una continuazione basata su valori eredita il token di annullamento dell'attività precedente. Una continuazione basata su attività non eredita mai il token dell'attività precedente.

- Utilizzare il metodo [Concurrency:: cancellation_token:: None](reference/cancellation-token-class.md#none) quando si chiama un costruttore o una funzione che accetta un `cancellation_token` oggetto ma non si desidera che l'operazione sia annullabile. Inoltre, se non si passa un token di annullamento al costruttore [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) o alla funzione [Concurrency:: create_task](reference/concurrency-namespace-functions.md#create_task) , tale attività non è annullabile.

## <a name="in-this-document"></a><a name="top"></a>Contenuto del documento

- [Strutture ad albero del lavoro parallelo](#trees)

- [Annullamento delle attività in parallelo](#tasks)

  - [Utilizzo di un token di annullamento per annullare un lavoro parallelo](#tokens)

  - [Uso del metodo cancel per annullare un lavoro parallelo](#cancel)

  - [Uso delle eccezioni per annullare un lavoro parallelo](#exceptions)

- [Annullamento degli algoritmi paralleli](#algorithms)

- [Casi i cui non è consigliabile usare l'annullamento](#when)

## <a name="parallel-work-trees"></a><a name="trees"></a>Alberi del lavoro parallelo

La libreria PPL utilizza attività e gruppi di attività per gestire attività e calcoli in modo accurato. È possibile annidare i gruppi di attività per formare *alberi* di lavoro parallelo. La figura seguente illustra un albero del lavoro parallelo. In questa illustrazione, `tg1` e `tg2` rappresentano i gruppi di attività; `t1`, `t2`, `t3`, `t4` e `t5` rappresentano il lavoro eseguito dai gruppi di attività.

![Albero del lavoro parallelo](../../parallel/concrt/media/parallelwork_trees.png "Albero del lavoro parallelo")

Nell'esempio seguente viene illustrato il codice necessario per creare l'albero dell'illustrazione. In questo esempio, `tg1` e `tg2` sono gli oggetti [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) ;,,, `t1` `t2` `t3` `t4` e `t5` sono gli oggetti [Concurrency:: task_handle](../../parallel/concrt/reference/task-handle-class.md) .

[!code-cpp[concrt-task-tree#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_1.cpp)]

È anche possibile usare la classe [Concurrency:: task_group](reference/task-group-class.md) per creare una struttura ad albero di lavoro simile. La classe [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) supporta anche la nozione di un albero di lavoro. Tuttavia, un albero di `task` è un albero di dipendenza. In un albero di `task`, i lavori futuri vengono completati dopo il lavoro corrente. In un albero del gruppo di attività, il lavoro interno viene completato prima del lavoro esterno. Per ulteriori informazioni sulle differenze tra attività e gruppi di attività, vedere [parallelismo](../../parallel/concrt/task-parallelism-concurrency-runtime.md)delle attività.

[All'[inizio](#top)]

## <a name="canceling-parallel-tasks"></a><a name="tasks"></a>Annullamento di attività in parallelo

Sono disponibili più modi per annullare un lavoro parallelo. La modalità consigliata è quella che consiste nell'utilizzo di un token di annullamento. I gruppi di attività supportano anche il metodo [Concurrency:: task_group:: Cancel](reference/task-group-class.md#cancel) e il metodo [Concurrency:: structured_task_group:: Cancel](reference/structured-task-group-class.md#cancel) . L'ultimo modo consiste nel generare un'eccezione nel corpo di una funzione lavoro dell'attività. Indipendentemente dal metodo scelto, si tenga presente che l'annullamento non si verifica immediatamente. Sebbene il nuovo lavoro non venga avviato se un'attività o un gruppo di attività viene annullato, il lavoro attivo deve verificare e rispondere all'annullamento.

Per altri esempi in cui vengono annullate le attività in parallelo, vedere [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md), [procedura: usare l'annullamento per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)e [procedura: usare la gestione delle eccezioni per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md).

### <a name="using-a-cancellation-token-to-cancel-parallel-work"></a><a name="tokens"></a>Uso di un token di annullamento per annullare il lavoro parallelo

Le classi `task`, `task_group` e `structured_task_group` supportano l'annullamento tramite l'utilizzo di token di annullamento. La libreria PPL definisce le classi [Concurrency:: cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md) e [Concurrency:: cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md) a questo scopo. Quando si usa un token di annullamento per annullare il lavoro, il runtime non avvia nuovo lavoro che sottoscrive tale token. Il lavoro già attivo può utilizzare la funzione membro [is_canceled](../../parallel/concrt/reference/cancellation-token-class.md#is_canceled) per monitorare il token di annullamento e arrestarsi quando possibile.

Per avviare l'annullamento, chiamare il metodo [Concurrency:: cancellation_token_source:: Cancel](reference/cancellation-token-source-class.md#cancel) . È possibile rispondere all'annullamento nei seguenti modi:

- Per `task` gli oggetti, utilizzare la funzione [Concurrency:: cancel_current_task](reference/concurrency-namespace-functions.md#cancel_current_task) . `cancel_current_task` annulla l'attività corrente e tutte le relative continuazioni basate su valori. Non annulla il *token* di annullamento associato all'attività o alle relative continuazioni.

- Per i gruppi di attività e gli algoritmi paralleli, usare la funzione [Concurrency:: is_current_task_group_canceling](reference/concurrency-namespace-functions.md#is_current_task_group_canceling) per rilevare l'annullamento e restituire il prima possibile dal corpo dell'attività quando questa funzione restituisce **`true`** . Non chiamare `cancel_current_task` da un gruppo di attività.

Nell'esempio seguente viene illustrato il primo modello di base per l'annullamento delle attività. Il corpo dell'attività controlla occasionalmente l'annullamento all'interno di un ciclo.

[!code-cpp[concrt-task-basic-cancellation#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_2.cpp)]

La funzione `cancel_current_task` genera un'eccezione, pertanto non è necessario uscire in modo esplicito dal ciclo corrente o dalla funzione.

> [!TIP]
> In alternativa, è possibile chiamare la funzione [Concurrency:: interruption_point](reference/concurrency-namespace-functions.md#interruption_point) anziché `cancel_current_task` .

È importante chiamare `cancel_current_task` quando si risponde all'annullamento perché l'attività possa passare allo stato annullato. Se si esce prima di chiamare `cancel_current_task`, l'operazione passa allo stato completato e tutte le continuazioni basate su valori verranno eseguite.

> [!CAUTION]
> Non generare mai `task_canceled` dal codice. In alternativa, chiamare `cancel_current_task`.

Quando un'attività termina nello stato annullato, il metodo [Concurrency:: Task:: Get](reference/task-class.md#get) genera [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md). Viceversa, [Concurrency:: Task:: wait](reference/task-class.md#wait) restituisce [task_status:: annullata](reference/concurrency-namespace-enums.md#task_group_status) e non genera un'operazione. Nell'esempio seguente viene illustrato questo comportamento per una continuazione basata su attività. Una continuazione basata su attività viene sempre chiamata, anche quando l'attività precedente è stata annullata.

[!code-cpp[concrt-task-canceled#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_3.cpp)]

Poiché le continuazioni basate su valori ereditano il token della relativa attività precedente a meno che non vengano create con un token esplicito, le continuazioni entrano immediatamente nello stato annullato anche quando l'attività precedente è ancora in esecuzione. Pertanto, qualsiasi eccezione generata dall'attività precedente dopo l'annullamento non verrà propagata alle attività di continuazione. Lo stato dell'attività precedente viene sempre sottoposto a override dall'annullamento. L'esempio seguente è simile al precedente, ma illustra il comportamento per una continuazione basata su valori.

[!code-cpp[concrt-task-canceled#2](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_4.cpp)]

> [!CAUTION]
> Se non si passa un token di annullamento al `task` costruttore o la funzione [Concurrency:: create_task](reference/concurrency-namespace-functions.md#create_task) , tale attività non è annullabile. Inoltre, è necessario passare lo stesso token di annullamento al costruttore di tutte le attività annidate (ovvero alle attività create nel corpo di un'altra attività) per annullare contemporaneamente tutte le attività.

È possibile eseguire codice arbitrario quando un token di annullamento viene annullato. Se, ad esempio, l'utente sceglie un pulsante **Annulla** sull'interfaccia utente per annullare l'operazione, è possibile disabilitare tale pulsante fino a quando l'utente non avvia un'altra operazione. Nell'esempio seguente viene illustrato come utilizzare il metodo [Concurrency:: cancellation_token:: register_callback](reference/cancellation-token-class.md#register_callback) per registrare una funzione di callback che viene eseguita quando un token di annullamento viene annullato.

[!code-cpp[concrt-task-cancellation-callback#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_5.cpp)]

Il [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md) dei documenti spiega la differenza tra le continuazioni basate su valori e quelle basate su attività. Se non si fornisce un oggetto `cancellation_token` a un'attività di continuazione, la continuazione eredita il token di annullamento dall'attività precedente nei modi seguenti:

- Una continuazione basata su valori eredita sempre il token di annullamento dell'attività precedente.

- Una continuazione basata su attività non eredita mai il token di annullamento dell'attività precedente. L'unico modo per rendere una continuazione basata su attività annullabile è quello di passarle esplicitamente un token di annullamento.

Questi comportamenti non sono influenzati da un'attività in cui si è verificato un errore (ovvero una che ha generato un'eccezione). In questo caso, una continuazione basata su valori viene annullata; una continuazione basata su attività non viene annullata.

> [!CAUTION]
> Un'attività creata in un'altra attività (ovvero un'attività annidata) non eredita il token di annullamento dell'attività padre. Solo una continuazione basata su valori eredita il token di annullamento dell'attività precedente.

> [!TIP]
> Utilizzare il metodo [Concurrency:: cancellation_token:: None](reference/cancellation-token-class.md#none) quando si chiama un costruttore o una funzione che accetta un `cancellation_token` oggetto e non si desidera che l'operazione sia annullabile.

È anche possibile fornire un token di annullamento al costruttore di un oggetto `task_group` o `structured_task_group`. Un aspetto importante è che i gruppi di attività figlio ereditano il token di annullamento. Per un esempio in cui viene illustrato questo concetto utilizzando la funzione [Concurrency:: run_with_cancellation_token](reference/concurrency-namespace-functions.md#run_with_cancellation_token) da eseguire per chiamare `parallel_for` , vedere [annullamento degli algoritmi paralleli](#algorithms) più avanti in questo documento.

[All'[inizio](#top)]

#### <a name="cancellation-tokens-and-task-composition"></a>Token di annullamento e composizione di attività

Le funzioni [Concurrency:: when_all](reference/concurrency-namespace-functions.md#when_all) e [Concurrency:: when_any](reference/concurrency-namespace-functions.md#when_all) consentono di comporre più attività per implementare modelli comuni. In questa sezione viene descritto il funzionamento di queste funzioni con i token di annullamento.

Quando si fornisce un token di annullamento per la `when_all` `when_any` funzione e, la funzione Annulla solo quando il token di annullamento viene annullato o quando una delle attività del partecipante termina in uno stato annullato o genera un'eccezione.

La funzione `when_all` eredita il token di annullamento da ogni attività che costituisce l'operazione globale quando non viene fornito un token di annullamento per essa. L'attività restituita da `when_all` viene annullata quando uno di questi token viene annullato e almeno una delle attività del partecipante non è ancora stata avviata o è in esecuzione. Un comportamento simile si verifica quando una delle attività genera un'eccezione, l'attività restituita da `when_all` viene annullata immediatamente con tale eccezione.

Il runtime sceglie il token di annullamento per l'attività restituita dalla funzione `when_any` quando l'attività è stata completata. Se nessuna delle attività partecipanti termina in uno stato completato e una o più attività generano un'eccezione, una delle attività che ha generato un'eccezione viene scelta per completare `when_any` e il relativo token viene scelto come il token per l'attività finale. Se più di un'attività termina nello stato completato, l'attività restituita da `when_any` termina in uno stato completato. Il runtime tenta di selezionare un'attività completata il cui token non è stato annullato in caso di completamento così l'attività restituita da `when_any` non verrà immediatamente annullata sebbene altre attività in esecuzione possano essere completate in un momento successivo.

[All'[inizio](#top)]

### <a name="using-the-cancel-method-to-cancel-parallel-work"></a><a name="cancel"></a>Utilizzo del metodo Cancel per annullare il lavoro parallelo

Il metodo [Concurrency:: task_group:: Cancel](reference/task-group-class.md#cancel) e [Concurrency:: structured_task_group:: Cancel](reference/structured-task-group-class.md#cancel) imposta un gruppo di attività sullo stato annullato. Dopo avere chiamato `cancel`, il gruppo di attività non avvia attività successive. I metodi `cancel` possono essere chiamati da più attività figlio. Un'attività annullata causa la restituzione di concurrency [:: Cancel](reference/concurrency-namespace-enums.md#task_group_status)da parte dei metodi Concurrency [:: task_group:: wait](reference/task-group-class.md#wait) e [Concurrency:: structured_task_group:: wait](reference/structured-task-group-class.md#wait) .

Se un gruppo di attività viene annullato, le chiamate da ogni attività figlio al runtime possono attivare un *punto di interruzione*, causando il quale il runtime genera e intercetta un tipo di eccezione interno per annullare le attività attive. Il runtime di concorrenza non definisce punti di interruzione specifici; i punti di interruzione possono verificarsi in qualsiasi chiamata al runtime. Il runtime deve gestire le eccezioni generate per poter eseguire l'annullamento. Pertanto, non gestire le eccezioni sconosciute nel corpo di un'attività.

Se un'attività figlio esegue un'operazione che richiede molto tempo e non viene chiamata nel runtime, deve verificare periodicamente l'annullamento e uscire in modo tempestivo. Nell'esempio seguente viene illustrato un modo per determinare l'annullamento di un lavoro. L'attività `t4` annulla il gruppo di attività padre quando rileva un errore. L'attività `t5` chiama occasionalmente il metodo `structured_task_group::is_canceling` per verificare l'annullamento. Se il gruppo di attività padre è annullato, l'attività `t5` visualizza un messaggio e viene chiusa.

[!code-cpp[concrt-task-tree#6](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_6.cpp)]

Questo esempio verifica l'annullamento in ogni iterazione<sup>100 del</sup> ciclo di attività. La frequenza di verifica dell'annullamento dipende dalla quantità di lavoro eseguita dall'attività e dalla velocità necessaria alle attività per rispondere all'annullamento.

Se non si dispone dell'accesso all'oggetto gruppo di attività padre, chiamare la funzione [Concurrency:: is_current_task_group_canceling](reference/concurrency-namespace-functions.md#is_current_task_group_canceling) per determinare se il gruppo di attività padre è stato annullato.

Il metodo `cancel` influisce solo sulle attività figlio. Se, ad esempio, si annulla il gruppo di attività `tg1` nell'illustrazione della struttura ad albero del lavoro parallelo, saranno interessate tutte le attività della struttura ad albero (`t1`, `t2`, `t3`, `t4` e `t5`). Se si annulla il gruppo di attività annidato, `tg2`, saranno interessate solo le attività `t4` e `t5`

Quando si chiama il metodo `cancel`, vengono annullati anche tutti i gruppi di attività figlio. Tuttavia, l'annullamento non influisce sugli elementi padre del gruppo di attività di un albero del lavoro parallelo. Negli esempi seguenti viene illustrata tale condizione in base all'illustrazione della struttura ad albero del lavoro parallelo.

Nel primo di questi esempi viene creata una funzione lavoro per l'attività `t4`, che è un'attività figlio del gruppo di attività `tg2`. La funzione lavoro chiama la funzione `work` in un ciclo. Se una chiamata a `work` non riesce, l'attività annulla il relativo gruppo di attività padre, determinando il passaggio allo stato annullato del gruppo di attività `tg2` ma senza annullare il gruppo di attività `tg1`.

[!code-cpp[concrt-task-tree#2](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_7.cpp)]

Il secondo esempio è simile al primo, ad eccezione del fatto che l'attività annulla il gruppo di attività `tg1`. Questa operazione ha effetto su tutte le attività della struttura ad albero (`t1`, `t2`, `t3`, `t4` e `t5`).

[!code-cpp[concrt-task-tree#3](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_8.cpp)]

La classe `structured_task_group` non è thread-safe. Pertanto, un'attività figlio che chiama un metodo del relativo oggetto `structured_task_group` padre produce un comportamento non specificato. Le eccezioni a questa regola sono i `structured_task_group::cancel` metodi e [Concurrency:: structured_task_group:: is_canceling](reference/structured-task-group-class.md#is_canceling) . Un'attività figlio può chiamare questi metodi per annullare il gruppo di attività padre o verificarne l'annullamento.

> [!CAUTION]
> Sebbene sia possibile utilizzare un token di annullamento per annullare il lavoro eseguito da un gruppo di attività che viene eseguito come figlio di un oggetto `task`, non è possibile utilizzare i metodi `task_group::cancel` o `structured_task_group::cancel` per annullare gli oggetti `task` eseguiti in un gruppo di attività.

[All'[inizio](#top)]

### <a name="using-exceptions-to-cancel-parallel-work"></a><a name="exceptions"></a>Uso delle eccezioni per annullare il lavoro parallelo

L'utilizzo dei token di annullamento e del metodo `cancel` è più efficace della gestione delle eccezioni per annullare un albero del lavoro parallelo. I token di annullamento e il metodo `cancel` annullano un'attività e tutte le attività figlio dall'alto verso il basso. La gestione delle eccezioni funziona invece in ordine sequenziale dal basso verso l'alto e deve annullare ogni gruppo di attività figlio in modo indipendente in quanto l'eccezione si propaga verso l'alto. Nell'argomento [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md) viene illustrato il modo in cui il runtime di concorrenza utilizza le eccezioni per comunicare gli errori. Tuttavia, non tutte le eccezioni indicano un errore. Un algoritmo di ricerca potrebbe, ad esempio, annullare l'attività associata quando viene trovato il risultato. Tuttavia, come indicato in precedenza, la gestione delle eccezioni è meno efficiente dell'uso del metodo `cancel` per annullare un lavoro parallelo.

> [!CAUTION]
> È consigliabile utilizzare le eccezioni per annullare un lavoro parallelo solo se necessario. I token di annullamento e i metodi `cancel` del gruppo di attività sono più efficienti e meno soggetti ad errori.

Quando si genera un'eccezione nel corpo di una funzione lavoro passata a un gruppo di attività, il runtime archivia l'eccezione e ne effettua il marshalling nel contesto in attesa del completamento del gruppo di attività. Analogamente al metodo `cancel`, il runtime elimina tutte le attività non ancora avviate e non accetta nuove attività.

Il terzo esempio è simile al secondo, ad eccezione del fatto che l'attività `t4` genera un'eccezione per annullare il gruppo di attività `tg2`. In questo esempio viene utilizzato un **`try`** - **`catch`** blocco per verificare l'annullamento quando il gruppo di attività `tg2` attende il completamento delle relative attività figlio. Analogamente al primo esempio, viene determinato il passaggio allo stato annullato del gruppo di attività `tg2` ma senza annullare il gruppo di attività `tg1`.

[!code-cpp[concrt-task-tree#4](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_9.cpp)]

Nel quarto esempio viene usata la gestione delle eccezioni per annullare l'intero albero del lavoro. In questo esempio l'eccezione viene rilevata quando il gruppo di attività `tg1` attende il completamento delle relative attività figlio anziché quando il gruppo di attività `tg2` attende le relative attività figlio. Analogamente al secondo esempio, questa condizione determina il passaggio allo stato annullato di entrambi i gruppi di attività della struttura ad albero, `tg1` e `tg2`.

[!code-cpp[concrt-task-tree#5](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_10.cpp)]

Poiché i metodi `task_group::wait` e `structured_task_group::wait` vengono generati quando un'attività figlio genera un'eccezione, non si riceve alcun valore restituito.

[All'[inizio](#top)]

## <a name="canceling-parallel-algorithms"></a><a name="algorithms"></a>Annullamento degli algoritmi paralleli

Gli algoritmi paralleli nella libreria PPL, ad esempio `parallel_for`, si basano sui gruppi di attività. Pertanto, per annullare un algoritmo parallelo, è possibile usare molte delle stesse tecniche.

Negli esempi seguenti vengono illustrati diversi modi per annullare un algoritmo parallelo.

Nell'esempio riportato di seguito si utilizza la funzione `run_with_cancellation_token` per chiamare l'algoritmo `parallel_for`. La funzione `run_with_cancellation_token` accetta un token di annullamento come argomento e chiama la funzione lavoro fornita in modo sincrono. Poiché gli algoritmi paralleli si basano sulle attività, questi ereditano il token di annullamento dell'attività padre. Pertanto, `parallel_for` può rispondere all'annullamento.

[!code-cpp[concrt-cancel-parallel-for#1](../../parallel/concrt/codesnippet/cpp/cancellation-in-the-ppl_11.cpp)]

Nell'esempio seguente viene utilizzato il metodo [Concurrency:: structured_task_group:: run_and_wait](reference/structured-task-group-class.md#run_and_wait) per chiamare l' `parallel_for` algoritmo. Il metodo `structured_task_group::run_and_wait` attende il completamento dell'attività fornita. L'oggetto `structured_task_group` consente alla funzione lavoro di annullare l'attività.

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

[All'[inizio](#top)]

## <a name="when-not-to-use-cancellation"></a><a name="when"></a>Quando non usare l'annullamento

L'uso dell'annullamento è appropriato quando ogni membro di un gruppo di attività correlate può uscire in modo tempestivo. In alcuni scenari, tuttavia, l'annullamento potrebbe non essere appropriato per l'applicazione. Ad esempio, poiché l'annullamento delle attività è cooperativo, il set complessivo di attività non verrà annullato se un singola attività è bloccata. Se, ad esempio, un'attività non è ancora stata avviata, ma sblocca un'altra attività attiva, non verrà avviata se il gruppo di attività viene annullato. Ciò può causare condizioni di deadlock nell'applicazione. Un altro esempio in cui l'uso dell'annullamento potrebbe non essere appropriato è quello in cui un'attività viene annullata ma la relativa attività figlio esegue un'operazione importante, ad esempio la liberazione di una risorsa. Poiché l'annullamento dell'attività padre determina l'annullamento del set complessivo di attività, tale operazione non verrà eseguita. Per un esempio in cui viene illustrato questo punto, vedere la sezione comprendere il modo in cui l' [annullamento e la gestione delle eccezioni influiscono sull'eliminazione degli oggetti](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) nelle procedure consigliate nell'argomento libreria di modelli paralleli.

[All'[inizio](#top)]

## <a name="related-topics"></a>Argomenti correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura: usare l'annullamento per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-cancellation-to-break-from-a-parallel-loop.md)|Illustra come usare l'annullamento per implementare un algoritmo di ricerca parallelo.|
|[Procedura: usare la gestione delle eccezioni per interrompere un ciclo parallelo](../../parallel/concrt/how-to-use-exception-handling-to-break-from-a-parallel-loop.md)|Viene illustrato come usare la classe `task_group` per scrivere un algoritmo di ricerca per un albero di base.|
|[Gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md)|Descrive il modo in cui il runtime gestisce le eccezioni generate dai gruppi di attività, dalle attività leggere e dagli agenti asincroni e come rispondere alle eccezioni nelle applicazioni.|
|[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)|Descrive il modo in cui le attività vengono correlate ai gruppi di attività e come usare le attività strutturate e non strutturate nelle applicazioni.|
|[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)|Descrive gli algoritmi paralleli per svolgere simultaneamente il lavoro sulle raccolte di dati.|
|[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Fornisce una panoramica della libreria PPL.|

## <a name="reference"></a>Informazioni di riferimento

[Classe Task (runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)

[Classe cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md)

[Classe cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md)

[Classe task_group](reference/task-group-class.md)

[Classe structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md)

[Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)
