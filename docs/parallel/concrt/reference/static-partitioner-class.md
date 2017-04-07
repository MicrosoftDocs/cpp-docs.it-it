---
title: Classe static_partitioner | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- static_partitioner
- PPL/concurrency::static_partitioner
- PPL/concurrency::static_partitioner::static_partitioner
dev_langs:
- C++
helpviewer_keywords:
- static_partitioner class
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
caps.latest.revision: 8
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
ms.sourcegitcommit: 5faef5bd1be6cc02d6614a6f6193c74167a8ff23
ms.openlocfilehash: 84cdbb30068f8dd9d2a1130e53d06d9b718b0c02
ms.lasthandoff: 03/17/2017

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
  
##  <a name="dtor"></a>~ static_partitioner 

 Elimina un oggetto `static_partitioner`.  
  
```
~static_partitioner();
```  
  
##  <a name="ctor"></a>static_partitioner 

 Costruisce un oggetto `static_partitioner`.  
  
```
static_partitioner();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)

