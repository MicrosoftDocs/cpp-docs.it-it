---
title: Classe task_continuation_context
ms.date: 11/04/2016
f1_keywords:
- task_continuation_context
- PPLTASKS/concurrency::task_continuation_context
- PPLTASKS/concurrency::task_continuation_context::get_current_winrt_context
- PPLTASKS/concurrency::task_continuation_context::use_arbitrary
- PPLTASKS/concurrency::task_continuation_context::use_current
- PPLTASKS/concurrency::task_continuation_context::use_default
- PPLTASKS/concurrency::task_continuation_context::use_synchronous_execution
helpviewer_keywords:
- task_continuation_context class
ms.assetid: 1fb5a76a-3682-45c2-a615-8b6b527741f0
ms.openlocfilehash: 5f358dbc61fc39928e877dbc3673a8b9f51917eb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50582511"
---
# <a name="taskcontinuationcontext-class"></a>Classe task_continuation_context

La classe `task_continuation_context` consente di specificare dove eseguire una continuazione. È utile solo utilizzare questa classe da un'app di Windows Runtime. Per le app non di Windows Runtime, il contesto di esecuzione della continuazione attività è determinato dal runtime e non è configurabile.

## <a name="syntax"></a>Sintassi

```
class task_continuation_context : public details::_ContextCallback;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[get_current_winrt_context](#get_current_winrt_context)|Restituisce un oggetto contesto di continuazione di attività che rappresenta il contesto del thread corrente winrt.|
|[use_arbitrary](#use_arbitrary)|Crea un contesto di continuazione delle attività che consente al runtime di scegliere il contesto di esecuzione per una continuazione.|
|[use_current](#use_current)|Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione corrente.|
|[use_default](#use_default)|Crea il contesto di continuazione di attività predefinito.|
|[use_synchronous_execution](#use_synchronous_execution)|Restituisce un oggetto contesto di continuazione di attività che rappresenta il contesto di esecuzione sincrona.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`_ContextCallback`

`task_continuation_context`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppltasks. h

**Spazio dei nomi:** Concurrency

## <a name="get_current_winrt_context"></a> get_current_winrt_context

Restituisce un oggetto contesto di continuazione di attività che rappresenta il contesto del thread corrente WinRT.

## <a name="syntax"></a>Sintassi

```
static task_continuation_context get_current_winrt_context();
```

## <a name="return-value"></a>Valore restituito

Il contesto del thread fase di esecuzione di Windows corrente. Restituisce una vuota task_continuation_context se chiamato da un contesto non di Windows Runtime.

## <a name="remarks"></a>Note

Il `get_current_winrt_context` metodo acquisisce contesto del thread fase di esecuzione di Windows del chiamante. Restituisce un contesto vuoto per i chiamanti non di Windows Runtime.

Il valore restituito da `get_current_winrt_context` può essere utilizzato per indicare al Runtime che la continuazione deve essere eseguita nel modello di apartment del contesto acquisito (STA e MTA), indipendentemente dal fatto che l'attività precedente riconosce apartment. Un'attività è un'attività che annulla il wrapping di un Runtime di Windows di apartment `IAsyncInfo` interfaccia o un'attività che è discesa da tale attività.

Questo metodo è simile al `use_current` (metodo), ma è anche disponibile per codice C++ nativo senza C + + / supporto delle estensioni di CX. Si è destinato utilizzato da avanzati agli utenti la scrittura C + + c++ /CLI codice di libreria indipendente dalla CX sia native che i chiamanti di Windows Runtime. A meno che non necessaria questa funzionalità, è consigliabile il `use_current` metodo, che è disponibile solo per C + + / client CX.

##  <a name="use_arbitrary"></a> use_arbitrary

Crea un contesto di continuazione delle attività che consente al runtime di scegliere il contesto di esecuzione per una continuazione.

```
static task_continuation_context use_arbitrary();
```

### <a name="return-value"></a>Valore restituito

Un contesto di continuazione di attività che rappresenta un percorso arbitrario.

### <a name="remarks"></a>Note

Quando il contesto di continuazione viene utilizzato la continuazione verrà eseguita in un contesto in cui che il runtime sceglie anche se l'attività precedente riconosce apartment.

`use_arbitrary` Consente di disattivare il comportamento predefinito per una continuazione su un'attività con riconoscimento dell'apartment creata in uno STA.

Questo metodo è disponibile solo per le app di Windows Runtime.

##  <a name="use_current"></a> use_current

Restituisce un oggetto del contesto di continuazione di attività che rappresenta il contesto di esecuzione corrente.

```
static task_continuation_context use_current();
```

### <a name="return-value"></a>Valore restituito

Contesto di esecuzione corrente.

### <a name="remarks"></a>Note

Questo metodo acquisisce il contesto del chiamante Windows Runtime in modo che possono essere eseguite le continuazioni nell'apartment corretto.

Il valore restituito da `use_current` può essere utilizzato per indicare al Runtime che la continuazione deve essere eseguito nel contesto acquisito (STA e MTA) indipendentemente dal fatto che sia o meno l'attività precedente riconosce apartment. Un'attività è un'attività che annulla il wrapping di un Runtime di Windows di apartment `IAsyncInfo` interfaccia o un'attività che è discesa da tale attività.

Questo metodo è disponibile solo per le app di Windows Runtime.

##  <a name="use_default"></a> use_default

Crea il contesto di continuazione di attività predefinito.

```
static task_continuation_context use_default();
```

### <a name="return-value"></a>Valore restituito

Il contesto di continuazione predefinito.

### <a name="remarks"></a>Note

Viene utilizzato il contesto predefinito se non si specifica un contesto di continuazione quando si chiama il `then` (metodo). Nelle applicazioni di Windows per Windows 7 e versioni precedenti, nonché le applicazioni desktop su Windows 8 e versioni successive, il runtime determina dove eseguirà le continuazioni di attività. Tuttavia, in un'app di Windows Runtime, il contesto di continuazione predefinito per una continuazione su un'attività di supporto di apartment è l'apartment in cui `then` viene richiamato.

Un'attività è un'attività che annulla il wrapping di un Runtime di Windows di apartment `IAsyncInfo` interfaccia o un'attività che è discesa da tale attività. Pertanto, se si pianifica una continuazione su un'attività con riconoscimento apartment in un Windows Runtime STA, la continuazione verrà eseguita in tale STA.

Una continuazione su un'attività che supporta l'apartment non verrà eseguita in un contesto in cui che il Runtime sceglie.

## <a name="use_synchronous_execution"></a> task_continuation_context::use_synchronous_execution

Restituisce un oggetto contesto di continuazione di attività che rappresenta il contesto di esecuzione sincrona.

## <a name="syntax"></a>Sintassi

```
static task_continuation_context use_synchronous_execution();
```

## <a name="return-value"></a>Valore restituito

Il contesto di esecuzione sincrona.

## <a name="remarks"></a>Note

Il `use_synchronous_execution` metodo forza l'attività di continuazione da eseguire in modo sincrono nel contesto, che causa il completamento dell'attività precedente.

Se l'attività precedente è stata già completata quando la continuazione viene collegata, la continuazione verrà eseguita in modo sincrono nel contesto del che collega la continuazione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
