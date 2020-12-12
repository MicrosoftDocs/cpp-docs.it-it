---
description: 'Altre informazioni su: classe Agent'
title: Classe agent
ms.date: 11/04/2016
f1_keywords:
- agent
- AGENTS/concurrency::agent
- AGENTS/concurrency::agent::agent
- AGENTS/concurrency::agent::cancel
- AGENTS/concurrency::agent::start
- AGENTS/concurrency::agent::status
- AGENTS/concurrency::agent::status_port
- AGENTS/concurrency::agent::wait
- AGENTS/concurrency::agent::wait_for_all
- AGENTS/concurrency::agent::wait_for_one
- AGENTS/concurrency::agent::done
- AGENTS/concurrency::agent::run
helpviewer_keywords:
- agent class
ms.assetid: 1b09e3d2-5e37-4966-b016-907ef1512456
ms.openlocfilehash: 74be31ad13eab6a026a11dbcc2b20719e98ee868
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172271"
---
# <a name="agent-class"></a>Classe agent

Classe destinata a essere usata come classe di base per tutti gli agenti indipendenti. Consente di nascondere lo stato ad altri agenti e di interagire attraverso il passaggio di messaggi.

## <a name="syntax"></a>Sintassi

```cpp
class agent;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[agente](#ctor)|Di overload. Costruisce un agente.|
|[~ distruttore agenti](#dtor)|Elimina definitivamente l'agente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[cancel](#cancel)|Sposta un agente dagli `agent_created` `agent_runnable` Stati o allo `agent_canceled` stato.|
|[start](#start)|Sposta un agente dallo `agent_created` stato allo `agent_runnable` stato e lo pianifica per l'esecuzione.|
|[Stato](#status)|Origine sincrona delle informazioni sullo stato dell'agente.|
|[status_port](#status_port)|Origine asincrona delle informazioni sullo stato dell'agente.|
|[attendere](#wait)|Attende il completamento dell'attività da un agente.|
|[wait_for_all](#wait_for_all)|Attende il completamento delle attività di tutti gli agenti specificati.|
|[wait_for_one](#wait_for_one)|Attende che uno degli agenti specificati completi l'attività.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[Fine](#done)|Sposta un agente nello `agent_done` stato, a indicare che l'agente è stato completato.|
|[Correre](#run)|Rappresenta l'attività principale di un agente. `run` deve essere sottoposto a override in una classe derivata e specifica le operazioni che l'agente deve eseguire dopo l'avvio.|

## <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [Asynchronous Agents](../../../parallel/concrt/asynchronous-agents.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`agent`

## <a name="requirements"></a>Requisiti

**Intestazione:** agents.h

**Spazio dei nomi:** Concurrency

## <a name="agent"></a><a name="ctor"></a> agente

Costruisce un agente.

```cpp
agent();

agent(Scheduler& _PScheduler);

agent(ScheduleGroup& _PGroup);
```

### <a name="parameters"></a>Parametri

*_PScheduler*<br/>
`Scheduler`Oggetto all'interno del quale è pianificata l'attività di esecuzione dell'agente.

*_PGroup*<br/>
`ScheduleGroup`Oggetto all'interno del quale è pianificata l'attività di esecuzione dell'agente. L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.

### <a name="remarks"></a>Commenti

Se non si specificano i parametri `_PScheduler` o `_PGroup` , il runtime usa l'utilità di pianificazione predefinita.

## <a name="agent"></a><a name="dtor"></a> ~ Agent

Elimina definitivamente l'agente.

```cpp
virtual ~agent();
```

### <a name="remarks"></a>Commenti

Non è possibile eliminare definitivamente un agente che non si trova in uno stato terminale ( `agent_done` o `agent_canceled` ). Questo può essere evitato attendendo che l'agente raggiunga uno stato terminale nel distruttore di una classe che eredita dalla `agent` classe.

## <a name="cancel"></a><a name="cancel"></a> Annulla

Sposta un agente dagli `agent_created` `agent_runnable` Stati o allo `agent_canceled` stato.

```cpp
bool cancel();
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'agente è stato annullato; **`false`** in caso contrario,. Non è possibile annullare l'esecuzione di un agente se è già stata avviata o è già stata completata.

## <a name="done"></a><a name="done"></a> eseguita

Sposta un agente nello `agent_done` stato, a indicare che l'agente è stato completato.

