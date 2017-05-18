---
title: Classe Call | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- call
- AGENTS/concurrency::call
- AGENTS/concurrency::call::call
- AGENTS/concurrency::call::process_input_messages
- AGENTS/concurrency::call::process_message
- AGENTS/concurrency::call::propagate_message
- AGENTS/concurrency::call::send_message
- AGENTS/concurrency::call::supports_anonymous_source
dev_langs:
- C++
helpviewer_keywords:
- call class
ms.assetid: 1521970a-1e9c-4b0c-a681-d18e40976f49
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
ms.openlocfilehash: 894540410e2768be1cb679b5108fc8c694ca02d3
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="call-class"></a>Classe call
Un blocco della messaggistica `call` è un oggetto `target_block` multi-origine ordinato che richiama una funzione specificata quando riceve un messaggio.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, class _FunctorType = std::function<void(T const&)>>
class call : public target_block<multi_link_registry<ISource<T>>>;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di payload dei messaggi propagati in questo blocco.  
  
 `_FunctorType`  
 La firma di funzioni che questo blocco può accettare.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[chiamata](#ctor)|Di overload. Costruisce un `call` blocco della messaggistica.|  
|[~ chiamata del distruttore](#dtor)|Elimina il `call` blocco della messaggistica.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[process_input_messages](#process_input_messages)|Esegue la chiamata di funzione nei messaggi di input.|  
|[process_message](#process_message)|Elabora un messaggio che è stato accettato dal `call` blocco della messaggistica.|  
|[propagate_message](#propagate_message)|Passare in modo asincrono un messaggio da un `ISource` questo blocco `call` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.|  
|[send_message](#send_message)|Passare in modo sincrono un messaggio da un `ISource` questo blocco `call` blocco della messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.|  
|[supports_anonymous_source](#supports_anonymous_source)|Esegue l'override del metodo `supports_anonymous_source` per indicare che questo blocco può accettare messaggi offerti da un'origine non collegata. (Esegue l'override di [ITarget:: Supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [ITarget](itarget-class.md)  
  
 [target_block](target-block-class.md)  
  
 `call`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>chiamata 

 Costruisce un `call` blocco della messaggistica.  
  
```
call(
    _Call_method const& _Func);

call(
    _Call_method const& _Func,
    filter_method const& _Filter);

call(
    Scheduler& _PScheduler,
    _Call_method const& _Func);

call(
    Scheduler& _PScheduler,
    _Call_method const& _Func,
    filter_method const& _Filter);

call(
    ScheduleGroup& _PScheduleGroup,
    _Call_method const& _Func);

call(
    ScheduleGroup& _PScheduleGroup,
    _Call_method const& _Func,
    filter_method const& _Filter);
```  
  
### <a name="parameters"></a>Parametri  
 `_Func`  
 Una funzione che sarà richiamata per ogni messaggio accettato.  
  
 `_Filter`  
 Una funzione di filtro che determina se accettare messaggi offerti.  
  
 `_PScheduler`  
 Il `Scheduler` entro il quale la propagazione delle attività per il `call` blocco della messaggistica.  
  
 `_PScheduleGroup`  
 Il `ScheduleGroup` entro il quale la propagazione delle attività per il `call` blocco della messaggistica. L'oggetto `Scheduler` usato è previsto dal gruppo di pianificazione.  
  
### <a name="remarks"></a>Note  
 Se non si specificano i parametri `_PScheduler` o `_PScheduleGroup` , il runtime usa l'utilità di pianificazione predefinita.  
  
 Il tipo di `_Call_method` è un funtore con firma `void (T const &)` che viene richiamato da questo `call` blocco della messaggistica per elaborare un messaggio.  
  
 Il tipo di `filter_method` è un funtore con firma `bool (T const &)` che viene richiamato da questo `call` blocco della messaggistica per determinare se è necessario accettare un messaggio offerto.  
  
##  <a name="dtor"></a>~ chiamare 

 Elimina il `call` blocco della messaggistica.  
  
```
~call();
```  
  
##  <a name="process_input_messages"></a>process_input_messages 

 Esegue la chiamata di funzione nei messaggi di input.  
  
```
virtual void process_input_messages(_Inout_ message<T>* _PMessage);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
  
##  <a name="process_message"></a>process_message 

 Elabora un messaggio che è stato accettato dal `call` blocco della messaggistica.  
  
```
virtual void process_message(_Inout_ message<T>* _PMessage);
```  
  
### <a name="parameters"></a>Parametri  
 `_PMessage`  
 Puntatore al messaggio che deve essere gestito.  
  
##  <a name="propagate_message"></a>propagate_message 

 Passare in modo asincrono un messaggio da un `ISource` questo blocco `call` blocco della messaggistica. Viene richiamato dal `propagate` metodo, quando viene chiamato da un blocco di origine.  
  
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
  
##  <a name="send_message"></a>send_message 

 Passare in modo sincrono un messaggio da un `ISource` questo blocco `call` blocco della messaggistica. Viene richiamato dal `send` metodo, quando viene chiamato da un blocco di origine.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe transformer](transformer-class.md)

