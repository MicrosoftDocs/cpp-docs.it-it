---
title: Classe invalid_operation | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- invalid_operation
- CONCRT/concurrency::invalid_operation
- CONCRT/concurrency::invalid_operation::invalid_operation
dev_langs: C++
helpviewer_keywords: invalid_operation class
ms.assetid: 26ba07dc-fcdf-44cb-b748-a31d35205b52
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 67bd4819f3f1820ae9a13cc07fc2db692a362433
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** concrt. h  
  
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
