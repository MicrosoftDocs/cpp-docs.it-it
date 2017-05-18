---
title: Classe critical_section | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- critical_section
- CONCRT/concurrency::critical_section
- CONCRT/concurrency::critical_section::critical_section::scoped_lock Class
- CONCRT/concurrency::critical_section::critical_section
- CONCRT/concurrency::critical_section::lock
- CONCRT/concurrency::critical_section::native_handle
- CONCRT/concurrency::critical_section::try_lock
- CONCRT/concurrency::critical_section::try_lock_for
- CONCRT/concurrency::critical_section::unlock
dev_langs:
- C++
helpviewer_keywords:
- critical_section class
ms.assetid: fa3c89d6-be5d-4d1b-bddb-8232814e6cf6
caps.latest.revision: 23
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
ms.openlocfilehash: 58821589a4b7596b80179a77dfd6a5772531f053
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="criticalsection-class"></a>Classe critical_section
Un'esclusione reciproca non rientrante che tiene conto in modo esplicito del runtime di concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
class critical_section;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`native_handle_type`|Riferimento a un oggetto `critical_section`.|  
  
### <a name="public-classes"></a>Classi pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe critical_section:: scoped_lock](#critical_section__scoped_lock_class)|Un'eccezione wrapper RAII sicuro per un `critical_section` oggetto.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[critical_section](#ctor)|Costruisce una nuova sezione critica.|  
|[~ critical_section distruttore](#dtor)|Elimina una sezione critica.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[lock](#lock)|Acquisisce la sezione critica.|  
|[native_handle](#native_handle)|Restituisce un handle nativo specifico di piattaforma, se presente.|  
|[try_lock](#try_lock)|Tenta di acquisire il blocco senza bloccarsi.|  
|[try_lock_for](#try_lock_for)|Tenta di acquisire il blocco senza bloccarsi per un numero specifico di millisecondi.|  
|[unlock](#unlock)|Sblocca la sezione critica.|  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [strutture di dati di sincronizzazione](../../../parallel/concrt/synchronization-data-structures.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `critical_section`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>critical_section 

 Costruisce una nuova sezione critica.  
  
```
critical_section();
```  
  
##  <a name="dtor"></a>~ critical_section 

 Elimina una sezione critica.  
  
```
~critical_section();
```  
  
### <a name="remarks"></a>Note  
 È previsto che il blocco non è più quando il distruttore viene eseguito. Consentire alla sezione critica di distruggere con il blocco ancora mantenuto causa un comportamento indefinito.  
  
##  <a name="lock"></a>blocco 

 Acquisisce la sezione critica.  
  
```
void lock();
```  
  
### <a name="remarks"></a>Note  
 Spesso è preferibile utilizzare il [scoped_lock](#critical_section__scoped_lock_class) costrutto per acquisire e rilasciare un `critical_section` oggetto in un'eccezione modo sicuro.  
  
 Se il blocco è già utilizzato dal contesto di chiamata, un [improper_lock](improper-lock-class.md) verrà generata l'eccezione.  
  
##  <a name="native_handle"></a>native_handle 

 Restituisce un handle nativo specifico di piattaforma, se presente.  
  
```
native_handle_type native_handle();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento alla sezione critica.  
  
### <a name="remarks"></a>Note  
 Oggetto `critical_section` oggetto non è associato a un handle nativo specifico di una piattaforma per il sistema operativo Windows. Il metodo restituisce semplicemente un riferimento all'oggetto stesso.  
  
##  <a name="critical_section__scoped_lock_class"></a>Classe critical_section:: scoped_lock  
 Un'eccezione wrapper RAII sicuro per un `critical_section` oggetto.  
  
```
class scoped_lock;
```  
  
##  <a name="critical_section__scoped_lock_ctor"></a>scoped_lock::scoped_lock 

 Costruisce un `scoped_lock` dell'oggetto e acquisisce il `critical_section` oggetto passato nel `_Critical_section` parametro. Se la sezione critica viene mantenuta da un altro thread, questa chiamata verrà bloccata.  
  
```
explicit _CRTIMP scoped_lock(critical_section& _Critical_section);
```  
  
### <a name="parameters"></a>Parametri  
 `_Critical_section`  
 La sezione critica da bloccare.  
  
##  <a name="critical_section__scoped_lock_dtor"></a>scoped_lock:: ~ scoped_lock 

 Elimina un `scoped_lock` dell'oggetto e rilascia la sezione critica fornita nel relativo costruttore.  
  
```
~scoped_lock();
```  
  
##  <a name="try_lock"></a>try_lock 

 Tenta di acquisire il blocco senza bloccarsi.  
  
```
bool try_lock();
```  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato acquisito il blocco, il valore `true`; in caso contrario, il valore `false`.  
  
##  <a name="try_lock_for"></a>try_lock_for 

 Tenta di acquisire il blocco senza bloccarsi per un numero specifico di millisecondi.  
  
```
bool try_lock_for(unsigned int _Timeout);
```  
  
### <a name="parameters"></a>Parametri  
 `_Timeout`  
 Numero di millisecondi che si devono attendere prima del timeout.  
  
### <a name="return-value"></a>Valore restituito  
 Se è stato acquisito il blocco, il valore `true`; in caso contrario, il valore `false`.  
  
##  <a name="unlock"></a>sbloccare 

 Sblocca la sezione critica.  
  
```
void unlock();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe reader_writer_lock](reader-writer-lock-class.md)

