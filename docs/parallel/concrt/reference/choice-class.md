---
title: Classe Choice | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- choice
- AGENTS/concurrency::choice
- AGENTS/concurrency::choice::choice
- AGENTS/concurrency::choice::accept
- AGENTS/concurrency::choice::acquire_ref
- AGENTS/concurrency::choice::consume
- AGENTS/concurrency::choice::has_value
- AGENTS/concurrency::choice::index
- AGENTS/concurrency::choice::link_target
- AGENTS/concurrency::choice::release
- AGENTS/concurrency::choice::release_ref
- AGENTS/concurrency::choice::reserve
- AGENTS/concurrency::choice::unlink_target
- AGENTS/concurrency::choice::unlink_targets
- AGENTS/concurrency::choice::value
dev_langs:
- C++
helpviewer_keywords:
- choice class
ms.assetid: 4157a539-d5c2-4161-b1ab-536ce2888397
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 13110f3a221be47716ca60618c59d2e4bdd6911e
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="choice-class"></a>Classe choice
Un blocco della messaggistica `choice` è un blocco multi-origine a destinazione singola che rappresenta un'interazione del flusso di controllo con un set di origini. Il blocco choice attenderà che una qualsiasi delle molteplici origini produca un messaggio e propagherà l'indice dell'origine che ha prodotto il messaggio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<
    class T  
