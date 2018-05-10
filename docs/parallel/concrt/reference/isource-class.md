---
title: Classe ISource | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- ISource
- AGENTS/concurrency::ISource
- AGENTS/concurrency::ISource::accept
- AGENTS/concurrency::ISource::acquire_ref
- AGENTS/concurrency::ISource::consume
- AGENTS/concurrency::ISource::link_target
- AGENTS/concurrency::ISource::release
- AGENTS/concurrency::ISource::release_ref
- AGENTS/concurrency::ISource::reserve
- AGENTS/concurrency::ISource::unlink_target
- AGENTS/concurrency::ISource::unlink_targets
dev_langs:
- C++
helpviewer_keywords:
- ISource class
ms.assetid: c7b73463-42f6-4dcc-801a-81379b12d35a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27b1aa57a8c90c2f996aab3b8ee47797f15edd5b
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="isource-class"></a>Classe ISource
La classe `ISource` corrisponde all'interfaccia per tutti i blocchi di origine. I blocchi di origine propagano messaggi ai blocchi `ITarget`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>
class ISource;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di dati del payload all'interno dei messaggi prodotti da blocco di origine.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`source_type`|Un alias del tipo per `T`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[~ Distruttore ISource](#dtor)|Elimina definitivamente il `ISource` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accept](#accept)|Quando sottoposto a override in una classe derivata, accetta un messaggio offerto da questo `ISource` blocco, trasferendo la proprietà al chiamante.|  
|[acquire_ref](#acquire_ref)|Quando sottoposto a override in una classe derivata, acquisisce un conteggio dei riferimenti su questo `ISource` blocco, per evitare l'eliminazione.|  
|[Utilizzare](#consume)|Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente offerto da questo `ISource` blocco e riservato correttamente dalla destinazione del trasferimento della proprietà al chiamante.|  
|[link_target](#link_target)|Quando sottoposto a override in una classe derivata, è possibile collegare un blocco di destinazione a questo `ISource` blocco.|  
|[release](#release)|Quando sottoposto a override in una classe derivata, rilascia una prenotazione corretta del messaggio precedente.|  
|[release_ref](#release_ref)|Quando sottoposto a override in una classe derivata, rilascia un conteggio dei riferimenti su questo `ISource` blocco.|  
|[reserve](#reserve)|Quando sottoposto a override in una classe derivata, riserva un messaggio precedentemente offerto da questo `ISource` blocco.|  
|[unlink_target](#unlink_target)|Quando sottoposto a override in una classe derivata, consente di scollegare un blocco di destinazione dal `ISource` bloccare, se trovato in precedenza da collegare.|  
|[unlink_targets](#unlink_targets)|Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di destinazione dal `ISource` blocco.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ISource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** agents.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="accept"></a> Accettare 

 Quando sottoposto a override in una classe derivata, accetta un messaggio offerto da questo `ISource` blocco, trasferendo la proprietà al chiamante.  
  
```
virtual message<T>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `accept` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al messaggio che il chiamante dispone ora di proprietà di.  
  
### <a name="remarks"></a>Note  
 Il `accept` metodo viene chiamato da una destinazione, mentre un messaggio viene offerto da questo `ISource` blocco. Il puntatore del messaggio restituito può essere diverso da quello passato il `propagate` metodo il `ITarget` bloccare, se l'origine decide di creare una copia del messaggio.  
  
##  <a name="acquire_ref"></a> acquire_ref 

 Quando sottoposto a override in una classe derivata, acquisisce un conteggio dei riferimenti su questo `ISource` blocco, per evitare l'eliminazione.  
  
```
virtual void acquire_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto collegato a questa origine durante la `link_target` metodo.  
  
##  <a name="consume"></a> Utilizzare 

 Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente offerto da questo `ISource` blocco e riservato correttamente dalla destinazione del trasferimento della proprietà al chiamante.  
  
```
virtual message<T>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
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
  
##  <a name="dtor"></a> ~ ISource 

 Elimina definitivamente il `ISource` oggetto.  
  
```
virtual ~ISource();
```  
  
##  <a name="link_target"></a> link_target 

 Quando sottoposto a override in una classe derivata, è possibile collegare un blocco di destinazione a questo `ISource` blocco.  
  
```
virtual void link_target(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore al blocco di destinazione collegato a questo `ISource` blocco.  
  
##  <a name="release"></a> versione 

 Quando sottoposto a override in una classe derivata, rilascia una prenotazione corretta del messaggio precedente.  
  
```
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` riservato `message` oggetto.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `release` metodo.  
  
##  <a name="release_ref"></a> release_ref 

 Quando sottoposto a override in una classe derivata, rilascia un conteggio dei riferimenti su questo `ISource` blocco.  
  
```
virtual void release_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Puntatore al blocco di destinazione che chiama questo metodo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato da un `ITarget` oggetto che non è collegato da questa origine. Blocco di origine è autorizzato a rilasciare le risorse riservate per il blocco di destinazione.  
  
##  <a name="reserve"></a> riserva 

 Quando sottoposto a override in una classe derivata, riserva un messaggio precedentemente offerto da questo `ISource` blocco.  
  
```
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_MsgId`  
 Il `runtime_object_identity` proposto `message` oggetto.  
  
 `_PTarget`  
 Un puntatore al blocco di destinazione che viene eseguita la chiamata di `reserve` metodo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il messaggio è stato riservato, `false` in caso contrario. Le prenotazioni possono avere esito negativo per vari motivi, ad esempio: il messaggio era già riservato o accettato da un'altra destinazione, le prenotazioni potrebbero essere negate dall'origine e così via.  
  
### <a name="remarks"></a>Note  
 Dopo aver chiamato `reserve`, se ha esito positivo, è necessario chiamare `consume` o `release` per assumere o rilasciare il possesso del messaggio, rispettivamente.  
  
##  <a name="unlink_target"></a> unlink_target 

 Quando sottoposto a override in una classe derivata, consente di scollegare un blocco di destinazione dal `ISource` bloccare, se trovato in precedenza da collegare.  
  
```
virtual void unlink_target(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `_PTarget`  
 Un puntatore al blocco di destinazione da scollegare dal `ISource` blocco.  
  
##  <a name="unlink_targets"></a> unlink_targets 

 Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di destinazione dal `ISource` blocco.  
  
```
virtual void unlink_targets() = 0;
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe ITarget](itarget-class.md)
