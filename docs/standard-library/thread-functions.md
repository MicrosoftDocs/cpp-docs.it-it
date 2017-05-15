---
title: Funzioni &lt;thread&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- thread/std::get_id
- thread/std::sleep_for
- thread/std::sleep_until
- thread/std::swap
- thread/std::yield
ms.assetid: bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19
caps.latest.revision: 12
manager: ghogen
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 3c603ac75955c057cfba009494a9a430fd987a69
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="ltthreadgt-functions"></a>Funzioni &lt;thread&gt;
||||  
|-|-|-|  
|[get_id](#get_id)|[sleep_for](#sleep_for)|[sleep_until](#sleep_until)|  
|[swap](#swap)|[yield](#yield)|  
  
##  <a name="get_id"></a>  get_id  
 Identifica in modo univoco il thread di esecuzione corrente.  
  
```  
thread::id this_thread::get_id() noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto di tipo [thread::id](../standard-library/thread-class.md) che identifica in modo univoco il thread di esecuzione corrente.  
  
##  <a name="sleep_for"></a>  sleep_for  
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
  
##  <a name="sleep_until"></a>  sleep_until  
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
  
##  <a name="swap"></a>  swap  
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
  
##  <a name="yield"></a>  yield  
 Segnala al sistema operativo di eseguire altri thread, anche se in genere l'esecuzione del thread corrente dovrebbe continuare.  
  
```  
inline void yield() noexcept;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<thread>](../standard-library/thread.md)


