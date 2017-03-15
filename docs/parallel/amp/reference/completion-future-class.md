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
- amprt/Concurrency::completion_future
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: a9a77c3cf3c183021b70789b0e17a6b8ad8d786c
ms.lasthandoff: 02/24/2017

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
|[Get (metodo)](#get)|Attende il completamento dell'operazione asincrona associata.|  
|[Then (metodo)](#then)|Concatena un oggetto funzione di callback per la `completion_future` oggetto da eseguire al termine dell'esecuzione dell'operazione asincrona associata.|  
|[to_task (metodo)](#to_task)|Restituisce un `task` oggetto corrispondente all'operazione asincrona associata.|  
|[Metodo valido](#valid)|Ottiene un valore booleano che indica se l'oggetto è associato a un'operazione asincrona.|  
|[Wait (metodo)](#wait)|Si blocca fino a quando non viene completata l'operazione asincrona associata.|  
|[wait_for (metodo)](#wait_for)|Si blocca fino a completamento dell'operazione asincrona associata o il tempo specificato da `_Rel_time` è trascorso.|  
|[wait_until (metodo)](#wait_until)|Blocca finché non viene completata l'operazione asincrona associata o l'ora corrente supera il valore specificato da `_Abs_time`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore std:: shared_future\<void > (operatore)](#operator_shared_future)|Converte in modo implicito il `completion_future` dell'oggetto a un `std::shared_future` oggetto.|  
|[operatore = (operatore)](#operator_eq)|Copia il contenuto dell'oggetto specificato `completion_future` specificato in questo oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `completion_future`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  


## <a name="a-namectora-completionfuture"></a><a name="ctor"></a>completion_future 

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
  
## <a name="a-namegeta-get"></a><a name="get"></a>Ottieni 

Attende il completamento dell'operazione asincrona associata. Genera l'eccezione stored se uno è stato rilevato durante l'operazione asincrona.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void get() const;  
```  
  
## <a name="a-nameoperatorsharedfuturea-operator-stdsharedfuturevoid"></a><a name="operator_shared_future"></a>operatore std:: shared_future<void> 

Converte in modo implicito il `completion_future` dell'oggetto a un `std::shared_future` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
operator std::shared_future<void>() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `std::shared_future`.  
  
## <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

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
  
## <a name="a-namethena-then"></a><a name="then"></a>quindi 

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
  
## <a name="a-nametotaska-totask"></a><a name="to_task"></a>to_task 

Restituisce un `task` oggetto corrispondente all'operazione asincrona associata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
concurrency::task<void> to_task() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `task` oggetto corrispondente all'operazione asincrona associata.  
  
## <a name="a-namevalida-valid"></a><a name="valid"></a>valido 

Ottiene un valore booleano che indica se l'oggetto è associato a un'operazione asincrona.  
  
### <a name="syntax"></a>Sintassi  
  
```  
bool valid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'oggetto è associato a un'operazione asincrona. in caso contrario, `false`.  
  
## <a name="a-namewaita-wait"></a><a name="wait"></a>attesa 

Si blocca fino a quando non viene completata l'operazione asincrona associata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void wait() const;  
```  
  
## <a name="a-namewaitfora-waitfor"></a><a name="wait_for"></a>wait_for 

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
  
## <a name="a-namewaituntila-waituntil"></a><a name="wait_until"></a>wait_until 

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
  
## <a name="a-namedtora-completionfuture"></a><a name="dtor"></a>~ completion_future 

Elimina il `completion_future` oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
~completion_future();  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

