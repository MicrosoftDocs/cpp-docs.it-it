---
title: Classe invalid_multiple_scheduling | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling
- CONCRT/concurrency::invalid_multiple_scheduling::invalid_multiple_scheduling
dev_langs:
- C++
helpviewer_keywords:
- invalid_multiple_scheduling class
ms.assetid: e9a47cb7-a778-4df7-92b0-3752119fd4c7
caps.latest.revision: 19
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
ms.openlocfilehash: 82f1046173ba1f2eebfc74e1121b01ba0ed46b04
ms.lasthandoff: 03/17/2017

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
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>invalid_multiple_scheduling 

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
 [Correre](task-group-class.md)   
 [attesa](task-group-class.md)   
 [run_and_wait](task-group-class.md)   
 [Classe structured_task_group](structured-task-group-class.md)

