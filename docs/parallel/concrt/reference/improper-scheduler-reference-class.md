---
title: Classe improper_scheduler_reference | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::improper_scheduler_reference
dev_langs:
- C++
helpviewer_keywords:
- improper_scheduler_reference class
ms.assetid: 434a7512-7796-4255-92a7-f3bf71c6a7a7
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
ms.openlocfilehash: fef830b502f43473bc683fdcb246be526bfb6db8
ms.lasthandoff: 02/24/2017

---
# <a name="improperschedulerreference-class"></a>Classe improper_scheduler_reference
Questa classe descrive un'eccezione generata quando il metodo `Reference` viene chiamato su un oggetto `Scheduler` che si sta chiudendo, da un contesto che non fa parte dell'unità di pianificazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
class improper_scheduler_reference : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore improper_scheduler_reference](#ctor)|Di overload. Costruisce un oggetto `improper_scheduler_reference`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `improper_scheduler_reference`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namectora-improperschedulerreference"></a><a name="ctor"></a>improper_scheduler_reference 

 Costruisce un oggetto `improper_scheduler_reference`.  
  
```
explicit _CRTIMP improper_scheduler_reference(_In_z_ const char* _Message) throw();

improper_scheduler_reference() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Scheduler (classe)](scheduler-class.md)

