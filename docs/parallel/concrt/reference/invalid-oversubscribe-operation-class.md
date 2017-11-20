---
title: Classe invalid_oversubscribe_operation | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- invalid_oversubscribe_operation
- CONCRT/concurrency::invalid_oversubscribe_operation
- CONCRT/concurrency::invalid_oversubscribe_operation::invalid_oversubscribe_operation
dev_langs: C++
helpviewer_keywords: invalid_oversubscribe_operation class
ms.assetid: 0a9c5f08-d5e6-4ad0-90a9-517472b3ac28
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: bb8bb8d7031cda89dd74637638062f4cdce692b1
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="invalidoversubscribeoperation-class"></a>Classe invalid_oversubscribe_operation
Questa classe descrive un'eccezione generata quando il metodo `Context::Oversubscribe` viene chiamato con il parametro `_BeginOversubscription` impostato su `false` senza una chiamata precedente al metodo `Context::Oversubscribe` con il parametro `_BeginOversubscription` impostato su `true`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class invalid_oversubscribe_operation : public std::exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[invalid_oversubscribe_operation](#ctor)|Di overload. Costruisce un oggetto `invalid_oversubscribe_operation`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_oversubscribe_operation`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>invalid_oversubscribe_operation 

 Costruisce un oggetto `invalid_oversubscribe_operation`.  
  
```  
explicit _CRTIMP invalid_oversubscribe_operation(_In_z_ const char* _Message) throw();

 
invalid_oversubscribe_operation() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
