---
title: Classe invalid_multiple_scheduling | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling::invalid_multiple_scheduling
dev_langs:
- C++
helpviewer_keywords:
- invalid_multiple_scheduling class
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 73f693c884542b93431a77e914d210f76721c5a0
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686162"
---
# <a name="invalidmultiplescheduling-class"></a>Classe invalid_multiple_scheduling
Questa classe descrive un'eccezione generata quando un oggetto `task_handle` è pianificato più volte usando il metodo `run` di un oggetto `task_group` o `structured_task_group` senza una chiamata intermedia a uno dei metodi `wait` o `run_and_wait`.  
  
## <a name="syntax"></a>Sintassi  
  
```
class invalid_multiple_scheduling : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[invalid_multiple_scheduling](#ctor)|Di overload. Costruisce un oggetto `invalid_multiple_scheduling`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_multiple_scheduling`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a> invalid_multiple_scheduling 

 Costruisce un oggetto `invalid_multiple_scheduling`.  
  
```
explicit _CRTIMP invalid_multiple_scheduling(_In_z_ const char* _Message) throw();

invalid_multiple_scheduling() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe task_handle](task-handle-class.md)   
 [Classe task_group](task-group-class.md)   
 [run](task-group-class.md)   
 [attesa](task-group-class.md)   
 [run_and_wait](task-group-class.md)   
 [Classe structured_task_group](structured-task-group-class.md)
