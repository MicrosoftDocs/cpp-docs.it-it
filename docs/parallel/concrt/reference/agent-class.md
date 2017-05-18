---
title: Classe Agent | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 1e6e23e742137bffd9035ecf69ecc32d199ca0c5
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

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
|[agente](#ctor)|Di overload. Costruisce un agente.|  
|[~ agent distruttore](#dtor)|Elimina l'agente.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Annulla](#cancel)|Sposta un agente da uno di `agent_created` o `agent_runnable` stati dal `agent_canceled` dello stato.|  
|[start](#start)|Sposta un agente dal `agent_created` allo stato di `agent_runnable` di stato e si pianifica l'esecuzione.|  
|[status](#status)|Un'origine sincrona di informazioni sullo stato dall'agente.|  
|[status_port](#status_port)|Un'origine asincrona di informazioni sullo stato dall'agente.|  
|[attesa](#wait)|In attesa di un agente completare l'attività.|  
|[wait_for_all](#wait_for_all)|Attende che tutti gli agenti specificati per completare le attività.|  
|[wait_for_one](#wait_for_one)|Attende che uno degli agenti per completare l'attività specificate.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operazione eseguita](#done)|Sposta un agente nel `agent_done` stato, che indica che l'agente è stato completato.|  
|[run](#run)|Rappresenta l'attività principale di un agente. `run`deve essere sottoposto a override in una classe derivata e specificare cosa deve eseguire l'agente dopo che è stato avviato.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [agenti asincroni](../../../parallel/concrt/asynchronous-agents.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `agent`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>agente 

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
  
##  <a name="dtor"></a>~ agent 

 Elimina l'agente.  
  
```
virtual ~agent();
```  
  
### <a name="remarks"></a>Note  
 È un errore distruggere un agente che non è in uno stato finale (sia `agent_done` o `agent_canceled`). Questo può essere evitato l'attesa per l'agente raggiunga uno stato finale nel distruttore di una classe che eredita la `agent` classe.  
  
##  <a name="cancel"></a>Annulla 

 Sposta un agente da uno di `agent_created` o `agent_runnable` stati dal `agent_canceled` dello stato.  
  
```
bool cancel();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'agente è stata annullata, `false` in caso contrario. Impossibile annullare un agente se è già avviato o è già stata completata.  
  
##  <a name="done"></a>operazione eseguita 

 Sposta un agente nel `agent_done` stato, che indica che l'agente è stato completato.  
  
```
bool done();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'agente viene spostato il `agent_done` stato `false` in caso contrario. Impossibile spostare un agente che è stato annullato per il `agent_done` dello stato.  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato alla fine di `run` metodo, quando si conosce l'esecuzione dell'agente è stata completata.  
  
##  <a name="run"></a>Correre 

 Rappresenta l'attività principale di un agente. `run`deve essere sottoposto a override in una classe derivata e specificare cosa deve eseguire l'agente dopo che è stato avviato.  
  
```
virtual void run() = 0;
```  
  
### <a name="remarks"></a>Note  
 Lo stato dell'agente viene modificato in `agent_started` destro del mouse prima che venga richiamato questo metodo. Il metodo deve richiamare `done` sull'agente dotato di uno stato appropriato prima della restituzione e non può generare eccezioni.  
  
##  <a name="start"></a>inizio 

 Sposta un agente dal `agent_created` allo stato di `agent_runnable` di stato e si pianifica l'esecuzione.  
  
```
bool start();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'agente è stato avviato correttamente, `false` in caso contrario. Impossibile avviare un agente che è stato annullato.  
  
##  <a name="status"></a>stato 

 Un'origine sincrona di informazioni sullo stato dall'agente.  
  
```
agent_status status();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce lo stato corrente dell'agente. Si noti che questo stato restituito potrebbe cambiare immediatamente dopo la restituzione.  
  
##  <a name="status_port"></a>status_port 

 Un'origine asincrona di informazioni sullo stato dall'agente.  
  
```
ISource<agent_status>* status_port();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un'origine dei messaggi che può inviare messaggi sullo stato corrente dell'agente.  
  
##  <a name="wait"></a>attesa 

 In attesa di un agente completare l'attività.  
  
```
static agent_status __cdecl wait(
    _Inout_ agent* _PAgent,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```  
  
### <a name="parameters"></a>Parametri  
 `_PAgent`  
 Puntatore all'agente di attesa.  
  
 `_Timeout`  
 Il tempo massimo di attesa, espresso in millisecondi.  
  
### <a name="return-value"></a>Valore restituito  
 Il `agent_status` dell'agente durante l'attesa viene completata. Può trattarsi di `agent_canceled` o `agent_done`.  
  
### <a name="remarks"></a>Note  
 Un'attività dell'agente viene completata quando l'agente immette il `agent_canceled` o `agent_done` stati.  
  
 Se il parametro `_Timeout` ha un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE`, l'eccezione [operation_timed_out](operation-timed-out-class.md) viene generata se la quantità di tempo specificata scade prima che l'agente ha completato la sua attività.  
  
##  <a name="wait_for_all"></a>wait_for_all 

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
 Una matrice di puntatori agli agenti da attendere.  
  
 `_PStatus`  
 Un puntatore a una matrice di stati dell'agente. Ogni valore di stato rappresenterà lo stato dell'agente corrispondente quando il metodo restituisce.  
  
 `_Timeout`  
 Il tempo massimo di attesa, espresso in millisecondi.  
  
### <a name="remarks"></a>Note  
 Un'attività dell'agente viene completata quando l'agente immette il `agent_canceled` o `agent_done` stati.  
  
 Se il parametro `_Timeout` ha un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE`, l'eccezione [operation_timed_out](operation-timed-out-class.md) viene generata se la quantità di tempo specificata scade prima che l'agente ha completato la sua attività.  
  
##  <a name="wait_for_one"></a>wait_for_one 

 Attende che uno degli agenti per completare l'attività specificate.  
  
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
 Una matrice di puntatori agli agenti da attendere.  
  
 `_Status`  
 Un riferimento a una variabile in cui verrà inserito lo stato dell'agente.  
  
 `_Index`  
 Un riferimento a una variabile in cui verrà collocato l'indice dell'agente.  
  
 `_Timeout`  
 Il tempo massimo di attesa, espresso in millisecondi.  
  
### <a name="remarks"></a>Note  
 Un'attività dell'agente viene completata quando l'agente immette il `agent_canceled` o `agent_done` stati.  
  
 Se il parametro `_Timeout` ha un valore diverso dalla costante `COOPERATIVE_TIMEOUT_INFINITE`, l'eccezione [operation_timed_out](operation-timed-out-class.md) viene generata se la quantità di tempo specificata scade prima che l'agente ha completato la sua attività.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

