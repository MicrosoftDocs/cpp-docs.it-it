---
title: Classe context_unblock_unbalanced | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced
- CONCRT/concurrency::context_unblock_unbalanced::context_unblock_unbalanced
dev_langs: C++
helpviewer_keywords: context_unblock_unbalanced class
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 45121b3dba14e5672333debf364f5aea2e3e3cd5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="contextunblockunbalanced-class"></a>Classe context_unblock_unbalanced
Questa classe descrive un'eccezione generata quando le chiamate ai metodi `Block` e `Unblock` di un oggetto `Context` non sono abbinate correttamente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class context_unblock_unbalanced : public std::exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[context_unblock_unbalanced](#ctor)|Di overload. Costruisce un oggetto `context_unblock_unbalanced`.|  
  
## <a name="remarks"></a>Note  
 Le chiamate al `Block` e `Unblock` metodi di un `Context` oggetto deve sempre essere abbinato correttamente. Il Runtime di concorrenza consente le operazioni a verificarsi in qualsiasi ordine. Ad esempio, una chiamata a `Block` può essere seguita da una chiamata a `Unblock` o viceversa. Verrebbe generata questa eccezione se, ad esempio, due chiamate al `Unblock` metodo sono state apportate in una riga, in un `Context` oggetto che non è stato bloccato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `context_unblock_unbalanced`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>context_unblock_unbalanced 

 Costruisce un oggetto `context_unblock_unbalanced`.  
  
```  
explicit _CRTIMP context_unblock_unbalanced(_In_z_ const char* _Message) throw();

 
context_unblock_unbalanced() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
