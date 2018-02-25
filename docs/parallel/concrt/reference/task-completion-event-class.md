---
title: Classe task_completion_event | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- task_completion_event
- PPLTASKS/concurrency::task_completion_event
- PPLTASKS/concurrency::task_completion_event::task_completion_event
- PPLTASKS/concurrency::task_completion_event::set
- PPLTASKS/concurrency::task_completion_event::set_exception
dev_langs:
- C++
helpviewer_keywords:
- task_completion_event class
ms.assetid: fb19ed98-f245-48dc-9ba5-487ba879b28a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2ec810fdb897a9a80dc803cdcc3f229bab186f09
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="taskcompletionevent-class"></a>Classe task_completion_event
La classe `task_completion_event` consente di ritardare l'esecuzione di un'attività fino a quando non viene soddisfatta una condizione oppure di avviare un'attività in risposta a un evento esterno.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename _ResultType>
class task_completion_event;

template<>
class task_completion_event<void>;
```  
  
#### <a name="parameters"></a>Parametri  
 `_ResultType`  
 Il tipo di risultato di questa classe `task_completion_event`.  
  
 `T`  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[task_completion_event](#ctor)|Costruisce un oggetto `task_completion_event`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[set](#set)|Di overload. Imposta l'evento di completamento attività.|  
|[set_exception](#set_exception)|Di overload. Propaga un'eccezione a tutte le attività associate a questo evento.|  
  
## <a name="remarks"></a>Note  
 Usare un'attività creata da un evento di completamento attività quando lo scenario richiede di creare un'attività che verrà completata, le cui continuazioni saranno in tal modo programmate per l'esecuzione in un momento successivo. `task_completion_event` deve avere lo stesso tipo di attività creata dall'utente e la chiamata del metodo set dell'evento di completamento attività con un valore di quel tipo causerà il completamento dell'attività associata e fornirà tale valore come risultato delle relative continuazioni.  
  
 Se l'evento di completamento di attività non viene mai segnalato, le eventuali attività create in base ad esso verranno annullate quando verrà eliminato.  
  
 `task_completion_event` si comporta come un puntatore intelligente e deve essere passato in base al valore.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `task_completion_event`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ppltasks. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="set"></a> Set 

 Imposta l'evento di completamento attività.  
  
```
bool set(_ResultType _Result) const ;

bool set() const ;
```  
  
### <a name="parameters"></a>Parametri  
 `_Result`  
 Impostare questo evento con il risultato.  
  
### <a name="return-value"></a>Valore restituito  
 Il metodo restituisce `true` se è stato possibile impostare l'evento. Restituisce `false` se l'evento è già impostata.  
  
### <a name="remarks"></a>Note  
 In presenza di più chiamate simultanee a o `set`, solo la prima chiamata avrà esito positivo e il relativo risultato (se presente) verrà archiviato in evento di completamento dell'attività. I set rimanenti vengono ignorati e il metodo restituirà false. Quando si imposta un evento di completamento di attività, tutte le attività creata da che evento verrà completata immediatamente e le rispettive continuazione, se presente, verranno pianificate. Attività degli oggetti di completamento che hanno un `_ResultType` diverso da `void` passerà il valore per una delle relative continuazioni.  
  
##  <a name="set_exception"></a> set_exception 

 Propaga un'eccezione a tutte le attività associate a questo evento.  
  
```
template<typename _E>
__declspec(noinline) bool set_exception(_E _Except) const;

__declspec(noinline) bool set_exception(std::exception_ptr _ExceptionPtr) const ;
```  
  
### <a name="parameters"></a>Parametri  
 `_E`  
 `_Except`  
 `_ExceptionPtr`  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="ctor"></a> task_completion_event 

 Costruisce un oggetto `task_completion_event`.  
  
```
task_completion_event();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
