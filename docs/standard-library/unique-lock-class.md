---
title: unique_lock Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- mutex/std::unique_lock
dev_langs:
- C++
ms.assetid: f4ed8ba9-c8af-446f-8ef0-0b356bad14bd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ff765ce861b0d593c3ff21c5da68de4b6ec0e15d
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="uniquelock-class"></a>Classe unique_lock
Rappresenta un modello di cui è possibile creare un’istanza per la creazione di oggetti che gestiscono il blocco e lo sblocco di un tipo `mutex`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Mutex>
class unique_lock;
```  
  
## <a name="remarks"></a>Note  
 L'argomento del modello `Mutex` deve denominare un tipo *mutex*.  
  
 A livello interno, un oggetto `unique_lock` archivia un puntatore a un oggetto `mutex` associato e a un oggetto `bool` che indica se il thread corrente è proprietario dell'oggetto `mutex`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`mutex_type`|Sinonimo dell'argomento di modello `Mutex`.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[unique_lock](#unique_lock)|Costruisce un oggetto `unique_lock`.|  
|[~unique_lock Destructor](#dtorunique_lock_destructor)|Rilascia qualsiasi risorsa associata all'oggetto `unique_lock`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[lock](#lock)|Blocca il thread di chiamata finché questo non ottiene la proprietà dell'oggetto `mutex` associato.|  
|[mutex](#mutex)|Recupera un puntatore all'oggetto `mutex` associato.|  
|[owns_lock](#owns_lock)|Specifica se il thread di chiamata è proprietario dell'oggetto `mutex` associato.|  
|[release](#release)|Dissocia l'oggetto `unique_lock` dall'oggetto `mutex` associato.|  
|[swap](#swap)|Scambia l'oggetto `mutex` associato e lo stato di proprietà con un oggetto specificato e il relativo stato.|  
|[try_lock](#try_lock)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|  
|[try_lock_for](#try_lock_for)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|  
|[try_lock_until](#try_lock_until)|Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.|  
|[unlock](#unlock)|Rilascia la proprietà dell'oggetto `mutex` associato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator bool](#op_bool)|Specifica se il thread di chiamata è proprietario dell'oggetto `mutex` associato.|  
|[operator=](#op_eq)|Copia il puntatore `mutex` archiviato e lo stato di proprietà associato da un oggetto specificato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `unique_lock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<mutex >  
  
 **Spazio dei nomi:** std  
  
##  <a name="lock"></a>  lock  
 Blocca il thread di chiamata finché questo non ottiene la proprietà dell'oggetto `mutex` associato.  
  
```cpp  
void lock();
```  
  
### <a name="remarks"></a>Note  
 Se il puntatore `mutex` archiviato è `null`, questo metodo genera un [system_error](../standard-library/system-error-class.md) con codice di errore `operation_not_permitted`.  
  
 Se il thread di chiamata è già proprietario dell'oggetto `mutex` associato, questo metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.  
  
 In caso contrario, questo metodo chiama il metodo `lock` sull'oggetto `mutex` associato e imposta il flag interno di proprietà del thread su `true`.  
  
##  <a name="mutex"></a>  mutex  
 Recupera un puntatore all'oggetto `mutex` associato.  
  
```cpp  
mutex_type *mutex() const noexcept;
```  
  
##  <a name="op_bool"></a>  operator bool  
 Specifica se il thread di chiamata è proprietario dell'oggetto mutex associato.  
  
```cpp  
explicit operator bool() noexcept
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il thread è proprietario dell'oggetto mutex; in caso contrario, `false`.  
  
##  <a name="op_eq"></a>  operator=  
 Copia il puntatore `mutex` archiviato e lo stato di proprietà associato da un oggetto specificato.  
  
```cpp  
unique_lock& operator=(unique_lock&& Other) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Other`  
 Oggetto `unique_lock`.  
  
### <a name="return-value"></a>Valore restituito  
 `*this`  
  
### <a name="remarks"></a>Note  
 Se il thread di chiamata è proprietario dell'oggetto `mutex` associato in precedenza, prima di chiamare il metodo `unlock` sull'oggetto `mutex` assegna i nuovi valori.  
  
 Dopo la copia, questo metodo imposta `Other` su uno stato costruito per impostazione predefinita.  
  
##  <a name="owns_lock"></a>  owns_lock  
 Specifica se il thread di chiamata è proprietario dell'oggetto `mutex` associato.  
  
```cpp  
bool owns_lock() const noexcept;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il thread è proprietario dell'oggetto `mutex`; in caso contrario, `false`.  
  
##  <a name="release"></a>  release  
 Dissocia l'oggetto `unique_lock` dall'oggetto `mutex` associato.  
  
```cpp  
mutex_type *release() noexcept;
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore precedente del puntatore `mutex` archiviato.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta in valore del puntatore `mutex` archiviato su 0 e il flag interno di proprietà dell'oggetto `mutex` su `false`.  
  
##  <a name="swap"></a>  swap  
 Scambia l'oggetto `mutex` associato e lo stato di proprietà con un oggetto specificato e il relativo stato.  
  
```
void swap(unique_lock& Other) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Other`  
 Oggetto `unique_lock`.  
  
##  <a name="try_lock"></a>  try_lock  
 Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.  
  
```cpp  
bool try_lock() noexcept;
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il metodo ottiene correttamente la proprietà di `mutex`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il puntatore `mutex` archiviato è `null`, il metodo genera un [system_error](../standard-library/system-error-class.md) con codice di errore `operation_not_permitted`.  
  
 Se il thread di chiamata è già proprietario dell'oggetto `mutex`, il metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.  
  
