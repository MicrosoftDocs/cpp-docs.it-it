---
title: Classe static_partitioner | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- static_partitioner
- PPL/concurrency::static_partitioner
- PPL/concurrency::static_partitioner::static_partitioner
dev_langs:
- C++
helpviewer_keywords:
- static_partitioner class
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a15310be9a879a2dbcb117a987e56571e953f825
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686022"
---
# <a name="staticpartitioner-class"></a>Classe static_partitioner
La classe `static_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo nello stesso numero di blocchi delle unità di lavoro disponibili all'utilità di pianificazione sottostante.  
  
## <a name="syntax"></a>Sintassi  
  
```
class static_partitioner;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[static_partitioner](#ctor)|Costruisce un oggetto `static_partitioner`.|  
|[~ static_partitioner distruttore](#dtor)|Elimina un oggetto `static_partitioner`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `static_partitioner`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a> ~static_partitioner 

 Elimina un oggetto `static_partitioner`.  
  
```
~static_partitioner();
```  
  
##  <a name="ctor"></a> static_partitioner 

 Costruisce un oggetto `static_partitioner`.  
  
```
static_partitioner();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
