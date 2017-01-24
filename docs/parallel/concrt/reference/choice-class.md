---
title: "Classe choice | Microsoft Docs"
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
  - "agents/concurrency::choice"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "choice (classe)"
ms.assetid: 4157a539-d5c2-4161-b1ab-536ce2888397
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe choice
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

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
|[Costruttore Choice:: choice](#choice__choice_constructor)|Di overload. Costruisce un blocco della messaggistica `choice` .|  
|[Choice:: ~ distruttore choice](#choice___dtorchoice_destructor)|Elimina il `choice` blocco della messaggistica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Choice:: Accept](#choice__accept_method)|Accetta un messaggio offerto da questo `choice` blocco, trasferendo la proprietà al chiamante.|  
|[Metodo Choice:: acquire_ref](#choice__acquire_ref_method)|Acquisisce un conteggio dei riferimenti su questo `choice` blocco della messaggistica, per evitare l'eliminazione.|  
|[Metodo Choice:: Consume](#choice__consume_method)|Utilizza un messaggio precedentemente offerto da questo `choice` blocco della messaggistica e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|  
|[Metodo Choice:: has_value](#choice__has_value_method)|Controlla se questo `choice` blocco della messaggistica è ancora stato inizializzato con un valore.|  
|[Metodo Choice:: index](#choice__index_method)|Restituisce un indice nel `tuple` che rappresenta l'elemento selezionato per il `choice` blocco della messaggistica.|  
|[Metodo Choice:: link_target](#choice__link_target_method)|Collega un blocco di destinazione al `choice` blocco della messaggistica.|  
|[Metodo Choice:: Release](#choice__release_method)|Rilascia una prenotazione corretta del messaggio precedente.|  
|[Metodo Choice:: release_ref](#choice__release_ref_method)|Rilascia un conteggio dei riferimenti su questo `choice` blocco della messaggistica.|  
|[Metodo Choice:: Reserve](#choice__reserve_method)|Consente di riservare un messaggio precedentemente offerto da questo `choice` blocco della messaggistica.|  
|[Metodo Choice:: unlink_target](#choice__unlink_target_method)|Consente di scollegare un blocco di destinazione dal `choice` blocco della messaggistica.|  
|[Metodo Choice:: unlink_targets](#choice__unlink_targets_method)|Consente di scollegare tutte le destinazioni da questo `choice` blocco della messaggistica. (Esegue l'override di [ISource:: Unlink_targets](../../../parallel/concrt/reference/isource-class.md#isource__unlink_targets_method).)|  
|[Metodo Choice:: value](#choice__value_method)|Ottiene il messaggio il cui indice è stata selezionata per il `choice` blocco della messaggistica.|  
  
## <a name="remarks"></a>Note  
 Il blocco scelta assicura che solo uno dei messaggi in ingresso viene utilizzato.  
  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 `choice`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namechoiceacceptmethoda-choiceaccept-method"></a><a name="choice__accept_method"></a>  Metodo Choice:: Accept  
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
  
##  <a name="a-namechoiceacquirerefmethoda-choiceacquireref-method"></a><a name="choice__acquire_ref_method"></a>  Metodo Choice:: acquire_ref  
 Acquisisce un conteggio dei riferimenti su questo `choice` blocco della messaggistica, per evitare l'eliminazione.  
  
```  
virtual void acquire_ref(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto collegato a questa origine durante il `link_target` metodo.  
  
##  <a name="a-namechoicechoiceconstructora-choicechoice-constructor"></a><a name="choice__choice_constructor"></a>  Costruttore Choice:: choice  
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
  
##  <a name="a-namechoicedtorchoicedestructora-choicechoice-destructor"></a><a name="choice___dtorchoice_destructor"></a>  Choice:: ~ distruttore choice  
 Elimina il `choice` blocco della messaggistica.  
  
```  
~choice();
```  
  
##  <a name="a-namechoiceconsumemethoda-choiceconsume-method"></a><a name="choice__consume_method"></a>  Metodo Choice:: Consume  
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
  
##  <a name="a-namechoicehasvaluemethoda-choicehasvalue-method"></a><a name="choice__has_value_method"></a>  Metodo Choice:: has_value  
 Controlla se questo `choice` blocco della messaggistica è ancora stato inizializzato con un valore.  
  
```  
bool has_value() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il blocco ha ricevuto un valore, `false` in caso contrario.  
  
##  <a name="a-namechoiceindexmethoda-choiceindex-method"></a><a name="choice__index_method"></a>  Metodo Choice:: index  
 Restituisce un indice nel `tuple` che rappresenta l'elemento selezionato per il `choice` blocco della messaggistica.  
  
```  
size_t index();
```  
  
### <a name="return-value"></a>Valore restituito  
 Indice del messaggio.  
  
### <a name="remarks"></a>Note  
 Il payload del messaggio può essere estratte mediante i `get` metodo.  
  
##  <a name="a-namechoicelinktargetmethoda-choicelinktarget-method"></a><a name="choice__link_target_method"></a>  Metodo Choice:: link_target  
 Collega un blocco di destinazione al `choice` blocco della messaggistica.  
  
```  
virtual void link_target(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco a cui collegare quello `choice` blocco della messaggistica.  
  
##  <a name="a-namechoicereleasemethoda-choicerelease-method"></a><a name="choice__release_method"></a>  Metodo Choice:: Release  
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
  
##  <a name="a-namechoicereleaserefmethoda-choicereleaseref-method"></a><a name="choice__release_ref_method"></a>  Metodo Choice:: release_ref  
 Rilascia un conteggio dei riferimenti su questo `choice` blocco della messaggistica.  
  
```  
virtual void release_ref(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto che si sta scollegando dall'origine. Blocco di origine è consentito di rilasciare le risorse riservate per il blocco di destinazione.  
  
##  <a name="a-namechoicereservemethoda-choicereserve-method"></a><a name="choice__reserve_method"></a>  Metodo Choice:: Reserve  
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
 `true` Se il messaggio è stato riservato, `false` in caso contrario. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato `reserve`, se ha esito positivo, è necessario chiamare `consume` o `release` per assumere o rilasciare il possesso del messaggio, rispettivamente.  
  
##  <a name="a-namechoiceunlinktargetmethoda-choiceunlinktarget-method"></a><a name="choice__unlink_target_method"></a>  Metodo Choice:: unlink_target  
 Consente di scollegare un blocco di destinazione dal `choice` blocco della messaggistica.  
  
```  
virtual void unlink_target(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore a un `ITarget` blocco scollegare da questo `choice` blocco della messaggistica.  
  
##  <a name="a-namechoiceunlinktargetsmethoda-choiceunlinktargets-method"></a><a name="choice__unlink_targets_method"></a>  Metodo Choice:: unlink_targets  
 Consente di scollegare tutte le destinazioni da questo `choice` blocco della messaggistica.  
  
```  
virtual void unlink_targets();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo non deve essere chiamato dal distruttore poiché un distruttore per classe interna `single_assignment` blocco verrà scollegati correttamente.  
  
##  <a name="a-namechoicevaluemethoda-choicevalue-method"></a><a name="choice__value_method"></a>  Metodo Choice:: value  
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
 [spazio dei nomi Concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe join](../../../parallel/concrt/reference/join-class.md)   
 [Classe single_assignment](../../../parallel/concrt/reference/single-assignment-class.md)
