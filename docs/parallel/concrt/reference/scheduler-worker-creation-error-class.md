---
title: Classe scheduler_worker_creation_error | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- scheduler_worker_creation_error
- CONCRT/concurrency::scheduler_worker_creation_error
- CONCRT/concurrency::scheduler_worker_creation_error::scheduler_worker_creation_error
dev_langs:
- C++
helpviewer_keywords:
- scheduler_worker_creation_error class
ms.assetid: 4aec1c3e-c32a-41b2-899d-2d898f23b3c7
caps.latest.revision: 9
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
ms.openlocfilehash: aee9d72447aca692fa25d675bdc5f727fa5b5c15
ms.lasthandoff: 03/17/2017

---
# <a name="schedulerworkercreationerror-class"></a>Classe scheduler_worker_creation_error
Questa classe descrive un'eccezione generata a causa di un errore nella creazione di un contesto di esecuzione del lavoro nel runtime di concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
class scheduler_worker_creation_error : public scheduler_resource_allocation_error;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[scheduler_worker_creation_error](#ctor)|Di overload. Costruisce un oggetto `scheduler_worker_creation_error`.|  
  
## <a name="remarks"></a>Note  
 Questa eccezione viene generata soprattutto nel caso in cui una chiamata al sistema operativo per creare contesti di esecuzione nel runtime di concorrenza abbia esito negativo. I contesti di esecuzione sono thread tramite cui vengono eseguite attività nel runtime di concorrenza. Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito in un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo della classe base `get_error_code`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md)  
  
 `scheduler_worker_creation_error`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>scheduler_worker_creation_error 

 Costruisce un oggetto `scheduler_worker_creation_error`.  
  
```
scheduler_worker_creation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_worker_creation_error(
    HRESULT _Hresult) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
 `_Hresult`  
 Il `HRESULT` valore di errore che ha causato l'eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

