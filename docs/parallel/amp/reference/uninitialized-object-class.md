---
title: uninitialized_object (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- uninitialized_object
- AMPRT/uninitialized_object
- AMPRT/Concurrency::uninitialized_object
dev_langs:
- C++
helpviewer_keywords:
- uninitialized_object class
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 821f3c25d195a2c92ac04fdf5f9e5a59b493c257
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46113838"
---
# <a name="uninitializedobject-class"></a>uninitialized_object (classe)
Eccezione generata quando viene utilizzato un oggetto non inizializzato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class uninitialized_object : public runtime_exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[uninitialized_object, costruttore](#ctor)|Inizializza una nuova istanza della classe `uninitialized_object`.|  

  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `uninitialized_object`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt. h  
  
 **Spazio dei nomi:** Concurrency  
## <a name="uninitialized_object__ctor"></a> unsupported_feature 

Costruisce una nuova istanza dell'eccezione unsupported_feature.  
  
### <a name="syntax"></a>Sintassi  
  
```  
explicit unsupported_feature(  
    const char * _Message ) throw();  
  
unsupported_feature() throw();  
```  
  
### <a name="parameters"></a>Parametri  
*Messaggio*<br/>
Descrizione dell'errore.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `unsupported_feature`. 

## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
