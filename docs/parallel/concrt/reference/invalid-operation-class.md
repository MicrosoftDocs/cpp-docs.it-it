---
title: Classe invalid_operation | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- invalid_operation
- CONCRT/concurrency::invalid_operation
- CONCRT/concurrency::invalid_operation::invalid_operation
dev_langs:
- C++
helpviewer_keywords:
- invalid_operation class
ms.assetid: 26ba07dc-fcdf-44cb-b748-a31d35205b52
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 85821bbbe62fe5da93165065cb6f17ae4e938f4e
ms.contentlocale: it-it
ms.lasthandoff: 03/17/2017

---
# <a name="invalidoperation-class"></a>Classe invalid_operation
Questa classe descrive un'eccezione generata quando viene eseguita un'operazione non valida non più descritta in maniera accurata da un altro tipo di eccezione generata dal runtime di concorrenza.  
  
## <a name="syntax"></a>Sintassi  
  
```
class invalid_operation : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[invalid_operation](#ctor)|Di overload. Costruisce un oggetto `invalid_operation`.|  
  
## <a name="remarks"></a>Note  
 Nei vari metodi che generano tale eccezione vengono di solito documentate le circostanze nelle quali verrà generata.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_operation`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>invalid_operation 

 Costruisce un oggetto `invalid_operation`.  
  
```
explicit _CRTIMP invalid_operation(_In_z_ const char* _Message) throw();

invalid_operation() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

