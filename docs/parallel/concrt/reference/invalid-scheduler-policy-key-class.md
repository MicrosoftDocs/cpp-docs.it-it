---
title: Classe invalid_scheduler_policy_key | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- invalid_scheduler_policy_key
- CONCRT/concurrency::invalid_scheduler_policy_key
- CONCRT/concurrency::invalid_scheduler_policy_key::invalid_scheduler_policy_key
dev_langs: C++
helpviewer_keywords: invalid_scheduler_policy_key class
ms.assetid: 6a7c42fe-9bc4-4a02-bebb-99fe9ef9817d
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8de8f3a9a027a1b9ae4862d21e27a45f110047b4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[invalid_scheduler_policy_key](#ctor)|Di overload. Costruisce un oggetto `invalid_scheduler_policy_key`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_scheduler_policy_key`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>invalid_scheduler_policy_key 

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
 [Classe SchedulerPolicy](schedulerpolicy-class.md)
