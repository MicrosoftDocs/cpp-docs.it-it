---
title: Classe condition_variable | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- condition_variable/std::condition
- condition_variable/std::condition_variable::condition_variable
- condition_variable/std::condition_variable::native_handle
- condition_variable/std::condition_variable::notify_all
- condition_variable/std::condition_variable::notify_one
- condition_variable/std::condition_variable::wait
- condition_variable/std::condition_variable::wait_for
- condition_variable/std::condition_variable::wait_until
dev_langs:
- C++
ms.assetid: 80b1295c-b73d-4d46-b664-6e183f2eec1b
caps.latest.revision: 16
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
ms.openlocfilehash: 5614afd8d17f119b47d11c641e3f999399f80925
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="conditionvariable-class"></a>Classe condition_variable
Usare la classe `condition_variable` per attendere un evento quando si ha un `mutex` di tipo `unique_lock<mutex>`. Gli oggetti di questo tipo possono avere prestazioni migliori rispetto agli oggetti di tipo [condition_variable_any<unique_lock\<mutex>>](../standard-library/condition-variable-any-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```
class condition_variable;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[condition_variable](#condition_variable)|Costruisce un oggetto `condition_variable`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[native_handle](#native_handle)|Restituisce il tipo specifico per l'implementazione che rappresenta l'handle condition_variable.|  
|[notify_all](#notify_all)|Sblocca tutti i thread in attesa dell'oggetto `condition_variable`.|  
|[notify_one](#notify_one)|Sblocca uno dei thread in attesa dell'oggetto `condition_variable`.|  
|[attesa](#wait)|Blocca un thread.|  
|[wait_for](#wait_for)|Blocca un thread e imposta un intervallo di tempo dopo il quale il thread viene sbloccato.|  
|[wait_until](#wait_until)|Blocca un thread e imposta un tempo massimo dopo il quale il thread viene sbloccato.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<condition_variable >  
  
 **Spazio dei nomi:** std  
  
##  <a name="condition_variable"></a>  Costruttore condition_variable::condition_variable  
 Costruisce un oggetto `condition_variable`.  
  
```
condition_variable();
```  
  
### <a name="remarks"></a>Note  
 Se non è disponibile memoria sufficiente, il costruttore genera un oggetto [system_error](../standard-library/system-error-class.md) che ha un codice di errore `not_enough_memory`. Se l'oggetto non può essere costruito perché non è disponibile un'altra risorsa, il costruttore genera un oggetto `system_error` che ha un codice di errore `resource_unavailable_try_again`.  
  
##  <a name="native_handle"></a>  condition_variable::native_handle  
 Restituisce il tipo specifico per l'implementazione che rappresenta l'handle condition_variable.  
  
```
native_handle_type native_handle();
```  
  
### <a name="return-value"></a>Valore restituito  
 `native_handle_type` viene definito come un puntatore a strutture di dati interne di runtime di concorrenza.  
  
##  <a name="notify_all"></a>  condition_variable::notify_all  
 Sblocca tutti i thread in attesa dell'oggetto `condition_variable`.  
  
```
void notify_all() noexcept;
```  
  
##  <a name="notify_one"></a>  condition_variable::notify_one  
 Sblocca uno dei thread in attesa dell'oggetto `condition_variable`.  
  
```
void notify_one() noexcept;
```  
  
##  <a name="wait"></a>  condition_variable::wait  
 Blocca un thread.  
  
```
void wait(unique_lock<mutex>& Lck);

template <class Predicate>
void wait(unique_lock<mutex>& Lck, Predicate Pred);
```  
  
### <a name="parameters"></a>Parametri  
 `Lck`  
 Un oggetto [unique_lock\<mutex>](../standard-library/unique-lock-class.md).  
  
 `Pred`  
 Qualsiasi espressione che restituisca un valore `true` o `false`.  
  
### <a name="remarks"></a>Note  
 Il primo metodo si blocca fino a quando l'oggetto `condition_variable` non viene segnalato da una chiamata a [notify_one](#notify_one) o [notify_all](#notify_all). Può anche riattivarsi in modo spurio.  
  
 Il secondo metodo esegue il codice seguente.  
  
```cpp  
while(!Pred())
    wait(Lck);
```    
  
##  <a name="wait_for"></a>  condition_variable::wait_for  
 Blocca un thread e imposta un intervallo di tempo dopo il quale il thread viene sbloccato.  
  
```
template <class Rep, class Period>
cv_status wait_for(
    unique_lock<mutex>& Lck,
    const chrono::duration<Rep, Period>& Rel_time);

template <class Rep, class Period, class Predicate>
bool wait_for(
    unique_lock<mutex>& Lck,
    const chrono::duration<Rep, Period>& Rel_time, 
    Predicate Pred);
```  
  
### <a name="parameters"></a>Parametri  
 `Lck`  
 Un oggetto [unique_lock\<mutex>](../standard-library/unique-lock-class.md).  
  
 `Rel_time`  
 Un oggetto `chrono::duration` che specifica la quantità di tempo prima che il thread venga riattivato.  
  
 `Pred`  
 Qualsiasi espressione che restituisca un valore `true` o `false`.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo metodo restituisce `cv_status::timeout` se l'attesa termina quando `Rel_time` è trascorso. In caso contrario, il metodo restituisce `cv_status::no_timeout`.  
  
 Il secondo metodo restituisce il valore di `Pred`.  
  
### <a name="remarks"></a>Note  
 Il primo metodo si blocca fino a quando l'oggetto `condition_variable` non viene segnalato da una chiamata a [notify_one](#notify_one) o [notify_all](#notify_all), oppure finché non è trascorso l'intervallo di tempo `Rel_time`. Può anche riattivarsi in modo spurio.  
  
 Il secondo metodo esegue il codice seguente.  
  
```cpp  
while(!Pred())
    if(wait_for(Lck, Rel_time) == cv_status::timeout)
    return Pred();

return true;
```  
  
##  <a name="wait_until"></a>  condition_variable::wait_until  
 Blocca un thread e imposta un tempo massimo dopo il quale il thread viene sbloccato.  
  
```
template <class Clock, class Duration>
cv_status wait_until(
    unique_lock<mutex>& Lck,
    const chrono::time_point<Clock, Duration>& Abs_time);

template <class Clock, class Duration, class Predicate>
bool wait_until(
    unique_lock<mutex>& Lck,
    const chrono::time_point<Clock, Duration>& Abs_time, 
    Predicate Pred);

cv_status wait_until(
    unique_lock<mutex>& Lck,
    const xtime* Abs_time);

template <class Predicate>
bool wait_until(
    unique_lock<mutex>& Lck,
    const xtime* Abs_time, 
    Predicate Pred);
```  
  
### <a name="parameters"></a>Parametri  
 `Lck`  
 Un oggetto [unique_lock\<mutex>](../standard-library/unique-lock-class.md).  
  
 `Abs_time`  
 Un oggetto [chrono:: time_point](../standard-library/time-point-class.md).  
  
 `Pred`  
 Qualsiasi espressione che restituisca un valore `true` o `false`.  
  
### <a name="return-value"></a>Valore restituito  
 I metodi che restituiscono un tipo `cv_status` restituiscono `cv_status::timeout` se l'attesa termina quando `Abs_time` è trascorso. In caso contrario, i metodi restituiscono `cv_status::no_timeout`.  
  
 I metodi che restituiscono un oggetto `bool` restituiscono il valore di `Pred`.  
  
### <a name="remarks"></a>Note  
 Il primo metodo si blocca fino a quando l'oggetto `condition_variable` non viene segnalato da una chiamata a [notify_one](#notify_one) o [notify_all](#notify_all) oppure fino a che non viene restituito `Abs_time`. Può anche riattivarsi in modo spurio.  
  
 Il secondo metodo esegue il codice seguente  
  
```cpp  
while(!Pred())
    if(wait_until(Lck, Abs_time) == cv_status::timeout)
    return Pred();

return true;
```  
  
 Il terzo e il quarto metodo usano un puntatore a un oggetto di tipo `xtime` per sostituire l'oggetto `chrono::time_point`. L'oggetto `xtime` specifica il tempo massimo di attesa di un segnale.  
  
## <a name="see-also"></a>Vedere anche  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)  (Riferimento file di intestazione)  
 [<condition_variable>](../standard-library/condition-variable.md)




