---
title: Classe mutex (libreria standard C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- mutex/std::mutex
- mutex/std::mutex::mutex
- mutex/std::mutex::lock
- mutex/std::mutex::native_handle
- mutex/std::mutex::try_lock
- mutex/std::mutex::unlock
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: e08c7c13d1e182bc3299f11769eddb699b03ab3f
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

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
|[mutex](#mutex)|Costruisce un oggetto `mutex`.|  
|[Distruttore mutex::~mutex](#dtormutex_destructor)|Rilascia le risorse utilizzate dall'oggetto `mutex`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[lock](#lock)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|  
|[native_handle](#native_handle)|Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex.|  
|[try_lock](#try_lock)|Tenta di ottenere proprietà di `mutex` senza bloccare.|  
|[unlock](#unlock)|Rilascia la proprietà di `mutex`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<mutex >  
  
 **Spazio dei nomi:** std  
  
##  <a name="lock"></a>mutex:: lock
 Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.  
  
```cpp  
void lock();
```  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.  
  
##  <a name="mutex"></a>  Costruttore mutex::mutex  
 Costruisce un oggetto `mutex` non bloccato.  
  
```cpp  
constexpr mutex() noexcept;
```  
  
##  <a name="dtormutex_destructor"></a>  Distruttore mutex::~mutex  
 Rilascia le risorse usate dall'oggetto `mutex`.  
  
```cpp  
~mutex();
```  
  
### <a name="remarks"></a>Note  
 Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.  
  
##  <a name="native_handle"></a>mutex:: native_handle
 Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex. L'handle del mutex può essere usato in modi specifici dell'implementazione.  
  
```
native_handle_type native_handle();
```  
  
### <a name="return-value"></a>Valore restituito  
 `native_handle_type` viene definito come `Concurrency::critical_section *` di cui viene eseguito il cast come `void *`.  
  
##  <a name="try_lock"></a>mutex::try_lock
 Tenta di ottenere proprietà di `mutex` senza bloccare.  
  
```cpp  
bool try_lock();
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il metodo ottiene correttamente la proprietà di `mutex`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.  
  
##  <a name="unlock"></a>mutex:: Unlock
 Rilascia la proprietà di `mutex`.  
  
```cpp  
void unlock();
```  
  
### <a name="remarks"></a>Note  
 Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)




