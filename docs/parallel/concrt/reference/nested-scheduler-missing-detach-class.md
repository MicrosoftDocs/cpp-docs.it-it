---
title: Classe nested_scheduler_missing_detach | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- nested_scheduler_missing_detach
- CONCRT/concurrency::nested_scheduler_missing_detach
- CONCRT/concurrency::nested_scheduler_missing_detach::nested_scheduler_missing_detach
dev_langs:
- C++
helpviewer_keywords:
- nested_scheduler_missing_detach class
ms.assetid: 65d3f277-6d43-4160-97ef-caf8b26c1641
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
ms.openlocfilehash: 7ab8dc3761c6f11529b70ec4d71bbaebdfea0493
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="nestedschedulermissingdetach-class"></a>Classe nested_scheduler_missing_detach
Questa classe descrive un'eccezione generata quando il runtime di concorrenza rileva che non è stata eseguita la chiamata al metodo `CurrentScheduler::Detach` su un contesto allegato a una seconda utilità di pianificazione mediante il metodo `Attach` dell'oggetto `Scheduler`.  
  
## <a name="syntax"></a>Sintassi  
  
```
class nested_scheduler_missing_detach : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[nested_scheduler_missing_detach](#ctor)|Di overload. Costruisce un oggetto `nested_scheduler_missing_detach`.|  
  
## <a name="remarks"></a>Note  
 Questa eccezione viene generata solo quando si annida un'utilità di pianificazione in un'altra chiamando il metodo `Attach` di un oggetto `Scheduler` su un contesto che è già di proprietà o è collegato a un'altra utilità di pianificazione. Il Runtime di concorrenza genera questa eccezione in base alle esigenze quando in grado di rilevare lo scenario come ausilio per individuare il problema. Non tutte le istanze di trascurare di chiamare il `CurrentScheduler::Detach` metodo viene sicuramente generano questa eccezione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `nested_scheduler_missing_detach`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>nested_scheduler_missing_detach 

 Costruisce un oggetto `nested_scheduler_missing_detach`.  
  
```
explicit _CRTIMP nested_scheduler_missing_detach(_In_z_ const char* _Message) throw();

nested_scheduler_missing_detach() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe Scheduler](scheduler-class.md)

