---
title: invalid_compute_domain (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-amp
ms.topic: reference
f1_keywords:
- invalid_compute_domain
- AMPRT/invalid_compute_domain
- AMPRT/Concurrency::invalid_compute_domain::invalid_compute_domain
dev_langs:
- C++
helpviewer_keywords:
- invalid_compute_domain class
ms.assetid: ac7a7166-8bdb-4db1-8caf-ea129ab5117e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: def102ecb8063f82d90d41b2b678ff22638b1f8b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116009"
---
# <a name="invalidcomputedomain-class"></a>invalid_compute_domain (classe)
L'eccezione generata quando il runtime non è possibile avviare un kernel con il dominio di calcolo specificato al [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each) sito di chiamata.  

  
## <a name="syntax"></a>Sintassi  
  
```  
class invalid_compute_domain : public runtime_exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid_compute_domain](#ctor)|Inizializza una nuova istanza della classe `invalid_compute_domain`.|  

  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `invalid_compute_domain`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt. h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="ctor"></a> invalid_compute_domain 

Inizializza una nuova istanza della classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
explicit invalid_compute_domain(  
    const char * _Message ) throw();  
  
invalid_compute_domain() throw();  
```  
  
### <a name="parameters"></a>Parametri  
*Messaggio*<br/>
Descrizione dell'errore.  
  
### <a name="return-value"></a>Valore restituito  
 Un'istanza di `invalid_compute_domain` classe  
    
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
