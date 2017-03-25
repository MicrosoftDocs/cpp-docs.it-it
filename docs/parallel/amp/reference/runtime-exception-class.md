---
title: Classe runtime_exception | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- runtime_exception
- AMPRT/runtime_exception
- AMPRT/Concurrency::runtime_exception
- AMPRT/Concurrency::runtime_exception::get_error_code
dev_langs:
- C++
helpviewer_keywords:
- runtime_exception class
ms.assetid: 8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 399d2531c06285012df12d703b4cda6e18469c38
ms.lasthandoff: 03/17/2017

---
# <a name="runtimeexception-class"></a>Classe runtime_exception
Tipo di base per le eccezioni nella libreria C++ Accelerated Massive Parallelism (AMP).  
  
### <a name="syntax"></a>Sintassi  
  
```  
class runtime_exception : public std::exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore runtime_exception](#ctor)|Inizializza una nuova istanza della classe `runtime_exception`.|  
|[~ runtime_exception distruttore](#dtor)|Elimina il `runtime_exception` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[get_error_code](#runtime_exception__get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|  

  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `runtime_exception` specificato in questo oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="runtime_exception__ctor"></a>Costruttore runtime_exception  
Inizializza una nuova istanza della classe.  
  
### <a name="syntax"></a>Sintassi  
  
```  
runtime_exception(  
    const char * _Message,  
    HRESULT _Hresult ) throw();  
  
explicit runtime_exception(  
    HRESULT _Hresult ) throw();  
  
runtime_exception(  
    const runtime_exception & _Other ) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Descrizione dell'errore che ha causato l'eccezione.  
  
 `_Hresult`  
 Il valore HRESULT dell'errore che ha causato l'eccezione.  
  
 `_Other`  
 Il `runtime_exception` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `runtime_exception`.  

## <a name="dtor"></a>~ runtime_exception distruttore  
Elimina l'oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual ~runtime_exception() throw();  
```  
  
## <a name="runtime_exception__get_error_code"></a>get_error_code   
Restituisce il codice di errore che ha causato l'eccezione.  
  
### <a name="syntax"></a>Sintassi  
  
```  
HRESULT get_error_code() const throw();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore HRESULT dell'errore che ha causato l'eccezione.  
  
## <a name="runtime_exception__operator_eq"></a>  operator=   
  Copia il contenuto dell'oggetto specificato `runtime_exception` specificato in questo oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
runtime_exception & operator= (    const runtime_exception & _Other ) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `runtime_exception` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `runtime_exception` oggetto.  
  

  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

