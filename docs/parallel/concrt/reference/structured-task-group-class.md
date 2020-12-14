---
description: 'Altre informazioni su: structured_task_group Class'
title: Classe structured_task_group
ms.date: 11/04/2016
f1_keywords:
- structured_task_group
- PPL/concurrency::structured_task_group
- PPL/concurrency::structured_task_group::structured_task_group
- PPL/concurrency::structured_task_group::cancel
- PPL/concurrency::structured_task_group::is_canceling
- PPL/concurrency::structured_task_group::run
- PPL/concurrency::structured_task_group::run_and_wait
- PPL/concurrency::structured_task_group::wait
helpviewer_keywords:
- structured_task_group class
ms.assetid: 742afa8c-c7b6-482c-b0ba-04c809927b22
ms.openlocfilehash: c553f0d0b9b5abeb6e6cbdb12d1d9da5d048a6d6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188456"
---
# <a name="structured_task_group-class"></a>Classe structured_task_group

La classe `structured_task_group` rappresenta una raccolta altamente strutturata di lavoro parallelo. È possibile mettere in coda attività parallele singole a un `structured_task_group` usando gli oggetti `task_handle`, e attenderne il completamento, oppure annullare il gruppo di attività prima di aver terminato l'esecuzione, interrompendo in tal modo qualsiasi attività che non abbia avviato l'esecuzione.

## <a name="syntax"></a>Sintassi

```cpp
class structured_task_group;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[structured_task_group](#ctor)|Di overload. Costruisce un oggetto `structured_task_group` nuovo.|
|[Distruttore ~ structured_task_group](#dtor)|Elimina un oggetto `structured_task_group` . Si prevede di chiamare il `wait` `run_and_wait` metodo o sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore non venga eseguito come risultato della rimozione dello stack a causa di un'eccezione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[cancel](#cancel)|Tenta di annullare il sottoalbero di lavoro radice in questo gruppo di attività. Ogni attività pianificata nel gruppo di attività viene annullata in modo transitivo, se possibile.|
|[is_canceling](#is_canceling)|Informa il chiamante se il gruppo di attività è attualmente in fase di annullamento. Questa operazione non indica necessariamente che il `cancel` metodo è stato chiamato sull' `structured_task_group` oggetto, sebbene tale metodo possa certamente essere restituito **`true`** . È possibile che l' `structured_task_group` oggetto sia in esecuzione inline e che un gruppo di attività più in alto nell'albero di lavoro sia stato annullato. Nei casi in cui il runtime è in grado di determinare in anticipo il flusso dell'annullamento attraverso questo `structured_task_group` oggetto, **`true`** verrà restituito anche.|
|[Correre](#run)|Di overload. Pianifica un'attività nell' `structured_task_group` oggetto. Il chiamante gestisce la durata dell' `task_handle` oggetto passato nel `_Task_handle` parametro. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.|
|[run_and_wait](#run_and_wait)|Di overload. Pianifica un'attività da eseguire inline sul contesto chiamante con l'assistenza dell' `structured_task_group` oggetto per il supporto completo dell'annullamento. Se un `task_handle` oggetto viene passato come parametro a `run_and_wait` , il chiamante è responsabile della gestione della durata dell' `task_handle` oggetto. La funzione attende quindi che tutto il lavoro nell' `structured_task_group` oggetto sia stato completato o annullato.|
|[attendere](#wait)|Attende il completamento o l'annullamento di tutto il lavoro in `structured_task_group` .|

## <a name="remarks"></a>Commenti

L'utilizzo di un oggetto comporta una serie di restrizioni gravi `structured_task_group` per ottenere prestazioni:

- Un singolo `structured_task_group` oggetto non può essere usato da più thread. Tutte le operazioni su un `structured_task_group` oggetto devono essere eseguite dal thread che ha creato l'oggetto. Le due eccezioni a questa regola sono le funzioni membro `cancel` e `is_canceling` . L'oggetto potrebbe non trovarsi nell'elenco di acquisizione di un'espressione lambda e deve essere utilizzato all'interno di un'attività, a meno che l'attività non utilizzi una delle operazioni di annullamento.

- Tutte le attività pianificate per un `structured_task_group` oggetto vengono pianificate tramite l'utilizzo di `task_handle` oggetti che è necessario gestire in modo esplicito la durata di.

- È possibile utilizzare più gruppi solo in un ordine perfettamente annidato. Se `structured_task_group` vengono dichiarati due oggetti, il secondo in fase di dichiarazione (quello interno) deve essere distrutto prima di qualsiasi metodo, ad eccezione `cancel` di o, `is_canceling` sulla prima (quello esterno). Questa condizione è valida in entrambi i casi di dichiarando semplicemente più `structured_task_group` oggetti all'interno degli stessi ambiti annidati o dal punto di vista funzionale, nonché il caso di un'attività accodata a `structured_task_group` tramite i `run` `run_and_wait` metodi o.

- A differenza della `task_group` classe generale, tutti gli Stati nella `structured_task_group` classe sono finali. Dopo aver accodato le attività nel gruppo e averne atteso il completamento, non è possibile utilizzare nuovamente lo stesso gruppo.

Per altre informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`structured_task_group`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="cancel"></a><a name="cancel"></a> Annulla

Tenta di annullare il sottoalbero di lavoro radice in questo gruppo di attività. Ogni attività pianificata nel gruppo di attività viene annullata in modo transitivo, se possibile.

```cpp
void cancel();
```

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [annullamento](../../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

## <a name="is_canceling"></a><a name="is_canceling"></a> is_canceling

Informa il chiamante se il gruppo di attività è attualmente in fase di annullamento. Questa operazione non indica necessariamente che il `cancel` metodo è stato chiamato sull' `structured_task_group` oggetto, sebbene tale metodo possa certamente essere restituito **`true`** . È possibile che l' `structured_task_group` oggetto sia in esecuzione inline e che un gruppo di attività più in alto nell'albero di lavoro sia stato annullato. Nei casi in cui il runtime è in grado di determinare in anticipo il flusso dell'annullamento attraverso questo `structured_task_group` oggetto, **`true`** verrà restituito anche.

```cpp
bool is_canceling();
```

### <a name="return-value"></a>Valore restituito

Indica se l' `structured_task_group` oggetto è nel periodo di annullamento (o è sicuramente breve).

### <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [annullamento](../../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md#cancellation).

## <a name="run"></a><a name="run"></a> Correre

Pianifica un'attività nell' `structured_task_group` oggetto. Il chiamante gestisce la durata dell' `task_handle` oggetto passato nel `_Task_handle` parametro. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.

```cpp
template<class _Function>
void run(
    task_handle<_Function>& _Task_handle);

