---
title: Classe ordered_message_processor | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- agents/concurrency::ordered_message_processor
dev_langs:
- C++
helpviewer_keywords:
- ordered_message_processor class
ms.assetid: 787adfb7-7f79-4a70-864a-80e3b64088cd
caps.latest.revision: 17
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
ms.openlocfilehash: a9653c8eb5f05e56fd7812d334575e62dc101d63
ms.lasthandoff: 02/24/2017

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
|[Costruttore ordered_message_processor](#ctor)|Costruisce un oggetto `ordered_message_processor`.|  
|[~ ordered_message_processor distruttore](#dtor)|Elimina il `ordered_message_processor` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[async_send (metodo)](#async_send)|Le code dei messaggi e avvia un'attività di elaborazione, se non è già stato fatto in modo asincrono. (Esegue l'override di [message_processor:: async_send](message-processor-class.md#async_send).)|  
|[Initialize (metodo)](#initialize)|Inizializza il `ordered_message_processor` oggetto con il gruppo di funzione, utilità di pianificazione e pianificazione di callback appropriata.|  
|[initialize_batched_processing (metodo)](#initialize_batched_processing)|Inizializza l'elaborazione batch dei messaggi|  
|[sync_send (metodo)](#sync_send)|In modo sincrono accoda i messaggi e viene avviata un'attività di elaborazione, se non è già stato fatto. (Esegue l'override di [message_processor:: sync_send](message-processor-class.md#sync_send).)|  
|[Wait (metodo)](#wait)|Attesa di rotazione specifico del processore utilizzata nei distruttori di blocchi di messaggi per assicurarsi che tutte le attività di elaborazione asincrona dispongano di tempo per il completamento prima di eliminare il blocco. (Esegue l'override di [message_processor:: Wait](message-processor-class.md#wait).)|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[process_incoming_message (metodo)](#process_incoming_message)|La funzione di elaborazione che viene chiamata in modo asincrono. Rimuove dalla coda di messaggi e inizia l'elaborazione. (Esegue l'override di [message_processor:: process_incoming_message](message-processor-class.md#process_incoming_message).)|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [message_processor](message-processor-class.md)  
  
 `ordered_message_processor`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameasyncsenda-asyncsend"></a><a name="async_send"></a>async_send 

 Le code dei messaggi e avvia un'attività di elaborazione, se non è già stato fatto in modo asincrono.  
  
```
virtual void async_send(_Inout_opt_ message<T>* _Msg);
```  
  
### <a name="parameters"></a>Parametri  
 `_Msg`  
 Un puntatore a un messaggio.  
  
##  <a name="a-nameinitializea-initialize"></a><a name="initialize"></a>inizializzare 

 Inizializza il `ordered_message_processor` oggetto con il gruppo di funzione, utilità di pianificazione e pianificazione di callback appropriata.  
  
```
void initialize(
    _Inout_opt_ Scheduler* _PScheduler,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup,
    _Handler_method const& _Handler);
```  
  
### <a name="parameters"></a>Parametri  
 `_PScheduler`  
 Puntatore all'utilità di pianificazione da utilizzare per la pianificazione di attività leggera.  
  
 `_PScheduleGroup`  
 Puntatore al gruppo di pianificazione da utilizzare per la pianificazione di attività leggera.  
  
 `_Handler`  
 Funtore gestore richiamato durante il callback.  
  
##  <a name="a-nameinitializebatchedprocessinga-initializebatchedprocessing"></a><a name="initialize_batched_processing"></a>initialize_batched_processing 

 Inizializza l'elaborazione batch dei messaggi  
  
```
virtual void initialize_batched_processing(
    _Handler_method const& _Processor,
    _Propagator_method const& _Propagator);
```  
  
### <a name="parameters"></a>Parametri  
 `_Processor`  
 Funtore processore richiamato durante il callback.  
  
 `_Propagator`  
 Funtore propagazione richiamato durante il callback.  
  
##  <a name="a-namectora-orderedmessageprocessor"></a><a name="ctor"></a>ordered_message_processor 

 Costruisce un oggetto `ordered_message_processor`.  
  
```
ordered_message_processor();
```  
  
### <a name="remarks"></a>Note  
 Questo `ordered_message_processor` non pianificherà gestori asincroni o sincroni fino a quando il `initialize` viene chiamata la funzione.  
  
##  <a name="a-namedtora-orderedmessageprocessor"></a><a name="dtor"></a>~ ordered_message_processor 

 Elimina il `ordered_message_processor` oggetto.  
  
```
virtual ~ordered_message_processor();
```  
  
### <a name="remarks"></a>Note  
 Attende che tutte le operazioni asincrone in sospeso prima di eliminare il processore.  
  
##  <a name="a-nameprocessincomingmessagea-processincomingmessage"></a><a name="process_incoming_message"></a>process_incoming_message 

 La funzione di elaborazione che viene chiamata in modo asincrono. Rimuove dalla coda di messaggi e inizia l'elaborazione.  
  
```
virtual void process_incoming_message();
```  
  
##  <a name="a-namesyncsenda-syncsend"></a><a name="sync_send"></a>sync_send 

 In modo sincrono accoda i messaggi e viene avviata un'attività di elaborazione, se non è già stato fatto.  
  
```
virtual void sync_send(_Inout_opt_ message<T>* _Msg);
```  
  
### <a name="parameters"></a>Parametri  
 `_Msg`  
 Un puntatore a un messaggio.  
  
##  <a name="a-namewaita-wait"></a><a name="wait"></a>attesa 

 Attesa di rotazione specifico del processore utilizzata nei distruttori di blocchi di messaggi per assicurarsi che tutte le attività di elaborazione asincrona dispongano di tempo per il completamento prima di eliminare il blocco.  
  
```
virtual void wait();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

