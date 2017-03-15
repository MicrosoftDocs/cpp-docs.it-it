---
title: Classe mutex (libreria standard C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- mutex/std::mutex
dev_langs:
- C++
ms.assetid: 7999d055-f74f-4303-810f-8d3c9cde2f69
caps.latest.revision: 11
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
ms.openlocfilehash: ff3e7e71c678ffc9bdead79ec56ad94f8e297a16
ms.lasthandoff: 02/24/2017

---
# <a name="mutex-class-c-standard-library"></a>Classe mutex (libreria standard C++)
Rappresenta un *tipo mutex*. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca in un programma.  
  
## <a name="syntax"></a>Sintassi  
  
```
class mutex;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore mutex::mutex](#mutex__mutex_constructor)|Costruisce un oggetto `mutex`.|  
|[Distruttore mutex::~mutex](#mutex___dtormutex_destructor)|Rilascia le risorse utilizzate dall'oggetto `mutex`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo mutex::lock](#mutex__lock_method)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|  
|[Metodo mutex::native_handle](#mutex__native_handle_method)|Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex.|  
|[Metodo mutex::try_lock](#mutex__try_lock_method)|Tenta di ottenere proprietà di `mutex` senza bloccare.|  
|[Metodo mutex::unlock](#mutex__unlock_method)|Rilascia la proprietà di `mutex`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** mutex  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namemutexlockmethoda--mutexlock-method"></a><a name="mutex__lock_method"></a>  Metodo mutex::lock  
 Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.  
  
```cpp  
void lock();
```  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.  
  
##  <a name="a-namemutexmutexconstructora--mutexmutex-constructor"></a><a name="mutex__mutex_constructor"></a>  Costruttore mutex::mutex  
 Costruisce un oggetto `mutex` non bloccato.  
  
```cpp  
constexpr mutex() noexcept;
```  
  
##  <a name="a-namemutexdtormutexdestructora--mutexmutex-destructor"></a><a name="mutex___dtormutex_destructor"></a>  Distruttore mutex::~mutex  
 Rilascia le risorse usate dall'oggetto `mutex`.  
  
```cpp  
~mutex();
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.  
  
##  <a name="a-namemutexnativehandlemethoda--mutexnativehandle-method"></a><a name="mutex__native_handle_method"></a>  Metodo mutex::native_handle  
 Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex. L'handle del mutex può essere usato in modi specifici dell'implementazione.  
  
```
native_handle_type native_handle();
```  
  
### <a name="return-value"></a>Valore restituito  
 `native_handle_type` viene definito come `Concurrency::critical_section *` di cui viene eseguito il cast come `void *`.  
  
##  <a name="a-namemutextrylockmethoda--mutextrylock-method"></a><a name="mutex__try_lock_method"></a>  Metodo mutex::try_lock  
 Tenta di ottenere proprietà di `mutex` senza bloccare.  
  
```cpp  
bool try_lock();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il metodo ottiene correttamente la proprietà di `mutex`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.  
  
##  <a name="a-namemutexunlockmethoda--mutexunlock-method"></a><a name="mutex__unlock_method"></a>  Metodo mutex::unlock  
 Rilascia la proprietà di `mutex`.  
  
```cpp  
void unlock();
```  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)




