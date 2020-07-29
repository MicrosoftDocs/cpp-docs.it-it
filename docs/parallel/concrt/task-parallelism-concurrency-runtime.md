---
title: Parallelismo delle attività (runtime di concorrenza)
ms.date: 11/04/2016
helpviewer_keywords:
- structured task groups [Concurrency Runtime]
- structured tasks [Concurrency Runtime]
- task groups [Concurrency Runtime]
- task parallelism
- tasks [Concurrency Runtime]
ms.assetid: 42f05ac3-2098-494a-ba84-737fcdcad077
ms.openlocfilehash: 09c6153a1440684156226acbda909ca8b0398989
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224929"
---
# <a name="task-parallelism-concurrency-runtime"></a>Parallelismo delle attività (runtime di concorrenza)

Nel runtime di concorrenza, un' *attività* è un'unità di lavoro che esegue un processo specifico e in genere viene eseguita in parallelo con altre attività. Un'attività può essere scomposta in attività aggiuntive con granularità più fine organizzate in un *gruppo di attività*.

Usare le attività quando si scrive codice asincrono e si vuole che alcune operazioni si verifichino al completamento dell'operazione asincrona. Ad esempio, è possibile usare un'attività per leggere in modo asincrono da un file e quindi usare un'altra attività, un' *attività di continuazione*, descritta più avanti in questo documento, per elaborare i dati dopo che diventano disponibili. È possibile, invece, usare i gruppi di attività per scomporre il lavoro parallelo in sezioni più piccole. Si supponga, ad esempio, di avere un algoritmo ricorsivo che divide il lavoro rimanente in due partizioni. È possibile usare i gruppi di attività per eseguire queste partizioni contemporaneamente e quindi attendere che il lavoro diviso venga completato

> [!TIP]
> Quando si desidera applicare la stessa routine a ogni elemento di una raccolta in parallelo, utilizzare un algoritmo parallelo, ad esempio [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for), anziché un'attività o un gruppo di attività. Per ulteriori informazioni sugli algoritmi paralleli, vedere [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md).

## <a name="key-points"></a>Punti chiave

- Quando si passano le variabili a un'espressione lambda in base al riferimento, è necessario garantire che tale variabile duri fino al completamento dell'attività.

- Usare le attività (la classe [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) ) quando si scrive codice asincrono. La classe dell'attività usa il pool di thread di Windows come utilità di pianificazione, non il runtime di concorrenza.

