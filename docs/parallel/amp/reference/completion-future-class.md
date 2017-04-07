---
title: Classe completion_future | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- completion_future
- AMPRT/completion_future
- AMPRT/Concurrency::completion_future::completion_future
- AMPRT/Concurrency::completion_future::get
- AMPRT/Concurrency::completion_future::then
- AMPRT/Concurrency::completion_future::to_task
- AMPRT/Concurrency::completion_future::valid
- AMPRT/Concurrency::completion_future::wait
- AMPRT/Concurrency::completion_future::wait_for
- AMPRT/Concurrency::completion_future::wait_until
dev_langs:
- C++
ms.assetid: 1303c62e-546d-4b02-a578-251ed3fc0b6b
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 1c6d8e880fbdb784b22b1e9c879473efa7bc9802
ms.lasthandoff: 03/17/2017

---
# <a name="completionfuture-class"></a>Classe completion_future
Rappresenta un futuro corrisponde a un'operazione asincrona di C++ AMP.  
  
### <a name="syntax"></a>Sintassi  
  
```  
class completion_future;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore completion_future](#ctor)|Inizializza una nuova istanza della classe `completion_future`.|  
|[~ completion_future distruttore](#dtor)|Elimina il `completion_future` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get](#get)|Attende il completamento dell'operazione asincrona associata.|  
|[quindi](#then)|Concatena un oggetto funzione di callback per la `completion_future` oggetto da eseguire al termine dell'esecuzione dell'operazione asincrona associata.|  
|[to_task](#to_task)|Restituisce un `task` oggetto corrispondente all'operazione asincrona associata.|  
|[valido](#valid)|Ottiene un valore booleano che indica se l'oggetto è associato a un'operazione asincrona.|  
|[attesa](#wait)|Si blocca fino a quando non viene completata l'operazione asincrona associata.|  
|[wait_for](#wait_for)|Si blocca fino a completamento dell'operazione asincrona associata o il tempo specificato da `_Rel_time` è trascorso.|  
|[wait_until](#wait_until)|Blocca finché non viene completata l'operazione asincrona associata o l'ora corrente supera il valore specificato da `_Abs_time`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore std:: shared_future\<void >](#operator_shared_future)|Converte in modo implicito il `completion_future` dell'oggetto a un `std::shared_future` oggetto.|  
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `completion_future` specificato in questo oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `completion_future`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  


## <a name="ctor"></a>completion_future 

Inizializza una nuova istanza della classe `completion_future`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
completion_future();  
  
completion_future(  
    const completion_future& _Other );  
  
completion_future(  
    completion_future&& _Other );  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `completion_future` oggetto da copiare o spostare.  
  
### <a name="overloads-list"></a>Elenco overload  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`completion_future();`|Inizializza una nuova istanza di `completion_future` (classe)|  
|`completion_future(const completion_future& _Other);`|Inizializza una nuova istanza di `completion_future` copiando un costruttore di classe.|  
|`completion_future(completion_future&& _Other);`|Inizializza una nuova istanza di `completion_future` spostando un costruttore di classe.|  
  
## <a name="get"></a>Ottieni 

Attende il completamento dell'operazione asincrona associata. Genera l'eccezione stored se uno è stato rilevato durante l'operazione asincrona.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void get() const;  
```  
  
## <a name="operator_shared_future"></a>operatore std:: shared_future<void> 

Converte in modo implicito il `completion_future` dell'oggetto a un `std::shared_future` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
operator std::shared_future<void>() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `std::shared_future`.  
  
## <a name="operator_eq"></a>operatore = 

Copia il contenuto dell'oggetto specificato `completion_future` specificato in questo oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
completion_future&  operator= (const completion_future& _Other );    
completion_future&  operator= (completion_future&& _Other );  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `completion_future` oggetto.  
  
## <a name="overloads-list"></a>Elenco overload  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`completion_future& operator=(const completion_future& _Other);`|Copia il contenuto dell'oggetto specificato `completion_future` oggetto in questo, utilizzando una copia completa.|  
|`completion_future& operator=(completion_future&& _Other);`|Copia il contenuto dell'oggetto specificato `completion_future` oggetto in questo, utilizzo di un'assegnazione di spostamento.|  
  
## <a name="then"></a>quindi 

Concatena un oggetto funzione di callback per la `completion_future` oggetto da eseguire al termine dell'esecuzione dell'operazione asincrona associata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template <typename _Functor>  
void then(const _Functor & _Func ) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Functor`  
 Il funtore di callback.  
  
 `_Func`  
 Oggetto funzione di callback.  
  
## <a name="to_task"></a>to_task 

Restituisce un `task` oggetto corrispondente all'operazione asincrona associata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
concurrency::task<void> to_task() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `task` oggetto corrispondente all'operazione asincrona associata.  
  
## <a name="valid"></a>valido 

Ottiene un valore booleano che indica se l'oggetto è associato a un'operazione asincrona.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool valid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'oggetto è associato a un'operazione asincrona. in caso contrario, `false`.  
  
## <a name="wait"></a>attesa 

Si blocca fino a quando non viene completata l'operazione asincrona associata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void wait() const;  
```  
  
## <a name="wait_for"></a>wait_for 

Si blocca fino a completamento dell'operazione asincrona associata o il tempo specificato da `_Rel_time` è trascorso.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template <  
    class _Rep,  
    class _Period  
>  
std::future_status::future_status wait_for(  
    const std::chrono::duration< _Rep, _Period>& _Rel_time ) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Rep`  
 Un tipo aritmetico che rappresenta il numero di segni di graduazione.  
  
 `_Period`  
 Std::ratio che rappresenta il numero di secondi che devono trascorrere per tick.  
  
 `_Rel_time`  
 La quantità massima di tempo di attesa per il completamento dell'operazione.  
  
### <a name="return-value"></a>Valore restituito  
 Valori restituiti:  
  
-   `std::future_status::deferred`Se l'operazione asincrona associata non è in esecuzione.  
  
-   `std::future_status::ready`Se l'operazione asincrona associata è stato completato.  
  
-   `std::future_status::timeout`Se l'oggetto specificato è trascorso il periodo di tempo.  
  
## <a name="wait_until"></a>wait_until 

Blocca finché non viene completata l'operazione asincrona associata o l'ora corrente supera il valore specificato da `_Abs_time`.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template <  
    class _Clock,  
    class _Duration  
>  
std::future_status::future_status wait_until(  
    const std::chrono::time_point< _Clock, _Duration>& _Abs_time ) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Clock`  
 L'orologio in cui il punto di tempo viene misurato.  
  
 `_Duration`  
 L'intervallo di tempo dopo l'avvio di `_Clock`del periodo, dopo il quale la funzione si verifica un timeout.  
  
 `_Abs_time`  
 Il punto nel tempo dopo il quale la funzione si verificherà il timeout.  
  
### <a name="return-value"></a>Valore restituito  
 Valori restituiti:  
  
1.  `std::future_status::deferred`Se l'operazione asincrona associata non è in esecuzione.  
  
2.  `std::future_status::ready`Se l'operazione asincrona associata è stato completato.  
  
3.  `std::future_status::timeout`Se è specificato il periodo di tempo trascorso.  
  
## <a name="dtor"></a>~ completion_future 

Elimina il `completion_future` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
~completion_future();  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

