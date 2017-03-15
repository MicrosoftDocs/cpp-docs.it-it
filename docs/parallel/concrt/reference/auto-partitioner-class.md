---
title: Classe auto_partitioner | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ppl/concurrency::auto_partitioner
dev_langs:
- C++
helpviewer_keywords:
- auto_partitioner class
ms.assetid: 7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e
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
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: 8092a0d6c4fe6053a3bb7e80e659ab6a7628664a
ms.lasthandoff: 02/24/2017

---
# <a name="autopartitioner-class"></a>Classe auto_partitioner
La classe `auto_partitioner` rappresenta il metodo predefinito `parallel_for`, `parallel_for_each` e `parallel_transform` usato per partizionare l'intervallo su cui eseguono l'iterazione. Questo metodo di partizionamento dell'intervallo usa l'acquisizione dell'intervallo per il bilanciamento del carico nonché l'annullamento per iterazione.  
  
## <a name="syntax"></a>Sintassi  
  
```
class auto_partitioner;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore auto_partitioner](#ctor)|Costruisce un oggetto `auto_partitioner`.|  
|[~ auto_partitioner distruttore](#dtor)|Elimina un oggetto `auto_partitioner`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `auto_partitioner`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** PPL  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namedtora-autopartitioner"></a><a name="dtor"></a>~ auto_partitioner 

 Elimina un oggetto `auto_partitioner`.  
  
```
~auto_partitioner();
```  
  
##  <a name="a-namectora-autopartitioner"></a><a name="ctor"></a>auto_partitioner 

 Costruisce un oggetto `auto_partitioner`.  
  
```
auto_partitioner();
```  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)

