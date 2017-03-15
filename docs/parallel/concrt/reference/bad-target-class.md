---
title: Classe bad_target | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::bad_target
dev_langs:
- C++
helpviewer_keywords:
- bad_target class
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
caps.latest.revision: 19
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
ms.openlocfilehash: a22ebb69195dcea91799dc1c2e301a578dd227bc
ms.lasthandoff: 02/24/2017

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
|[Costruttore bad_target](#ctor)|Di overload. Costruisce un oggetto `bad_target`.|  
  
## <a name="remarks"></a>Note  
 Questa eccezione viene generata in genere per motivi, ad esempio una destinazione, il tentativo di utilizzo di un messaggio che è riservato per una destinazione diversa o rilasciare una prenotazione che non contiene.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `bad_target`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namectora-badtarget"></a><a name="ctor"></a>bad_target 

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




