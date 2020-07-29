---
title: Classe task_group
ms.date: 07/20/2018
f1_keywords:
- task_group
- PPL/concurrency::task_group
- PPL/concurrency::task_group::task_group
helpviewer_keywords:
- task_group class
ms.openlocfilehash: 4d11a7fc25d95884418a3062721df75cc11be520
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224955"
---
# <a name="task_group-class"></a>Classe task_group

La classe `task_group` rappresenta una raccolta di lavoro parallelo che può essere messa in attesa o annullata.

## <a name="syntax"></a>Sintassi

```cpp
class task_group;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[task_group](#ctor)|Di overload. Costruisce un oggetto `task_group` nuovo.|
|[distruttore ~ task_group](#dtor)|Elimina un oggetto `task_group` . Si prevede di chiamare il `wait` `run_and_wait` metodo o sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore non sia in esecuzione come risultato della rimozione dello stack a causa di un'eccezione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[cancel](#cancel)|Tenta di annullare il sottoalbero di lavoro radice in questo gruppo di attività. Ogni attività pianificata nel gruppo di attività viene annullata in modo transitivo, se possibile.|
|[is_canceling](#is_canceling)|Informa il chiamante se il gruppo di attività è attualmente in fase di annullamento. Questa operazione non indica necessariamente che il `cancel` metodo è stato chiamato sull' `task_group` oggetto, sebbene tale metodo possa certamente essere restituito **`true`** . È possibile che l' `task_group` oggetto sia in esecuzione inline e che un gruppo di attività più in alto nell'albero di lavoro sia stato annullato. Nei casi in cui il runtime è in grado di determinare in anticipo il flusso dell'annullamento attraverso questo `task_group` oggetto, **`true`** verrà restituito anche.|
|[Correre](#run)|Di overload. Pianifica un'attività nell' `task_group` oggetto. Se un `task_handle` oggetto viene passato come parametro a `run` , il chiamante è responsabile della gestione della durata dell' `task_handle` oggetto. La versione del metodo che accetta un riferimento a un oggetto funzione come parametro comporta l'allocazione dell'heap all'interno del runtime, che può essere eseguita in modo meno efficace rispetto all'utilizzo della versione che accetta un riferimento a un `task_handle` oggetto. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.|
|[run_and_wait](#run_and_wait)|Di overload. Pianifica un'attività da eseguire inline sul contesto chiamante con l'assistenza dell' `task_group` oggetto per il supporto completo dell'annullamento. La funzione attende quindi che tutto il lavoro nell' `task_group` oggetto sia stato completato o annullato. Se un `task_handle` oggetto viene passato come parametro a `run_and_wait` , il chiamante è responsabile della gestione della durata dell' `task_handle` oggetto.|
|[attendere](#wait)|Attende che tutto il lavoro nell' `task_group` oggetto sia stato completato o annullato.|

## <a name="remarks"></a>Osservazioni

A differenza della classe fortemente limitata `structured_task_group` , la `task_group` classe è un costrutto molto più generale. Non presenta alcuna restrizione descritta da [structured_task_group](structured-task-group-class.md). `task_group`gli oggetti possono essere utilizzati in modo sicuro tra i thread e utilizzati in modi in formato libero. Lo svantaggio del `task_group` costrutto è che potrebbe non funzionare e il `structured_task_group` costrutto per le attività che eseguono piccole quantità di lavoro.

Per altre informazioni, vedere [parallelismo delle attività](../task-parallelism-concurrency-runtime.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`task_group`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="cancel"></a><a name="cancel"></a>Annulla

Tenta di annullare il sottoalbero di lavoro radice in questo gruppo di attività. Ogni attività pianificata nel gruppo di attività viene annullata in modo transitivo, se possibile.

```cpp
void cancel();
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [annullamento](../cancellation-in-the-ppl.md).

## <a name="is_canceling"></a><a name="is_canceling"></a>is_canceling

Informa il chiamante se il gruppo di attività è attualmente in fase di annullamento. Questa operazione non indica necessariamente che il `cancel` metodo è stato chiamato sull' `task_group` oggetto, sebbene tale metodo possa certamente essere restituito **`true`** . È possibile che l' `task_group` oggetto sia in esecuzione inline e che un gruppo di attività più in alto nell'albero di lavoro sia stato annullato. Nei casi in cui il runtime è in grado di determinare in anticipo il flusso dell'annullamento attraverso questo `task_group` oggetto, **`true`** verrà restituito anche.

