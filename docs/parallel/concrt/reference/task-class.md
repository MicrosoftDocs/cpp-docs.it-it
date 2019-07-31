---
title: Classe task (runtime di concorrenza)
ms.date: 07/30/2019
f1_keywords:
- task
- PPLTASKS/concurrency::task
- PPLTASKS/concurrency::task::task
- PPLTASKS/concurrency::task::get
- PPLTASKS/concurrency::task::is_apartment_aware
- PPLTASKS/concurrency::task::is_done
- PPLTASKS/concurrency::task::scheduler
- PPLTASKS/concurrency::task::then
- PPLTASKS/concurrency::task::wait
helpviewer_keywords:
- task class
ms.assetid: cdc3a8c0-5cbe-45a0-b5d5-e9f81d94df1a
ms.openlocfilehash: e0f876b3c0971e70763f36622fb72a3dea671461
ms.sourcegitcommit: 725e86dabe2901175ecc63261c3bf05802dddff4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2019
ms.locfileid: "68682523"
---
# <a name="task-class-concurrency-runtime"></a>Classe task (runtime di concorrenza)

Classe `task` Parallel Patterns Library (PPL). Un `task` oggetto rappresenta il lavoro che può essere eseguito in modo asincrono e contemporaneamente con altre attività e il lavoro parallelo prodotto da algoritmi paralleli nel runtime di concorrenza. Produce un risultato di tipo `_ResultType` dopo il corretto completamento. Le attività di tipo `task<void>` non producono risultati. È possibile attendere il completamento di un'attività e annullarla indipendentemente da altre attività. Può anche essere composto con altre attività usando le continuazioni ( `then`) e i modelli join `when_all`() e Choice `when_any`(). Quando un oggetto attività viene assegnato a una nuova variabile, il comportamento è quello di `std::shared_ptr`; in altre parole, entrambi gli oggetti rappresentano la stessa attività sottostante.

## <a name="syntax"></a>Sintassi

```
template <>
class task<void>;

template<typename _ResultType>
class task;
```

#### <a name="parameters"></a>Parametri

