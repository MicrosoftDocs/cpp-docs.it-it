---
title: Classe context_unblock_unbalanced | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::context_unblock_unbalanced
dev_langs:
- C++
helpviewer_keywords:
- context_unblock_unbalanced class
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
caps.latest.revision: 20
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
ms.openlocfilehash: 7341ff5d10b7f7752c49f18ea9b810824e347b1c
ms.lasthandoff: 02/24/2017

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
|[Costruttore context_unblock_unbalanced](#ctor)|Di overload. Costruisce un oggetto `context_unblock_unbalanced`.|  
  
## <a name="remarks"></a>Note  
 Le chiamate al `Block` e `Unblock` metodi di un `Context` oggetto deve sempre essere abbinato correttamente. Il Runtime di concorrenza consente le operazioni che in qualsiasi ordine. Ad esempio, una chiamata a `Block` può essere seguita da una chiamata a `Unblock` o viceversa. Questa eccezione verrebbe generata se, ad esempio, due chiamate al `Unblock` metodo sono state apportate in una riga, in un `Context` oggetto che non è stato bloccato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `context_unblock_unbalanced`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namectora-contextunblockunbalanced"></a><a name="ctor"></a>context_unblock_unbalanced 

 Costruisce un oggetto `context_unblock_unbalanced`.  
  
```  
explicit _CRTIMP context_unblock_unbalanced(_In_z_ const char* _Message) throw();

 
context_unblock_unbalanced() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

