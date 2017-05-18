---
title: Classe invalid_scheduler_policy_thread_specification | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: d9b49f65d8b862a7b85cdf3e09137f326fa8a1fa
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

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
|[invalid_scheduler_policy_thread_specification] (non valido-utilità di pianificazione-criteri-valore-class.md #ctor|Di overload. Costruisce un oggetto `invalid_scheduler_policy_value`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_thread_specification`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
##  <a name="ctor"></a>invalid_scheduler_policy_thread_specification 

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
 [Classe SchedulerPolicy](schedulerpolicy-class.md)

