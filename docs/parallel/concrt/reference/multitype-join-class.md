---
title: "Classe multitype_join | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::multitype_join"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multitype_join (classe)"
ms.assetid: 236e87a0-4867-49fd-869a-bef4010e49a7
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe multitype_join
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un blocco della messaggistica `multitype_join` è un blocco multi-origine, a destinazione singola, che combina messaggi di diverso tipo da ciascuna delle sue origini e offre una tupla dei messaggi combinati alle sue destinazioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<
    typename T,  
    join_type _Jtype = non_greedy  
>  
class multitype_join: public ISource<typename _Unwrap<T>::type>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il `tuple` tipo di payload dei messaggi uniti e propagati dal blocco.  
  
 `_Jtype`  
 Il tipo di `join` blocco è `greedy` o `non_greedy`  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Un alias del tipo per `T`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore multitype_join:: multitype_join](#multitype_join__multitype_join_constructor)|Di overload. Costruisce un blocco della messaggistica `multitype_join` .|  
|[multitype_join:: ~ multitype_join distruttore](#multitype_join___dtormultitype_join_destructor)|Elimina il `multitype_join` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo multitype_join:: Accept](#multitype_join__accept_method)|Accetta un messaggio offerto da questo `multitype_join` blocco, trasferendo la proprietà al chiamante.|  
|[Metodo multitype_join:: acquire_ref](#multitype_join__acquire_ref_method)|Acquisisce un conteggio dei riferimenti su questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.|  
|[Metodo multitype_join:: Consume](#multitype_join__consume_method)|Utilizza un messaggio precedentemente offerto dal `multitype_join` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|  
|[Metodo multitype_join:: link_target](#multitype_join__link_target_method)|Collega un blocco di destinazione al `multitype_join` blocco della messaggistica.|  
|[Metodo multitype_join:: Release](#multitype_join__release_method)|Rilascia una prenotazione corretta del messaggio precedente.|  
|[Metodo multitype_join:: release_ref](#multitype_join__release_ref_method)|Rilascia un conteggio dei riferimenti su questo `multiple_join` blocco della messaggistica.|  
|[Metodo multitype_join:: Reserve](#multitype_join__reserve_method)|Consente di riservare un messaggio precedentemente offerto da questo `multitype_join` blocco della messaggistica.|  
|[Metodo multitype_join:: unlink_target](#multitype_join__unlink_target_method)|Consente di scollegare un blocco di destinazione dal `multitype_join` blocco della messaggistica.|  
|[Metodo multitype_join:: unlink_targets](#multitype_join__unlink_targets_method)|Consente di scollegare tutte le destinazioni da questo `multitype_join` blocco della messaggistica. (Esegue l'override di [ISource:: Unlink_targets](../../../parallel/concrt/reference/isource-class.md#isource__unlink_targets_method).)|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 `multitype_join`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namemultitypejoinacceptmethoda-multitypejoinaccept-method"></a><a name="multitype_join__accept_method"></a>  Metodo multitype_join:: Accept  
 Accetta un messaggio offerto da questo `multitype_join` blocco, trasferendo la proprietà al chiamante.  
  
```  
virtual message<_Destination_type>* accept(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `accept` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al messaggio che il chiamante dispone ora di proprietà.  
  
##  <a name="a-namemultitypejoinacquirerefmethoda-multitypejoinacquireref-method"></a><a name="multitype_join__acquire_ref_method"></a>  Metodo multitype_join:: acquire_ref  
 Acquisisce un conteggio dei riferimenti su questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.  
  
```  
virtual void acquire_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto collegato a questa origine durante il `link_target` metodo.  
  
##  <a name="a-namemultitypejoinconsumemethoda-multitypejoinconsume-method"></a><a name="multitype_join__consume_method"></a>  Metodo multitype_join:: Consume  
 Utilizza un messaggio precedentemente offerto dal `multitype_join` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.  
  
```  
virtual message<_Destination_type>* consume(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` riservato `message` oggetto.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `consume` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Il `consume` metodo è simile a `accept`, ma deve essere sempre preceduto da una chiamata a `reserve` restituito `true`.  
  
##  <a name="a-namemultitypejoinlinktargetmethoda-multitypejoinlinktarget-method"></a><a name="multitype_join__link_target_method"></a>  Metodo multitype_join:: link_target  
 Collega un blocco di destinazione al `multitype_join` blocco della messaggistica.  
  
```  
virtual void link_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco a cui collegare quello `multitype_join` blocco della messaggistica.  
  
##  <a name="a-namemultitypejoinmultitypejoinconstructora-multitypejoinmultitypejoin-constructor"></a><a name="multitype_join__multitype_join_constructor"></a>  Costruttore multitype_join:: multitype_join  
 Costruisce un blocco della messaggistica `multitype_join` .  
  
```  
explicit multitype_join(
    T _Tuple);

 
multitype_join(
    Scheduler& _PScheduler,  
    T _Tuple);

 
multitype_join(
    ScheduleGroup& _PScheduleGroup,  
    T _Tuple);

 
multitype_join(
    multitype_join&& _Join);
```  
  
### <a name="parameters"></a>Parametri  
 `_Tuple`  
 Oggetto `tuple` delle origini per questo blocco della messaggistica `multitype_join` .  
  
 `_PScheduler`  
 Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `multitype_join` .  
  
 `_PScheduleGroup`  
 Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `multitype_join` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
 `_Join`  
 Blocco della messaggistica `multitype_join` da cui copiare. Si noti che l'oggetto originale è orfano, si tratta quindi di un costruttore di spostamento.  
  
### <a name="remarks"></a>Note  
 Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.  
  
 Il costruttore di spostamento non viene eseguito durante un blocco. Ciò significa che l'utente deve assicurarsi che non ci siano attività leggere in corso al momento dello spostamento. In caso contrario, possono verificarsi situazioni di race condition che possono portare a eccezioni oppure a uno stato incoerente.  
  
##  <a name="a-namemultitypejoindtormultitypejoindestructora-multitypejoinmultitypejoin-destructor"></a><a name="multitype_join___dtormultitype_join_destructor"></a>  multitype_join:: ~ multitype_join distruttore  
 Elimina il `multitype_join` blocco della messaggistica.  
  
```  
~multitype_join();
```  
  
##  <a name="a-namemultitypejoinreleasemethoda-multitypejoinrelease-method"></a><a name="multitype_join__release_method"></a>  Metodo multitype_join:: Release  
 Rilascia una prenotazione corretta del messaggio precedente.  
  
```  
virtual void release(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene rilasciato.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `release` metodo.  
  
##  <a name="a-namemultitypejoinreleaserefmethoda-multitypejoinreleaseref-method"></a><a name="multitype_join__release_ref_method"></a>  Metodo multitype_join:: release_ref  
 Rilascia un conteggio dei riferimenti su questo `multiple_join` blocco della messaggistica.  
  
```  
virtual void release_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto che si sta scollegando dall'origine. Blocco di origine è consentito di rilasciare le risorse riservate per il blocco di destinazione.  
  
##  <a name="a-namemultitypejoinreservemethoda-multitypejoinreserve-method"></a><a name="multitype_join__reserve_method"></a>  Metodo multitype_join:: Reserve  
 Consente di riservare un messaggio precedentemente offerto da questo `multitype_join` blocco della messaggistica.  
  
```  
virtual bool reserve(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene riservato.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `reserve` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il messaggio è stato riservato, `false` in caso contrario. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato `reserve`, se ha esito positivo, è necessario chiamare `consume` o `release` per assumere o rilasciare il possesso del messaggio, rispettivamente.  
  
##  <a name="a-namemultitypejoinunlinktargetmethoda-multitypejoinunlinktarget-method"></a><a name="multitype_join__unlink_target_method"></a>  Metodo multitype_join:: unlink_target  
 Consente di scollegare un blocco di destinazione dal `multitype_join` blocco della messaggistica.  
  
```  
virtual void unlink_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco scollegare da questo `multitype_join` blocco della messaggistica.  
  
##  <a name="a-namemultitypejoinunlinktargetsmethoda-multitypejoinunlinktargets-method"></a><a name="multitype_join__unlink_targets_method"></a>  Metodo multitype_join:: unlink_targets  
 Consente di scollegare tutte le destinazioni da questo `multitype_join` blocco della messaggistica.  
  
```  
virtual void unlink_targets();
```  
  
## <a name="see-also"></a>Vedere anche  
 [spazio dei nomi Concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe Choice](../../../parallel/concrt/reference/choice-class.md)   
 [Classe join](../../../parallel/concrt/reference/join-class.md)
