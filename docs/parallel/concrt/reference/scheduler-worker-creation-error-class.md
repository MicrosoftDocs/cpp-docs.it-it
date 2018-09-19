---
title: Classe scheduler_worker_creation_error | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- scheduler_worker_creation_error
- CONCRT/concurrency::scheduler_worker_creation_error
- CONCRT/concurrency::scheduler_worker_creation_error::scheduler_worker_creation_error
dev_langs:
- C++
helpviewer_keywords:
- scheduler_worker_creation_error class
ms.assetid: 4aec1c3e-c32a-41b2-899d-2d898f23b3c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9c81b62cee3a8c26b0d4ace61b8104f6eaee9db6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46114384"
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
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a> scheduler_worker_creation_error 

 Costruisce un oggetto `scheduler_worker_creation_error`.  
  
```
scheduler_worker_creation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_worker_creation_error(
    HRESULT _Hresult) throw();
```  
  
### <a name="parameters"></a>Parametri  
*Messaggio*<br/>
Messaggio descrittivo dell'errore.  
  
*_Hresult*<br/>
Il `HRESULT` valore dell'errore che ha causato l'eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
