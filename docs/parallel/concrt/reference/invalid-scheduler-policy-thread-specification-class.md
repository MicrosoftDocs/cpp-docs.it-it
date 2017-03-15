---
title: Classe invalid_scheduler_policy_thread_specification | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::invalid_scheduler_policy_thread_specification
dev_langs:
- C++
helpviewer_keywords:
- invalid_scheduler_policy_thread_specification class
ms.assetid: 2d0fafb2-18f8-4284-8040-3db640d33303
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: c09719412e38a4f056eabc39a66a684caa0659d4
ms.lasthandoff: 02/24/2017

---
# <a name="invalidschedulerpolicythreadspecification-class"></a>Classe invalid_scheduler_policy_thread_specification
Questa classe descrive un'eccezione generata quando si tenta di impostare i limiti di concorrenza di un oggetto `SchedulerPolicy` in modo che il valore della chiave `MinConcurrency` sia inferiore a quella della chiave `MaxConcurrency`.  
  
## <a name="syntax"></a>Sintassi  
  
```
class invalid_scheduler_policy_thread_specification : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[costruttore invalid_scheduler_policy_thread_specification] (non valido-utilità di pianificazione-criteri-valore-class.md #ctor|Di overload. Costruisce un oggetto `invalid_scheduler_policy_value`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_thread_specification`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
##  <a name="a-namectora-invalidschedulerpolicythreadspecification"></a><a name="ctor"></a>invalid_scheduler_policy_thread_specification 

 Costruisce un oggetto `invalid_scheduler_policy_value`.  
  
```
explicit _CRTIMP invalid_scheduler_policy_thread_specification(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_thread_specification() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  

## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [SchedulerPolicy (classe)](schedulerpolicy-class.md)