>  
class choice: public ISource<size_t>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Oggetto `tuple`-tipo che rappresenta i payload delle origini di input di base.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Un alias del tipo per `T`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[scelta](#ctor)|Di overload. Costruisce un blocco della messaggistica `choice` .|  
|[~ Distruttore choice](#dtor)|Elimina il `choice` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accettare](#accept)|Accetta un messaggio offerto da questo `choice` blocco, trasferendo la proprietà al chiamante.|  
|[acquire_ref](#acquire_ref)|Acquisisce un conteggio dei riferimenti su questo `choice` blocco della messaggistica, per evitare l'eliminazione.|  
|[Utilizzare](#consume)|Utilizza un messaggio precedentemente offerto da questo `choice` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|  
|[has_value](#has_value)|Controlla se questo `choice` blocco della messaggistica è ancora stato inizializzato con un valore.|  
|[indice](#index)|Restituisce un indice nel `tuple` che rappresenta l'elemento selezionato per il `choice` blocco della messaggistica.|  
|[link_target](#link_target)|Collega un blocco di destinazione al `choice` blocco della messaggistica.|  
|[release](#release)|Rilascia una prenotazione corretta del messaggio precedente.|  
|[release_ref](#release_ref)|Rilascia un conteggio dei riferimenti su questo `choice` blocco della messaggistica.|  
|[reserve](#reserve)|Consente di riservare un messaggio precedentemente offerto da questo `choice` blocco della messaggistica.|  
|[unlink_target](#unlink_target)|Consente di scollegare un blocco di destinazione dal `choice` blocco della messaggistica.|  
|[unlink_targets](#unlink_targets)|Consente di scollegare tutte le destinazioni da questo `choice` blocco della messaggistica. (Esegue l'override di [ISource:: Unlink_targets](isource-class.md#unlink_targets).)|  
|[value](#value)|Ottiene il messaggio il cui indice è stata selezionata per il `choice` blocco della messaggistica.|  
  
## <a name="remarks"></a>Note  
 Il blocco scelta assicura che solo uno dei messaggi in ingresso viene utilizzato.  
  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](isource-class.md)  
  
 `choice`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="accept"></a>accettare 

 Accetta un messaggio offerto da questo `choice` blocco, trasferendo la proprietà al chiamante.  
  
```  
virtual message<size_t>* accept(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `accept` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al messaggio che il chiamante dispone ora di proprietà.  
  
##  <a name="acquire_ref"></a>acquire_ref 

 Acquisisce un conteggio dei riferimenti su questo `choice` blocco della messaggistica, per evitare l'eliminazione.  
  
```  
virtual void acquire_ref(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto collegato a questa origine durante il `link_target` metodo.  
  
##  <a name="ctor"></a>scelta 

 Costruisce un blocco della messaggistica `choice` .  
  
```  
explicit choice(
    T _Tuple);

 
choice(
    Scheduler& _PScheduler,  
    T _Tuple);

 
choice(
    ScheduleGroup& _PScheduleGroup,  
    T _Tuple);

 
choice(
    choice&& _Choice);
```  
  
### <a name="parameters"></a>Parametri  
 `_Tuple`  
 Oggetto `tuple` delle origini per choice.  
  
 `_PScheduler`  
 Oggetto `Scheduler` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `choice` .  
  
 `_PScheduleGroup`  
 Oggetto `ScheduleGroup` all'interno del quale è pianificata l'attività di propagazione per il blocco della messaggistica `choice` . L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
 `_Choice`  
 Blocco della messaggistica `choice` da cui copiare. Si noti che l'oggetto originale è orfano, si tratta quindi di un costruttore di spostamento.  
  
### <a name="remarks"></a>Note  
 Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.  
  
 Il costruttore di spostamento non viene eseguito durante un blocco. Ciò significa che l'utente deve assicurarsi che non ci siano attività leggere in corso al momento dello spostamento. In caso contrario, possono verificarsi situazioni di race condition che possono portare a eccezioni oppure a uno stato incoerente.  
  
##  <a name="dtor"></a>~ choice 

 Elimina il `choice` blocco della messaggistica.  
  
```  
~choice();
```  
  
##  <a name="consume"></a>Utilizzare 

 Utilizza un messaggio precedentemente offerto da questo `choice` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.  
  
```  
virtual message<size_t>* consume(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
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
  
##  <a name="has_value"></a>has_value 

 Controlla se questo `choice` blocco della messaggistica è ancora stato inizializzato con un valore.  
  
```  
bool has_value() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il blocco ha ricevuto un valore, `false` in caso contrario.  
  
##  <a name="index"></a>indice 

 Restituisce un indice nel `tuple` che rappresenta l'elemento selezionato per il `choice` blocco della messaggistica.  
  
```  
size_t index();
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice del messaggio.  
  
### <a name="remarks"></a>Note  
 Il payload del messaggio può essere estratte mediante i `get` metodo.  
  
##  <a name="link_target"></a>link_target 

 Collega un blocco di destinazione al `choice` blocco della messaggistica.  
  
```  
virtual void link_target(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco a cui collegare quello `choice` blocco della messaggistica.  
  
##  <a name="release"></a>versione 

 Rilascia una prenotazione corretta del messaggio precedente.  
  
```  
virtual void release(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` del `message` dell'oggetto viene rilasciato.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `release` metodo.  
  
##  <a name="release_ref"></a>release_ref 

 Rilascia un conteggio dei riferimenti su questo `choice` blocco della messaggistica.  
  
```  
virtual void release_ref(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto che si sta scollegando dall'origine. Blocco di origine è consentito di rilasciare le risorse riservate per il blocco di destinazione.  
  
##  <a name="reserve"></a>riserva 

 Consente di riservare un messaggio precedentemente offerto da questo `choice` blocco della messaggistica.  
  
```  
virtual bool reserve(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
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
  
##  <a name="unlink_target"></a>unlink_target 

 Consente di scollegare un blocco di destinazione dal `choice` blocco della messaggistica.  
  
```  
virtual void unlink_target(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco scollegare da questo `choice` blocco della messaggistica.  
  
##  <a name="unlink_targets"></a>unlink_targets 

 Consente di scollegare tutte le destinazioni da questo `choice` blocco della messaggistica.  
  
```  
virtual void unlink_targets();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo non deve essere chiamato dal distruttore poiché un distruttore per classe interna `single_assignment` blocco verrà scollegati correttamente.  
  
##  <a name="value"></a>valore 

 Ottiene il messaggio il cui indice è stata selezionata per il `choice` blocco della messaggistica.  
  
```  
template <
    typename _Payload_type  
>  
_Payload_type const& value();
```  
  
### <a name="parameters"></a>Parametri  
 `_Payload_type`  
 Il tipo di payload del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il payload del messaggio.  
  
### <a name="remarks"></a>Note  
 Poiché un blocco di messaggistica `choice` può accettare input con tipi diversi di payload, è necessario specificare il tipo del payload al momento del recupero. È possibile determinare il tipo in base al risultato di `index` metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe join](join-class.md)   
 [Classe single_assignment](single-assignment-class.md)