```cpp
bool is_canceling();
```

### <a name="return-value"></a>Valore restituito

Indica se l' `task_group` oggetto è nel periodo di annullamento (o è sicuramente breve).

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [annullamento](../cancellation-in-the-ppl.md).

## <a name="run"></a><a name="run"></a>Correre

Pianifica un'attività nell' `task_group` oggetto. Se un `task_handle` oggetto viene passato come parametro a `run` , il chiamante è responsabile della gestione della durata dell' `task_handle` oggetto. La versione del metodo che accetta un riferimento a un oggetto funzione come parametro comporta l'allocazione dell'heap all'interno del runtime, che può essere eseguita in modo meno efficace rispetto all'utilizzo della versione che accetta un riferimento a un `task_handle` oggetto. La versione che accetta il parametro `_Placement` comporta che per l'attività venga data priorità all'esecuzione nella posizione specificata da quel parametro.

```cpp
template<
   typename _Function
>
void run(
   const _Function& _Func
);

template<
   typename _Function
>
void run(
   const _Function& _Func,
   location& _Placement
);

template<
   typename _Function
>
void run(
   task_handle<_Function>& _Task_handle
);

template<
   typename _Function
>
void run(
   task_handle<_Function>& _Task_handle,
   location& _Placement
);
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Tipo dell'oggetto funzione che verrà richiamato per eseguire il corpo dell'handle dell'attività.

*_Func*<br/>
Funzione che verrà chiamata per richiamare il corpo dell'attività. Può trattarsi di un'espressione lambda o di un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()` .

*_Placement*<br/>
Riferimento alla posizione in cui deve essere eseguita l'attività rappresentata dal parametro `_Func`.

*_Task_handle*<br/>
Handle per il lavoro pianificato. Si noti che il chiamante è responsabile della durata dell'oggetto. Il runtime continuerà a aspettarsi che sia attivo fino a quando non viene `wait` `run_and_wait` chiamato il metodo o per questo `task_group` oggetto.

### <a name="remarks"></a>Osservazioni

Il runtime pianifica la funzione lavoro fornita in modo da essere eseguita in un secondo momento, che può essere successiva alla restituzione della funzione chiamante. Questo metodo usa un oggetto [task_handle](task-handle-class.md) per conservare una copia della funzione lavoro specificata. Tutte le modifiche di stato che si verificano in un oggetto funzione passato a questo metodo non verranno pertanto visualizzate nella copia dell'oggetto funzione. Assicurarsi inoltre che la durata di tutti gli oggetti passati in base al puntatore o al riferimento alla funzione lavoro rimanga valida fino a quando la funzione lavoro non restituisce.

Se `task_group` viene distrutto come risultato della rimozione dello stack da un'eccezione, non è necessario garantire che sia stata effettuata una chiamata al `wait` `run_and_wait` metodo o. In questo caso, il distruttore verrà annullato in modo appropriato e attenderà il completamento dell'attività rappresentata dal `_Task_handle` parametro.

Il metodo genera un'eccezione [invalid_multiple_scheduling](invalid-multiple-scheduling-class.md) se l'handle di attività fornito dal `_Task_handle` parametro è già stato pianificato su un oggetto gruppo di attività tramite il `run` metodo e non è stata chiamata alcuna chiamata al `wait` metodo o `run_and_wait` in tale gruppo di attività.

## <a name="run_and_wait"></a><a name="run_and_wait"></a>run_and_wait

Pianifica un'attività da eseguire inline sul contesto chiamante con l'assistenza dell' `task_group` oggetto per il supporto completo dell'annullamento. La funzione attende quindi che tutto il lavoro nell' `task_group` oggetto sia stato completato o annullato. Se un `task_handle` oggetto viene passato come parametro a `run_and_wait` , il chiamante è responsabile della gestione della durata dell' `task_handle` oggetto.

