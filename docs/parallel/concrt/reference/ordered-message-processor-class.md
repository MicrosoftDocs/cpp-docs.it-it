---
title: Classe ordered_message_processor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ordered_message_processor
- AGENTS/concurrency::ordered_message_processor
- AGENTS/concurrency::ordered_message_processor::ordered_message_processor
- AGENTS/concurrency::ordered_message_processor::async_send
- AGENTS/concurrency::ordered_message_processor::initialize
- AGENTS/concurrency::ordered_message_processor::initialize_batched_processing
- AGENTS/concurrency::ordered_message_processor::sync_send
- AGENTS/concurrency::ordered_message_processor::wait
- AGENTS/concurrency::ordered_message_processor::process_incoming_message
dev_langs:
- C++
helpviewer_keywords:
- ordered_message_processor class
ms.assetid: 787adfb7-7f79-4a70-864a-80e3b64088cd
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 83f3181d797b0146cc7e57950da6b5e9569b2ab1
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="orderedmessageprocessor-class"></a>Classe ordered_message_processor
Un `ordered_message_processor` è un `message_processor` che consente ai blocchi del messaggio di elaborare messaggi nell'ordine in cui vengono ricevuti.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class ordered_message_processor : public message_processor<T>;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di payload dei messaggi gestiti dal processore.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Un alias del tipo per `T`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ordered_message_processor](#ctor)|Costruisce un oggetto `ordered_message_processor`.|  
|[~ ordered_message_processor distruttore](#dtor)|Elimina definitivamente il `ordered_message_processor` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[async_send](#async_send)|Accoda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto in modo asincrono. (Esegue l'override [message_processor:: async_send](message-processor-class.md#async_send).)|  
|[initialize](#initialize)|Inizializza il `ordered_message_processor` oggetto con il gruppo di funzione, utilità di pianificazione e alla pianificazione di callback appropriati.|  
|[initialize_batched_processing](#initialize_batched_processing)|Inizializza l'elaborazione batch dei messaggi|  
|[sync_send](#sync_send)|In modo sincrono in coda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto. (Overrides [message_processor::sync_send](message-processor-class.md#sync_send).)|  
|[wait](#wait)|Attesa di selezione specifiche del processore utilizzata nei distruttori di blocchi di messaggi per verificare che tutte le attività di elaborazione asincrona dispongano di tempo per il completamento prima di eliminare il blocco. (Esegue l'override [message_processor:: Wait](message-processor-class.md#wait).)|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[process_incoming_message](#process_incoming_message)|La funzione di elaborazione che viene chiamata in modo asincrono. Rimuove dalla coda di messaggi e inizia l'elaborazione. (Esegue l'override [message_processor:: process_incoming_message](message-processor-class.md#process_incoming_message).)|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [message_processor](message-processor-class.md)  
  
 `ordered_message_processor`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="async_send"></a> async_send 

 Accoda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto in modo asincrono.  
  
```
virtual void async_send(_Inout_opt_ message<T>* _Msg);
```  
  
### <a name="parameters"></a>Parametri  
 `_Msg`  
 Un puntatore a un messaggio.  
  
##  <a name="initialize"></a> inizializzare 

 Inizializza il `ordered_message_processor` oggetto con il gruppo di funzione, utilità di pianificazione e alla pianificazione di callback appropriati.  
  
```
void initialize(
    _Inout_opt_ Scheduler* _PScheduler,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup,
    _Handler_method const& _Handler);
```  
  
### <a name="parameters"></a>Parametri  
 `_PScheduler`  
 Un puntatore all'utilità di pianificazione da utilizzare per la pianificazione di attività leggera.  
  
 `_PScheduleGroup`  
 Puntatore al gruppo di pianificazione da utilizzare per la pianificazione di attività leggera.  
  
 `_Handler`  
 Il funtore gestore richiamato durante il callback.  
  
##  <a name="initialize_batched_processing"></a> initialize_batched_processing 

 Inizializza l'elaborazione batch dei messaggi  
  
```
virtual void initialize_batched_processing(
    _Handler_method const& _Processor,
    _Propagator_method const& _Propagator);
```  
  
### <a name="parameters"></a>Parametri  
 `_Processor`  
 Il funtore processore richiamato durante il callback.  
  
 `_Propagator`  
 Il funtore propagazione richiamato durante il callback.  
  
##  <a name="ctor"></a> ordered_message_processor 

 Costruisce un oggetto `ordered_message_processor`.  
  
```
ordered_message_processor();
```  
  
### <a name="remarks"></a>Note  
 Questo `ordered_message_processor` non pianificherà gestori asincroni o sincroni fino a quando il `initialize` funzione viene chiamata.  
  
##  <a name="dtor"></a> ~ordered_message_processor 

 Elimina definitivamente il `ordered_message_processor` oggetto.  
  
```
virtual ~ordered_message_processor();
```  
  
### <a name="remarks"></a>Note  
 Prima di eliminare il processore è in attesa per tutte le operazioni asincrone in sospeso.  
  
##  <a name="process_incoming_message"></a> process_incoming_message 

 La funzione di elaborazione che viene chiamata in modo asincrono. Rimuove dalla coda di messaggi e inizia l'elaborazione.  
  
```
virtual void process_incoming_message();
```  
  
##  <a name="sync_send"></a> sync_send 

 In modo sincrono in coda i messaggi e avvia un'attività di elaborazione, se non è già stato fatto.  
  
```
virtual void sync_send(_Inout_opt_ message<T>* _Msg);
```  
  
### <a name="parameters"></a>Parametri  
 `_Msg`  
 Un puntatore a un messaggio.  
  
##  <a name="wait"></a> attesa 

 Attesa di selezione specifiche del processore utilizzata nei distruttori di blocchi di messaggi per verificare che tutte le attività di elaborazione asincrona dispongano di tempo per il completamento prima di eliminare il blocco.  
  
```
virtual void wait();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
