---
title: Classe scheduler_resource_allocation_error | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- scheduler_resource_allocation_error
- CONCRT/concurrency::scheduler_resource_allocation_error
- CONCRT/concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error
- CONCRT/concurrency::scheduler_resource_allocation_error::get_error_code
dev_langs:
- C++
helpviewer_keywords:
- scheduler_resource_allocation_error class
ms.assetid: 8b40449a-7abb-4d0a-bb85-c0e9a495ae97
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 84f32bb6192057c9d5872147cc8ef0bd2c13b349
ms.lasthandoff: 03/17/2017

---
# <a name="schedulerresourceallocationerror-class"></a>Classe scheduler_resource_allocation_error
Questa classe descrive un'eccezione generata a causa dell'errore per acquisire una risorsa critica nel runtime di concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
class scheduler_resource_allocation_error : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[scheduler_resource_allocation_error](#ctor)|Di overload. Costruisce un oggetto `scheduler_resource_allocation_error`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_error_code](#get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|  
  
## <a name="remarks"></a>Note  
 Questa eccezione viene generata in genere quando una chiamata al sistema operativo all'interno del Runtime di concorrenza non riesce. Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito in un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo `get_error_code`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `scheduler_resource_allocation_error`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="get_error_code"></a>get_error_code 

 Restituisce il codice di errore che ha causato l'eccezione.  
  
```
HRESULT get_error_code() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `HRESULT` valore di errore che ha causato l'eccezione.  
  
##  <a name="ctor"></a>scheduler_resource_allocation_error 

 Costruisce un oggetto `scheduler_resource_allocation_error`.  
  
```
scheduler_resource_allocation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_resource_allocation_error(
    HRESULT _Hresult) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
 `_Hresult`  
 Il `HRESULT` valore di errore che ha causato l'eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

