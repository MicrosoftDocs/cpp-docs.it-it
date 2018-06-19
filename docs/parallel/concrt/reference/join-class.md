---
title: Classe join | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- join
- AGENTS/concurrency::join
- AGENTS/concurrency::join::join
- AGENTS/concurrency::join::accept_message
- AGENTS/concurrency::join::consume_message
- AGENTS/concurrency::join::link_target_notification
- AGENTS/concurrency::join::propagate_message
- AGENTS/concurrency::join::propagate_to_any_targets
- AGENTS/concurrency::join::release_message
- AGENTS/concurrency::join::reserve_message
- AGENTS/concurrency::join::resume_propagation
dev_langs:
- C++
helpviewer_keywords:
- join class
ms.assetid: d2217119-70a1-40b6-809f-c1c13a571c3f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a37b6d3dce5d41578999aa54c8dff2dd2271fe9e
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33692639"
---
# <a name="join-class"></a>Classe join
Un blocco della messaggistica `join` è un `propagator_block` multi-origine, a destinazione singola, che combina insieme messaggi di tipo `T` da ognuna delle origini.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T,
    join_type _Jtype = non_greedy>
class join : public propagator_block<single_link_registry<ITarget<std::vector<T>>>,
    multi_link_registry<ISource<T>>>;
```   
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di payload dei messaggi uniti e propagati dal blocco.  
  
 `_Jtype`  
 Il tipo di `join` blocco è `greedy` o `non_greedy`  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[join](#ctor)|Di overload. Costruisce un `join` blocco della messaggistica.|  
|[~ join distruttore](#dtor)|Elimina definitivamente il `join` blocco.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accept_message](#accept_message)|Accetta un messaggio offerto da questo `join` blocco della messaggistica, trasferire la proprietà al chiamante.|  
|[consume_message](#consume_message)|Utilizza un messaggio offerto in precedenza il `join` blocco della messaggistica e riservato dalla destinazione, trasferendo la proprietà al chiamante.|  
|[link_target_notification](#link_target_notification)|Un callback di notifica che una nuova destinazione è stata collegata a questo `join` blocco della messaggistica.|  
|[propagate_message](#propagate_message)|Passare in modo asincrono un messaggio da un `ISource` questo blocco `join` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|  
|[propagate_to_any_targets](#propagate_to_any_targets)|Costruisce un messaggio di output che contiene un messaggio di input da ogni origine quando tutti hanno propagato un messaggio. Invia il messaggio di output per ciascuna delle relative destinazioni.|  
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override [source_block:: release_message](source-block-class.md#release_message).)|  
|[reserve_message](#reserve_message)|Riserva un messaggio precedentemente offerto da questo `join` blocco della messaggistica. (Esegue l'override [source_block:: reserve_message](source-block-class.md#reserve_message).)|  
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo una prenotazione è stata rilasciata. (Esegue l'override [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 [propagator_block](propagator-block-class.md)  
  
 `join`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="accept_message"></a> accept_message 

 Accetta un messaggio offerto da questo `join` blocco della messaggistica, trasferire la proprietà al chiamante.  
  
```
virtual message<_OutputType>* accept_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
##  <a name="consume_message"></a> consume_message 

 Utilizza un messaggio offerto in precedenza il `join` blocco della messaggistica e riservato dalla destinazione, trasferendo la proprietà al chiamante.  
  
```
virtual message<_OutputType>* consume_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene utilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Simile a `accept`, ma è sempre preceduto da una chiamata a `reserve`.  
  
##  <a name="ctor"></a> Creare un join 

 Costruisce un `join` blocco della messaggistica.  
  
```
join(
    size_t _NumInputs);

join(
    size_t _NumInputs,
    filter_method const& _Filter);

join(
    Scheduler& _PScheduler,
    size_t _NumInputs);

join(
    Scheduler& _PScheduler,
    size_t _NumInputs,
    filter_method const& _Filter);

join(
    ScheduleGroup& _PScheduleGroup,
    size_t _NumInputs);

join(
    ScheduleGroup& _PScheduleGroup,
    size_t _NumInputs,
    filter_method const& _Filter);
```  
  
### <a name="parameters"></a>Parametri  
 `_NumInputs`  
 Il numero di input questo `join` blocco sarà possibile.  
  
 `_Filter`  
 Una funzione di filtro che determina se accettare messaggi offerti.  
  
 `_PScheduler`  
 Il `Scheduler` oggetto all'interno del quale l'attività di propagazione per il `join` blocco della messaggistica.  
  
 `_PScheduleGroup`  
 Il `ScheduleGroup` oggetto all'interno del quale l'attività di propagazione per il `join` blocco della messaggistica. L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
### <a name="remarks"></a>Note  
 Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.  
  
 Il tipo `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `join` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.  
  
##  <a name="dtor"></a> ~join 

 Elimina definitivamente il `join` blocco.  
  
```
~join();
```  
  
##  <a name="link_target_notification"></a> link_target_notification 

 Un callback di notifica che una nuova destinazione è stata collegata a questo `join` blocco della messaggistica.  
  
```
virtual void link_target_notification(_Inout_ ITarget<std::vector<T>> *);
```  
  
##  <a name="propagate_message"></a> propagate_message 

 Passare in modo asincrono un messaggio da un `ISource` questo blocco `join` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.  
  
```
message_status propagate_message(
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

 Costruisce un messaggio di output che contiene un messaggio di input da ogni origine quando tutti hanno propagato un messaggio. Invia il messaggio di output per ciascuna delle relative destinazioni.  
  
```
void propagate_to_any_targets(_Inout_opt_ message<_OutputType> *);
```  
  
##  <a name="release_message"></a> release_message 

 Rilascia una prenotazione messaggio precedente.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene rilasciato.  
  
##  <a name="reserve_message"></a> reserve_message 

 Riserva un messaggio precedentemente offerto da questo `join` blocco della messaggistica.  
  
```
virtual bool reserve_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il messaggio è stato riservato, `false` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Dopo aver `reserve` viene chiamato se restituisce `true`, `consume` o `release` deve essere chiamato per assumere o rilasciare la proprietà del messaggio.  
  
##  <a name="resume_propagation"></a> resume_propagation 

 Riprende la propagazione dopo una prenotazione è stata rilasciata.  
  
```
virtual void resume_propagation();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe Choice](choice-class.md)   
 [Classe multitype_join](multitype-join-class.md)
