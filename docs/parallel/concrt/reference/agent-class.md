---
title: Classe Agent | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- agent class
ms.assetid: 1b09e3d2-5e37-4966-b016-907ef1512456
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fbc8542af8073b2cb95517ea39d89258afac633c
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33694157"
---
# <a name="agent-class"></a>Classe agent
Classe destinata a essere usata come classe di base per tutti gli agenti indipendenti. Consente di nascondere lo stato ad altri agenti e di interagire attraverso il passaggio di messaggi.  
  
## <a name="syntax"></a>Sintassi  
  
```
class agent;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[agent](#ctor)|Di overload. Costruisce un agente.|  
|[~ agente distruttore](#dtor)|Elimina l'agente.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[cancel](#cancel)|Sposta un agente da uno di `agent_created` o `agent_runnable` stati dal `agent_canceled` dello stato.|  
|[start](#start)|Sposta un agente dal `agent_created` allo stato di `agent_runnable` stato e lo pianifica per l'esecuzione.|  
|[status](#status)|Un'origine sincrona di informazioni sullo stato dell'agente.|  
|[status_port](#status_port)|Un'origine asincrona di informazioni sullo stato dell'agente.|  
|[wait](#wait)|Attende che un agente completare l'attività.|  
|[wait_for_all](#wait_for_all)|Attende che tutti gli agenti specificati per completare le attività.|  
|[wait_for_one](#wait_for_one)|Attende che uno degli agenti per completare l'attività specificati.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operazione eseguita](#done)|Sposta un agente nel `agent_done` stato, che indica che l'agente è stata completata.|  
|[run](#run)|Rappresenta l'attività principale di un agente. `run` deve essere sottoposto a override in una classe derivata e specifica che l'agente deve essere eseguita dopo che è stata avviata.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [agenti asincroni](../../../parallel/concrt/asynchronous-agents.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `agent`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a> Agente 

 Costruisce un agente.  
  
```
agent();

agent(Scheduler& _PScheduler);

