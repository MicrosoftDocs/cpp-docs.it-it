---
title: Classe affinity_partitioner | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- affinity_partitioner
- PPL/concurrency::affinity_partitioner
- PPL/concurrency::affinity_partitioner::affinity_partitioner
dev_langs:
- C++
helpviewer_keywords:
- affinity_partitioner class
ms.assetid: 31bf7bb1-bd01-491c-9760-d9d60edfccad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2242346bda717117e2b43ba108d86fd2a77a3b58
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="affinitypartitioner-class"></a>Classe affinity_partitioner
La classe `affinity_partitioner` è simile alla classe `static_partitioner`, ma migliora l'affinità della cache offrendo la scelta di mappare sottointervalli ai thread di lavoro. Può migliorare notevolmente le prestazioni quando un ciclo viene eseguito di nuovo sullo stesso insieme di dati e i dati si adattano nella cache. Si noti che lo stesso oggetto `affinity_partitioner` deve essere usato con le iterazioni successive di un ciclo parallelo che viene eseguito su un particolare set di dati, per trarre vantaggio dalla località dei dati.  
  
## <a name="syntax"></a>Sintassi  
  
```
class affinity_partitioner;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[affinity_partitioner](#ctor)|Costruisce un oggetto `affinity_partitioner`.|  
|[~ affinity_partitioner distruttore](#dtor)|Elimina definitivamente un `affinity_partitioner` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `affinity_partitioner`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a> ~affinity_partitioner 

 Elimina definitivamente un `affinity_partitioner` oggetto.  
  
```
~affinity_partitioner();
```  
  
##  <a name="ctor"></a> affinity_partitioner 

 Costruisce un oggetto `affinity_partitioner`.  
  
```
affinity_partitioner();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