*_ResultType*<br/>
Tipo del risultato prodotto dall'attività. 

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Name|Descrizione|
|----------|-----------------|
|`result_type`|Il tipo del risultato prodotto da un oggetto di questa classe.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[task](#ctor)|Di overload. Costruisce un oggetto `task`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get](#get)|Di overload. Restituisce il risultato generato da questa attività. Se l'attività non è in uno stato terminale, una chiamata a `get` attenderà il completamento dell'attività. Questo metodo non restituisce un valore quando viene chiamato su un'attività con un `result_type``void`.|
|[is_apartment_aware](#is_apartment_aware)|Determina se l'attività annulla il wrapping di un'interfaccia `IAsyncInfo` di Windows Runtime o discende da tale attività.|
|[is_done](#is_done)|Determina se l'attività è stata completata.|
|[scheduler](#scheduler)|Restituisce l'utilità di pianificazione per questa attività|
|[then](#then)|Di overload. Aggiunge un'attività di continuazione a questa attività.|
|[wait](#wait)|Attende che l'attività raggiunga uno stato finale. È possibile che tramite `wait` l'attività venga eseguita inline, se tutte le dipendenze di attività vengono soddisfatte e non è già stato selezionato per l'esecuzione da un processo di lavoro in background.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[operator!=](#operator_neq)|Di overload. Determina se due oggetti `task` rappresentano attività interne diverse.|
|[operator=](#operator_eq)|Di overload. Sostituisce il contenuto di un oggetto `task` con un altro.|
|[operator==](#operator_eq_eq)|Di overload. Determina se due oggetti `task` rappresentano la stessa attività interna.|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`task`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppltasks. h

**Spazio dei nomi:** Concurrency

##  <a name="get"></a> get

Restituisce il risultato generato da questa attività. Se l'attività non è in uno stato terminale, una chiamata a `get` attenderà il completamento dell'attività. Questo metodo non restituisce un valore quando viene chiamato su un'attività con un `result_type``void`.

```
_ResultType get() const;

void get() const;
```

### <a name="return-value"></a>Valore restituito

Risultato dell'attività.

### <a name="remarks"></a>Note

Se l'attività viene annullata, una `get` chiamata a genererà un'eccezione [task_canceled](task-canceled-class.md) . Se l'attività ha rilevato un'eccezione diversa o un'eccezione è stata propagata a essa da un'attività precedente, una chiamata a `get` genererà questa eccezione.

> [!IMPORTANT]
>  In un'app piattaforma UWP (Universal Windows Platform) (UWP) non chiamare concurrency [:: Task:: wait](#wait) o `get` ( `wait` calls `get`) nel codice eseguito nel thread dell'interfaccia utente. In caso contrario, il runtime genera [Concurrency:: invalid_operation](invalid-operation-class.md) perché questi metodi bloccano il thread corrente e possono causare la mancata risposta da parte dell'app. Tuttavia, è possibile chiamare il `get` metodo per ricevere il risultato dell'attività precedente in una continuazione basata su attività perché il risultato è immediatamente disponibile.

##  <a name="is_apartment_aware"></a> is_apartment_aware

Determina se l'attività annulla il wrapping di un'interfaccia `IAsyncInfo` di Windows Runtime o discende da tale attività.

```
bool is_apartment_aware() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'attività esegue il wrapping di `IAsyncInfo` un'interfaccia o discende da tale attività; in caso contrario, **false** .

##  <a name="is_done"></a>Metodo Task:: is_done (runtime di concorrenza)

Determina se l'attività è stata completata.

```
bool is_done() const;
```

### <a name="return-value"></a>Valore restituito

True se l'attività è stata completata; in caso contrario, false.

### <a name="remarks"></a>Note

La funzione restituisce true se l'attività è stata completata o annullata (con o senza eccezione dell'utente).

##  <a name="operator_neq"></a>operatore! =

Determina se due oggetti `task` rappresentano attività interne diverse.

```
bool operator!= (const task<_ResultType>& _Rhs) const;

bool operator!= (const task<void>& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Attività da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti si riferiscono a attività sottostanti diverse e **false** in caso contrario.

##  <a name="operator_eq"></a> operator=

Sostituisce il contenuto di un oggetto `task` con un altro.

```
task& operator= (const task& _Other);

task& operator= (task&& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `task` di origine.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Note

Dato che `task` si comporta come un puntatore intelligente, dopo un'operazione di assegnazione di copia, questo oggetto `task` rappresenta la stessa attività effettiva di `_Other`.

##  <a name="operator_eq_eq"></a> operator==

Determina se due oggetti `task` rappresentano la stessa attività interna.

```
bool operator== (const task<_ResultType>& _Rhs) const;

bool operator== (const task<void>& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Attività da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se gli oggetti si riferiscono alla stessa attività sottostante e **false** in caso contrario.

##  <a name="scheduler"></a>Metodo Task:: Scheduler (runtime di concorrenza)

Restituisce l'utilità di pianificazione per questa attività

```
scheduler_ptr scheduler() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'utilità di pianificazione

##  <a name="ctor"></a>attività

Costruisce un oggetto `task`.

```
task();

template<typename T>
__declspec(
    noinline) explicit task(T _Param);

template<typename T>
__declspec(
    noinline) explicit task(T _Param, const task_options& _TaskOptions);

task(
    const task& _Other);

task(
    task&& _Other);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo del parametro dal quale deve essere costruita l'attività.

*_Param*<br/>
Parametro dal quale deve essere costruita l'attività. Potrebbe trattarsi di un'espressione lambda, un oggetto funzione `task_completion_event<result_type>` , un oggetto o un oggetto Windows:: Foundation:: IAsyncInfo se si usano attività nell'app Windows Runtime. L'espressione lambda o l'oggetto funzione deve essere un tipo `std::function<X(void)>`equivalente a, dove X può essere una variabile `result_type`di `task<result_type>`tipo, o Windows:: Foundation:: IAsyncInfo nelle app Windows Runtime.

*_TaskOptions*<br/>
Le opzioni dell'attività includono il token di annullamento, l'utilità di pianificazione e così via

*_Other*<br/>
Oggetto `task` di origine.

### <a name="remarks"></a>Note

Il costruttore predefinito per `task` è presente solo per consentire l'utilizzo delle attività di essere all'interno di contenitori. Un'attività costruita predefinita non può essere utilizzata fino a quando non le verrà assegnata un'attività valida. I metodi come `get` `wait` o `then` generano un'eccezione [invalid_argument](../../../standard-library/invalid-argument-class.md) quando vengono chiamati su un'attività costruita predefinita.

Un'attività creata da `task_completion_event` verrà completata (e le relative continuazioni verranno pianificate) una volta impostato l'evento di completamento dell'attività.

La versione del costruttore che accetta un token di annullamento crea un'attività che può essere annullata utilizzando il `cancellation_token_source` da cui è stato ottenuto il token. Le attività create senza un token di annullamento non sono annullabili.

Le attività create da un'interfaccia `Windows::Foundation::IAsyncInfo` o un'espressione lambda che restituisce un'interfaccia `IAsyncInfo` raggiungono lo stato finale quando l'operazione o l'azione asincrona di Windows Runtime racchiusa viene completata. Analogamente, le attività create da un'espressione lambda tramite cui viene restituito un oggetto `task<result_type>` raggiungono lo stato finale quando l'attività interna raggiunge il relativo stato finale e non quando viene restituito un valore tramite l'espressione lambda.

`task` si comporta come un puntatore intelligente e viene passato in modo sicuro per valore. È possibile accedervi da più thread senza la necessità di blocchi.

Gli overload del costruttore che accettano un'interfaccia Windows:: Foundation:: IAsyncInfo o un'espressione lambda che restituisce tale interfaccia sono disponibili solo per le app Windows Runtime.

Per altre informazioni, vedere [parallelismo delle attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

##  <a name="then"></a>quindi

Aggiunge un'attività di continuazione a questa attività.

```
template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func) const -> typename details::_ContinuationTypeTraits<_Function,
    _ResultType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    const task_options& _TaskOptions) const -> typename details::_ContinuationTypeTraits<_Function,
    _ResultType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    cancellation_token _CancellationToken,
    task_continuation_context _ContinuationContext) const -> typename details::_ContinuationTypeTraits<_Function,
    _ResultType>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    const task_options& _TaskOptions = task_options()) const -> typename details::_ContinuationTypeTraits<_Function,
    void>::_TaskOfType;

template<typename _Function>
__declspec(
    noinline) auto then(const _Function& _Func,
    cancellation_token _CancellationToken,
    task_continuation_context _ContinuationContext) const -> typename details::_ContinuationTypeTraits<_Function,
    void>::_TaskOfType;
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Tipo dell'oggetto funzione che sarà richiamato da questa attività.

*_Func*<br/>
Funzione di continuazione da eseguire quando questa attività viene completata. Questa funzione di continuazione deve accettare come input una variabile oppure `result_type` o `task<result_type>`, dove `result_type` è il tipo di risultato prodotto da questa attività.

*_TaskOptions*<br/>
Le opzioni di attività includono il token di annullamento, l'utilità di pianificazione e il contesto di continuazione. Per impostazione predefinita, le precedenti 3 opzioni vengono ereditate dall'attività precedente

*_CancellationToken*<br/>
Token di annullamento da associare all'attività di continuazione. Un'attività di continuazione creata senza un token di annullamento erediterà il token della relativa attività precedente.

*_ContinuationContext*<br/>
Variabile che specifica la posizione in cui deve essere eseguita la continuazione. Questa variabile è utile solo quando viene usata in un'app UWP. Per ulteriori informazioni, vedere [task_continuation_context](task-continuation-context-class.md)

### <a name="return-value"></a>Valore restituito

L'attività di continuazione appena creata. Il tipo di risultato dell'attività restituita è determinato da ciò che viene restituito da `_Func`.

### <a name="remarks"></a>Note

Gli overload di `then` che accettano un'espressione lambda o un functor che restituisce un'interfaccia Windows:: Foundation:: IAsyncInfo sono disponibili solo per le app Windows Runtime.

Per altre informazioni su come usare le continuazioni di attività per comporre un lavoro asincrono, vedere Parallelismo delle [attività](../../../parallel/concrt/task-parallelism-concurrency-runtime.md).

##  <a name="wait"></a>attendere

Attende che l'attività raggiunga uno stato finale. È possibile che tramite `wait` l'attività venga eseguita inline, se tutte le dipendenze di attività vengono soddisfatte e non è già stato selezionato per l'esecuzione da un processo di lavoro in background.

```
task_status wait() const;
```

### <a name="return-value"></a>Valore restituito

Valore `task_status` che potrebbe essere `completed` o `canceled`. Se l'attività ha rilevato un'eccezione durante l'esecuzione o un'eccezione è stata propagata a essa da un'attività precedente, l'oggetto `wait` genererà questa eccezione.

### <a name="remarks"></a>Note

> [!IMPORTANT]
>  In un'app piattaforma UWP (Universal Windows Platform) (UWP) non chiamare `wait` nel codice eseguito nel thread dell'interfaccia utente. In caso contrario, il runtime genera [concurrency::invalid_operation](invalid-operation-class.md) poiché questo metodo blocca il thread corrente e può provocare la mancata risposta da parte dell'app. È tuttavia possibile chiamare il metodo [concurrency::task::get](#get) per ricevere il risultato dell'attività antecedente in una continuazione basata su attività.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
