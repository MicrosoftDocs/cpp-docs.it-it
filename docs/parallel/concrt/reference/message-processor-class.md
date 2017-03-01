---
title: Classe message_processor | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- agents/concurrency::message_processor
dev_langs:
- C++
helpviewer_keywords:
- message_processor class
ms.assetid: 23afb052-daa7-44ed-bf24-d2513db748da
caps.latest.revision: 16
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
ms.openlocfilehash: 98f1c1072916c4cf3670e40ce0c6ddd1a17f1b63
ms.lasthandoff: 02/24/2017

---
# <a name="messageprocessor-class"></a>Classe message_processor
La classe `message_processor` rappresenta la classe base astratta per l'elaborazione degli oggetti `message`. Non esiste garanzia sull'ordinamento dei messaggi.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class message_processor;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati del payload all'interno di messaggi gestiti da questo `message_processor` oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Un alias del tipo per `T`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[async_send (metodo)](#async_send)|Quando sottoposto a override in una classe derivata, inserisce i messaggi il blocco in modo asincrono.|  
|[sync_send (metodo)](#sync_send)|Quando sottoposto a override in una classe derivata, inserisce i messaggi il blocco in modo sincrono.|  
|[Wait (metodo)](#wait)|Quando sottoposto a override in una classe derivata, attende per completare tutte le operazioni asincrone.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[process_incoming_message (metodo)](#process_incoming_message)|Quando sottoposto a override in una classe derivata, esegue l'elaborazione diretta dei messaggi nel blocco. Chiamato una volta ogni volta che viene aggiunto un nuovo messaggio e la coda risulta vuota.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `message_processor`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameasyncsenda-asyncsend"></a><a name="async_send"></a>async_send 

 Quando sottoposto a override in una classe derivata, inserisce i messaggi il blocco in modo asincrono.  
  
```
virtual void async_send(_Inout_opt_ message<T>* _Msg) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Msg`  
 Oggetto `message` oggetto a cui inviare in modo asincrono.  
  
### <a name="remarks"></a>Note  
 Le implementazioni del processore devono eseguire l'override di questo metodo.  
  
##  <a name="a-nameprocessincomingmessagea-processincomingmessage"></a><a name="process_incoming_message"></a>process_incoming_message 

 Quando sottoposto a override in una classe derivata, esegue l'elaborazione diretta dei messaggi nel blocco. Chiamato una volta ogni volta che viene aggiunto un nuovo messaggio e la coda risulta vuota.  
  
```
virtual void process_incoming_message() = 0;
```  
  
### <a name="remarks"></a>Note  
 Le implementazioni del blocco di messaggio deve eseguire l'override di questo metodo.  
  
##  <a name="a-namesyncsenda-syncsend"></a><a name="sync_send"></a>sync_send 

 Quando sottoposto a override in una classe derivata, inserisce i messaggi il blocco in modo sincrono.  
  
```
virtual void sync_send(_Inout_opt_ message<T>* _Msg) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_Msg`  
 Oggetto `message` oggetto a cui inviare in modo sincrono.  
  
### <a name="remarks"></a>Note  
 Le implementazioni del processore devono eseguire l'override di questo metodo.  
  
##  <a name="a-namewaita-wait"></a><a name="wait"></a>attesa 

 Quando sottoposto a override in una classe derivata, attende per completare tutte le operazioni asincrone.  
  
```
virtual void wait() = 0;
```  
  
### <a name="remarks"></a>Note  
 Le implementazioni del processore devono eseguire l'override di questo metodo.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe ordered_message_processor](ordered-message-processor-class.md)

