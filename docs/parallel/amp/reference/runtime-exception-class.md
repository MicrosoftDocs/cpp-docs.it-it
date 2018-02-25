---
title: Classe runtime_exception | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 678f0a93577a6e30afbc5e0c6d83aca6b6a7bedc
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="runtimeexception-class"></a>runtime_exception (classe)
Il tipo di base per le eccezioni nella libreria C++ Accelerated Massive Parallelism (AMP).  
  
### <a name="syntax"></a>Sintassi  
  
```  
class runtime_exception : public std::exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore runtime_exception](#ctor)|Inizializza una nuova istanza della classe `runtime_exception`.|  
|[~ runtime_exception distruttore](#dtor)|Elimina definitivamente il `runtime_exception` oggetto.|  
  
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

## <a name="runtime_exception__ctor">Costruttore runtime_exception</a>  
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
 Valore HRESULT di errore che ha causato l'eccezione.  
  
 `_Other`  
 Il `runtime_exception` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `runtime_exception`.  

## <a name="dtor">~ runtime_exception distruttore</a>  
Elimina definitivamente l'oggetto.  
  
### <a name="syntax"></a>Sintassi  
  
```  
virtual ~runtime_exception() throw();  
```  
  
## <a name="runtime_exception__get_error_code"></a>  get_error_code   
Restituisce il codice di errore che ha causato l'eccezione.  
  
### <a name="syntax"></a>Sintassi  
  
```  
HRESULT get_error_code() const throw();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore HRESULT di errore che ha causato l'eccezione.  
  
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
