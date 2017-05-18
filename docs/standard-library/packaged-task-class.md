---
title: Classe packaged_task | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- future/std::packaged_task
- future/std::packaged_task::packaged_task
- future/std::packaged_task::get_future
- future/std::packaged_task::make_ready_at_thread_exit
- future/std::packaged_task::reset
- future/std::packaged_task::swap
- future/std::packaged_task::valid
- future/std::packaged_task::operator()
- future/std::packaged_task::operator bool
dev_langs:
- C++
ms.assetid: 0a72cbe3-f22a-4bfe-8e50-dcb268c98780
caps.latest.revision: 9
author: corob-msft
ms.author: corob
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
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 3ca8c4c008daa02af2bba0df8468bea3c063c28a
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="packagedtask-class"></a>Classe packaged_task
Descrive un *provider asincrono* che è un wrapper di chiamata la cui firma di chiamata è `Ty(ArgTypes...)`. Lo *stato asincrono associato* contiene una copia dell'oggetto chiamabile oltre al potenziale risultato.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class>
class packaged_task;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[packaged_task](#packaged_task)|Costruisce un oggetto `packaged_task`.|  
|[Distruttore packaged_task::~packaged_task](#dtorpackaged_task_destructor)|Elimina un oggetto `packaged_task`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_future](#get_future)|Restituisce un oggetto [future](../standard-library/future-class.md) con lo stesso stato asincrono associato.|  
|[make_ready_at_thread_exit](#make_ready_at_thread_exit)|Chiama l'oggetto chiamabile archiviato nello stato asincrono associato e archivia il valore restituito in modo atomico.|  
|[reset](#reset)|Restituisce lo stato asincrono associato.|  
|[swap](#swap)|Scambia lo stato asincrono associato con quello di un oggetto specificato.|  
|[valido](#valid)|Specifica se l'oggetto ha uno stato asincrono associato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[packaged_task::operator=](#op_eq)|Trasferisce lo stato asincrono associato da un oggetto specificato.|  
|[packaged_task::operator()](#op_call)|Chiama l'oggetto chiamabile archiviato nello stato asincrono associato, archivia il valore restituito in modo atomico e imposta lo stato su *ready*.|  
|[Bool packaged_task::operator](#op_bool)|Specifica se l'oggetto ha uno stato asincrono associato.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<futura >  
  
 **Spazio dei nomi:** std  
  
##  <a name="get_future"></a>  packaged_task::get_future  
 Restituisce un oggetto di tipo `future<Ty>` con lo stesso *stato asincrono associato*.  
  
```
future<Ty> get_future();
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto `packaged_task` non ha uno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.  
  
 Se questo metodo è già stato chiamato per un oggetto `packaged_task` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `future_already_retrieved`.  
  
##  <a name="make_ready_at_thread_exit"></a>  packaged_task::make_ready_at_thread_exit  
 Chiama l'oggetto chiamabile archiviato nello *stato asincrono associato* e archivia il valore restituito in modo atomico.  
  
```
void make_ready_at_thread_exit(ArgTypes... args);
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto `packaged_task` non ha uno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.  
  
 Se questo metodo o [make_ready_at_thread_exit](#make_ready_at_thread_exit) è già stato chiamato per un oggetto `packaged_task` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.  
  
 In caso contrario, questo operatore chiama `INVOKE(fn, args..., Ty)`, dove *fn* è l'oggetto chiamabile archiviato nello stato asincrono associato. I valori restituiti vengono archiviato in modo atomico come risultato restituito dello stato asincrono associato.  
  
 A differenza di [packaged_task::operator()](#op_call), lo stato associato asincrono non viene impostato su `ready` finché tutti gli oggetti locali del thread chiamante non sono stati eliminati definitivamente. In genere, i thread bloccati sullo stato associato asincrono non vengono sbloccati finché non si esce dal thread chiamante.  
  
##  <a name="op_eq"></a>  packaged_task::operator=  
 Trasferisce lo *stato asincrono associato* da un oggetto specificato.  
  
```
packaged_task& operator=(packaged_task&& Right);
```  
  
### <a name="parameters"></a>Parametri  
 `Right`  
 Oggetto `packaged_task`.  
  
### <a name="return-value"></a>Valore restituito  
 `*this`  
  
### <a name="remarks"></a>Note  
 Dopo l'operazione, `Right` non ha un più uno stato asincrono associato.  
  
##  <a name="op_call"></a>  packaged_task::operator()  
 Chiama l'oggetto chiamabile archiviato nello *stato asincrono associato*, archivia il valore restituito in modo atomico e imposta lo stato su *ready*.  
  
```
void operator()(ArgTypes... args);
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto `packaged_task` non ha uno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.  
  
 Se questo metodo o [make_ready_at_thread_exit](#make_ready_at_thread_exit) è già stato chiamato per un oggetto `packaged_task` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.  
  
 In caso contrario, questo operatore chiama `INVOKE(fn, args..., Ty)`, dove *fn* è l'oggetto chiamabile archiviato nello stato asincrono associato. I valori restituiti vengono archiviato in modo atomico come risultato restituito dello stato asincrono associato e lo stato viene impostato su ready. Di conseguenza, i thread bloccati sullo stato asincrono associato vengono sbloccati.  
  
##  <a name="op_bool"></a>  Bool packaged_task::operator  
 Specifica se l'oggetto ha uno `associated asynchronous state`.  
  
```
operator bool() const noexcept;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'oggetto ha uno stato asincrono associato; in caso contrario, `false`.  
  
##  <a name="packaged_task"></a>  Costruttore packaged_task::packaged_task  
 Costruisce un oggetto `packaged_task`.  
  
```
packaged_task() noexcept;
packaged_task(packaged_task&& Right) noexcept;
template <class Fn>
   explicit packaged_task(Fn&& fn);

template <class Fn, class Alloc>
   explicit packaged_task(
      allocator_arg_t, const Alloc& alloc, Fn&& fn);
```  
  
### <a name="parameters"></a>Parametri  
 `Right`  
 Oggetto `packaged_task`.  
  
 `alloc`  
 Allocatore di memoria. Per altre informazioni, vedere [\<allocators>](../standard-library/allocators-header.md).  
  
 `fn`  
 Oggetto funzione.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore costruisce un oggetto `packaged_task` che non ha uno *stato asincrono associato*.  
  
 Il secondo costruttore crea un oggetto `packaged_task` e trasferisce lo stato asincrono associato da `Right`. Dopo l'operazione, `Right` non ha un più uno stato asincrono associato.  
  
 Il terzo costruttore crea un oggetto `packaged_task` con una copia di `fn` memorizzata nello stato asincrono associato.  
  
 Il quarto costruttore crea un oggetto `packaged_task` con una copia di `fn` memorizzata nello stato asincrono associato e utilizza `alloc` per l'allocazione della memoria.  
  
##  <a name="dtorpackaged_task_destructor"></a>  Distruttore packaged_task::~packaged_task  
 Elimina un oggetto `packaged_task`.  
  
```
~packaged_task();
```  
  
### <a name="remarks"></a>Note  
 Se lo *stato asincrono associato* non è *ready*, il distruttore archivia un'eccezione [future_error](../standard-library/future-error-class.md) con un codice di errore `broken_promise` come risultato nello stato asincrono associato e tutti i thread bloccati sullo stato asincrono associato vengono sbloccati.  
  
##  <a name="reset"></a>  packaged_task::reset  
 Usa un nuovo *stato asincrono associato* per sostituire lo stato asincrono associato esistente.  
  
```
void reset();
```  
  
### <a name="remarks"></a>Note  
 In pratica, questo metodo esegue `*this = packaged_task(move(fn))`, dove *fn* è l'oggetto funzione archiviato nello stato asincrono associato per l'oggetto. Lo stato dell'oggetto viene quindi deselezionato ed è possibile chiamare [get_future](#get_future), [operator()](#op_call) e [make_ready_at_thread_exit](#make_ready_at_thread_exit) come per un oggetto appena costruito.  
  
##  <a name="swap"></a>  packaged_task::swap  
 Scambia lo stato asincrono associato con quello di un oggetto specificato.  
  
```
void swap(packaged_task& Right) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Right`  
 Oggetto `packaged_task`.  
  
##  <a name="valid"></a>  packaged_task::valid  
 Specifica se l'oggetto ha uno `associated asynchronous state`.  
  
```
bool valid() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'oggetto ha uno stato asincrono associato; in caso contrario, `false`.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<future>](../standard-library/future.md)




