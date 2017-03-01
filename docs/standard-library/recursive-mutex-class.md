---
title: Classe recursive_mutex | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- mutex/std::recursive_mutex
dev_langs:
- C++
ms.assetid: eb5ffd1b-7e78-4559-8391-bb220ead42fc
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: c82c8302be5d3e01de90adda2049a022100b8443
ms.lasthandoff: 02/24/2017

---
# <a name="recursivemutex-class"></a>Classe recursive_mutex
Rappresenta un *tipo mutex*. Contrariamente al [mutex](../standard-library/mutex-class-stl.md), il comportamento di chiamata di metodi di blocco per gli oggetti che sono già stati bloccati è ben definito.  
  
## <a name="syntax"></a>Sintassi  
  
```
class recursive_mutex;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore recursive_mutex](#recursive_mutex__recursive_mutex_constructor)|Costruisce un oggetto `recursive_mutex`.|  
|[Distruttore ~recursive_mutex](#recursive_mutex___dtorrecursive_mutex_destructor)|Rilascia le risorse usate dall'oggetto `recursive_mutex`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[lock](#recursive_mutex__lock_method)|Blocca il thread chiamante finché il thread non ottiene la proprietà del mutex.|  
|[try_lock](#recursive_mutex__try_lock_method)|Tenta di ottenere la proprietà del mutex senza blocco.|  
|[unlock](#recursive_mutex__unlock_method)|Rilascia la proprietà del mutex.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namerecursivemutexlockmethoda--lock"></a><a name="recursive_mutex__lock_method"></a>  lock  
 Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.  
  
```cpp  
void lock();
```  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante è già proprietario del `mutex`, il metodo restituisce immediatamente un valore e il blocco precedente rimane valido.  
  
##  <a name="a-namerecursivemutexrecursivemutexconstructora--recursivemutex"></a><a name="recursive_mutex__recursive_mutex_constructor"></a>  recursive_mutex  
 Costruisce un oggetto `recursive_mutex` non bloccato.  
  
```cpp  
recursive_mutex();
```  
  
##  <a name="a-namerecursivemutexdtorrecursivemutexdestructora--recursivemutex"></a><a name="recursive_mutex___dtorrecursive_mutex_destructor"></a>  ~recursive_mutex  
 Rilascia le risorse usate dall'oggetto.  
  
```cpp  
~recursive_mutex();
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.  
  
##  <a name="a-namerecursivemutextrylockmethoda--trylock"></a><a name="recursive_mutex__try_lock_method"></a>  try_lock  
 Tenta di ottenere proprietà di `mutex` senza bloccare.  
  
```cpp  
bool try_lock() noexcept;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il metodo ottiene correttamente la proprietà del `mutex` o se il thread chiamante è già proprietario del `mutex`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante è già proprietario del `mutex`, il metodo restituisce immediatamente `true` e il blocco precedente rimane valido.  
  
##  <a name="a-namerecursivemutexunlockmethoda--unlock"></a><a name="recursive_mutex__unlock_method"></a>  unlock  
 Rilascia la proprietà del mutex.  
  
```cpp  
void unlock();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo rilascia la proprietà del `mutex` solo dopo essere stato chiamato tante volte quante sono state le chiamate a [lock](#recursive_mutex__lock_method) e [try_lock](#recursive_mutex__try_lock_method) con esito positivo sull'oggetto `recursive_mutex`.  
  
 Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)