```cpp
template<
   class _Function
>
task_group_status run_and_wait(
   task_handle<_Function>& _Task_handle
);

template<
   class _Function
>
task_group_status run_and_wait(
   const _Function& _Func
);
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Tipo dell'oggetto funzione che sarà richiamato per eseguire il corpo dell'attività.

*_Task_handle*<br/>
Handle per l'attività che verrà eseguito inline nel contesto chiamante. Si noti che il chiamante è responsabile della durata dell'oggetto. Il runtime continuerà a aspettarsi che sia attivo fino al `run_and_wait` termine dell'esecuzione del metodo.

*_Func*<br/>
Funzione che verrà chiamata per richiamare il corpo dell'attività. Può trattarsi di un'espressione lambda o di un altro oggetto che supporta una versione dell'operatore di chiamata di funzione con la firma `void operator()()` .

### <a name="return-value"></a>Valore restituito

Indica se l'attesa è stata soddisfatta o se il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicita o di un'eccezione generata da una delle attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md#task_group_status).

### <a name="remarks"></a>Osservazioni

Si noti che una o più delle attività pianificate per questo `task_group` oggetto possono essere eseguite inline nel contesto chiamante.

Se una o più delle attività pianificate in questo `task_group` oggetto generano un'eccezione, il runtime selezionerà un'eccezione di questo tipo di scelta e la propagherà dalla chiamata al `run_and_wait` metodo.

Quando viene restituito dal `run_and_wait` metodo su un `task_group` oggetto, il Runtime reimposta l'oggetto su uno stato pulito dove può essere riutilizzato. Ciò include il caso in cui l' `task_group` oggetto è stato annullato.

Nel percorso di esecuzione non eccezionale, è necessario chiamare questo metodo o il `wait` metodo prima che il distruttore dell'oggetto `task_group` venga eseguito.

## <a name="task_group"></a><a name="ctor"></a>task_group

Costruisce un oggetto `task_group` nuovo.

```cpp
task_group();

task_group(
   cancellation_token _CancellationToken
);
```

### <a name="parameters"></a>Parametri

*_CancellationToken*<br/>
Token di annullamento da associare a questo gruppo di attività. Il gruppo di attività verrà annullato quando il token viene annullato.

### <a name="remarks"></a>Osservazioni

Tramite il costruttore che accetta un token di annullamento viene creato un oggetto `task_group` che verrà annullato quando l'origine associata al token viene annullata. Fornire un token di annullamento esplicito permette di isolare questo gruppo di attività dalla partecipazione a un annullamento implicito di un gruppo padre con un token diverso o senza token.

## <a name="task_group"></a><a name="dtor"></a>~ task_group

Elimina un oggetto `task_group` . Si prevede di chiamare il `wait` `run_and_wait` metodo o sull'oggetto prima dell'esecuzione del distruttore, a meno che il distruttore non sia in esecuzione come risultato della rimozione dello stack a causa di un'eccezione.

```cpp
~task_group();
```

### <a name="remarks"></a>Osservazioni

Se il distruttore viene eseguito come risultato della normale esecuzione (ad esempio, non di rimozione dello stack a causa di un'eccezione) e non `wait` `run_and_wait` sono stati chiamati né i metodi né, il distruttore può generare un'eccezione [missing_wait](missing-wait-class.md) .

## <a name="wait"></a><a name="wait"></a>attendere

Attende che tutto il lavoro nell' `task_group` oggetto sia stato completato o annullato.

```cpp
task_group_status wait();
```

### <a name="return-value"></a>Valore restituito

Indica se l'attesa è stata soddisfatta o se il gruppo di attività è stato annullato a causa di un'operazione di annullamento esplicita o di un'eccezione generata da una delle attività. Per ulteriori informazioni, vedere [task_group_status](concurrency-namespace-enums.md#task_group_status).

### <a name="remarks"></a>Osservazioni

Si noti che una o più delle attività pianificate per questo `task_group` oggetto possono essere eseguite inline nel contesto chiamante.

Se una o più delle attività pianificate in questo `task_group` oggetto generano un'eccezione, il runtime selezionerà un'eccezione di questo tipo di scelta e la propagherà dalla chiamata al `wait` metodo.

La chiamata a `wait` su un `task_group` oggetto lo reimposta su uno stato pulito dove può essere riutilizzato. Ciò include il caso in cui l' `task_group` oggetto è stato annullato.

Nel percorso di esecuzione non eccezionale, è necessario chiamare questo metodo o il `run_and_wait` metodo prima che il distruttore dell'oggetto `task_group` venga eseguito.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Classe structured_task_group](structured-task-group-class.md)<br/>
[Classe task_handle](task-handle-class.md)
