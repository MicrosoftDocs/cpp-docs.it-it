---
title: Classe lock_guard | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- mutex/std::lock_guard
- mutex/std::lock_guard::lock_guard
dev_langs:
- C++
ms.assetid: 57121f0d-9c50-481c-b971-54e64df864e0
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 60643375742ef02ef1ba8ea08e614d12c504c573
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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



