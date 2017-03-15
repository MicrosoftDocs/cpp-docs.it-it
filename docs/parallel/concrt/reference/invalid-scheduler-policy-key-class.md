---
title: Classe invalid_scheduler_policy_key | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::invalid_scheduler_policy_key
dev_langs:
- C++
helpviewer_keywords:
- invalid_scheduler_policy_key class
ms.assetid: 6a7c42fe-9bc4-4a02-bebb-99fe9ef9817d
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
ms.openlocfilehash: ba23cb216581862ed110cace9b7fff9024df6899
ms.lasthandoff: 02/24/2017

---
# <a name="invalidschedulerpolicykey-class"></a>Classe invalid_scheduler_policy_key
Questa classe descrive un'eccezione generata quando una chiave non valida o sconosciuta viene passata a un costruttore dell'oggetto `SchedulerPolicy` o il metodo `SetPolicyValue` di un oggetto `SchedulerPolicy` viene passato a una chiave che deve essere modificata mediante altri mezzi come, ad esempio, il metodo `SetConcurrencyLimits`.  
  
## <a name="syntax"></a>Sintassi  
  
```
class invalid_scheduler_policy_key : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid_scheduler_policy_key](#ctor)|Di overload. Costruisce un oggetto `invalid_scheduler_policy_key`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_key`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namectora-invalidschedulerpolicykey"></a><a name="ctor"></a>invalid_scheduler_policy_key 

 Costruisce un oggetto `invalid_scheduler_policy_key`.  
  
```
explicit _CRTIMP invalid_scheduler_policy_key(_In_z_ const char* _Message) throw();

invalid_scheduler_policy_key() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [SchedulerPolicy (classe)](schedulerpolicy-class.md)

