---
title: Struttura scheduler_interface | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface::scheduler_interface::schedule
dev_langs:
- C++
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b06b270c4971239b91fa81b9ad35d8fef52b7e76
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33696305"
---
# <a name="schedulerinterface-structure"></a>Struttura scheduler_interface
Interfaccia dell'utilità di pianificazione  
  
## <a name="syntax"></a>Sintassi  
  
```
struct __declspec(novtable) scheduler_interface;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[scheduler_interface::schedule](#schedule)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `scheduler_interface`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** pplinterface  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="schedule"></a>  Metodo scheduler_interface:: Schedule  
  
```
virtual void schedule(
    TaskProc_t,
 void*) = 0;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
