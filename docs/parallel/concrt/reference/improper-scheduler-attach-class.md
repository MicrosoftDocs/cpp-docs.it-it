---
title: Classe improper_scheduler_attach | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- improper_scheduler_attach
- CONCRT/concurrency::improper_scheduler_attach
- CONCRT/concurrency::improper_scheduler_attach::improper_scheduler_attach
dev_langs: C++
helpviewer_keywords: improper_scheduler_attach class
ms.assetid: 5a76da0a-091b-4748-8f62-b3a28f674f9e
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c33190f973ace4492597ddd1309297516c7415a0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="improperschedulerattach-class"></a>Classe improper_scheduler_attach
Questa classe descrive un'eccezione generata quando il metodo `Attach` viene chiamato su un oggetto `Scheduler` già allegato al contesto corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```
class improper_scheduler_attach : public std::exception;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[improper_scheduler_attach](#ctor)|Di overload. Costruisce un oggetto `improper_scheduler_attach`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `exception`  
  
 `improper_scheduler_attach`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrt. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="ctor"></a>improper_scheduler_attach 

 Costruisce un oggetto `improper_scheduler_attach`.  
  
```
explicit _CRTIMP improper_scheduler_attach(_In_z_ const char* _Message) throw();

improper_scheduler_attach() throw();
```  
  
### <a name="parameters"></a>Parametri  
 `_Message`  
 Messaggio descrittivo dell'errore.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Classe Scheduler](scheduler-class.md)
