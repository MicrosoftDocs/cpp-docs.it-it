---
title: Classe improper_lock | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- concrt/concurrency::improper_lock
dev_langs:
- C++
helpviewer_keywords:
- improper_lock class
ms.assetid: 8f494942-7748-4a2a-8de2-23414bfe6346
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
ms.openlocfilehash: 5a68573b8963fed90a4346fd421ef479c35dc247
ms.lasthandoff: 02/24/2017

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
|[Costruttore improper_lock](#ctor)|Di overload. Costruisce un oggetto `improper_lock exception`.|  
  
## <a name="remarks"></a>Note  
 In genere, questa eccezione viene generata quando viene eseguito un tentativo di acquisire un blocco di non rientrante in modo ricorsivo nello stesso contesto.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `improper_lock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namectora-improperlock"></a><a name="ctor"></a>improper_lock 

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

