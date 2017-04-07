---
title: Classe overwrite_buffer | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- overwrite_buffer
- AGENTS/concurrency::overwrite_buffer
- AGENTS/concurrency::overwrite_buffer::overwrite_buffer
- AGENTS/concurrency::overwrite_buffer::has_value
- AGENTS/concurrency::overwrite_buffer::value
- AGENTS/concurrency::overwrite_buffer::accept_message
- AGENTS/concurrency::overwrite_buffer::consume_message
- AGENTS/concurrency::overwrite_buffer::link_target_notification
- AGENTS/concurrency::overwrite_buffer::propagate_message
- AGENTS/concurrency::overwrite_buffer::propagate_to_any_targets
- AGENTS/concurrency::overwrite_buffer::release_message
- AGENTS/concurrency::overwrite_buffer::reserve_message
- AGENTS/concurrency::overwrite_buffer::resume_propagation
- AGENTS/concurrency::overwrite_buffer::send_message
- AGENTS/concurrency::overwrite_buffer::supports_anonymous_source
dev_langs:
- C++
helpviewer_keywords:
- overwrite_buffer class
ms.assetid: 5cc428fe-3697-419c-9fb2-78f6181c9293
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 256c9d8a4d4bcf81f97ffbc8282bab59a169b24e
ms.lasthandoff: 03/17/2017

