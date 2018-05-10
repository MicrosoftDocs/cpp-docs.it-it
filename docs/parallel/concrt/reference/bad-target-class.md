---
title: Classe bad_target | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- bad_target
- CONCRT/concurrency::bad_target
- CONCRT/concurrency::bad_target::bad_target
dev_langs:
- C++
helpviewer_keywords:
- bad_target class
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: be10e5e4105dd16a68ad2854538d6181e90bfbe9
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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
  
##  <a name="ctor"></a> bad_target 

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



