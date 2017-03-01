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
- concrt/concurrency::scheduler_resource_allocation_error
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 52233a99e1d1a715fc7d52599ffeff18a3c2c34b
ms.lasthandoff: 02/24/2017

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
|[Costruttore scheduler_resource_allocation_error](#ctor)|Di overload. Costruisce un oggetto `scheduler_resource_allocation_error`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_error_code (metodo)](#get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|  
  
## <a name="remarks"></a>Note  
 Questa eccezione viene generata in genere quando una chiamata al sistema operativo all'interno del Runtime di concorrenza non riesce. Il codice di errore generalmente restituito da una chiamata al metodo Win32 `GetLastError` viene convertito in un valore di tipo `HRESULT` e può essere recuperato utilizzando il metodo `get_error_code`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `scheduler_resource_allocation_error`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namegeterrorcodea-geterrorcode"></a><a name="get_error_code"></a>get_error_code 

 Restituisce il codice di errore che ha causato l'eccezione.  
  
```
HRESULT get_error_code() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `HRESULT` valore di errore che ha causato l'eccezione.  
  
##  <a name="a-namectora-schedulerresourceallocationerror"></a><a name="ctor"></a>scheduler_resource_allocation_error 

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
 [concorrenza Namespace](concurrency-namespace.md)

