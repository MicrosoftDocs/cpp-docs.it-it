---
title: Classe improper_lock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- improper_lock
- CONCRT/concurrency::improper_lock
- CONCRT/concurrency::improper_lock::improper_lock
dev_langs: C++
helpviewer_keywords: improper_lock class
ms.assetid: 8f494942-7748-4a2a-8de2-23414bfe6346
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 876023cbc559364a51f7c0774b7b5d04a11a65d0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="improperlock-class"></a>Classe improper_lock
Questa classe descrive un'eccezione generata quando un blocco viene acquisito in modo errato.  
  
## <a name="syntax"></a>Sintassi  
  
```
class improper_lock : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[improper_lock](#ctor)|Di overload. Costruisce un oggetto `improper_lock exception`.|  
  
## <a name="remarks"></a>Note  
 In genere, questa eccezione viene generata quando viene effettuato un tentativo di acquisire un blocco di non rientrante in modo ricorsivo nello stesso contesto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `improper_lock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>improper_lock 

 Costruisce un oggetto `improper_lock exception`.  
  
```
explicit _CRTIMP improper_lock(_In_z_ const char* _Message) throw();

improper_lock() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe critical_section](critical-section-class.md)   
 [Classe reader_writer_lock](reader-writer-lock-class.md)