---
# <a name="overwritebuffer-class"></a>Classe overwrite_buffer
Un blocco della messaggistica `overwrite_buffer` è un `propagator_block` multi-origine a destinazione singola, in grado di archiviare un unico messaggio alla volta. I nuovi messaggi sovrascrivono i precedenti.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class overwrite_buffer : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di payload dei messaggi archiviati e propagati dal buffer.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[overwrite_buffer](#ctor)|Di overload. Costruisce un `overwrite_buffer` blocco della messaggistica.|  
|[~ overwrite_buffer distruttore](#dtor)|Elimina il `overwrite_buffer` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[has_value](#has_value)|Controlla se questo `overwrite_buffer` blocco della messaggistica dispone già di un valore.|  
|[value](#value)|Ottiene un riferimento al payload del messaggio viene archiviato corrente di `overwrite_buffer` blocco della messaggistica.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accept_message](#accept_message)|Accetta un messaggio offerto da questo `overwrite_buffer` blocco della messaggistica, restituendo una copia del messaggio al chiamante.|  
|[consume_message](#consume_message)|Utilizza un messaggio precedentemente offerto dal `overwrite_buffer` blocco della messaggistica e riservato dalla destinazione restituendo una copia del messaggio al chiamante.|  
|[link_target_notification](#link_target_notification)|Un callback di notifica che una nuova destinazione è stata collegata a questo `overwrite_buffer` blocco della messaggistica.|  
|[propagate_message](#propagate_message)|Passare in modo asincrono un messaggio da un `ISource` questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|  
|[propagate_to_any_targets](#propagate_to_any_targets)|Posizioni di `message``_PMessage` in questo `overwrite_buffer` blocco della messaggistica e di offrire a tutte le destinazioni collegate.|  
|[release_message](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).)|  
|[reserve_message](#reserve_message)|Consente di riservare un messaggio precedentemente offerto da questo `overwrite_buffer` blocco della messaggistica. (Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).)|  
|[resume_propagation](#resume_propagation)|Riprende la propagazione dopo una prenotazione è stata rilasciata. (Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|  
|[send_message](#send_message)|Passare in modo sincrono un messaggio da un `ISource` questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|  
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. (Esegue l'override di [ITarget:: Supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|  
  
## <a name="remarks"></a>Note  
 Un `overwrite_buffer` blocco della messaggistica propaga copie del suo messaggio archiviato a ciascuna delle relative destinazioni.  
  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 [propagator_block](propagator-block-class.md)  
  
 `overwrite_buffer`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="accept_message"></a>accept_message 

 Accetta un messaggio offerto da questo `overwrite_buffer` blocco della messaggistica, restituendo una copia del messaggio al chiamante.  
  
```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Il `overwrite_buffer` blocco restituisce copie del messaggio per le destinazioni di messaggistica, anziché trasferire la proprietà del messaggio attualmente a disposizione.  
  
##  <a name="consume_message"></a>consume_message 

 Utilizza un messaggio precedentemente offerto dal `overwrite_buffer` blocco della messaggistica e riservato dalla destinazione restituendo una copia del messaggio al chiamante.  
  
```
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto utilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Simile a `accept`, ma è sempre preceduto da una chiamata a `reserve`.  
  
##  <a name="has_value"></a>has_value 

 Controlla se questo `overwrite_buffer` blocco della messaggistica dispone già di un valore.  
  
```
bool has_value() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il blocco ha ricevuto un valore, `false` in caso contrario.  
  
##  <a name="link_target_notification"></a>link_target_notification 

 Un callback di notifica che una nuova destinazione è stata collegata a questo `overwrite_buffer` blocco della messaggistica.  
  
```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore alla destinazione appena collegata.  
  
##  <a name="dtor"></a>~ overwrite_buffer 

 Elimina il `overwrite_buffer` blocco della messaggistica.  
  
```
~overwrite_buffer();
```  
  
##  <a name="ctor"></a>overwrite_buffer 

 Costruisce un `overwrite_buffer` blocco della messaggistica.  
  
```
overwrite_buffer();

overwrite_buffer(
    filter_method const& _Filter);

overwrite_buffer(
    Scheduler& _PScheduler);

overwrite_buffer(
    Scheduler& _PScheduler,
    filter_method const& _Filter);

overwrite_buffer(
    ScheduleGroup& _PScheduleGroup);

overwrite_buffer(
    ScheduleGroup& _PScheduleGroup,
    filter_method const& _Filter);
```  
  
### <a name="parameters"></a>Parametri  
 `_Filter`  
 Una funzione di filtro che determina se accettare messaggi offerti.  
  
 `_PScheduler`  
 Il `Scheduler` entro il quale la propagazione delle attività per il `overwrite_buffer` blocco della messaggistica.  
  
 `_PScheduleGroup`  
 Il `ScheduleGroup` entro il quale la propagazione delle attività per il `overwrite_buffer` blocco della messaggistica. L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
### <a name="remarks"></a>Note  
 Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.  
  
 Il tipo di `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `overwrite_buffer` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.  
  
##  <a name="propagate_message"></a>propagate_message 

 Passare in modo asincrono un messaggio da un `ISource` questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.  
  
```
virtual message_status propagate_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore all'oggetto `message`.  
  
 `_PSource`  
 Puntatore al blocco di origine del messaggio di offerta.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione di ciò che la destinazione ha deciso di fare con il messaggio.  
  
##  <a name="propagate_to_any_targets"></a>propagate_to_any_targets 

 Posizioni di `message``_PMessage` in questo `overwrite_buffer` blocco della messaggistica e di offrire a tutte le destinazioni collegate.  
  
```
virtual void propagate_to_any_targets(_Inout_ message<T>* _PMessage);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Un puntatore a un `message` oggetto dall'oggetto `overwrite_buffer` ha assunto la proprietà.  
  
### <a name="remarks"></a>Note  
 Il metodo lo sovrascrive il messaggio corrente nella `overwrite_buffer` con il messaggio appena accettato `_PMessage`.  
  
##  <a name="send_message"></a>send_message 

 Passare in modo sincrono un messaggio da un `ISource` questo blocco `overwrite_buffer` blocco della messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.  
  
```
virtual message_status send_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore all'oggetto `message`.  
  
 `_PSource`  
 Puntatore al blocco di origine del messaggio di offerta.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [message_status](concurrency-namespace-enums.md) indicazione di ciò che la destinazione ha deciso di fare con il messaggio.  
  
##  <a name="supports_anonymous_source"></a>supports_anonymous_source 

 Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata.  
  
```
virtual bool supports_anonymous_source();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` poiché tramite il blocco non vengono posticipati i messaggi offerti.  
  
##  <a name="release_message"></a>release_message 

 Rilascia una prenotazione messaggio precedente.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene rilasciato.  
  
##  <a name="reserve_message"></a>reserve_message 

 Consente di riservare un messaggio precedentemente offerto da questo `overwrite_buffer` blocco della messaggistica.  
  
```
virtual bool reserve_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene riservato.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il messaggio è stato riservato, `false` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Dopo aver `reserve` viene chiamato, restituisce `true`, ad esempio `consume` o `release` deve essere chiamato per assumere o rilasciare la proprietà del messaggio.  
  
##  <a name="resume_propagation"></a>resume_propagation 

 Riprende la propagazione dopo una prenotazione è stata rilasciata.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="value"></a>valore 

 Ottiene un riferimento al payload del messaggio viene archiviato corrente di `overwrite_buffer` blocco della messaggistica.  
  
```
T value();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il payload del messaggio attualmente archiviato.  
  
### <a name="remarks"></a>Note  
 Il valore memorizzato nel `overwrite_buffer` potrebbe cambiare immediatamente dopo questo metodo restituisce. Il metodo attenderà fino a quando non arriva un messaggio se nessun messaggio attualmente archiviato nella `overwrite_buffer`.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe unbounded_buffer](unbounded-buffer-class.md)   
 [Classe single_assignment](single-assignment-class.md)

