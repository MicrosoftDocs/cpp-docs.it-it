---
title: Classe lock_guard | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- mutex/std::lock_guard
- mutex/std::lock_guard::lock_guard
dev_langs:
- C++
ms.assetid: 57121f0d-9c50-481c-b971-54e64df864e0
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 047c7ab9db009bceafe47bb0ae53b876adad81b5
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="lockguard-class"></a>Classe lock_guard
Rappresenta un modello di cui è possibile creare un’istanza per la creazione di un oggetto il cui distruttore sblocca un tipo `mutex`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Mutex>
class lock_guard;
```  
  
## <a name="remarks"></a>Note  
 L'argomento del modello `Mutex` deve denominare un *tipo mutex*.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`lock_guard::mutex_type`|Sinonimo dell'argomento di modello `Mutex`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[lock_guard](#lock_guard)|Costruisce un oggetto `lock_guard`.|  
|[Distruttore lock_guard::~lock_guard](#dtorlock_guard_destructor)|Sblocca il `mutex` passato al costruttore.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<mutex >  
  
 **Spazio dei nomi:** std  
  
##  <a name="lock_guard"></a>  Costruttore lock_guard::lock_guard  
 Costruisce un oggetto `lock_guard`.  
  
```cpp  
explicit lock_guard(mutex_type& Mtx);

lock_guard(mutex_type& Mtx, adopt_lock_t);
```  
  
### <a name="parameters"></a>Parametri  
 `Mtx`  
 Oggetto di *tipo mutex*.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore crea un oggetto di tipo `lock_guard` e blocca `Mtx`. Se `Mtx` non è un mutex ricorsivo, deve essere sboccato al momento delle chiamata al costruttore.  
  
 Il secondo costruttore non blocca `Mtx`. Quando viene chiamato il costruttore, `Mtx` deve essere bloccato. Il costruttore non genera eccezioni.  
  
##  <a name="dtorlock_guard_destructor"></a>  Distruttore lock_guard::~lock_guard  
 Sblocca il `mutex` passato al costruttore.  
  
```
~lock_guard() noexcept;
```  
  
### <a name="remarks"></a>Note  
 Se al momento dell'esecuzione del distruttore il `mutex` non esiste, il comportamento è indefinito.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)




