---
title: Classe multitype_join | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- multitype_join
- AGENTS/concurrency::multitype_join
- AGENTS/concurrency::multitype_join::multitype_join
- AGENTS/concurrency::multitype_join::accept
- AGENTS/concurrency::multitype_join::acquire_ref
- AGENTS/concurrency::multitype_join::consume
- AGENTS/concurrency::multitype_join::link_target
- AGENTS/concurrency::multitype_join::release
- AGENTS/concurrency::multitype_join::release_ref
- AGENTS/concurrency::multitype_join::reserve
- AGENTS/concurrency::multitype_join::unlink_target
- AGENTS/concurrency::multitype_join::unlink_targets
dev_langs:
- C++
helpviewer_keywords:
- multitype_join class
ms.assetid: 236e87a0-4867-49fd-869a-bef4010e49a7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e91080621fbaec089079cad6e2a3c8d32e6cfacb
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="multitypejoin-class"></a>Classe multitype_join
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
 Il `tuple` il tipo di payload dei messaggi uniti e propagati dal blocco.  
  
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
|[multitype_join](#ctor)|Di overload. Costruisce un blocco della messaggistica `multitype_join` .|  
|[~ multitype_join distruttore](#dtor)|Elimina definitivamente il `multitype_join` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accept](#accept)|Accetta un messaggio offerto da questo `multitype_join` blocco, trasferendo la proprietà al chiamante.|  
|[acquire_ref](#acquire_ref)|Acquisisce un conteggio dei riferimenti su questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.|  
|[Utilizzare](#consume)|Utilizza un messaggio offerto in precedenza il `multitype_join` blocco della messaggistica e riservato correttamente dalla destinazione del trasferimento della proprietà al chiamante.|  
|[link_target](#link_target)|Un blocco di destinazione è collegato a questo `multitype_join` blocco della messaggistica.|  
|[release](#release)|Rilascia una prenotazione corretta del messaggio precedente.|  
|[release_ref](#release_ref)|Rilascia un conteggio dei riferimenti su questo `multiple_join` blocco della messaggistica.|  
|[reserve](#reserve)|Riserva un messaggio precedentemente offerto da questo `multitype_join` blocco della messaggistica.|  
|[unlink_target](#unlink_target)|Consente di scollegare un blocco di destinazione dal `multitype_join` blocco della messaggistica.|  
|[unlink_targets](#unlink_targets)|Consente di scollegare tutte le destinazioni da questo `multitype_join` blocco della messaggistica. (Esegue l'override [ISource:: Unlink_targets](isource-class.md#unlink_targets).)|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 `multitype_join`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="accept"></a> Accettare 

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
 Puntatore al messaggio che il chiamante dispone ora di proprietà di.  
  
##  <a name="acquire_ref"></a> acquire_ref 

 Acquisisce un conteggio dei riferimenti su questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.  
  
```  
virtual void acquire_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto collegato a questa origine durante la `link_target` metodo.  
  
##  <a name="consume"></a> Utilizzare 

 Utilizza un messaggio offerto in precedenza il `multitype_join` blocco della messaggistica e riservato correttamente dalla destinazione del trasferimento della proprietà al chiamante.  
  
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
 Un puntatore al `message` che il chiamante dispone ora di proprietà dell'oggetto.  
  
### <a name="remarks"></a>Note  
 Il `consume` è simile al metodo `accept`, ma deve sempre essere preceduto da una chiamata a `reserve` restituito `true`.  
  
##  <a name="link_target"></a> link_target 

 Un blocco di destinazione è collegato a questo `multitype_join` blocco della messaggistica.  
  
```  
virtual void link_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco collegamento a `multitype_join` blocco della messaggistica.  
  
##  <a name="ctor"></a> multitype_join 

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
  
##  <a name="dtor"></a> ~multitype_join 

 Elimina definitivamente il `multitype_join` blocco della messaggistica.  
  
```  
~multitype_join();
```  
  
##  <a name="release"></a> versione 

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
  
##  <a name="release_ref"></a> release_ref 

 Rilascia un conteggio dei riferimenti su questo `multiple_join` blocco della messaggistica.  
  
```  
virtual void release_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto che non è collegato da questa origine. Blocco di origine è autorizzato a rilasciare le risorse riservate per il blocco di destinazione.  
  
##  <a name="reserve"></a> riserva 

 Riserva un messaggio precedentemente offerto da questo `multitype_join` blocco della messaggistica.  
  
```  
virtual bool reserve(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` viene riservato dell'oggetto.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `reserve` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il messaggio è stato riservato, `false` in caso contrario. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato `reserve`, se ha esito positivo, è necessario chiamare `consume` o `release` per assumere o rilasciare il possesso del messaggio, rispettivamente.  
  
##  <a name="unlink_target"></a> unlink_target 

 Consente di scollegare un blocco di destinazione dal `multitype_join` blocco della messaggistica.  
  
```  
virtual void unlink_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco scollegare da questo `multitype_join` blocco della messaggistica.  
  
##  <a name="unlink_targets"></a> unlink_targets 

 Consente di scollegare tutte le destinazioni da questo `multitype_join` blocco della messaggistica.  
  
```  
virtual void unlink_targets();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe Choice](choice-class.md)   
 [Classe join](join-class.md)