- Usare i gruppi di attività (la classe [Concurrency:: task_group](reference/task-group-class.md) o l'algoritmo [concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) ) quando si vuole scomporre il lavoro parallelo in parti più piccole e quindi attendere il completamento di tali parti più piccole.

- Utilizzare il metodo [Concurrency:: Task:: then](reference/task-class.md#then) per creare le continuazioni. Una *continuazione* è un'attività che viene eseguita in modo asincrono dopo il completamento di un'altra attività. È possibile connettere qualsiasi numero di continuazioni per formare una catena di lavoro asincrono.

- Una continuazione basata sulle attività è sempre pianificata per l'esecuzione quando l'attività precedente viene completata, anche quando l'attività precedente viene annullata o genera un'eccezione.

- Utilizzare [Concurrency:: when_all](reference/concurrency-namespace-functions.md#when_all) per creare un'attività che viene completata dopo il completamento di ogni membro di un set di attività. Utilizzare [Concurrency:: when_any](reference/concurrency-namespace-functions.md#when_any) per creare un'attività che viene completata dopo il completamento di un membro di un set di attività.

- Il meccanismo di annullamento della libreria PPL (Parallel Patterns Library) coinvolge le attività e i gruppi di attività. Per ulteriori informazioni, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

- Per informazioni sul modo in cui il runtime gestisce le eccezioni generate dalle attività e dai gruppi di attività, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="in-this-document"></a>In questo documento

- [Uso di espressioni lambda](#lambdas)

- [La classe di attività](#task-class)

- [Attività di continuazione](#continuations)

- [Continuazioni basate su valore e continuazioni basate su attività](#value-versus-task)

- [Composizione di attività](#composing-tasks)

  - [La funzione when_all](#when-all)

  - [La funzione when_any](#when-any)

- [Esecuzione posticipata di attività](#delayed-tasks)

- [Gruppi di attività](#task-groups)

- [Confronto tra task_group e structured_task_group](#comparing-groups)

- [Esempio](#example)

- [Programmazione efficiente](#robust)

## <a name="using-lambda-expressions"></a><a name="lambdas"></a>Uso di espressioni lambda

Poiché presentano una sintassi concisa, le espressioni lambda sono comunemente usate per definire il lavoro eseguito da attività e gruppi di attività. Ecco alcuni suggerimenti sull'utilizzo:

- Poiché in genere le attività vengono eseguite su thread in background, tenere tenga presente la durata degli oggetti quando si acquisiscono variabili nelle espressioni lambda. Quando si acquisisce una variabile in base al valore, una copia della variabile viene eseguita nel corpo dell'espressione lambda. Quando l'acquisizione viene fatta in base al riferimento, la copia non viene eseguita. Pertanto, verificare che la durata di qualsiasi variabile acquisita in base al riferimento sia maggiore di quella dell'attività che la usa.

- Quando si passa un'espressione lambda a un'attività, non acquisire le variabili allocate nello stack per riferimento.

- Essere espliciti sulle variabili acquisite nelle espressioni lambda in modo da poter identificare ciò che si sta acquisendo per valore rispetto al riferimento. Per questo motivo si consiglia di non usare le opzioni `[=]` o `[&]` per le espressioni lambda

Un modello comune è quello in cui un'attività contenuta in una catena di continuazione viene assegnata a una variabile e un'altra attività legge tale variabile. Non è possibile acquisire in base al valore perché ogni attività di continuazione conterrà una copia diversa della variabile. Per le variabili allocate nello stack, non è possibile acquisire per riferimento perché la variabile potrebbe non essere più valida.

Per risolvere questo problema, usare un puntatore intelligente, ad esempio [std:: shared_ptr](../../standard-library/shared-ptr-class.md), per eseguire il wrapping della variabile e passare il puntatore intelligente per valore. In questo modo, l'oggetto sottostante può essere assegnato e letto e sopravvivrà alle attività che lo usano. Usare questa tecnica anche se la variabile è un puntatore o un handle con il numero di riferimenti (`^`) a un oggetto di Windows Runtime. Ecco un esempio di base:

[!code-cpp[concrt-lambda-task-lifetime#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_1.cpp)]

Per ulteriori informazioni sulle espressioni lambda, vedere [espressioni lambda](../../cpp/lambda-expressions-in-cpp.md).

## <a name="the-task-class"></a><a name="task-class"></a>Classe Task

È possibile utilizzare la classe [Concurrency:: Task](../../parallel/concrt/reference/task-class.md) per comporre le attività in un set di operazioni dipendenti. Questo modello di composizione è supportato dalla nozione di *continuazioni*. Una continuazione consente di eseguire il codice quando l'attività precedente o *antecedente*viene completata. Il risultato dell'attività precedente viene passato come input a una o più attività di continuazione. Quando viene completata un'attività antecedente, viene pianificata l'esecuzione di tutte le attività di continuazione in attesa. Ogni attività di continuazione riceve una copia del risultato dell'attività precedente. A loro volta, tali attività di continuazione possono essere attività antecedenti per altre continuazioni e creano, pertanto, una catena di attività. Le continuazioni consentono di creare catene di lunghezza arbitraria delle attività che presentano dipendenze specifiche tra di esse. Inoltre, un'attività può partecipare all'annullamento prima dell'avvio di un'attività o in modo cooperativo mentre è in esecuzione. Per ulteriori informazioni su questo modello di annullamento, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

`task` task è una classe modello. Il parametro di tipo `T` è il tipo del risultato prodotto dall'attività. Questo tipo può essere **`void`** se l'attività non restituisce un valore. `T`Impossibile utilizzare il **`const`** modificatore.

Quando si crea un'attività, si fornisce una *funzione lavoro* che esegue il corpo dell'attività. Questa funzione di lavoro ha il formato di una funzione lambda, di un puntatore a funzione o di un oggetto funzione. Per attendere il completamento di un'attività senza ottenere il risultato, chiamare il metodo [Concurrency:: Task:: wait](reference/task-class.md#wait) . Il `task::wait` metodo restituisce un valore [Concurrency:: task_status](reference/concurrency-namespace-enums.md#task_group_status) che descrive se l'attività è stata completata o annullata. Per ottenere il risultato dell'attività, chiamare il metodo [Concurrency:: Task:: Get](reference/task-class.md#get) . Questo metodo chiama `task::wait` per attendere il completamento dell'attività e quindi blocca l'esecuzione del thread corrente finché non è disponibile il risultato.

Nell'esempio seguente viene illustrato come creare un'attività, attenderne il risultato e visualizzarne il valore. Negli esempi di questa documentazione vengono usate le funzioni lambda in quanto forniscono una sintassi più concisa. Tuttavia, quando si usano le attività è anche possibile usare i puntatori a funzione e gli oggetti funzione.

[!code-cpp[concrt-basic-task#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_2.cpp)]

Quando si utilizza la funzione [Concurrency:: create_task](reference/concurrency-namespace-functions.md#create_task) , è possibile utilizzare la **`auto`** parola chiave anziché dichiarare il tipo. Ad esempio, si consideri il codice che crea e visualizza la matrice di identità:

[!code-cpp[concrt-create-task#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_3.cpp)]

È possibile usare la funzione `create_task` per creare l'operazione equivalente.

[!code-cpp[concrt-create-task#2](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_4.cpp)]

Se viene generata un'eccezione durante l'esecuzione di un'attività, il runtime effettua il marshalling di tale eccezione nella chiamata successiva a `task::get` o `task::wait` o su una continuazione basata sull'attività. Per ulteriori informazioni sul meccanismo di gestione delle eccezioni delle attività, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

Per un esempio di utilizzo di `task` , [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md), annullamento, vedere [procedura dettagliata: connessione tramite attività e richieste HTTP XML](../../parallel/concrt/walkthrough-connecting-using-tasks-and-xml-http-requests.md). (La classe `task_completion_event` è descritta più avanti in questo documento).

> [!TIP]
> Per informazioni dettagliate specifiche per le attività nelle app UWP, vedere [programmazione asincrona in c++](/windows/uwp/threading-async/asynchronous-programming-in-cpp-universal-windows-platform-apps) e [creazione di operazioni asincrone in C++ per app UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).

## <a name="continuation-tasks"></a><a name="continuations"></a>Attività di continuazione

Nella programmazione asincrona è molto comune che un'operazione asincrona, al completamento, richiami una seconda operazione e vi passi i dati. A tale scopo, si usano in genere i metodi di callback. Nella runtime di concorrenza la stessa funzionalità viene fornita dalle attività di *continuazione*. Un'attività di continuazione, nota anche semplicemente come continuazione, è un'attività asincrona richiamata da un'altra attività, nota come *precedente*, al completamento dell'attività precedente. Usando le continuazioni è possibile:

- Passare dati dall'attività precedente alla continuazione.

- Specificare le esatte condizioni che devono verificarsi affinché la continuazione venga richiamata o meno.

- Annullare una continuazione prima che venga avviata o in modo cooperativo mentre è in esecuzione.

- Fornire suggerimenti sul modo in cui pianificare la continuazione. (Si applica solo alle app piattaforma UWP (Universal Windows Platform) (UWP). Per altre informazioni, vedere [creazione di operazioni asincrone in C++ per le app UWP](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).

- Richiamare più continuazioni dalla stessa attività precedente.

- Richiamare una determinata continuazione quando tutte o alcune attività precedenti vengono completate.

- Concatenare continuazioni una dopo l'altra fino a raggiungere una lunghezza qualsiasi.

- Usare una continuazione per gestire le eccezioni generate dall'attività precedente.

Queste funzionalità consentono di eseguire una o più attività al completamento della prima attività. Ad esempio, è possibile creare una continuazione che comprime un file dopo che è stato letto dal disco dalla prima attività.

Nell'esempio seguente viene modificato quello precedente in modo da utilizzare il metodo [Concurrency:: Task:: then](reference/task-class.md#then) per pianificare una continuazione che stampa il valore dell'attività precedente quando è disponibile.

[!code-cpp[concrt-basic-continuation#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_5.cpp)]

È possibile concatenare e annidare attività in qualsiasi lunghezza. Un'attività può anche avere più continuazioni. Nell'esempio seguente viene illustrata una catena di continuazione di base che incrementa il valore dell'attività precedente di tre volte.

[!code-cpp[concrt-continuation-chain#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_6.cpp)]

Una continuazione può restituire anche un'altra attività. Se non è specificato un annullamento, questa attività viene eseguita prima della successiva continuazione. Questa tecnica è nota come annullamento del *wrapping asincrono*. L'annullamento del wrapping asincrono è utile quando si vuole eseguire il lavoro aggiuntivo in background senza che l'attività corrente blocchi il thread corrente. Questa operazione è comune nelle app UWP, in cui le continuazioni possono essere eseguite sul thread UI. L'esempio seguente riporta tre attività. La prima attività restituisce un'altra attività che viene eseguita prima di un'attività di continuazione.

[!code-cpp[concrt-async-unwrapping#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_7.cpp)]

> [!IMPORTANT]
> Quando una continuazione di un'attività restituisce un'attività annidata di tipo `N`, l'attività risultante ha il tipo `N`, non `task<N>`, e viene completata al completamento dell'attività annidata. In altre parole, la continuazione annulla il wrapping dell'attività annidata.

## <a name="value-based-versus-task-based-continuations"></a><a name="value-versus-task"></a>Continuazioni basate su valore e continuazioni basate su attività

Dato un oggetto `task` il cui tipo restituito è `T`, è possibile specificare un valore di tipo `T` o `task<T>` alle relative attività di continuazione. Una continuazione che accetta il tipo `T` è nota come *continuazione basata sul valore*. Una continuazione basata su valore viene programmata per essere eseguita quando l'attività antecedente viene completata senza errori e non viene annullata. Una continuazione che accetta `task<T>` il tipo come parametro è nota come *continuazione basata su attività*. Una continuazione basata sulle attività è sempre pianificata per l'esecuzione quando l'attività precedente viene completata, anche quando l'attività precedente viene annullata o genera un'eccezione. È quindi possibile chiamare `task::get` per ottenere il risultato dell'attività precedente. Se l'attività precedente è stata annullata, `task::get` genera [Concurrency:: task_canceled](../../parallel/concrt/reference/task-canceled-class.md). Se l'attività precedente ha generato un'eccezione, `task::get` genera nuovamente tale eccezione. Una continuazione basata sulle attività non è contrassegnata come annullata quando la relativa attività precedente viene annullata.

## <a name="composing-tasks"></a><a name="composing-tasks"></a>Composizione di attività

In questa sezione vengono descritte le funzioni [Concurrency:: when_all](reference/concurrency-namespace-functions.md#when_all) e [Concurrency:: when_any](reference/concurrency-namespace-functions.md#when_all) , che consentono di comporre più attività per implementare modelli comuni.

### <a name="the-when_all-function"></a><a name="when-all"></a>Funzione when_all

La funzione `when_all` crea un'attività che viene completata dopo il completamento di un set di attività. Questa funzione restituisce un oggetto std::[vector](../../standard-library/vector-class.md) che contiene il risultato di ogni attività nel set. Nell'esempio di base riportato di seguito viene usato `when_all` per creare un'attività che rappresenta il completamento di altre tre attività.

[!code-cpp[concrt-join-tasks#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_8.cpp)]

> [!NOTE]
> Le attività passate a `when_all` devono essere uniformi. In altre parole, devono restituire tutte lo stesso tipo.

È inoltre possibile usare la sintassi `&&` per creare un'attività che venga completata dopo il completamento di un set di attività, come illustrato nell'esempio seguente.

`auto t = t1 && t2; // same as when_all`

Viene di solito usata una continuazione con `when_all` per eseguire un'azione quando un set di attività viene completato. Nell'esempio seguente viene modificato il precedente in modo da stampare la somma di tre attività, ognuna delle quali produce un **`int`** risultato.

[!code-cpp[concrt-join-tasks#2](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_9.cpp)]

In questo esempio, è inoltre possibile specificare `task<vector<int>>` per produrre una continuazione basata sull'attività.

Se un'attività in un set di attività viene annullata o genera un'eccezione, `when_all` viene completata immediatamente senza attendere il completamento delle attività rimanenti. Se viene generata un'eccezione, il runtime genera nuovamente l'eccezione quando si chiama `task::get` o `task::wait` nell'oggetto attività restituito da `when_all`. Se viene generata più di un'attività, il runtime ne sceglie una. Pertanto, assicurarsi di osservare tutte le eccezioni dopo il completamento di tutte le attività; un'eccezione di attività non gestita causa la chiusura dell'applicazione.

Ecco una funzione di utilità che è possibile usare per verificare che il programma osservi tutte le eccezioni. Per ogni attività nell'intervallo specificato, `observe_all_exceptions` attiva qualsiasi eccezione che si è verificata affinché venga generata nuovamente, quindi elimina l'eccezione.

[!code-cpp[concrt-eh-when_all#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_10.cpp)]

Si consideri un'app UWP che usa C++ e XAML e scrive un set di file su disco. Nell'esempio seguente viene illustrato come usare `when_all` e `observe_all_exceptions` per garantire l'osservanza di tutte le eccezioni da parte del programma.

[!code-cpp[concrt-eh-when_all#2](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_11.cpp)]

##### <a name="to-run-this-example"></a>Per eseguire questo esempio

1. In MainPage.xaml, aggiungere un controllo `Button`.

[!code-xml[concrt-eh-when_all#3](../../parallel/concrt/codesnippet/xaml/task-parallelism-concurrency-runtime_12.xaml)]

1. In MainPage. XAML. h, aggiungere le seguenti dichiarazioni in diretta alla **`private`** sezione della `MainPage` dichiarazione di classe.

[!code-cpp[concrt-eh-when_all#4](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_13.h)]

1. In MainPage.xaml.cpp, implementare il gestore eventi `Button_Click`.

[!code-cpp[concrt-eh-when_all#5](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_14.cpp)]

1. In MainPage.xaml.cpp, implementare `WriteFilesAsync` come mostrato nell'esempio.

> [!TIP]
> `when_all` è una funzione non bloccante che produce `task` come risultato. A differenza di [Task:: wait](reference/task-class.md#wait), è possibile chiamare questa funzione in un'app UWP nel thread asta (Application sta).

### <a name="the-when_any-function"></a><a name="when-any"></a>Funzione when_any

La funzione `when_any` crea un'attività che viene completata al completamento della prima attività di un set di attività. Questa funzione restituisce un oggetto [std::p aria](../../standard-library/pair-structure.md) che contiene il risultato dell'attività completata e l'indice di tale attività nel set.

La funzione `when_any` è particolarmente utile nei seguenti scenari:

- Operazioni ridondanti. Si consideri un algoritmo o un'operazione eseguibile in molti modi. È possibile usare la funzione `when_any` per selezionare l'operazione che termina per prima e quindi annullare le operazioni rimanenti.

- Operazioni interfogliate. È possibile avviare più operazioni, che devono tutte venire completate e usare la funzione `when_any` per elaborare i risultati al termine di ogni operazione. Al termine di un'operazione, è possibile avviare una o più attività aggiuntive.

- Operazioni con limitazione. È possibile usare la funzione `when_any` per estendere lo scenario precedente limitando il numero di operazioni simultanee.

- Operazioni scadute. È possibile usare la funzione `when_any` per scegliere tra una o più attività e un'attività che termina dopo un periodo specifico.

Come con `when_all`, viene di solito usata una continuazione con `when_any` per eseguire un'azione quando le prime di un set di attività sono state completate. Nell'esempio di base riportato di seguito viene usato `when_any` per creare un'attività che viene completata al completamento della prima delle altre tre attività.

[!code-cpp[concrt-select-task#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_15.cpp)]

In questo esempio, è inoltre possibile specificare `task<pair<int, size_t>>` per produrre una continuazione basata sull'attività.

> [!NOTE]
> Come con `when_all`, le attività passate a `when_any` devono restituire tutte lo stesso tipo.

È inoltre possibile usare la sintassi `||` per creare un'attività che venga completata dopo il completamento della prima attività di un set di attività, come illustrato nell'esempio seguente.

`auto t = t1 || t2; // same as when_any`

> [!TIP]
> Come con `when_all` , `when_any` non è bloccante ed è sicuro da chiamare in un'app UWP sul thread asta.

## <a name="delayed-task-execution"></a><a name="delayed-tasks"></a>Esecuzione ritardata dell'attività

A volte è necessario ritardare l'esecuzione di un'attività fino a soddisfare una condizione oppure avviare un'attività in risposta a un evento esterno. Ad esempio, nella programmazione asincrona potrebbe essere necessario avviare un'attività in risposta a un evento di completamento I/O.

Per eseguire questa operazione, è possibile utilizzare una continuazione o avviare un'attività e attendere un evento nella funzione lavoro dell'attività. In alcuni casi, tuttavia, non è possibile usare una di queste tecniche. Ad esempio, per creare una continuazione, è necessario avere l'attività antecedente. Tuttavia, se non si dispone dell'attività precedente, è possibile creare un *evento di completamento dell'attività* e concatenare tale evento di completamento all'attività precedente quando diventa disponibile. Inoltre, poiché un'attività in attesa blocca anche un thread, è possibile usare eventi di completamento di attività per eseguire il lavoro quando un'operazione asincrona viene completata e quindi libera un thread.

La classe [Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md) aiuta a semplificare tale composizione di attività. Analogamente ala classe `task`, il parametro di tipo `T` è il tipo del risultato prodotto dall'attività. Questo tipo può essere **`void`** se l'attività non restituisce un valore. `T`Impossibile utilizzare il **`const`** modificatore. In genere, un oggetto `task_completion_event` viene fornito a un thread o a un'attività che lo segnalerà se diventa disponibile il valore per l'oggetto. Contemporaneamente, una o più attività vengono impostate come listener di tale evento. Quando viene impostato l'evento, le attività del listener vengono completate e viene pianificata l'esecuzione delle loro continuazioni.

Per un esempio che usa `task_completion_event` per implementare un'attività che viene completata dopo un ritardo, vedere [procedura: creare un'attività che viene completata dopo un ritardo](../../parallel/concrt/how-to-create-a-task-that-completes-after-a-delay.md).

## <a name="task-groups"></a><a name="task-groups"></a>Gruppi di attività

Un *gruppo di attività* organizza una raccolta di attività. I gruppi di attività inseriscono le attività in una coda di acquisizione del lavoro. L'utilità di pianificazione rimuove le attività da questa coda eseguendole nelle risorse di elaborazione disponibili. Dopo avere aggiunto le attività a un gruppo di attività, è possibile attendere il completamento di tutte le attività o l'annullamento delle attività che non sono ancora state avviate.

La libreria PPL utilizza le classi Concurrency [:: task_group](reference/task-group-class.md) e [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) per rappresentare i gruppi di attività e la classe [Concurrency:: task_handle](../../parallel/concrt/reference/task-handle-class.md) per rappresentare le attività eseguite in questi gruppi. La classe `task_handle` incapsula il codice che esegue il lavoro. Come la classe `task`, questa funzione di lavoro ha il formato di una funzione lambda, di un puntatore a funzione o di un oggetto funzione. In genere non è necessario usare direttamente gli oggetti `task_handle`, ma è possibile passare le funzioni lavoro a un gruppo di attività, che crea e gestisce gli oggetti `task_handle`.

La libreria PPL divide i gruppi di attività in queste due categorie: *gruppi di attività non strutturate* e *gruppi di attività strutturati*. La libreria PPL usa la classe `task_group` per rappresentare i gruppi di attività non strutturate e la classe `structured_task_group` per rappresentare i gruppi di attività strutturate.

> [!IMPORTANT]
> La libreria PPL definisce inoltre l'algoritmo [Concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) , che usa la `structured_task_group` classe per eseguire un set di attività in parallelo. Poiché l'algoritmo `parallel_invoke` presenta una sintassi più concisa, è consigliabile usarlo in alternativa alla classe `structured_task_group` quando è possibile. Gli [algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md) dell'argomento vengono descritti `parallel_invoke` in modo più dettagliato.

Usare `parallel_invoke` quando sono presenti diverse attività indipendenti che si vuole eseguire contemporaneamente ed è necessario attendere il completamento di tutte le attività prima di continuare.  Questa tecnica è spesso detta parallelismo di *fork e join* . Usare `task_group` quando sono presenti diverse attività indipendenti che si vuole eseguire contemporaneamente ma è possibile attendere il completamento delle attività in un secondo momento. È possibile, ad esempio, aggiungere attività a un oggetto `task_group` e attendere il completamento delle attività in un'altra funzione o da parte di un altro thread.

I gruppi di attività supportano il concetto di annullamento. L'annullamento consente di segnalare l'annullamento dell'operazione globale a tutte le attività attive. L'annullamento impedisce inoltre l'avvio delle attività che non sono ancora avviate. Per ulteriori informazioni sull'annullamento, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

Il runtime fornisce inoltre un modello di gestione delle eccezioni che consente di generare un'eccezione da un'attività e di gestire tale eccezione durante l'attesa del completamento del gruppo di attività associato. Per ulteriori informazioni su questo modello di gestione delle eccezioni, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="comparing-task_group-to-structured_task_group"></a><a name="comparing-groups"></a>Confronto tra task_group e structured_task_group

Sebbene sia consigliabile usare `task_group` o `parallel_invoke` anziché la classe `structured_task_group`, in alcuni casi può essere opportuno usare `structured_task_group`, ad esempio quando si scrive un algoritmo parallelo che esegue un numero variabile di attività o che richiede il supporto per l'annullamento. In questa sezione vengono illustrate le differenze tra le classi `task_group` e `structured_task_group`.

La classe `task_group` è thread-safe. È possibile pertanto aggiungere attività a un oggetto `task_group` da più thread e attendere o annullare un oggetto `task_group` da più thread. La costruzione e la distruzione di un oggetto `structured_task_group` devono essere eseguite nello stesso ambito lessicale. Inoltre, tutte le operazioni su un oggetto `structured_task_group` devono essere eseguite nello stesso thread. L'eccezione a questa regola è il metodo [Concurrency:: structured_task_group:: Cancel](reference/structured-task-group-class.md#cancel) e [Concurrency:: structured_task_group:: is_canceling](reference/structured-task-group-class.md#is_canceling) . Un'attività figlio può chiamare questi metodi per annullare il gruppo di attività padre o verificarne l'annullamento in qualsiasi momento.

È possibile eseguire attività aggiuntive su un `task_group` oggetto dopo aver chiamato il metodo [Concurrency:: task_group:: wait](reference/task-group-class.md#wait) o [concurrency:: task_group:: run_and_wait](reference/task-group-class.md#run_and_wait) . Viceversa, se si eseguono attività aggiuntive su un `structured_task_group` oggetto dopo aver chiamato il metodo [Concurrency:: structured_task_group:: wait](reference/structured-task-group-class.md#wait) o [concurrency:: structured_task_group:: run_and_wait](reference/structured-task-group-class.md#run_and_wait) , il comportamento non è definito.

Poiché la classe `structured_task_group` non viene sincronizzata nei thread, ha un sovraccarico di esecuzione inferiore rispetto alla classe `task_group`. Pertanto, se il problema non richiede la pianificazione del lavoro da più thread e non è possibile usare l'algoritmo `parallel_invoke`, la classe `structured_task_group` consente di scrivere un codice dalle prestazioni migliori.

Se si usa un oggetto `structured_task_group` all'interno di un altro oggetto `structured_task_group`, è necessario che l'oggetto interno venga completato ed eliminato prima del completamento dell'oggetto esterno. La classe `task_group` non richiede il completamento dei gruppi di attività annidate prima del completamento del gruppo esterno.

I gruppi di attività non strutturate e i gruppi di attività strutturate vengono usati con gli handle dell'attività in diversi modi. È possibile passare le funzioni lavoro direttamente a un oggetto `task_group`. L'oggetto `task_group` creerà e gestirà l'handle dell'attività automaticamente. Con la classe `structured_task_group` è necessario gestire un oggetto `task_handle` per ogni attività. Ogni oggetto `task_handle` deve rimanere valido per tutta la durata del relativo oggetto `structured_task_group` associato. Utilizzare la funzione [Concurrency:: make_task](reference/concurrency-namespace-functions.md#make_task) per creare un `task_handle` oggetto, come illustrato nell'esempio di base seguente:

[!code-cpp[concrt-make-task-structure#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_16.cpp)]

Per gestire gli handle di attività per i casi in cui è presente un numero variabile di attività, usare una routine di allocazione dello stack, ad esempio [_malloca](../../c-runtime-library/reference/malloca.md) o una classe contenitore, ad esempio std::[vector](../../standard-library/vector-class.md).

`task_group` e `structured_task_group` supportano entrambi l'annullamento. Per ulteriori informazioni sull'annullamento, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

## <a name="example"></a><a name="example"></a>Esempio

Nell'esempio di base seguente viene illustrato l'uso dei gruppi di attività. In questo esempio viene usato l'algoritmo `parallel_invoke` per eseguire due attività contemporaneamente. Ogni attività aggiunge sottoattività a un oggetto `task_group`. Si noti che la classe `task_group` consente l'aggiunta simultanea di attività a più attività.

[!code-cpp[concrt-using-task-groups#1](../../parallel/concrt/codesnippet/cpp/task-parallelism-concurrency-runtime_17.cpp)]

Questo esempio produce l'output seguente:

```Output
Message from task: Hello
Message from task: 3.14
Message from task: 42
```

Poiché l'algoritmo `parallel_invoke` esegue le attività contemporaneamente, l'ordine dei messaggi di output potrebbe variare.

Per esempi completi che illustrano come usare l' `parallel_invoke` algoritmo, vedere [procedura: usare parallel_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md) e [procedura: usare parallel_invoke per eseguire operazioni parallele](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md). Per un esempio completo in cui viene usata la `task_group` classe per implementare future asincrone, vedere [procedura dettagliata: implementazione di future](../../parallel/concrt/walkthrough-implementing-futures.md).

## <a name="robust-programming"></a><a name="robust"></a>Programmazione affidabile

Prima di usare le attività, i gruppi di attività e gli algoritmi paralleli, assicurarsi di aver compreso il ruolo dell'annullamento e della gestione delle eccezioni. Ad esempio, in un albero di lavoro parallelo l'annullamento di un'attività impedisce l'esecuzione delle attività figlio. Ciò può comportare problemi se una delle attività figlio esegue un'operazione importante per l'applicazione, ad esempio liberare una risorsa. Inoltre, se un'attività figlio genera un'eccezione, questa può propagarsi tramite un distruttore di oggetti e causare un comportamento indefinito nell'applicazione. Per un esempio in cui vengono illustrati questi punti, vedere la sezione comprendere il modo in cui l' [annullamento e la gestione delle eccezioni influiscono sull'eliminazione degli oggetti](../../parallel/concrt/best-practices-in-the-parallel-patterns-library.md#object-destruction) nelle procedure consigliate del documento libreria Parallel Patterns. Per ulteriori informazioni sui modelli di annullamento e di gestione delle eccezioni nella libreria PPL, vedere [annullamento](../../parallel/concrt/cancellation-in-the-ppl.md) e [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="related-topics"></a>Argomenti correlati

|Titolo|Descrizione|
|-----------|-----------------|
|[Procedura: utilizzare parallel_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md)|Viene illustrato come usare l'algoritmo `parallel_invoke` per migliorare le prestazioni dell'algoritmo di ordinamento bitonico.|
|[Procedura: utilizzare parallel_invoke per eseguire operazioni in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-execute-parallel-operations.md)|Viene illustrato come usare l'algoritmo `parallel_invoke` per migliorare le prestazioni di un programma che esegue più operazioni in un'origine dati condivisa.|
|[Procedura: creare un'attività che viene completata dopo un ritardo](../../parallel/concrt/how-to-create-a-task-that-completes-after-a-delay.md)|Viene illustrato come utilizzare le `task` `cancellation_token_source` classi,, `cancellation_token` e `task_completion_event` per creare un'attività che viene completata dopo un ritardo.|
|[Procedura dettagliata: implementazione di future](../../parallel/concrt/walkthrough-implementing-futures.md)|Viene illustrato come combinare le funzionalità esistenti del runtime di concorrenza con funzionalità ancora più avanzate.|
|[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Viene descritta la libreria PPL che fornisce un modello di programmazione imperativa per lo sviluppo di applicazioni simultanee.|

## <a name="reference"></a>Informazioni di riferimento

[Classe Task (runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)

[Classe task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md)

[Funzione when_all](reference/concurrency-namespace-functions.md#when_all)

[Funzione when_any](reference/concurrency-namespace-functions.md#when_any)

[Classe task_group](reference/task-group-class.md)

[Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)

[Classe structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md)
