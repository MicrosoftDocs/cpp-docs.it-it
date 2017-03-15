---
title: Classe Message | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- agents/concurrency::message
dev_langs:
- C++
helpviewer_keywords:
- message class
ms.assetid: 3e1f3505-6c0c-486c-8191-666d0880ec62
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
translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 08d67f2899f27a92250d6fedbf755a5413e01ebd
ms.lasthandoff: 02/24/2017

---
# <a name="message-class"></a>Classe message
Busta del messaggio di base contenente il payload dei dati passati tra blocchi della messaggistica.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class message : public ::Concurrency::details::_Runtime_object;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati del payload all'interno del messaggio.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`type`|Un alias del tipo per `T`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[messaggio di costruttore](#ctor)|Di overload. Costruisce un oggetto `message`.|  
|[~ Distruttore dei messaggi](#dtor)|Elimina il `message` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[add_ref (metodo)](#add_ref)|Aggiunge il numero di riferimento per il `message` oggetto. Utilizzato per blocchi di messaggi che è necessario per determinare la durata dei messaggi di conteggio dei riferimenti.|  
|[msg_id (metodo)](#msg_id)|Restituisce l'ID del `message` oggetto.|  
|[remove_ref (metodo)](#remove_ref)|Consente di sottrarre dal numero di riferimento per il `message` oggetto. Utilizzato per blocchi di messaggi che è necessario per determinare la durata dei messaggi di conteggio dei riferimenti.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[payload (membro dati)](#payload)|Il payload di `message` oggetto.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `message`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameaddrefa-addref"></a><a name="add_ref"></a>add_ref 

 Aggiunge il numero di riferimento per il `message` oggetto. Utilizzato per blocchi di messaggi che è necessario per determinare la durata dei messaggi di conteggio dei riferimenti.  
  
```
long add_ref();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nuovo valore del conteggio dei riferimenti.  
  
##  <a name="a-namectora-message"></a><a name="ctor"></a>Messaggio 

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
 `_P`  
 Il payload del messaggio.  
  
 `_Id`  
 ID univoco di questo messaggio.  
  
 `_Msg`  
 Un riferimento o puntatore a un `message` oggetto.  
  
### <a name="remarks"></a>Note  
 Il costruttore che accetta un puntatore a un `message` l'oggetto come un argomento genera un [invalid_argument](../../../standard-library/invalid-argument-class.md) eccezione se il parametro `_Msg` è `NULL`.  
  
##  <a name="a-namedtora-message"></a><a name="dtor"></a>~ messaggio 

 Elimina il `message` oggetto.  
  
```
virtual ~message();
```  
  
##  <a name="a-namemsgida-msgid"></a><a name="msg_id"></a>msg_id 

 Restituisce l'ID del `message` oggetto.  
  
```
runtime_object_identity msg_id() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `runtime_object_identity` di `message` oggetto.  
  
##  <a name="a-namepayloada-payload"></a><a name="payload"></a>payload 

 Il payload di `message` oggetto.  
  
```
T const payload;
```  
  
##  <a name="a-nameremoverefa-removeref"></a><a name="remove_ref"></a>remove_ref 

 Consente di sottrarre dal numero di riferimento per il `message` oggetto. Utilizzato per blocchi di messaggi che è necessario per determinare la durata dei messaggi di conteggio dei riferimenti.  
  
```
long remove_ref();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nuovo valore del conteggio dei riferimenti.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

