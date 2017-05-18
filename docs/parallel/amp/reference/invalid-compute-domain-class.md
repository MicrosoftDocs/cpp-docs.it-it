---
title: Classe invalid_compute_domain | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- invalid_compute_domain
- AMPRT/invalid_compute_domain
- AMPRT/Concurrency::invalid_compute_domain::invalid_compute_domain
dev_langs:
- C++
helpviewer_keywords:
- invalid_compute_domain class
ms.assetid: ac7a7166-8bdb-4db1-8caf-ea129ab5117e
caps.latest.revision: 12
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: e37012f62a40649876d043c3a0e89a1655c40455
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="invalidcomputedomain-class"></a>Classe invalid_compute_domain
L'eccezione generata quando il runtime non è possibile avviare un kernel tramite il dominio di calcolo specificato il [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each) sito di chiamata.  

  
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
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  

## <a name="ctor"></a>invalid_compute_domain 

Inizializza una nuova istanza della classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
explicit invalid_compute_domain(  
    const char * _Message ) throw();  
  
invalid_compute_domain() throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Descrizione dell'errore.  
  
### <a name="return-value"></a>Valore restituito  
 Un'istanza di `invalid_compute_domain` (classe)  
    
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)