template<class _Function>
void run(
    task_handle<_Function>& _Task_handle,
    location& _Placement);
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Tipo dell'oggetto funzione che verrà richiamato per eseguire il corpo dell'handle dell'attività.

*_Task_handle*<br/>
Handle per il lavoro pianificato. Si noti che il chiamante è responsabile della durata dell'oggetto. Il runtime continuerà a aspettarsi che sia attivo fino a quando non viene `wait` `run_and_wait` chiamato il metodo o per questo `structured_task_group` oggetto.

*_Placement*<br/>
Riferimento alla posizione in cui deve essere eseguita l'attività rappresentata dal parametro `_Task_handle`.

### <a name="remarks"></a>Commenti

Il runtime crea una copia della funzione lavoro passata a questo metodo. Eventuali modifiche di stato che si verificano in un oggetto funzione passato a questo metodo non verranno visualizzate nella copia dell'oggetto funzione.

Se `structured_task_group` viene distrutto come risultato della rimozione dello stack da un'eccezione, non è necessario garantire che sia stata effettuata una chiamata al `wait` `run_and_wait` metodo o. In questo caso, il distruttore verrà annullato in modo appropriato e attenderà il completamento dell'attività rappresentata dal `_Task_handle` parametro.

Genera un'eccezione [invalid_multiple_scheduling](invalid-multiple-scheduling-class.md) se l'handle di attività fornito dal `_Task_handle` parametro è già stato pianificato su un oggetto gruppo di attività tramite il `run` metodo e non è stata chiamata al `wait` `run_and_wait` metodo o su tale gruppo di attività.

## <a name="run_and_wait"></a><a name="run_and_wait"></a> run_and_wait

Pianifica un'attività da eseguire inline sul contesto chiamante con l'assistenza dell' `structured_task_group` oggetto per il supporto completo dell'annullamento. Se un `task_handle` oggetto viene passato come parametro a `run_and_wait` , il chiamante è responsabile della gestione della durata dell' `task_handle` oggetto. La funzione attende quindi che tutto il lavoro nell' `structured_task_group` oggetto sia stato completato o annullato.

