---
title: Classe promise | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- future/std::promise
- future/std::promise::promise
- future/std::promise::get_future
- future/std::promise::set_exception
- future/std::promise::set_exception_at_thread_exit
- future/std::promise::set_value
- future/std::promise::set_value_at_thread_exit
- future/std::promise::swap
dev_langs:
- C++
ms.assetid: 2931558c-d94a-4ba1-ac4f-20bf7b6e23f9
caps.latest.revision: 15
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
ms.openlocfilehash: 2f052d1af76e8f874e2bbe0187a82b838e47f45e
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="promise-class"></a>Classe promise
Descrive un *provider asincrono*.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
class promise;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[oggetto Promise](#promise)|Costruisce un oggetto `promise`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_future](#get_future)|Restituisce un elemento [future](../standard-library/future-class.md) associato a questo oggetto promise.|  
|[set_exception](#set_exception)|Imposta atomicamente il risultato dell'oggetto promise per indicare un'eccezione.|  
|[set_exception_at_thread_exit](#set_exception_at_thread_exit)|Imposta atomicamente il risultato dell'oggetto promise per indicare un'eccezione e recapitare la notifica solo dopo che tutti gli oggetti locali nel thread corrente sono stati eliminati definitivamente (in genere all'uscita del thread).|  
|[set_Value](#set_value)|Imposta atomicamente il risultato dell'oggetto promise per indicare un valore.|  
|[set_value_at_thread_exit](#set_value_at_thread_exit)|Imposta atomicamente il risultato dell'oggetto promise per indicare un valore e recapitare la notifica solo dopo che tutti gli oggetti locali nel thread corrente sono stati eliminati definitivamente (in genere all'uscita del thread).|  
|[swap](#swap)|Scambia lo *stato asincrono associato* di questo oggetto promise con quello di un oggetto promise specificato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[promise::operator=](#op_eq)|Assegnazione dello stato condiviso dell'oggetto promise.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `promise`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<futura >  
  
 **Spazio dei nomi:** std  
  
##  <a name="get_future"></a>  promise::get_future  
 Restituisce un oggetto [future](../standard-library/future-class.md) con lo stesso *stato asincrono associato* di questo oggetto promise.  
  
```
future<Ty> get_future();
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto promise è vuoto, il metodo genera un [future_error](../standard-library/future-error-class.md) con [error_code](../standard-library/error-code-class.md) `no_state`.  
  
 Se il metodo è già stato chiamato per un oggetto promise con lo stesso stato asincrono associato, il metodo genera un `future_error` con `error_code` `future_already_retrieved`.  
  
##  <a name="op_eq"></a>  promise::operator=  
 Trasferisce lo *stato asincrono associato* da un oggetto `promise` specificato.  
  
```
promise& operator=(promise&& Other) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Other`  
 Oggetto `promise`.  
  
### <a name="return-value"></a>Valore restituito  
 `*this`  
  
### <a name="remarks"></a>Note  
 Questo operatore trasferisce lo stato asincrono associato da `Other`. Dopo il trasferimento, `Other` è *empty*.  
  
##  <a name="promise"></a>  Costruttore promise::promise  
 Costruisce un oggetto `promise`.  
  
```
promise();
template <class Alloc>
promise(allocator_arg_t, const Alloc& Al);
promise(promise&& Other) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Al`  
 Allocatore di memoria. Per altre informazioni, vedere [\<allocators>](../standard-library/allocators-header.md).  
  
 `Other`  
 Oggetto `promise`.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore costruisce un oggetto *empty*`promise`.  
  
 Il secondo costruttore costruisce un oggetto `promise` vuoto e usa `Al` per l'allocazione della memoria.  
  
 Il terzo costruttore costruisce un oggetto `promise` e trasferisce lo stato asincrono associato da `Other`, lasciando `Other` vuoto.  
  
##  <a name="set_exception"></a>  promise::set_exception  
 Archivia un'eccezione in modo atomico come risultato di questo oggetto `promise` e imposta lo *stato asincrono associato* su *ready*.  
  
```
void set_exception(exception_ptr Exc);
```  
  
### <a name="parameters"></a>Parametri  
 `Exc`  
 Oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) archiviato con questo metodo come risultato dell'eccezione.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto `promise` non ha alcuno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.  
  
 Se `set_exception`, [set_exception_at_thread_exit](#set_exception_at_thread_exit), [set_value](#set_value) o [set_value_at_thread_exit](#set_value_at_thread_exit) è già stato chiamato per un oggetto `promise` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.  
  
 Come risultato di questo metodo, i thread bloccati sullo stato asincrono associato vengono sbloccati.  
  
##  <a name="set_exception_at_thread_exit"></a>  promise::set_exception_at_thread_exit  
 Imposta atomicamente il risultato del'oggetto `promise` per indicare un'eccezione, recapitante la notifica solo dopo che tutti gli oggetti locali nel thread corrente sono stati eliminati (in genere all'uscita del thread).  
  
```
void set_exception_at_thread_exit(exception_ptr Exc);
```  
  
### <a name="parameters"></a>Parametri  
 `Exc`  
 Oggetto [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) archiviato con questo metodo come risultato dell'eccezione.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto promise non ha alcuno *stato asincrono associato*, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.  
  
 Se [set_exception](#set_exception), `set_exception_at_thread_exit`, [set_value](#set_value) o [set_value_at_thread_exit](#set_value_at_thread_exit) è già stato chiamato per un oggetto `promise` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.  
  
 A differenza di [set_exception](#set_exception), questo metodo non imposta lo stato asincrono associato su ready finché tutti gli oggetti locali del thread corrente non sono stati eliminati definitivamente. In genere, i thread bloccati sullo stato associato asincrono non vengono sbloccati finché non si esce dal thread corrente.  
  
##  <a name="set_value"></a>  promise::set_value  
 Archivia un valore in modo atomico come risultato di questo oggetto `promise` e imposta lo *stato asincrono associato* su *ready*.  
  
```
void promise::set_value(const Ty& Val);
void promise::set_value(Ty&& Val);
void promise<Ty&>::set_value(Ty& Val);
void promise<void>::set_value();
```  
  
### <a name="parameters"></a>Parametri  
 `Val`  
 Valore da archiviare come risultato.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto `promise` non ha alcuno stato asincrono associato, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.  
  
 Se [set_exception](#set_exception), [set_exception_at_thread_exit](#set_exception_at_thread_exit), `set_value` o [set_value_at_thread_exit](#set_value_at_thread_exit) è già stato chiamato per un oggetto `promise` con lo stesso stato asincrono associato, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.  
  
 Come risultato di questo metodo, i thread bloccati sullo stato asincrono associato vengono sbloccati.  
  
 Il primo metodo genera anche un'eccezione generata quando `Val` viene copiato nello stato asincrono associato. In questo caso lo stato asincrono associato non è impostato su ready.  
  
 Il secondo metodo genera anche un'eccezione generata quando `Val` viene spostato nello stato asincrono associato. In questo caso lo stato asincrono associato non è impostato su ready.  
  
 Per la parziale specializzazione `promise<Ty&>`, il valore archiviato è in effetti un riferimento a `Val`.  
  
 Per la specializzazione `promise<void>`, non esiste alcun valore archiviato.  
  
##  <a name="set_value_at_thread_exit"></a>  promise::set_value_at_thread_exit  
 Archivia un valore in modo atomico come risultato di questo oggetto `promise`.  
  
```
void promise::set_value_at_thread_exit(const Ty& Val);
void promise::set_value_at_thread_exit(Ty&& Val);
void promise<Ty&>::set_value_at_thread_exit(Ty& Val);
void promise<void>::set_value_at_thread_exit();
```  
  
### <a name="parameters"></a>Parametri  
 `Val`  
 Valore da archiviare come risultato.  
  
### <a name="remarks"></a>Note  
 Se l'oggetto promise non ha alcuno *stato asincrono associato*, il metodo genera un [future_error](../standard-library/future-error-class.md) con codice di errore `no_state`.  
  
 Se [set_exception](#set_exception), [set_exception_at_thread_exit](#set_exception_at_thread_exit), [set_value](#set_value) o `set_value_at_thread_exit` è già stato chiamato per un oggetto `promise` con lo stesso stato associato asincrono, il metodo genera un `future_error` con codice di errore `promise_already_satisfied`.  
  
 A differenza di `set_value`, lo stato associato asincrono non viene impostato su ready finché tutti gli oggetti locali del thread corrente non sono stati eliminati definitivamente. In genere, i thread bloccati sullo stato associato asincrono non vengono sbloccati finché non si esce dal thread corrente.  
  
 Il primo metodo genera anche un'eccezione generata quando `Val` viene copiato nello stato asincrono associato.  
  
 Il secondo metodo genera anche un'eccezione generata quando `Val` viene spostato nello stato asincrono associato.  
  
 Per la parziale specializzazione `promise<Ty&>`, il valore archiviato è in effetti un riferimento a `Val`.  
  
 Per la specializzazione `promise<void>`, non esiste alcun valore archiviato.  
  
##  <a name="swap"></a>  promise::swap  
 Scambia lo *stato asincrono associato* di questo oggetto promise con quello di un oggetto specificato.  
  
```
void swap(promise& Other) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Other`  
 Oggetto `promise`.  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md) (Riferimento file di intestazione)




 


