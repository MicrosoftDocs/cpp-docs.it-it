---
title: Classe simple_partitioner | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- simple_partitioner
- PPL/concurrency::simple_partitioner
- PPL/concurrency::simple_partitioner::simple_partitioner
dev_langs: C++
helpviewer_keywords: simple_partitioner class
ms.assetid: d7e997af-54d1-43f5-abe0-def72df6edb3
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f1d509afd9cddd8ac119d12ce2a0cb88906e83aa
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="simplepartitioner-class"></a>Classe simple_partitioner
La classe `simple_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo in blocchi in modo che ogni blocco abbia almeno il numero di iterazioni specificate dalle dimensioni del blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```
class simple_partitioner;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[simple_partitioner](#ctor)|Costruisce un oggetto `simple_partitioner`.|  
|[~ simple_partitioner distruttore](#dtor)|Elimina un oggetto `simple_partitioner`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `simple_partitioner`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a>~ simple_partitioner 

 Elimina un oggetto `simple_partitioner`.  
  
```
~simple_partitioner();
```  
  
##  <a name="ctor"></a>simple_partitioner 

 Costruisce un oggetto `simple_partitioner`.  
  
```
explicit simple_partitioner(_Size_type _Chunk_size);
```  
  
### <a name="parameters"></a>Parametri  
 `_Chunk_size`  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi concurrency](concurrency-namespace.md)
