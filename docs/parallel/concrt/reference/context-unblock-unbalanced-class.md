---
title: "Classe context_unblock_unbalanced | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::context_unblock_unbalanced"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "context_unblock_unbalanced (classe)"
ms.assetid: a76066c8-19dd-44fa-959a-6941ec1b0d2d
caps.latest.revision: 20
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe context_unblock_unbalanced
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe descrive un'eccezione generata quando le chiamate ai metodi `Block` e `Unblock` di un oggetto `Context` non sono abbinate correttamente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class context_unblock_unbalanced : public std::exception;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore context_unblock_unbalanced:: context_unblock_unbalanced](#context_unblock_unbalanced__context_unblock_unbalanced_constructor)|Di overload. Costruisce un oggetto `context_unblock_unbalanced`.|  
  
## <a name="remarks"></a>Note  
 Le chiamate al `Block` e `Unblock` metodi di un `Context` oggetto deve sempre essere abbinato correttamente. Il Runtime di concorrenza consente le operazioni che in qualsiasi ordine. Ad esempio, una chiamata a `Block` può essere seguita da una chiamata a `Unblock` o viceversa. Questa eccezione verrebbe generata se, ad esempio, due chiamate al `Unblock` metodo sono state apportate in una riga, in un `Context` oggetto che non è stato bloccato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `context_unblock_unbalanced`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namecontextunblockunbalancedcontextunblockunbalancedconstructora-contextunblockunbalancedcontextunblockunbalanced-constructor"></a><a name="context_unblock_unbalanced__context_unblock_unbalanced_constructor"></a>  Costruttore context_unblock_unbalanced:: context_unblock_unbalanced  
 Costruisce un oggetto `context_unblock_unbalanced`.  
  
```  
explicit _CRTIMP context_unblock_unbalanced(_In_z_ const char* _Message) throw();

 
context_unblock_unbalanced() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [spazio dei nomi Concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)