##  <a name="try_lock_for"></a>  try_lock_for  
 Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.  
  
```
template <class Rep, class Period>
bool try_lock_for(
    const chrono::duration<Rep, Period>& Rel_time);
```  
  
### <a name="parameters"></a>Parametri  
 `Rel_time`  
 Oggetto [chrono::duration](../standard-library/duration-class.md) che specifica il periodo di tempo massimo per cui il metodo può tentare di ottenere la proprietà del `mutex`.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il metodo ottiene correttamente la proprietà di `mutex`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il puntatore `mutex` archiviato è `null`, il metodo genera un [system_error](../standard-library/system-error-class.md) con codice di errore `operation_not_permitted`.  
  
 Se il thread di chiamata è già proprietario dell'oggetto `mutex`, il metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.  
  
##  <a name="try_lock_until"></a>  try_lock_until  
 Tenta di ottenere la proprietà dell'elemento `mutex` associato senza bloccare.  
  
```cpp  
template <class Clock, class Duration>
bool try_lock_until(const chrono::time_point<Clock, Duration>& Abs_time);

bool try_lock_until(const xtime* Abs_time);
```  
  
### <a name="parameters"></a>Parametri  
 `Abs_time`  
 Momento specifico che indica la soglia oltre la quale il metodo non tenta più di ottenere la proprietà di `mutex`.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se il metodo ottiene correttamente la proprietà di `mutex`; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se il puntatore `mutex` archiviato è `null`, il metodo genera un [system_error](../standard-library/system-error-class.md) con codice di errore `operation_not_permitted`.  
  
 Se il thread di chiamata è già proprietario dell'oggetto `mutex`, il metodo genera un `system_error` con codice di errore `resource_deadlock_would_occur`.  
  
##  <a name="unique_lock"></a>  unique_lock Constructor  
 Costruisce un oggetto `unique_lock`.  
  
```cpp  
unique_lock() noexcept;
unique_lock(unique_lock&& Other) noexcept;
explicit unique_lock(mutex_type& Mtx);

unique_lock(mutex_type& Mtx, adopt_lock_t Adopt);

unique_lock(mutex_type& Mtx, defer_lock_t Defer) noexcept;
unique_lock(mutex_type& Mtx, try_to_lock_t Try);

template <class Rep, class Period>
unique_lock(mutex_type& Mtx,
    const chrono::duration<Rep, Period>  
Rel_time);

template <class Clock, class Duration>
unique_lock(mutex_type& Mtx,
    const chrono::time_point<Clock, Duration>  
Abs_time);

unique_lock(mutex_type& Mtx,
    const xtime* Abs_time) noexcept;
```  
  
### <a name="parameters"></a>Parametri  
 `Mtx`  
 Oggetto di tipo mutex.  
  
 `Rel_time`  
 Oggetto [chrono::duration](../standard-library/duration-class.md) che specifica il periodo di tempo massimo per cui il metodo può tentare di ottenere la proprietà dell'oggetto `mutex`.  
  
 `Abs_time`  
 Momento specifico che indica la soglia oltre la quale il metodo non tenta più di ottenere la proprietà di `mutex`.  
  
 `Other`  
 Oggetto `unique_lock`.  
  
### <a name="remarks"></a>Note  
 Il primo costruttore crea un oggetto con un valore del puntatore mutex associato pari a 0.  
  
 Il secondo costruttore sposta lo stato dell'oggetto mutex associato da `Other`. Dopo lo spostamento, il parametro `Other` non è più associato a un oggetto mutex.  
  
 I costruttori rimanenti archiviano & `Mtx` come puntatore `mutex` archiviato. La proprietà dell'oggetto `mutex` è determinata dal secondo argomento, se esistente.  
  
|||  
|-|-|  
|`No argument`|La proprietà viene ottenuta mediante una chiamata al metodo `lock` sull'oggetto `mutex` associato.|  
|`Adopt`|Si presuppone la proprietà. Quando viene chiamato il costruttore, `Mtx` deve essere bloccato.|  
|`Defer`|Si presuppone che il thread di chiamata non sia proprietario dell'oggetto `mutex`. Quando viene chiamato il costruttore, `Mtx` non deve essere bloccato.|  
|`Try`|La proprietà viene determinata mediante una chiamata al metodo `try_lock` sull'oggetto `mutex` associato. Il costruttore non esegue alcuna operazione.|  
|`Rel_time`|La proprietà viene determinata mediante una chiamata al metodo `try_lock_for(Rel_time)`.|  
|`Abs_time`|La proprietà viene determinata mediante una chiamata al metodo `try_lock_until(Abs_time)`.|  
  
##  <a name="dtorunique_lock_destructor"></a>  ~unique_lock Destructor  
 Rilascia qualsiasi risorsa associata all'oggetto `unique_lock`.  
  
```cpp  
~unique_lock() noexcept;
```  
  
### <a name="remarks"></a>Note  
 Se il thread di chiamata è proprietario dell'oggetto `mutex` associato, il distruttore rilascia la proprietà mediante una chiamata al metodo unlock sull'oggetto `mutex`.  
  
##  <a name="unlock"></a>  unlock  
 Rilascia la proprietà dell'oggetto `mutex` associato.  
  
```cpp  
void unlock();
```  
  
### <a name="remarks"></a>Note  
 Se il thread di chiamata non è proprietario dell'oggetto `mutex` associato, questo metodo genera un [system_error](../standard-library/system-error-class.md) con codice di errore `operation_not_permitted`.  
  
 In caso contrario, questo metodo chiama il metodo `unlock` sull'oggetto `mutex` associato e imposta il flag interno di proprietà del thread su `false`.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [\<mutex>](../standard-library/mutex.md)



