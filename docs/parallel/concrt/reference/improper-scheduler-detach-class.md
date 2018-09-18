---
title: Classe improper_scheduler_detach | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- improper_scheduler_detach
- CONCRT/concurrency::improper_scheduler_detach
- CONCRT/concurrency::improper_scheduler_detach::improper_scheduler_detach
dev_langs:
- C++
helpviewer_keywords:
- improper_scheduler_detach class
ms.assetid: 30132102-c900-4951-a470-b63b4e3aa2d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dd492f28f2aba76e9d6e6d3b381d4d0de4c30202
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46059200"
---
# <a name="improperschedulerdetach-class"></a>Classe improper_scheduler_detach
Questa classe descrive un'eccezione generata quando il metodo `CurrentScheduler::Detach` viene chiamato su un contesto che non è stato allegato ad alcuna unità di pianificazione tramite il metodo `Attach` di un oggetto `Scheduler`.  
  
## <a name="syntax"></a>Sintassi  
  
```
class improper_scheduler_detach : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[improper_scheduler_detach](#ctor)|Di overload. Costruisce un oggetto `improper_scheduler_detach`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `improper_scheduler_detach`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a> improper_scheduler_detach 

 Costruisce un oggetto `improper_scheduler_detach`.  
  
```
explicit _CRTIMP improper_scheduler_detach(_In_z_ const char* _Message) throw();

improper_scheduler_detach() throw();
```  
  
### <a name="parameters"></a>Parametri  
*Messaggio*<br/>
Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe Scheduler](scheduler-class.md)
