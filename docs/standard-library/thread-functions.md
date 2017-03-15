---
title: Funzioni &lt;thread&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19
caps.latest.revision: 12
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: de302b9a2d971b2a39d4ce775799f27dd7244a5c
ms.lasthandoff: 02/24/2017

---
# <a name="ltthreadgt-functions"></a>Funzioni &lt;thread&gt;
||||  
|-|-|-|  
|[get_id](#get_id_function)|[sleep_for](#sleep_for_function)|[sleep_until](#sleep_until_function)|  
|[swap](#swap_function)|[yield](#yield_function)|  
  
##  <a name="a-namegetidfunctiona--getid"></a><a name="get_id_function"></a>  get_id  
 Identifica in modo univoco il thread di esecuzione corrente.  
  
```  
thread::id this_thread::get_id() noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto di tipo [thread::id](../standard-library/thread-class.md) che identifica in modo univoco il thread di esecuzione corrente.  
  
##  <a name="a-namesleepforfunctiona--sleepfor"></a><a name="sleep_for_function"></a>  sleep_for  
 Blocca il thread chiamante.  
  
```  
template <class Rep,  
class Period>  
inline void sleep_for(const chrono::duration<Rep, Period>& Rel_time);
```  
  
### <a name="parameters"></a>Parametri  
 `Rel_time`  
 Oggetto [duration](../standard-library/duration-class.md) che specifica un intervallo di tempo.  
  
### <a name="remarks"></a>Note  
 La funzione blocca il thread chiamante almeno per il tempo specificato da `Rel_time`. Questa funzione non genera eccezioni.  
  
##  <a name="a-namesleepuntilfunctiona--sleepuntil"></a><a name="sleep_until_function"></a>  sleep_until  
 La funzione blocca il thread chiamante almeno fino all'ora specificata.  
  
```  
template <class Clock, class Duration>  
void sleep_until(const chrono::time_point<Clock, Duration>& Abs_time);

void sleep_until(const xtime *Abs_time);
```  
  
### <a name="parameters"></a>Parametri  
 `Abs_time`  
 Rappresenta un punto nel tempo.  
  
### <a name="remarks"></a>Note  
 Questa funzione non genera eccezioni.  
  
##  <a name="a-nameswapfunctiona--swap"></a><a name="swap_function"></a>  swap  
 Scambia gli stati dei due oggetti `thread`.  
  
```  
void swap(thread& Left, thread& Right) noexcept;  
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 L'oggetto `thread` a sinistra.  
  
 `Right`  
 L'oggetto `thread` corretto.  
  
### <a name="remarks"></a>Note  
 La funzione chiama `Left.swap(Right)`.  
  
##  <a name="a-nameyieldfunctiona--yield"></a><a name="yield_function"></a>  yield  
 Segnala al sistema operativo di eseguire altri thread, anche se in genere l'esecuzione del thread corrente dovrebbe continuare.  
  
```  
inline void yield() noexcept;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<thread>](../standard-library/thread.md)