```cpp
bool done();
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'agente viene spostato nello `agent_done` stato; **`false`** in caso contrario,. Non è possibile spostare un agente che è stato annullato nello `agent_done` stato.

### <a name="remarks"></a>Commenti

Questo metodo deve essere chiamato alla fine del `run` metodo, quando si sa che l'esecuzione dell'agente è stata completata.

## <a name="run"></a><a name="run"></a> Correre

Rappresenta l'attività principale di un agente. `run` deve essere sottoposto a override in una classe derivata e specifica le operazioni che l'agente deve eseguire dopo l'avvio.

```cpp
virtual void run() = 0;
```

### <a name="remarks"></a>Commenti

Lo stato dell'agente viene impostato su `agent_started` right prima che questo metodo venga richiamato. Il metodo deve richiamare `done` sull'agente con lo stato appropriato prima di restituire e non può generare eccezioni.

## <a name="start"></a><a name="start"></a> iniziare

Sposta un agente dallo `agent_created` stato allo `agent_runnable` stato e lo pianifica per l'esecuzione.

```cpp
bool start();
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l'agente è stato avviato correttamente; **`false`** in caso contrario,. Non è possibile avviare un agente che è stato annullato.

## <a name="status"></a><a name="status"></a> stato

Origine sincrona delle informazioni sullo stato dell'agente.

```cpp
agent_status status();
```

### <a name="return-value"></a>Valore restituito

Restituisce lo stato corrente dell'agente. Si noti che questo stato restituito potrebbe cambiare immediatamente dopo essere stato restituito.

## <a name="status_port"></a><a name="status_port"></a> status_port

Origine asincrona delle informazioni sullo stato dell'agente.

```cpp
ISource<agent_status>* status_port();
```

### <a name="return-value"></a>Valore restituito

Restituisce un'origine del messaggio che può inviare messaggi sullo stato corrente dell'agente.

## <a name="wait"></a><a name="wait"></a> attendere

Attende il completamento dell'attività da un agente.

```cpp
static agent_status __cdecl wait(
    _Inout_ agent* _PAgent,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### <a name="parameters"></a>Parametri

*_PAgent*<br/>
Puntatore all'agente da attendere.

*_Timeout*<br/>
Tempo massimo di attesa, in millisecondi.

### <a name="return-value"></a>Valore restituito

Oggetto `agent_status` dell'agente al completamento dell'attesa. Può essere `agent_canceled` o `agent_done` .

### <a name="remarks"></a>Commenti

Un'attività di Agent viene completata quando l'agente immette `agent_canceled` gli `agent_done` Stati o.

Se il parametro `_Timeout` ha un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE` , viene generata l'eccezione [operation_timed_out](operation-timed-out-class.md) se il periodo di tempo specificato scade prima che l'agente abbia completato l'attività.

## <a name="wait_for_all"></a><a name="wait_for_all"></a> wait_for_all

Attende il completamento delle attività di tutti gli agenti specificati.

```cpp
static void __cdecl wait_for_all(
    size_t count,
    _In_reads_(count) agent** _PAgents,
    _Out_writes_opt_(count) agent_status* _PStatus = NULL,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### <a name="parameters"></a>Parametri

*count*<br/>
Numero di puntatori di agente presenti nella matrice `_PAgents` .

*_PAgents*<br/>
Matrice di puntatori agli agenti da attendere.

*_PStatus*<br/>
Puntatore a una matrice di stati degli agenti. Ogni valore di stato rappresenterà lo stato dell'agente corrispondente quando il metodo restituisce.

*_Timeout*<br/>
Tempo massimo di attesa, in millisecondi.

### <a name="remarks"></a>Commenti

Un'attività di Agent viene completata quando l'agente immette `agent_canceled` gli `agent_done` Stati o.

Se il parametro `_Timeout` ha un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE` , viene generata l'eccezione [operation_timed_out](operation-timed-out-class.md) se il periodo di tempo specificato scade prima che l'agente abbia completato l'attività.

## <a name="wait_for_one"></a><a name="wait_for_one"></a> wait_for_one

Attende che uno degli agenti specificati completi l'attività.

```cpp
static void __cdecl wait_for_one(
    size_t count,
    _In_reads_(count) agent** _PAgents,
    agent_status& _Status,
    size_t& _Index,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### <a name="parameters"></a>Parametri

*count*<br/>
Numero di puntatori di agente presenti nella matrice `_PAgents` .

*_PAgents*<br/>
Matrice di puntatori agli agenti da attendere.

*_Status*<br/>
Riferimento a una variabile in cui verrà inserito lo stato dell'agente.

*_Index*<br/>
Riferimento a una variabile in cui verrà inserito l'indice dell'agente.

*_Timeout*<br/>
Tempo massimo di attesa, in millisecondi.

### <a name="remarks"></a>Commenti

Un'attività di Agent viene completata quando l'agente immette `agent_canceled` gli `agent_done` Stati o.

Se il parametro `_Timeout` ha un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE` , viene generata l'eccezione [operation_timed_out](operation-timed-out-class.md) se il periodo di tempo specificato scade prima che l'agente abbia completato l'attività.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
