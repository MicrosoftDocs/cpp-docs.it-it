---
title: Classe multitype_join | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- agents/concurrency::multitype_join
dev_langs:
- C++
helpviewer_keywords:
- multitype_join class
ms.assetid: 236e87a0-4867-49fd-869a-bef4010e49a7
caps.latest.revision: 20
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
ms.openlocfilehash: 71f644331cbaef8322176e554c52a14d59f6d75a
ms.lasthandoff: 02/24/2017

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
 Il `tuple` tipo di payload dei messaggi uniti e propagati dal blocco.  
  
 `_Jtype`  
 Il tipo di `join` blocco è `greedy` o`non_greedy`  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Un alias del tipo per `T`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore multitype_join](#ctor)|Di overload. Costruisce un blocco della messaggistica `multitype_join` .|  
|[~ multitype_join distruttore](#dtor)|Elimina il `multitype_join` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Accept (metodo)](#accept)|Accetta un messaggio offerto da questo `multitype_join` blocco, trasferendo la proprietà al chiamante.|  
|[acquire_ref (metodo)](#acquire_ref)|Acquisisce un conteggio dei riferimenti su questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.|  
|[Consume (metodo)](#consume)|Utilizza un messaggio precedentemente offerto dal `multitype_join` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|  
|[link_target (metodo)](#link_target)|Collega un blocco di destinazione al `multitype_join` blocco della messaggistica.|  
|[Release (metodo)](#release)|Rilascia una prenotazione corretta del messaggio precedente.|  
|[release_ref (metodo)](#release_ref)|Rilascia un conteggio dei riferimenti su questo `multiple_join` blocco della messaggistica.|  
|[Reserve (metodo)](#reserve)|Consente di riservare un messaggio precedentemente offerto da questo `multitype_join` blocco della messaggistica.|  
|[unlink_target (metodo)](#unlink_target)|Consente di scollegare un blocco di destinazione dal `multitype_join` blocco della messaggistica.|  
|[unlink_targets (metodo)](#unlink_targets)|Consente di scollegare tutte le destinazioni da questo `multitype_join` blocco della messaggistica. (Esegue l'override di [ISource:: Unlink_targets](isource-class.md#unlink_targets).)|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 `multitype_join`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameaccepta-accept"></a><a name="accept"></a>accettare 

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
  
##  <a name="a-nameacquirerefa-acquireref"></a><a name="acquire_ref"></a>acquire_ref 

 Acquisisce un conteggio dei riferimenti su questo `multitype_join` blocco della messaggistica, per evitare l'eliminazione.  
  
```  
virtual void acquire_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto collegato a questa origine durante il `link_target` metodo.  
  
##  <a name="a-nameconsumea-consume"></a><a name="consume"></a>Utilizzare 

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
  
##  <a name="a-namelinktargeta-linktarget"></a><a name="link_target"></a>link_target 

 Collega un blocco di destinazione al `multitype_join` blocco della messaggistica.  
  
```  
virtual void link_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco a cui collegare quello `multitype_join` blocco della messaggistica.  
  
##  <a name="a-namectora-multitypejoin"></a><a name="ctor"></a>multitype_join 

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
  
##  <a name="a-namedtora-multitypejoin"></a><a name="dtor"></a>~ multitype_join 

 Elimina il `multitype_join` blocco della messaggistica.  
  
```  
~multitype_join();
```  
  
##  <a name="a-namereleasea-release"></a><a name="release"></a>versione 

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
  
##  <a name="a-namereleaserefa-releaseref"></a><a name="release_ref"></a>release_ref 

 Rilascia un conteggio dei riferimenti su questo `multiple_join` blocco della messaggistica.  
  
```  
virtual void release_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto che si sta scollegando dall'origine. Blocco di origine è consentito di rilasciare le risorse riservate per il blocco di destinazione.  
  
##  <a name="a-namereservea-reserve"></a><a name="reserve"></a>riserva 

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
 `true`Se il messaggio è stato riservato, `false` in caso contrario. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato `reserve`, se ha esito positivo, è necessario chiamare `consume` o `release` per assumere o rilasciare il possesso del messaggio, rispettivamente.  
  
##  <a name="a-nameunlinktargeta-unlinktarget"></a><a name="unlink_target"></a>unlink_target 

 Consente di scollegare un blocco di destinazione dal `multitype_join` blocco della messaggistica.  
  
```  
virtual void unlink_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco scollegare da questo `multitype_join` blocco della messaggistica.  
  
##  <a name="a-nameunlinktargetsa-unlinktargets"></a><a name="unlink_targets"></a>unlink_targets 

 Consente di scollegare tutte le destinazioni da questo `multitype_join` blocco della messaggistica.  
  
```  
virtual void unlink_targets();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe Choice](choice-class.md)   
 [Classe join](join-class.md)