```cpp
template<class _Function>
task_group_status run_and_wait(task_handle<_Function>& _Task_handle);

template<class _Function>
task_group_status run_and_wait(const _Function& _Func);
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Tipo dell'oggetto funzione che sarà richiamato per eseguire l'attività.

*_Task_handle*<br/>
Handle per l'attività che verrà eseguito inline nel contesto chiamante. Si noti che il chiamante è responsabile della durata dell'oggetto. Il runtime continuerà a aspettarsi che sia attivo fino al `run_and_wait` termine dell'esecuzione del metodo.

*_Func*<br/>
Funzione che verrà chiamata per richiamare il corpo dell'attività. Può trattarsi di un'espressione lambda o di un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()` .

### <a name="return-value"></a>Valore restituito

Indica se l'attesa è stata soddisfatta o se il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicita o di un'eccezione generata da una delle attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md)

### <a name="remarks"></a>Commenti

Si noti che una o più delle attività pianificate per questo `structured_task_group` oggetto possono essere eseguite inline nel contesto chiamante.

Se una o più delle attività pianificate in questo `structured_task_group` oggetto generano un'eccezione, il runtime selezionerà un'eccezione di questo tipo di scelta e la propagherà dalla chiamata al `run_and_wait` metodo.

Dopo la restituzione da parte di questa funzione, lo stato dell'oggetto `structured_task_group` viene considerato finale e non deve essere utilizzato. Si noti che l'utilizzo dopo la `run_and_wait` restituzione del metodo provocherà un comportamento non definito.

Nel percorso di esecuzione non eccezionale, è necessario chiamare questo metodo o il `wait` metodo prima che il distruttore dell'oggetto `structured_task_group` venga eseguito.

## <a name="structured_task_group"></a><a name="ctor"></a> structured_task_group

Costruisce un oggetto `structured_task_group` nuovo.

```cpp
structured_task_group();

structured_task_group(cancellation_token _CancellationToken);
```

### <a name="parameters"></a>Parametri

*_CancellationToken*<br/>
Token di annullamento da associare a questo gruppo di attività strutturato. Il gruppo di attività strutturato verrà annullato quando il token viene annullato.

### <a name="remarks"></a>Commenti

Tramite il costruttore che accetta un token di annullamento viene creato un oggetto `structured_task_group` che verrà annullato quando l'origine associata al token viene annullata. L'inserimento di un token di annullamento esplicito consente inoltre di isolare il gruppo di attività strutturato dalla partecipazione a un annullamento implicito da un gruppo padre con un token diverso o senza token.

## <a name="structured_task_group"></a><a name="dtor"></a> ~ structured_task_group

Elimina un oggetto `structured_task_group` . Si prevede di chiamare il `wait` `run_and_wait` metodo o sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore non venga eseguito come risultato della rimozione dello stack a causa di un'eccezione.

```cpp
~structured_task_group();
```

### <a name="remarks"></a>Commenti

Se il distruttore viene eseguito come risultato della normale esecuzione (ad esempio, non di rimozione dello stack a causa di un'eccezione) e non `wait` `run_and_wait` sono stati chiamati né i metodi né, il distruttore può generare un'eccezione [missing_wait](missing-wait-class.md) .

## <a name="wait"></a><a name="wait"></a> attendere

Attende il completamento o l'annullamento di tutto il lavoro in `structured_task_group` .

```cpp
task_group_status wait();
```

### <a name="return-value"></a>Valore restituito

Indica se l'attesa è stata soddisfatta o se il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicita o di un'eccezione generata da una delle attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md)

### <a name="remarks"></a>Commenti

Si noti che una o più delle attività pianificate per questo `structured_task_group` oggetto possono essere eseguite inline nel contesto chiamante.

Se una o più delle attività pianificate in questo `structured_task_group` oggetto generano un'eccezione, il runtime selezionerà un'eccezione di questo tipo di scelta e la propagherà dalla chiamata al `wait` metodo.

Dopo la restituzione da parte di questa funzione, lo stato dell'oggetto `structured_task_group` viene considerato finale e non deve essere utilizzato. Si noti che l'utilizzo dopo la `wait` restituzione del metodo provocherà un comportamento non definito.

Nel percorso di esecuzione non eccezionale, è necessario chiamare questo metodo o il `run_and_wait` metodo prima che il distruttore dell'oggetto `structured_task_group` venga eseguito.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe task_group](task-group-class.md)<br/>
[Classe task_handle](task-handle-class.md)
