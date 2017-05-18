---
title: Classe invalid_scheduler_policy_value | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::invalid_scheduler_policy_value
dev_langs:
- C++
helpviewer_keywords:
- invalid_scheduler_policy_value class
ms.assetid: 8c533e3f-2774-4192-8616-b2313b859bf7
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
ms.openlocfilehash: 85396192c7384cbe7379b675f4a38e5deb322235
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="invalidschedulerpolicyvalue-class"></a>Classe invalid_scheduler_policy_value
Questa classe descrive un'eccezione generata quando una chiave dei criteri di un oggetto `SchedulerPolicy` viene impostata su un valore non valido per tale chiave.  
  
## <a name="syntax"></a>Sintassi  
  
```
class invalid_scheduler_policy_value : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[invalid_scheduler_policy_value] (invalid-scheduler-policy-thread-specification-class.md#ctor|Di overload. Costruisce un oggetto `invalid_scheduler_policy_value`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_value`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
    
##  <a name="ctor"></a>invalid_scheduler_policy_value 

 Costruisce un oggetto `invalid_scheduler_policy_value`.  
  
```
explicit _CRTIMP invalid_scheduler_policy_value(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_value() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  

## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe SchedulerPolicy](schedulerpolicy-class.md)

