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
- amp/Concurrency::direct3d_abort
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 1a2655ed4c8783dd5f7a3b8af2a7d6a9db88f43e
ms.lasthandoff: 02/24/2017

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
|[get_error_code (metodo)](#runtime_exception__get_error_code)|Restituisce il codice di errore che ha causato l'eccezione.|  

  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore = (operatore)](#operator_eq)|Copia il contenuto dell'oggetto specificato `runtime_exception` specificato in questo oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="a-nameruntimeexceptionctora--runtimeexception-constructor"></a><a name="runtime_exception__ctor"></a>Costruttore runtime_exception  
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

## <a name="a-namedtora--runtimeexception-destructor"></a><a name="dtor"></a>~ runtime_exception distruttore  
Elimina l'oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual ~runtime_exception() throw();  
```  
  
## <a name="a-nameruntimeexceptiongeterrorcodea--geterrorcode"></a><a name="runtime_exception__get_error_code"></a>get_error_code   
Restituisce il codice di errore che ha causato l'eccezione.  
  
### <a name="syntax"></a>Sintassi  
  
```  
HRESULT get_error_code() const throw();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore HRESULT dell'errore che ha causato l'eccezione.  
  
## <a name="a-nameruntimeexceptionoperatoreqa--operator"></a><a name="runtime_exception__operator_eq"></a>  operator=   
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
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

