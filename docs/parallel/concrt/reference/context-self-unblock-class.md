---
title: Classe context_self_unblock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- context_self_unblock
- CONCRT/concurrency::context_self_unblock
- CONCRT/concurrency::context_self_unblock::context_self_unblock
dev_langs: C++
helpviewer_keywords: context_self_unblock class
ms.assetid: 9601cd28-4f40-4c2e-89ab-747068956331
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a5e0bca06b97d6c36313bd54fed5c96df2e0219f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="contextselfunblock-class"></a>Classe context_self_unblock
Questa classe descrive un'eccezione generata quando il metodo `Unblock` di un oggetto `Context` viene chiamato dallo stesso contesto. Potrebbe indicare un tentativo da parte di un contesto specificato di sbloccarsi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class context_self_unblock : public std::exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[context_self_unblock](#ctor)|Di overload. Costruisce un oggetto `context_self_unblock`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `context_self_unblock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>context_self_unblock 

 Costruisce un oggetto `context_self_unblock`.  
  
```  
explicit _CRTIMP context_self_unblock(_In_z_ const char* _Message) throw();

 
context_self_unblock() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
