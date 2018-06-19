---
title: Classe single_assignment | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- single_assignment
- AGENTS/concurrency::single_assignment
- AGENTS/concurrency::single_assignment::single_assignment
- AGENTS/concurrency::single_assignment::has_value
- AGENTS/concurrency::single_assignment::value
- AGENTS/concurrency::single_assignment::accept_message
- AGENTS/concurrency::single_assignment::consume_message
- AGENTS/concurrency::single_assignment::link_target_notification
- AGENTS/concurrency::single_assignment::propagate_message
- AGENTS/concurrency::single_assignment::propagate_to_any_targets
- AGENTS/concurrency::single_assignment::release_message
- AGENTS/concurrency::single_assignment::reserve_message
- AGENTS/concurrency::single_assignment::resume_propagation
- AGENTS/concurrency::single_assignment::send_message
dev_langs:
- C++
helpviewer_keywords:
- single_assignment class
ms.assetid: ccc34728-8de9-4e07-b83d-a36a58d9d2b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4bacbdaa4af141101863b4d6d81d114d43aced9f
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33696279"
---
# <a name="singleassignment-class"></a>Classe single_assignment
Un blocco della messaggistica `single_assignment` è un `propagator_block` multi-origine, a destinazione singola, in grado di archiviare un unico `message` scrivibile una volta.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class single_assignment : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di payload del messaggio archiviato e propagati dal buffer.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[single_assignment](#ctor)|Di overload. Costruisce un `single_assignment` blocco della messaggistica.|  
|[~ single_assignment distruttore](#dtor)|Elimina definitivamente il `single_assignment` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[has_value](#has_value)|Controlla se questo `single_assignment` blocco della messaggistica è ancora stato inizializzato con un valore.|  
|[value](#value)|Ottiene un riferimento al payload del messaggio viene archiviato corrente di `single_assignment` blocco della messaggistica.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accept_message](#accept_message)|Accetta un messaggio offerto da questo `single_assignment` blocco della messaggistica, restituendo una copia del messaggio al chiamante.|  
|[consume_message](#consume_message)|Utilizza un messaggio offerto in precedenza il `single_assignment` e riservato dalla destinazione, la restituzione di una copia del messaggio al chiamante.|  
|[link_target_notification](#link_target_notification)|Un callback di notifica che una nuova destinazione è stata collegata a questo `single_assignment` blocco della messaggistica.|  
|[propagate_message](#propagate_message)|Passare in modo asincrono un messaggio da un `ISource` questo blocco `single_assignment` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|  
|[propagate_to_any_targets](#propagate_to_any_targets)|Posizioni di `message _PMessage` in questo `single_assignment` blocco della messaggistica e offrire a tutte le destinazioni collegate.|  
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override [source_block:: release_message](source-block-class.md#release_message).)|  
|[reserve_message](#reserve_message)|Riserva un messaggio precedentemente offerto da questo `single_assignment` blocco della messaggistica. (Esegue l'override [source_block:: reserve_message](source-block-class.md#reserve_message).)|  
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo una prenotazione è stata rilasciata. (Esegue l'override [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|  
|[send_message](#send_message)|Passare in modo sincrono un messaggio da un `ISource` questo blocco `single_assignment` blocco della messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|  
  
## <a name="remarks"></a>Note  
 Oggetto `single_assignment` blocco della messaggistica propaga copie del messaggio per ogni destinazione.  
  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 [propagator_block](propagator-block-class.md)  
  
 `single_assignment`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="accept_message"></a> accept_message 

 Accetta un messaggio offerto da questo `single_assignment` blocco della messaggistica, restituendo una copia del messaggio al chiamante.  
  
```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Il `single_assignment` messaggistica blocco restituisce copie del messaggio alle sue destinazioni, anziché trasferire la proprietà del messaggio attualmente a disposizione.  
  
##  <a name="consume_message"></a> consume_message 

 Utilizza un messaggio offerto in precedenza il `single_assignment` e riservato dalla destinazione, la restituzione di una copia del messaggio al chiamante.  
  
```
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene utilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Simile a `accept`, ma è sempre preceduto da una chiamata a `reserve`.  
  
##  <a name="has_value"></a> has_value 

 Controlla se questo `single_assignment` blocco della messaggistica è ancora stato inizializzato con un valore.  
  
```
bool has_value() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il blocco ha ricevuto un valore, `false` in caso contrario.  
  
##  <a name="link_target_notification"></a> link_target_notification 

 Un callback di notifica che una nuova destinazione è stata collegata a questo `single_assignment` blocco della messaggistica.  
  
```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore alla destinazione appena collegato.  
  
##  <a name="propagate_message"></a> propagate_message 

 Passare in modo asincrono un messaggio da un `ISource` questo blocco `single_assignment` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.  
  
```
virtual message_status propagate_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore all'oggetto `message`.  
  
 `_PSource`  
 Un puntatore al blocco di origine del messaggio di offerta.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione dei quali ha deciso di destinazione con il messaggio.  
  
##  <a name="propagate_to_any_targets"></a> propagate_to_any_targets 

 Posizioni di `message` `_PMessage` in questo `single_assignment` blocco della messaggistica e offrire a tutte le destinazioni collegate.  
  
```
virtual void propagate_to_any_targets(_Inout_opt_ message<T>* _PMessage);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Un puntatore a un `message` da questo `single_assignment` blocco della messaggistica ha assunto la proprietà.  
  
##  <a name="release_message"></a> release_message 

 Rilascia una prenotazione messaggio precedente.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene rilasciato.  
  
##  <a name="reserve_message"></a> reserve_message 

 Riserva un messaggio precedentemente offerto da questo `single_assignment` blocco della messaggistica.  
  
```
virtual bool reserve_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` viene riservato dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il messaggio è stato riservato, `false` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Dopo aver `reserve` viene chiamato se restituisce `true`, `consume` o `release` deve essere chiamato per assumere o rilasciare la proprietà del messaggio.  
  
##  <a name="resume_propagation"></a> resume_propagation 

 Riprende la propagazione dopo una prenotazione è stata rilasciata.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="send_message"></a> send_message 

 Passare in modo sincrono un messaggio da un `ISource` questo blocco `single_assignment` blocco della messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.  
  
```
virtual message_status send_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore all'oggetto `message`.  
  
 `_PSource`  
 Un puntatore al blocco di origine del messaggio di offerta.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione dei quali ha deciso di destinazione con il messaggio.  
  
##  <a name="ctor"></a> single_assignment 

 Costruisce un `single_assignment` blocco della messaggistica.  
  
```
single_assignment();

single_assignment(
    filter_method const& _Filter);

single_assignment(
    Scheduler& _PScheduler);

single_assignment(
    Scheduler& _PScheduler,
    filter_method const& _Filter);

single_assignment(
    ScheduleGroup& _PScheduleGroup);

single_assignment(
    ScheduleGroup& _PScheduleGroup,
    filter_method const& _Filter);
```  
  
### <a name="parameters"></a>Parametri  
 `_Filter`  
 Una funzione di filtro che determina se accettare messaggi offerti.  
  
 `_PScheduler`  
 Il `Scheduler` oggetto all'interno del quale l'attività di propagazione per il `single_assignment` blocco della messaggistica.  
  
 `_PScheduleGroup`  
 Il `ScheduleGroup` oggetto all'interno del quale l'attività di propagazione per il `single_assignment` blocco della messaggistica. L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
### <a name="remarks"></a>Note  
 Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.  
  
 Il tipo `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `single_assignment` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.  
  
##  <a name="dtor"></a> ~ single_assignment 

 Elimina definitivamente il `single_assignment` blocco della messaggistica.  
  
```
~single_assignment();
```  
  
##  <a name="value"></a> valore 

 Ottiene un riferimento al payload del messaggio viene archiviato corrente di `single_assignment` blocco della messaggistica.  
  
```
T const& value();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il payload del messaggio archiviato.  
  
### <a name="remarks"></a>Note  
 Questo metodo attende fino a quando non arriva un messaggio se nessun messaggio è attualmente archiviato nel `single_assignment` blocco della messaggistica.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe overwrite_buffer](overwrite-buffer-class.md)   
 [Classe unbounded_buffer](unbounded-buffer-class.md)

