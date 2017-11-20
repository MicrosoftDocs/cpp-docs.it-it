---
title: Struttura scheduler_interface | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface::scheduler_interface::schedule
dev_langs: C++
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 99d7db566ab9073b48ba445a407420556e480d9f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[scheduler_interface:: Schedule](#schedule)||  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `scheduler_interface`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** pplinterface  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="schedule"></a>Metodo scheduler_interface:: Schedule  
  
```
virtual void schedule(
    TaskProc_t,
 void*) = 0;
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
