---
title: Classe bad_target | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- bad_target
- CONCRT/concurrency::bad_target
- CONCRT/concurrency::bad_target::bad_target
dev_langs: C++
helpviewer_keywords: bad_target class
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 4eb4f5158b3f8178bf34d5e5a27a8c28336b8946
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="badtarget-class"></a>Classe bad_target
Questa classe descrive un'eccezione generata quando un blocco della messaggistica riceve un puntatore a una destinazione non valida per l'operazione eseguita.  
  
## <a name="syntax"></a>Sintassi  
  
```
class bad_target : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[bad_target](#ctor)|Di overload. Costruisce un oggetto `bad_target`.|  
  
## <a name="remarks"></a>Note  
 In genere, questa eccezione viene generata per motivi, ad esempio una destinazione, il tentativo di utilizzo di un messaggio che è riservato per una destinazione diversa o rilascia una prenotazione che non mantiene.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `bad_target`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>bad_target 

 Costruisce un oggetto `bad_target`.  
  
```
explicit _CRTIMP bad_target(_In_z_ const char* _Message) throw();

bad_target() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)