agent(ScheduleGroup& _PGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `_PScheduler`  
 Il `Scheduler` dell'oggetto in cui è pianificata l'attività di esecuzione dell'agente.  
  
 `_PGroup`  
 Il `ScheduleGroup` dell'oggetto in cui è pianificata l'attività di esecuzione dell'agente. L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
### <a name="remarks"></a>Note  
 Il runtime utilizza l'utilità di pianificazione predefinita se non si specifica il `_PScheduler` o `_PGroup` parametri.  
  
##  <a name="dtor"></a> ~ agent 

 Elimina l'agente.  
  
```
virtual ~agent();
```  
  
### <a name="remarks"></a>Note  
 È un errore per eliminare un agente che non è in uno stato finale (sia `agent_done` o `agent_canceled`). Questo può essere evitato l'attesa per l'agente raggiungere uno stato finale nel distruttore di una classe che eredita la `agent` classe.  
  
##  <a name="cancel"></a> Annulla 

 Sposta un agente da uno di `agent_created` o `agent_runnable` stati dal `agent_canceled` dello stato.  
  
```
bool cancel();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'agente è stata annullata, `false` in caso contrario. Un agente non può essere annullato se è già stato avviato in esecuzione o è già stata completata.  
  
##  <a name="done"></a> Operazione eseguita 

 Sposta un agente nel `agent_done` stato, che indica che l'agente è stata completata.  
  
```
bool done();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'agente viene spostato il `agent_done` stato `false` in caso contrario. Impossibile spostare un agente che è stato annullato la `agent_done` stato.  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato alla fine del `run` metodo, quando si conosce l'esecuzione dell'agente è stata completata.  
  
##  <a name="run"></a> Correre 

 Rappresenta l'attività principale di un agente. `run` deve essere sottoposto a override in una classe derivata e specifica che l'agente deve essere eseguita dopo che è stata avviata.  
  
```
virtual void run() = 0;
```  
  
### <a name="remarks"></a>Note  
 Lo stato dell'agente viene modificato in `agent_started` destro del mouse prima che venga richiamato questo metodo. Il metodo deve richiamare `done` sull'agente con stato appropriato prima della restituzione e non può generare eccezioni.  
  
##  <a name="start"></a> Inizio 

 Sposta un agente dal `agent_created` allo stato di `agent_runnable` stato e lo pianifica per l'esecuzione.  
  
```
bool start();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'agente è stato avviato correttamente, `false` in caso contrario. Impossibile avviare un agente che è stato annullato.  
  
##  <a name="status"></a> Stato 

 Un'origine sincrona di informazioni sullo stato dell'agente.  
  
```
agent_status status();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce lo stato corrente dell'agente. Si noti che questo stato restituito potrebbe cambiare immediatamente dopo la restituzione.  
  
##  <a name="status_port"></a> status_port 

 Un'origine asincrona di informazioni sullo stato dell'agente.  
  
```
ISource<agent_status>* status_port();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un messaggio di origine che può inviare messaggi sullo stato corrente dell'agente.  
  
##  <a name="wait"></a> attesa 

 Attende che un agente completare l'attività.  
  
```
static agent_status __cdecl wait(
    _Inout_ agent* _PAgent,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `_PAgent`  
 Un puntatore all'agente di attesa.  
  
 `_Timeout`  
 Il tempo massimo di attesa, espresso in millisecondi.  
  
### <a name="return-value"></a>Valore restituito  
 Il `agent_status` dell'agente al termine dell'attesa. Può essere `agent_canceled` o `agent_done`.  
  
### <a name="remarks"></a>Note  
 Un'attività dell'agente viene completata quando l'agente viene spostato il `agent_canceled` o `agent_done` stati.  
  
 Se il parametro `_Timeout` presenta un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE`, l'eccezione [operation_timed_out](operation-timed-out-class.md) viene generata se la quantità specificata di tempo scade prima che l'agente è stata completata l'attività.  
  
##  <a name="wait_for_all"></a> wait_for_all 

 Attende che tutti gli agenti specificati per completare le attività.  
  
```
static void __cdecl wait_for_all(
    size_t count,
    _In_reads_(count) agent** _PAgents,
    _Out_writes_opt_(count) agent_status* _PStatus = NULL,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `count`  
 Il numero di puntatori agente presenti nella matrice `_PAgents`.  
  
 `_PAgents`  
 Una matrice di puntatori agli agenti di attesa.  
  
 `_PStatus`  
 Un puntatore a una matrice di stati dell'agente. Ogni valore di stato verrà rappresentano lo stato dell'agente corrispondente quando il metodo restituisce.  
  
 `_Timeout`  
 Il tempo massimo di attesa, espresso in millisecondi.  
  
### <a name="remarks"></a>Note  
 Un'attività dell'agente viene completata quando l'agente viene spostato il `agent_canceled` o `agent_done` stati.  
  
 Se il parametro `_Timeout` presenta un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE`, l'eccezione [operation_timed_out](operation-timed-out-class.md) viene generata se la quantità specificata di tempo scade prima che l'agente è stata completata l'attività.  
  
##  <a name="wait_for_one"></a> wait_for_one 

 Attende che uno degli agenti per completare l'attività specificati.  
  
```
static void __cdecl wait_for_one(
    size_t count,
    _In_reads_(count) agent** _PAgents,
    agent_status& _Status,
    size_t& _Index,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `count`  
 Il numero di puntatori agente presenti nella matrice `_PAgents`.  
  
 `_PAgents`  
 Una matrice di puntatori agli agenti di attesa.  
  
 `_Status`  
 Un riferimento a una variabile in cui verrà memorizzato lo stato dell'agente.  
  
 `_Index`  
 Un riferimento a una variabile in cui verrà inserito l'indice dell'agente.  
  
 `_Timeout`  
 Il tempo massimo di attesa, espresso in millisecondi.  
  
### <a name="remarks"></a>Note  
 Un'attività dell'agente viene completata quando l'agente viene spostato il `agent_canceled` o `agent_done` stati.  
  
 Se il parametro `_Timeout` presenta un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE`, l'eccezione [operation_timed_out](operation-timed-out-class.md) viene generata se la quantità specificata di tempo scade prima che l'agente è stata completata l'attività.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
