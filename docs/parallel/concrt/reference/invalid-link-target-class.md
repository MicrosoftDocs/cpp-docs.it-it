---
title: Classe invalid_link_target | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- invalid_link_target
- CONCRT/concurrency::invalid_link_target
- CONCRT/concurrency::invalid_link_target::invalid_link_target
dev_langs:
- C++
helpviewer_keywords:
- invalid_link_target class
ms.assetid: 33b64885-34d8-4d4e-a893-02e9f19c958e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2120f274dd783da00a43106338476c43cc0a9dad
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46021746"
---
# <a name="invalidlinktarget-class"></a>Classe invalid_link_target
Questa classe descrive un'eccezione generata quando il metodo `link_target` di un blocco della messaggistica viene chiamato e tale blocco non è in grado di collegarsi alla destinazione. Può essere il risultato del superamento del numero di collegamenti consentito dal blocco della messaggistica o del tentativo di collegare una destinazione specifica due volte alla stessa origine.  
  
## <a name="syntax"></a>Sintassi  
  
```
class invalid_link_target : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[invalid_link_target](#ctor)|Di overload. Costruisce un oggetto `invalid_link_target`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_link_target`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a> invalid_link_target 

 Costruisce un oggetto `invalid_link_target`.  
  
```
explicit _CRTIMP invalid_link_target(_In_z_ const char* _Message) throw();

invalid_link_target() throw();
```  
  
### <a name="parameters"></a>Parametri  
*Messaggio*<br/>
Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)



