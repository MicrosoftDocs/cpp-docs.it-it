---
title: Classe Message | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- message
- AGENTS/concurrency::message
- AGENTS/concurrency::message::message
- AGENTS/concurrency::message::add_ref
- AGENTS/concurrency::message::msg_id
- AGENTS/concurrency::message::remove_ref
- AGENTS/concurrency::message::payload
dev_langs:
- C++
helpviewer_keywords:
- message class
ms.assetid: 3e1f3505-6c0c-486c-8191-666d0880ec62
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b0828d1d8698cb696b257e6730e4aea3961dd159
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46042228"
---
# <a name="message-class"></a>Classe message
Busta del messaggio di base contenente il payload dei dati passati tra blocchi della messaggistica.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class message : public ::Concurrency::details::_Runtime_object;
```  
  
#### <a name="parameters"></a>Parametri  
*T*<br/>
Il tipo di dati del payload all'interno del messaggio.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Un alias del tipo per `T`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[message](#ctor)|Di overload. Costruisce un oggetto `message`.|  
|[~ Distruttore del messaggio](#dtor)|Elimina definitivamente il `message` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[add_ref](#add_ref)|Aggiunge il conteggio dei riferimenti per il `message` oggetto. Utilizzato per i blocchi di messaggio che servono per determinare la durata dei messaggi di conteggio dei riferimenti.|  
|[msg_id](#msg_id)|Restituisce l'ID del `message` oggetto.|  
|[remove_ref](#remove_ref)|Sottrae dal conteggio dei riferimenti per il `message` oggetto. Utilizzato per i blocchi di messaggio che servono per determinare la durata dei messaggi di conteggio dei riferimenti.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[payload](#payload)|Il payload del `message` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per altre informazioni, vedere [blocchi di messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `message`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="add_ref"></a> add_ref 

 Aggiunge il conteggio dei riferimenti per il `message` oggetto. Utilizzato per i blocchi di messaggio che servono per determinare la durata dei messaggi di conteggio dei riferimenti.  
  
```
long add_ref();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nuovo valore del conteggio dei riferimenti.  
  
##  <a name="ctor"></a> Messaggio 

 Costruisce un oggetto `message`.  
  
```
message(
    T const& _P);

message(
    T const& _P,
    runtime_object_identity _Id);

message(
    message const& _Msg);

message(
    _In_ message const* _Msg);
```  
  
### <a name="parameters"></a>Parametri  
*P*<br/>
Il payload del messaggio.  
  
*ID*<br/>
ID univoco di questo messaggio.  
  
*Msg*<br/>
Un riferimento o puntatore a un `message` oggetto.  
  
### <a name="remarks"></a>Note  
 Il costruttore che accetta un puntatore a un `message` dell'oggetto come argomento viene generata un' [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_Msg` è `NULL`.  
  
##  <a name="dtor"></a> ~ messaggio 

 Elimina definitivamente il `message` oggetto.  
  
```
virtual ~message();
```  
  
##  <a name="msg_id"></a> msg_id 

 Restituisce l'ID del `message` oggetto.  
  
```
runtime_object_identity msg_id() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `runtime_object_identity` del `message` oggetto.  
  
##  <a name="payload"></a> payload 

 Il payload del `message` oggetto.  
  
```
T const payload;
```  
  
##  <a name="remove_ref"></a> remove_ref 

 Sottrae dal conteggio dei riferimenti per il `message` oggetto. Utilizzato per i blocchi di messaggio che servono per determinare la durata dei messaggi di conteggio dei riferimenti.  
  
```
long remove_ref();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nuovo valore del conteggio dei riferimenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
