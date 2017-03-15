---
title: Classe Timer | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- agents/concurrency::timer
dev_langs:
- C++
helpviewer_keywords:
- timer class
ms.assetid: 4f4dea51-de9f-40f9-93f5-dd724c567b49
caps.latest.revision: 21
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 769ccd051c68f0a4d74511392f0f1a811e36e3e7
ms.lasthandoff: 02/24/2017

---
# <a name="timer-class"></a>Classe timer
Un blocco della messaggistica `timer` è un `source_block` a destinazione singola in grado di inviare un messaggio alla sua destinazione dopo che è trascorso un determinato periodo di tempo oppure ad intervalli specifici.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class timer : public Concurrency::details::_Timer, public source_block<single_link_registry<ITarget<T>>>;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di payload dei messaggi di output di questo blocco.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore timer](#ctor)|Di overload. Costruisce un `timer` blocco della messaggistica che genererà un messaggio specificato dopo un intervallo specificato.|  
|[~ timer distruttore](#dtor)|Elimina un `timer` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[pause (metodo)](#pause)|Arresta il `timer` blocco della messaggistica. In questo caso una ripetizione `timer` blocco della messaggistica, può essere riavviato con una successiva `start()` chiamare. Per non ripetuto timer, questo ha lo stesso effetto di un `stop` chiamare.|  
|[Start (metodo)](#start)|Avvia il `timer` blocco della messaggistica. Il numero specificato di millisecondi dopo la chiamata, il valore specificato verrà propagato a valle come un `message`.|  
|[Stop (metodo)](#stop)|Arresta il `timer` blocco della messaggistica.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accept_message (metodo)](#accept_message)|Accetta un messaggio offerto da questo `timer` blocco della messaggistica, trasferendo la proprietà al chiamante.|  
|[consume_message (metodo)](#consume_message)|Utilizza un messaggio precedentemente offerto dal `timer` e riservato dalla destinazione, trasferendo la proprietà al chiamante.|  
|[link_target_notification (metodo)](#link_target_notification)|Un callback di notifica che una nuova destinazione è stata collegata a questo `timer` blocco della messaggistica.|  
|[propagate_to_any_targets (metodo)](#propagate_to_any_targets)|Proporre il messaggio generato da un tentativo di `timer` blocco a tutte le destinazioni collegate.|  
|[release_message (metodo)](#release_message)|Rilascia una prenotazione messaggio precedente. (Esegue l'override di [source_block:: release_message](source-block-class.md#release_message).)|  
|[reserve_message (metodo)](#reserve_message)|Consente di riservare un messaggio precedentemente offerto da questo `timer` blocco della messaggistica. (Esegue l'override di [source_block:: reserve_message](source-block-class.md#reserve_message).)|  
|[resume_propagation (metodo)](#resume_propagation)|Riprende la propagazione dopo una prenotazione è stata rilasciata. (Esegue l'override di [source_block:: resume_propagation](source-block-class.md#resume_propagation).)|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 [source_block](source-block-class.md)  
  
 `timer`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameacceptmessagea-acceptmessage"></a><a name="accept_message"></a>accept_message 

 Accetta un messaggio offerto da questo `timer` blocco della messaggistica, trasferendo la proprietà al chiamante.  
  
```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
##  <a name="a-nameconsumemessagea-consumemessage"></a><a name="consume_message"></a>consume_message 

 Utilizza un messaggio precedentemente offerto dal `timer` e riservato dalla destinazione, trasferendo la proprietà al chiamante.  
  
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
  
##  <a name="a-namelinktargetnotificationa-linktargetnotification"></a><a name="link_target_notification"></a>link_target_notification 

 Un callback di notifica che una nuova destinazione è stata collegata a questo `timer` blocco della messaggistica.  
  
```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore alla destinazione appena collegata.  
  
##  <a name="a-namepausea-pause"></a><a name="pause"></a>Sospendi 

 Arresta il `timer` blocco della messaggistica. In questo caso una ripetizione `timer` blocco della messaggistica, può essere riavviato con una successiva `start()` chiamare. Per non ripetuto timer, questo ha lo stesso effetto di un `stop` chiamare.  
  
```
void pause();
```  
  
##  <a name="a-namepropagatetoanytargetsa-propagatetoanytargets"></a><a name="propagate_to_any_targets"></a>propagate_to_any_targets 

 Proporre il messaggio generato da un tentativo di `timer` blocco a tutte le destinazioni collegate.  
  
```
virtual void propagate_to_any_targets(_Inout_opt_ message<T> *);
```  
  
##  <a name="a-namereleasemessagea-releasemessage"></a><a name="release_message"></a>release_message 

 Rilascia una prenotazione messaggio precedente.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene rilasciato.  
  
##  <a name="a-namereservemessagea-reservemessage"></a><a name="reserve_message"></a>reserve_message 

 Consente di riservare un messaggio precedentemente offerto da questo `timer` blocco della messaggistica.  
  
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
  
##  <a name="a-nameresumepropagationa-resumepropagation"></a><a name="resume_propagation"></a>resume_propagation 

 Riprende la propagazione dopo una prenotazione è stata rilasciata.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="a-namestarta-start"></a><a name="start"></a>inizio 

 Avvia il `timer` blocco della messaggistica. Il numero specificato di millisecondi dopo la chiamata, il valore specificato verrà propagato a valle come un `message`.  
  
```
void start();
```  
  
##  <a name="a-namestopa-stop"></a><a name="stop"></a>arrestare 

 Arresta il `timer` blocco della messaggistica.  
  
```
void stop();
```  
  
##  <a name="a-namectora-timer"></a><a name="ctor"></a>Timer 

 Costruisce un `timer` blocco della messaggistica che genererà un messaggio specificato dopo un intervallo specificato.  
  
```
timer(
    unsigned int _Ms,
    T const& value,
    ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);

timer(
    Scheduler& _Scheduler,
    unsigned int _Ms,
    T const& value,
    _Inout_opt_ ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);

timer(
    ScheduleGroup& _ScheduleGroup,
    unsigned int _Ms,
    T const& value,
    _Inout_opt_ ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);
```  
  
### <a name="parameters"></a>Parametri  
 `_Ms`  
 Il numero di millisecondi che deve trascorrere dopo la chiamata a start per il messaggio specificato saranno propagate a valle.  
  
 `value`  
 Valore che verrà propagato a valle quando il timer scade.  
  
 `_PTarget`  
 La destinazione a cui il timer propagherà il relativo messaggio.  
  
 `_Repeating`  
 Se true, indica che il timer genera periodicamente ogni `_Ms` millisecondi.  
  
 `_Scheduler`  
 Il `Scheduler` entro il quale la propagazione delle attività per il `timer` blocco della messaggistica è pianificata.  
  
 `_ScheduleGroup`  
 Il `ScheduleGroup` entro il quale la propagazione delle attività per il `timer` blocco della messaggistica. L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
### <a name="remarks"></a>Note  
 Il runtime utilizza l'utilità di pianificazione predefinita se non si specifica il `_Scheduler` o `_ScheduleGroup` parametri.  
  
##  <a name="a-namedtora-timer"></a><a name="dtor"></a>~ timer 

 Elimina un `timer` blocco della messaggistica.  
  
```
~timer();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

